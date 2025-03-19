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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
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
  class Stage
  {
  public:
    AWS_APIGATEWAY_API Stage() = default;
    AWS_APIGATEWAY_API Stage(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Stage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Deployment that the stage points to.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    Stage& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline const Aws::String& GetClientCertificateId() const { return m_clientCertificateId; }
    inline bool ClientCertificateIdHasBeenSet() const { return m_clientCertificateIdHasBeenSet; }
    template<typename ClientCertificateIdT = Aws::String>
    void SetClientCertificateId(ClientCertificateIdT&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = std::forward<ClientCertificateIdT>(value); }
    template<typename ClientCertificateIdT = Aws::String>
    Stage& WithClientCertificateId(ClientCertificateIdT&& value) { SetClientCertificateId(std::forward<ClientCertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to API Gateway. Stage names can only contain
     * alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    Stage& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Stage& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a cache cluster is enabled for the stage. To activate a
     * method-level cache, set <code>CachingEnabled</code> to <code>true</code> for a
     * method. </p>
     */
    inline bool GetCacheClusterEnabled() const { return m_cacheClusterEnabled; }
    inline bool CacheClusterEnabledHasBeenSet() const { return m_cacheClusterEnabledHasBeenSet; }
    inline void SetCacheClusterEnabled(bool value) { m_cacheClusterEnabledHasBeenSet = true; m_cacheClusterEnabled = value; }
    inline Stage& WithCacheClusterEnabled(bool value) { SetCacheClusterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage's cache capacity in GB. For more information about choosing a cache
     * size, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-caching.html">Enabling
     * API caching to enhance responsiveness</a>.</p>
     */
    inline CacheClusterSize GetCacheClusterSize() const { return m_cacheClusterSize; }
    inline bool CacheClusterSizeHasBeenSet() const { return m_cacheClusterSizeHasBeenSet; }
    inline void SetCacheClusterSize(CacheClusterSize value) { m_cacheClusterSizeHasBeenSet = true; m_cacheClusterSize = value; }
    inline Stage& WithCacheClusterSize(CacheClusterSize value) { SetCacheClusterSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline CacheClusterStatus GetCacheClusterStatus() const { return m_cacheClusterStatus; }
    inline bool CacheClusterStatusHasBeenSet() const { return m_cacheClusterStatusHasBeenSet; }
    inline void SetCacheClusterStatus(CacheClusterStatus value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus = value; }
    inline Stage& WithCacheClusterStatus(CacheClusterStatus value) { SetCacheClusterStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that defines the method settings for a Stage resource. Keys (designated
     * as <code>/{method_setting_key</code> below) are method paths defined as
     * <code>{resource_path}/{http_method}</code> for an individual method override, or
     * <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline const Aws::Map<Aws::String, MethodSetting>& GetMethodSettings() const { return m_methodSettings; }
    inline bool MethodSettingsHasBeenSet() const { return m_methodSettingsHasBeenSet; }
    template<typename MethodSettingsT = Aws::Map<Aws::String, MethodSetting>>
    void SetMethodSettings(MethodSettingsT&& value) { m_methodSettingsHasBeenSet = true; m_methodSettings = std::forward<MethodSettingsT>(value); }
    template<typename MethodSettingsT = Aws::Map<Aws::String, MethodSetting>>
    Stage& WithMethodSettings(MethodSettingsT&& value) { SetMethodSettings(std::forward<MethodSettingsT>(value)); return *this;}
    template<typename MethodSettingsKeyT = Aws::String, typename MethodSettingsValueT = MethodSetting>
    Stage& AddMethodSettings(MethodSettingsKeyT&& key, MethodSettingsValueT&& value) {
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
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    template<typename VariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Map<Aws::String, Aws::String>>
    Stage& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesKeyT = Aws::String, typename VariablesValueT = Aws::String>
    Stage& AddVariables(VariablesKeyT&& key, VariablesValueT&& value) {
      m_variablesHasBeenSet = true; m_variables.emplace(std::forward<VariablesKeyT>(key), std::forward<VariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline const Aws::String& GetDocumentationVersion() const { return m_documentationVersion; }
    inline bool DocumentationVersionHasBeenSet() const { return m_documentationVersionHasBeenSet; }
    template<typename DocumentationVersionT = Aws::String>
    void SetDocumentationVersion(DocumentationVersionT&& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = std::forward<DocumentationVersionT>(value); }
    template<typename DocumentationVersionT = Aws::String>
    Stage& WithDocumentationVersion(DocumentationVersionT&& value) { SetDocumentationVersion(std::forward<DocumentationVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline const AccessLogSettings& GetAccessLogSettings() const { return m_accessLogSettings; }
    inline bool AccessLogSettingsHasBeenSet() const { return m_accessLogSettingsHasBeenSet; }
    template<typename AccessLogSettingsT = AccessLogSettings>
    void SetAccessLogSettings(AccessLogSettingsT&& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = std::forward<AccessLogSettingsT>(value); }
    template<typename AccessLogSettingsT = AccessLogSettings>
    Stage& WithAccessLogSettings(AccessLogSettingsT&& value) { SetAccessLogSettings(std::forward<AccessLogSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for the canary deployment in this stage.</p>
     */
    inline const CanarySettings& GetCanarySettings() const { return m_canarySettings; }
    inline bool CanarySettingsHasBeenSet() const { return m_canarySettingsHasBeenSet; }
    template<typename CanarySettingsT = CanarySettings>
    void SetCanarySettings(CanarySettingsT&& value) { m_canarySettingsHasBeenSet = true; m_canarySettings = std::forward<CanarySettingsT>(value); }
    template<typename CanarySettingsT = CanarySettings>
    Stage& WithCanarySettings(CanarySettingsT&& value) { SetCanarySettings(std::forward<CanarySettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether active tracing with X-ray is enabled for the Stage.</p>
     */
    inline bool GetTracingEnabled() const { return m_tracingEnabled; }
    inline bool TracingEnabledHasBeenSet() const { return m_tracingEnabledHasBeenSet; }
    inline void SetTracingEnabled(bool value) { m_tracingEnabledHasBeenSet = true; m_tracingEnabled = value; }
    inline Stage& WithTracingEnabled(bool value) { SetTracingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the WebAcl associated with the Stage.</p>
     */
    inline const Aws::String& GetWebAclArn() const { return m_webAclArn; }
    inline bool WebAclArnHasBeenSet() const { return m_webAclArnHasBeenSet; }
    template<typename WebAclArnT = Aws::String>
    void SetWebAclArn(WebAclArnT&& value) { m_webAclArnHasBeenSet = true; m_webAclArn = std::forward<WebAclArnT>(value); }
    template<typename WebAclArnT = Aws::String>
    Stage& WithWebAclArn(WebAclArnT&& value) { SetWebAclArn(std::forward<WebAclArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Stage& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Stage& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    Stage& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the stage last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    Stage& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    Stage& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
