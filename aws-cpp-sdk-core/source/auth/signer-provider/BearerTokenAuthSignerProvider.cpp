/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
 
#include <aws/core/auth/signer-provider/BearerTokenAuthSignerProvider.h>

#include <aws/core/auth/signer/AWSNullSigner.h>

#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>

const char BTASP_ALLOC_TAG[] = "BearerTokenAuthSignerProvider";

using namespace Aws::Auth;

BearerTokenAuthSignerProvider::BearerTokenAuthSignerProvider(const std::shared_ptr<Aws::Auth::AWSBearerTokenProviderBase> bearerTokenProvider)
{
    m_signers.emplace_back(Aws::MakeShared<Aws::Client::AWSAuthBearerSigner>(BTASP_ALLOC_TAG, bearerTokenProvider));
    m_signers.emplace_back(Aws::MakeShared<Aws::Client::AWSNullSigner>(BTASP_ALLOC_TAG));
}

//BearerTokenAuthSignerProvider::BearerTokenAuthSignerProvider(const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer)
//{
//    m_signers.emplace_back(Aws::MakeShared<Aws::Client::AWSNullSigner>(CLASS_TAG));
//    if(signer)
//    {
//        m_signers.emplace_back(signer);
//    }
//}

std::shared_ptr<Aws::Client::AWSAuthSigner> BearerTokenAuthSignerProvider::GetSigner(const Aws::String& signerName) const
{
    for(const auto& signer : m_signers)
    {
        if(signer->GetName() == signerName)
        {
            return signer;
        }
    }
    AWS_LOGSTREAM_ERROR(BTASP_ALLOC_TAG, "Request's signer: '" << signerName << "' is not found in the signer's map.");
    assert(false);
    return nullptr;
}

void BearerTokenAuthSignerProvider::AddSigner(std::shared_ptr<Aws::Client::AWSAuthSigner>& signer)
{
    assert(signer);
    m_signers.emplace_back(signer);
}
