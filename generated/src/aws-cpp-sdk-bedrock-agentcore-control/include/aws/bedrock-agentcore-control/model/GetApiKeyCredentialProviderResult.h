/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Secret.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetApiKeyCredentialProviderResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API GetApiKeyCredentialProviderResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API GetApiKeyCredentialProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API GetApiKeyCredentialProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the API key secret in AWS Secrets
     * Manager.</p>
     */
    inline const Secret& GetApiKeySecretArn() const { return m_apiKeySecretArn; }
    template<typename ApiKeySecretArnT = Secret>
    void SetApiKeySecretArn(ApiKeySecretArnT&& value) { m_apiKeySecretArnHasBeenSet = true; m_apiKeySecretArn = std::forward<ApiKeySecretArnT>(value); }
    template<typename ApiKeySecretArnT = Secret>
    GetApiKeyCredentialProviderResult& WithApiKeySecretArn(ApiKeySecretArnT&& value) { SetApiKeySecretArn(std::forward<ApiKeySecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API key credential provider.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetApiKeyCredentialProviderResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the API key credential provider.</p>
     */
    inline const Aws::String& GetCredentialProviderArn() const { return m_credentialProviderArn; }
    template<typename CredentialProviderArnT = Aws::String>
    void SetCredentialProviderArn(CredentialProviderArnT&& value) { m_credentialProviderArnHasBeenSet = true; m_credentialProviderArn = std::forward<CredentialProviderArnT>(value); }
    template<typename CredentialProviderArnT = Aws::String>
    GetApiKeyCredentialProviderResult& WithCredentialProviderArn(CredentialProviderArnT&& value) { SetCredentialProviderArn(std::forward<CredentialProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the API key credential provider was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    GetApiKeyCredentialProviderResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the API key credential provider was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    GetApiKeyCredentialProviderResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApiKeyCredentialProviderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Secret m_apiKeySecretArn;
    bool m_apiKeySecretArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_credentialProviderArn;
    bool m_credentialProviderArnHasBeenSet = false;

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
