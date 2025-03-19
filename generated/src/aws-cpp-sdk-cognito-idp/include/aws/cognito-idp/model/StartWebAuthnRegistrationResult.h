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
    AWS_COGNITOIDENTITYPROVIDER_API StartWebAuthnRegistrationResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API StartWebAuthnRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API StartWebAuthnRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information that a user can provide in their request to register with
     * their passkey provider.</p>
     */
    inline Aws::Utils::DocumentView GetCredentialCreationOptions() const { return m_credentialCreationOptions; }
    template<typename CredentialCreationOptionsT = Aws::Utils::Document>
    void SetCredentialCreationOptions(CredentialCreationOptionsT&& value) { m_credentialCreationOptionsHasBeenSet = true; m_credentialCreationOptions = std::forward<CredentialCreationOptionsT>(value); }
    template<typename CredentialCreationOptionsT = Aws::Utils::Document>
    StartWebAuthnRegistrationResult& WithCredentialCreationOptions(CredentialCreationOptionsT&& value) { SetCredentialCreationOptions(std::forward<CredentialCreationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartWebAuthnRegistrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_credentialCreationOptions;
    bool m_credentialCreationOptionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
