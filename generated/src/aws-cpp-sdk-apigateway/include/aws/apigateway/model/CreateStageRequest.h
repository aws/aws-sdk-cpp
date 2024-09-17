/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/CacheClusterSize.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/CanarySettings.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Requests API Gateway to create a Stage resource.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateStageRequest">AWS
   * API Reference</a></p>
   */
  class CreateStageRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API CreateStageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStage"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }
    inline CreateStageRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline CreateStageRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline CreateStageRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the Stage resource. Stage names can only contain alphanumeric
     * characters, hyphens, and underscores. Maximum length is 128 characters.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }
    inline CreateStageRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline CreateStageRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline CreateStageRequest& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Deployment resource for the Stage resource.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }
    inline CreateStageRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline CreateStageRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline CreateStageRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Stage resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateStageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateStageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateStageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether cache clustering is enabled for the stage.</p>
     */
    inline bool GetCacheClusterEnabled() const{ return m_cacheClusterEnabled; }
    inline bool CacheClusterEnabledHasBeenSet() const { return m_cacheClusterEnabledHasBeenSet; }
    inline void SetCacheClusterEnabled(bool value) { m_cacheClusterEnabledHasBeenSet = true; m_cacheClusterEnabled = value; }
    inline CreateStageRequest& WithCacheClusterEnabled(bool value) { SetCacheClusterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage's cache capacity in GB. For more information about choosing a cache
     * size, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-caching.html">Enabling
     * API caching to enhance responsiveness</a>.</p>
     */
    inline const CacheClusterSize& GetCacheClusterSize() const{ return m_cacheClusterSize; }
    inline bool CacheClusterSizeHasBeenSet() const { return m_cacheClusterSizeHasBeenSet; }
    inline void SetCacheClusterSize(const CacheClusterSize& value) { m_cacheClusterSizeHasBeenSet = true; m_cacheClusterSize = value; }
    inline void SetCacheClusterSize(CacheClusterSize&& value) { m_cacheClusterSizeHasBeenSet = true; m_cacheClusterSize = std::move(value); }
    inline CreateStageRequest& WithCacheClusterSize(const CacheClusterSize& value) { SetCacheClusterSize(value); return *this;}
    inline CreateStageRequest& WithCacheClusterSize(CacheClusterSize&& value) { SetCacheClusterSize(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that defines the stage variables for the new Stage resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const{ return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    inline void SetVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_variablesHasBeenSet = true; m_variables = value; }
    inline void SetVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }
    inline CreateStageRequest& WithVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetVariables(value); return *this;}
    inline CreateStageRequest& WithVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetVariables(std::move(value)); return *this;}
    inline CreateStageRequest& AddVariables(const Aws::String& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }
    inline CreateStageRequest& AddVariables(Aws::String&& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }
    inline CreateStageRequest& AddVariables(const Aws::String& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }
    inline CreateStageRequest& AddVariables(Aws::String&& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateStageRequest& AddVariables(const char* key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }
    inline CreateStageRequest& AddVariables(Aws::String&& key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }
    inline CreateStageRequest& AddVariables(const char* key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline const Aws::String& GetDocumentationVersion() const{ return m_documentationVersion; }
    inline bool DocumentationVersionHasBeenSet() const { return m_documentationVersionHasBeenSet; }
    inline void SetDocumentationVersion(const Aws::String& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = value; }
    inline void SetDocumentationVersion(Aws::String&& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = std::move(value); }
    inline void SetDocumentationVersion(const char* value) { m_documentationVersionHasBeenSet = true; m_documentationVersion.assign(value); }
    inline CreateStageRequest& WithDocumentationVersion(const Aws::String& value) { SetDocumentationVersion(value); return *this;}
    inline CreateStageRequest& WithDocumentationVersion(Aws::String&& value) { SetDocumentationVersion(std::move(value)); return *this;}
    inline CreateStageRequest& WithDocumentationVersion(const char* value) { SetDocumentationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canary deployment settings of this stage.</p>
     */
    inline const CanarySettings& GetCanarySettings() const{ return m_canarySettings; }
    inline bool CanarySettingsHasBeenSet() const { return m_canarySettingsHasBeenSet; }
    inline void SetCanarySettings(const CanarySettings& value) { m_canarySettingsHasBeenSet = true; m_canarySettings = value; }
    inline void SetCanarySettings(CanarySettings&& value) { m_canarySettingsHasBeenSet = true; m_canarySettings = std::move(value); }
    inline CreateStageRequest& WithCanarySettings(const CanarySettings& value) { SetCanarySettings(value); return *this;}
    inline CreateStageRequest& WithCanarySettings(CanarySettings&& value) { SetCanarySettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether active tracing with X-ray is enabled for the Stage.</p>
     */
    inline bool GetTracingEnabled() const{ return m_tracingEnabled; }
    inline bool TracingEnabledHasBeenSet() const { return m_tracingEnabledHasBeenSet; }
    inline void SetTracingEnabled(bool value) { m_tracingEnabledHasBeenSet = true; m_tracingEnabled = value; }
    inline CreateStageRequest& WithTracingEnabled(bool value) { SetTracingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateStageRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateStageRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateStageRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateStageRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateStageRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateStageRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateStageRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateStageRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateStageRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_cacheClusterEnabled;
    bool m_cacheClusterEnabledHasBeenSet = false;

    CacheClusterSize m_cacheClusterSize;
    bool m_cacheClusterSizeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_variables;
    bool m_variablesHasBeenSet = false;

    Aws::String m_documentationVersion;
    bool m_documentationVersionHasBeenSet = false;

    CanarySettings m_canarySettings;
    bool m_canarySettingsHasBeenSet = false;

    bool m_tracingEnabled;
    bool m_tracingEnabledHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
