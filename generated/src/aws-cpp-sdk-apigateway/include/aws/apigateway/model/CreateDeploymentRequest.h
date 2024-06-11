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
#include <aws/apigateway/model/DeploymentCanarySettings.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Requests API Gateway to create a Deployment resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDeploymentRequest">AWS
   * API Reference</a></p>
   */
  class CreateDeploymentRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API CreateDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

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
    inline CreateDeploymentRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline CreateDeploymentRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline CreateDeploymentRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Stage resource for the Deployment resource to create.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }
    inline CreateDeploymentRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline CreateDeploymentRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline CreateDeploymentRequest& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Stage resource for the Deployment resource to
     * create.</p>
     */
    inline const Aws::String& GetStageDescription() const{ return m_stageDescription; }
    inline bool StageDescriptionHasBeenSet() const { return m_stageDescriptionHasBeenSet; }
    inline void SetStageDescription(const Aws::String& value) { m_stageDescriptionHasBeenSet = true; m_stageDescription = value; }
    inline void SetStageDescription(Aws::String&& value) { m_stageDescriptionHasBeenSet = true; m_stageDescription = std::move(value); }
    inline void SetStageDescription(const char* value) { m_stageDescriptionHasBeenSet = true; m_stageDescription.assign(value); }
    inline CreateDeploymentRequest& WithStageDescription(const Aws::String& value) { SetStageDescription(value); return *this;}
    inline CreateDeploymentRequest& WithStageDescription(Aws::String&& value) { SetStageDescription(std::move(value)); return *this;}
    inline CreateDeploymentRequest& WithStageDescription(const char* value) { SetStageDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the Deployment resource to create.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateDeploymentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateDeploymentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateDeploymentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables a cache cluster for the Stage resource specified in the input.</p>
     */
    inline bool GetCacheClusterEnabled() const{ return m_cacheClusterEnabled; }
    inline bool CacheClusterEnabledHasBeenSet() const { return m_cacheClusterEnabledHasBeenSet; }
    inline void SetCacheClusterEnabled(bool value) { m_cacheClusterEnabledHasBeenSet = true; m_cacheClusterEnabled = value; }
    inline CreateDeploymentRequest& WithCacheClusterEnabled(bool value) { SetCacheClusterEnabled(value); return *this;}
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
    inline CreateDeploymentRequest& WithCacheClusterSize(const CacheClusterSize& value) { SetCacheClusterSize(value); return *this;}
    inline CreateDeploymentRequest& WithCacheClusterSize(CacheClusterSize&& value) { SetCacheClusterSize(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that defines the stage variables for the Stage resource that is
     * associated with the new deployment. Variable names can have alphanumeric and
     * underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const{ return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    inline void SetVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_variablesHasBeenSet = true; m_variables = value; }
    inline void SetVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }
    inline CreateDeploymentRequest& WithVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetVariables(value); return *this;}
    inline CreateDeploymentRequest& WithVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetVariables(std::move(value)); return *this;}
    inline CreateDeploymentRequest& AddVariables(const Aws::String& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }
    inline CreateDeploymentRequest& AddVariables(Aws::String&& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }
    inline CreateDeploymentRequest& AddVariables(const Aws::String& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }
    inline CreateDeploymentRequest& AddVariables(Aws::String&& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDeploymentRequest& AddVariables(const char* key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }
    inline CreateDeploymentRequest& AddVariables(Aws::String&& key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }
    inline CreateDeploymentRequest& AddVariables(const char* key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input configuration for the canary deployment when the deployment is a
     * canary release deployment. </p>
     */
    inline const DeploymentCanarySettings& GetCanarySettings() const{ return m_canarySettings; }
    inline bool CanarySettingsHasBeenSet() const { return m_canarySettingsHasBeenSet; }
    inline void SetCanarySettings(const DeploymentCanarySettings& value) { m_canarySettingsHasBeenSet = true; m_canarySettings = value; }
    inline void SetCanarySettings(DeploymentCanarySettings&& value) { m_canarySettingsHasBeenSet = true; m_canarySettings = std::move(value); }
    inline CreateDeploymentRequest& WithCanarySettings(const DeploymentCanarySettings& value) { SetCanarySettings(value); return *this;}
    inline CreateDeploymentRequest& WithCanarySettings(DeploymentCanarySettings&& value) { SetCanarySettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether active tracing with X-ray is enabled for the Stage.</p>
     */
    inline bool GetTracingEnabled() const{ return m_tracingEnabled; }
    inline bool TracingEnabledHasBeenSet() const { return m_tracingEnabledHasBeenSet; }
    inline void SetTracingEnabled(bool value) { m_tracingEnabledHasBeenSet = true; m_tracingEnabled = value; }
    inline CreateDeploymentRequest& WithTracingEnabled(bool value) { SetTracingEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_stageDescription;
    bool m_stageDescriptionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_cacheClusterEnabled;
    bool m_cacheClusterEnabledHasBeenSet = false;

    CacheClusterSize m_cacheClusterSize;
    bool m_cacheClusterSizeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_variables;
    bool m_variablesHasBeenSet = false;

    DeploymentCanarySettings m_canarySettings;
    bool m_canarySettingsHasBeenSet = false;

    bool m_tracingEnabled;
    bool m_tracingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
