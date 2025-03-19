/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/CacheClusterSize.h>
#include <aws/apigateway/model/CacheClusterStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/AccessLogSettings.h>
#include <aws/apigateway/model/CanarySettings.h>
#include <aws/core/utils/DateTime.h>
#include <aws/apigateway/model/MethodSetting.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents a unique identifier for a version of a deployed RestApi that is
   * callable by users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Stage">AWS
   * API Reference</a></p>
   */
  class UpdateStageResult
  {
  public:
    AWS_APIGATEWAY_API UpdateStageResult() = default;
    AWS_APIGATEWAY_API UpdateStageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API UpdateStageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Deployment that the stage points to.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    UpdateStageResult& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline const Aws::String& GetClientCertificateId() const { return m_clientCertificateId; }
    template<typename ClientCertificateIdT = Aws::String>
    void SetClientCertificateId(ClientCertificateIdT&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = std::forward<ClientCertificateIdT>(value); }
    template<typename ClientCertificateIdT = Aws::String>
    UpdateStageResult& WithClientCertificateId(ClientCertificateIdT&& value) { SetClientCertificateId(std::forward<ClientCertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to API Gateway. Stage names can only contain
     * alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    UpdateStageResult& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateStageResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a cache cluster is enabled for the stage. To activate a
     * method-level cache, set <code>CachingEnabled</code> to <code>true</code> for a
     * method. </p>
     */
    inline bool GetCacheClusterEnabled() const { return m_cacheClusterEnabled; }
    inline void SetCacheClusterEnabled(bool value) { m_cacheClusterEnabledHasBeenSet = true; m_cacheClusterEnabled = value; }
    inline UpdateStageResult& WithCacheClusterEnabled(bool value) { SetCacheClusterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage's cache capacity in GB. For more information about choosing a cache
     * size, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-caching.html">Enabling
     * API caching to enhance responsiveness</a>.</p>
     */
    inline CacheClusterSize GetCacheClusterSize() const { return m_cacheClusterSize; }
    inline void SetCacheClusterSize(CacheClusterSize value) { m_cacheClusterSizeHasBeenSet = true; m_cacheClusterSize = value; }
    inline UpdateStageResult& WithCacheClusterSize(CacheClusterSize value) { SetCacheClusterSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline CacheClusterStatus GetCacheClusterStatus() const { return m_cacheClusterStatus; }
    inline void SetCacheClusterStatus(CacheClusterStatus value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus = value; }
    inline UpdateStageResult& WithCacheClusterStatus(CacheClusterStatus value) { SetCacheClusterStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that defines the method settings for a Stage resource. Keys (designated
     * as <code>/{method_setting_key</code> below) are method paths defined as
     * <code>{resource_path}/{http_method}</code> for an individual method override, or
     * <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline const Aws::Map<Aws::String, MethodSetting>& GetMethodSettings() const { return m_methodSettings; }
    template<typename MethodSettingsT = Aws::Map<Aws::String, MethodSetting>>
    void SetMethodSettings(MethodSettingsT&& value) { m_methodSettingsHasBeenSet = true; m_methodSettings = std::forward<MethodSettingsT>(value); }
    template<typename MethodSettingsT = Aws::Map<Aws::String, MethodSetting>>
    UpdateStageResult& WithMethodSettings(MethodSettingsT&& value) { SetMethodSettings(std::forward<MethodSettingsT>(value)); return *this;}
    template<typename MethodSettingsKeyT = Aws::String, typename MethodSettingsValueT = MethodSetting>
    UpdateStageResult& AddMethodSettings(MethodSettingsKeyT&& key, MethodSettingsValueT&& value) {
      m_methodSettingsHasBeenSet = true; m_methodSettings.emplace(std::forward<MethodSettingsKeyT>(key), std::forward<MethodSettingsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map that defines the stage variables for a Stage resource. Variable names
     * can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const { return m_variables; }
    template<typename VariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Map<Aws::String, Aws::String>>
    UpdateStageResult& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesKeyT = Aws::String, typename VariablesValueT = Aws::String>
    UpdateStageResult& AddVariables(VariablesKeyT&& key, VariablesValueT&& value) {
      m_variablesHasBeenSet = true; m_variables.emplace(std::forward<VariablesKeyT>(key), std::forward<VariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline const Aws::String& GetDocumentationVersion() const { return m_documentationVersion; }
    template<typename DocumentationVersionT = Aws::String>
    void SetDocumentationVersion(DocumentationVersionT&& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = std::forward<DocumentationVersionT>(value); }
    template<typename DocumentationVersionT = Aws::String>
    UpdateStageResult& WithDocumentationVersion(DocumentationVersionT&& value) { SetDocumentationVersion(std::forward<DocumentationVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline const AccessLogSettings& GetAccessLogSettings() const { return m_accessLogSettings; }
    template<typename AccessLogSettingsT = AccessLogSettings>
    void SetAccessLogSettings(AccessLogSettingsT&& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = std::forward<AccessLogSettingsT>(value); }
    template<typename AccessLogSettingsT = AccessLogSettings>
    UpdateStageResult& WithAccessLogSettings(AccessLogSettingsT&& value) { SetAccessLogSettings(std::forward<AccessLogSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for the canary deployment in this stage.</p>
     */
    inline const CanarySettings& GetCanarySettings() const { return m_canarySettings; }
    template<typename CanarySettingsT = CanarySettings>
    void SetCanarySettings(CanarySettingsT&& value) { m_canarySettingsHasBeenSet = true; m_canarySettings = std::forward<CanarySettingsT>(value); }
    template<typename CanarySettingsT = CanarySettings>
    UpdateStageResult& WithCanarySettings(CanarySettingsT&& value) { SetCanarySettings(std::forward<CanarySettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether active tracing with X-ray is enabled for the Stage.</p>
     */
    inline bool GetTracingEnabled() const { return m_tracingEnabled; }
    inline void SetTracingEnabled(bool value) { m_tracingEnabledHasBeenSet = true; m_tracingEnabled = value; }
    inline UpdateStageResult& WithTracingEnabled(bool value) { SetTracingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the WebAcl associated with the Stage.</p>
     */
    inline const Aws::String& GetWebAclArn() const { return m_webAclArn; }
    template<typename WebAclArnT = Aws::String>
    void SetWebAclArn(WebAclArnT&& value) { m_webAclArnHasBeenSet = true; m_webAclArn = std::forward<WebAclArnT>(value); }
    template<typename WebAclArnT = Aws::String>
    UpdateStageResult& WithWebAclArn(WebAclArnT&& value) { SetWebAclArn(std::forward<WebAclArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateStageResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    UpdateStageResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    UpdateStageResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the stage last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    UpdateStageResult& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateStageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_clientCertificateId;
    bool m_clientCertificateIdHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_cacheClusterEnabled{false};
    bool m_cacheClusterEnabledHasBeenSet = false;

    CacheClusterSize m_cacheClusterSize{CacheClusterSize::NOT_SET};
    bool m_cacheClusterSizeHasBeenSet = false;

    CacheClusterStatus m_cacheClusterStatus{CacheClusterStatus::NOT_SET};
    bool m_cacheClusterStatusHasBeenSet = false;

    Aws::Map<Aws::String, MethodSetting> m_methodSettings;
    bool m_methodSettingsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_variables;
    bool m_variablesHasBeenSet = false;

    Aws::String m_documentationVersion;
    bool m_documentationVersionHasBeenSet = false;

    AccessLogSettings m_accessLogSettings;
    bool m_accessLogSettingsHasBeenSet = false;

    CanarySettings m_canarySettings;
    bool m_canarySettingsHasBeenSet = false;

    bool m_tracingEnabled{false};
    bool m_tracingEnabledHasBeenSet = false;

    Aws::String m_webAclArn;
    bool m_webAclArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
