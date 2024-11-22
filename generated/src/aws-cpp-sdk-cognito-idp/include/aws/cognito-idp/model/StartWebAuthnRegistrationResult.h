/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{
  class StartWebAuthnRegistrationResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API StartWebAuthnRegistrationResult();
    AWS_COGNITOIDENTITYPROVIDER_API StartWebAuthnRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API StartWebAuthnRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information that a user can provide in their request to register with
     * their passkey provider.</p>
     */
    inline Aws::Utils::DocumentView GetCredentialCreationOptions() const{ return m_credentialCreationOptions; }
    inline void SetCredentialCreationOptions(const Aws::Utils::Document& value) { m_credentialCreationOptions = value; }
    inline void SetCredentialCreationOptions(Aws::Utils::Document&& value) { m_credentialCreationOptions = std::move(value); }
    inline StartWebAuthnRegistrationResult& WithCredentialCreationOptions(const Aws::Utils::Document& value) { SetCredentialCreationOptions(value); return *this;}
    inline StartWebAuthnRegistrationResult& WithCredentialCreationOptions(Aws::Utils::Document&& value) { SetCredentialCreationOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartWebAuthnRegistrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartWebAuthnRegistrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartWebAuthnRegistrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_credentialCreationOptions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
