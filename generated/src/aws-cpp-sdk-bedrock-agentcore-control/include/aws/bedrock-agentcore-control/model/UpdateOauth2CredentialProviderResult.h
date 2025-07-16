/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Secret.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/CredentialProviderVendorType.h>
#include <aws/bedrock-agentcore-control/model/Oauth2ProviderConfigOutput.h>
#include <aws/core/utils/DateTime.h>
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
  class UpdateOauth2CredentialProviderResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API UpdateOauth2CredentialProviderResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API UpdateOauth2CredentialProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API UpdateOauth2CredentialProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the client secret in AWS Secrets
     * Manager.</p>
     */
    inline const Secret& GetClientSecretArn() const { return m_clientSecretArn; }
    template<typename ClientSecretArnT = Secret>
    void SetClientSecretArn(ClientSecretArnT&& value) { m_clientSecretArnHasBeenSet = true; m_clientSecretArn = std::forward<ClientSecretArnT>(value); }
    template<typename ClientSecretArnT = Secret>
    UpdateOauth2CredentialProviderResult& WithClientSecretArn(ClientSecretArnT&& value) { SetClientSecretArn(std::forward<ClientSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OAuth2 credential provider.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateOauth2CredentialProviderResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vendor of the OAuth2 credential provider.</p>
     */
    inline CredentialProviderVendorType GetCredentialProviderVendor() const { return m_credentialProviderVendor; }
    inline void SetCredentialProviderVendor(CredentialProviderVendorType value) { m_credentialProviderVendorHasBeenSet = true; m_credentialProviderVendor = value; }
    inline UpdateOauth2CredentialProviderResult& WithCredentialProviderVendor(CredentialProviderVendorType value) { SetCredentialProviderVendor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the OAuth2 credential provider.</p>
     */
    inline const Aws::String& GetCredentialProviderArn() const { return m_credentialProviderArn; }
    template<typename CredentialProviderArnT = Aws::String>
    void SetCredentialProviderArn(CredentialProviderArnT&& value) { m_credentialProviderArnHasBeenSet = true; m_credentialProviderArn = std::forward<CredentialProviderArnT>(value); }
    template<typename CredentialProviderArnT = Aws::String>
    UpdateOauth2CredentialProviderResult& WithCredentialProviderArn(CredentialProviderArnT&& value) { SetCredentialProviderArn(std::forward<CredentialProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration output for the OAuth2 provider.</p>
     */
    inline const Oauth2ProviderConfigOutput& GetOauth2ProviderConfigOutput() const { return m_oauth2ProviderConfigOutput; }
    template<typename Oauth2ProviderConfigOutputT = Oauth2ProviderConfigOutput>
    void SetOauth2ProviderConfigOutput(Oauth2ProviderConfigOutputT&& value) { m_oauth2ProviderConfigOutputHasBeenSet = true; m_oauth2ProviderConfigOutput = std::forward<Oauth2ProviderConfigOutputT>(value); }
    template<typename Oauth2ProviderConfigOutputT = Oauth2ProviderConfigOutput>
    UpdateOauth2CredentialProviderResult& WithOauth2ProviderConfigOutput(Oauth2ProviderConfigOutputT&& value) { SetOauth2ProviderConfigOutput(std::forward<Oauth2ProviderConfigOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the OAuth2 credential provider was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    UpdateOauth2CredentialProviderResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the OAuth2 credential provider was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    UpdateOauth2CredentialProviderResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateOauth2CredentialProviderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Secret m_clientSecretArn;
    bool m_clientSecretArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CredentialProviderVendorType m_credentialProviderVendor{CredentialProviderVendorType::NOT_SET};
    bool m_credentialProviderVendorHasBeenSet = false;

    Aws::String m_credentialProviderArn;
    bool m_credentialProviderArnHasBeenSet = false;

    Oauth2ProviderConfigOutput m_oauth2ProviderConfigOutput;
    bool m_oauth2ProviderConfigOutputHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
