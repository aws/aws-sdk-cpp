/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Secret.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/Oauth2ProviderConfigOutput.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{
  class CreateOauth2CredentialProviderResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CreateOauth2CredentialProviderResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CreateOauth2CredentialProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API CreateOauth2CredentialProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the client secret in AWS Secrets
     * Manager.</p>
     */
    inline const Secret& GetClientSecretArn() const { return m_clientSecretArn; }
    template<typename ClientSecretArnT = Secret>
    void SetClientSecretArn(ClientSecretArnT&& value) { m_clientSecretArnHasBeenSet = true; m_clientSecretArn = std::forward<ClientSecretArnT>(value); }
    template<typename ClientSecretArnT = Secret>
    CreateOauth2CredentialProviderResult& WithClientSecretArn(ClientSecretArnT&& value) { SetClientSecretArn(std::forward<ClientSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OAuth2 credential provider.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateOauth2CredentialProviderResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the OAuth2 credential provider.</p>
     */
    inline const Aws::String& GetCredentialProviderArn() const { return m_credentialProviderArn; }
    template<typename CredentialProviderArnT = Aws::String>
    void SetCredentialProviderArn(CredentialProviderArnT&& value) { m_credentialProviderArnHasBeenSet = true; m_credentialProviderArn = std::forward<CredentialProviderArnT>(value); }
    template<typename CredentialProviderArnT = Aws::String>
    CreateOauth2CredentialProviderResult& WithCredentialProviderArn(CredentialProviderArnT&& value) { SetCredentialProviderArn(std::forward<CredentialProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Callback URL to register on the OAuth2 credential provider as an allowed
     * callback URL. This URL is where the OAuth2 authorization server redirects users
     * after they complete the authorization flow.</p>
     */
    inline const Aws::String& GetCallbackUrl() const { return m_callbackUrl; }
    template<typename CallbackUrlT = Aws::String>
    void SetCallbackUrl(CallbackUrlT&& value) { m_callbackUrlHasBeenSet = true; m_callbackUrl = std::forward<CallbackUrlT>(value); }
    template<typename CallbackUrlT = Aws::String>
    CreateOauth2CredentialProviderResult& WithCallbackUrl(CallbackUrlT&& value) { SetCallbackUrl(std::forward<CallbackUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Oauth2ProviderConfigOutput& GetOauth2ProviderConfigOutput() const { return m_oauth2ProviderConfigOutput; }
    template<typename Oauth2ProviderConfigOutputT = Oauth2ProviderConfigOutput>
    void SetOauth2ProviderConfigOutput(Oauth2ProviderConfigOutputT&& value) { m_oauth2ProviderConfigOutputHasBeenSet = true; m_oauth2ProviderConfigOutput = std::forward<Oauth2ProviderConfigOutputT>(value); }
    template<typename Oauth2ProviderConfigOutputT = Oauth2ProviderConfigOutput>
    CreateOauth2CredentialProviderResult& WithOauth2ProviderConfigOutput(Oauth2ProviderConfigOutputT&& value) { SetOauth2ProviderConfigOutput(std::forward<Oauth2ProviderConfigOutputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateOauth2CredentialProviderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Secret m_clientSecretArn;
    bool m_clientSecretArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_credentialProviderArn;
    bool m_credentialProviderArnHasBeenSet = false;

    Aws::String m_callbackUrl;
    bool m_callbackUrlHasBeenSet = false;

    Oauth2ProviderConfigOutput m_oauth2ProviderConfigOutput;
    bool m_oauth2ProviderConfigOutputHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
