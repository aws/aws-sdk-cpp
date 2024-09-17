/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/apigatewayv2/model/AccessLogSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/RouteSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Updates a Stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateStageRequest">AWS
   * API Reference</a></p>
   */
  class UpdateStageRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API UpdateStageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStage"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline const AccessLogSettings& GetAccessLogSettings() const{ return m_accessLogSettings; }
    inline bool AccessLogSettingsHasBeenSet() const { return m_accessLogSettingsHasBeenSet; }
    inline void SetAccessLogSettings(const AccessLogSettings& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = value; }
    inline void SetAccessLogSettings(AccessLogSettings&& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = std::move(value); }
    inline UpdateStageRequest& WithAccessLogSettings(const AccessLogSettings& value) { SetAccessLogSettings(value); return *this;}
    inline UpdateStageRequest& WithAccessLogSettings(AccessLogSettings&& value) { SetAccessLogSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline UpdateStageRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline UpdateStageRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline UpdateStageRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether updates to an API automatically trigger a new deployment.
     * The default value is false.</p>
     */
    inline bool GetAutoDeploy() const{ return m_autoDeploy; }
    inline bool AutoDeployHasBeenSet() const { return m_autoDeployHasBeenSet; }
    inline void SetAutoDeploy(bool value) { m_autoDeployHasBeenSet = true; m_autoDeploy = value; }
    inline UpdateStageRequest& WithAutoDeploy(bool value) { SetAutoDeploy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }
    inline bool ClientCertificateIdHasBeenSet() const { return m_clientCertificateIdHasBeenSet; }
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = std::move(value); }
    inline void SetClientCertificateId(const char* value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId.assign(value); }
    inline UpdateStageRequest& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}
    inline UpdateStageRequest& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(std::move(value)); return *this;}
    inline UpdateStageRequest& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default route settings for the stage.</p>
     */
    inline const RouteSettings& GetDefaultRouteSettings() const{ return m_defaultRouteSettings; }
    inline bool DefaultRouteSettingsHasBeenSet() const { return m_defaultRouteSettingsHasBeenSet; }
    inline void SetDefaultRouteSettings(const RouteSettings& value) { m_defaultRouteSettingsHasBeenSet = true; m_defaultRouteSettings = value; }
    inline void SetDefaultRouteSettings(RouteSettings&& value) { m_defaultRouteSettingsHasBeenSet = true; m_defaultRouteSettings = std::move(value); }
    inline UpdateStageRequest& WithDefaultRouteSettings(const RouteSettings& value) { SetDefaultRouteSettings(value); return *this;}
    inline UpdateStageRequest& WithDefaultRouteSettings(RouteSettings&& value) { SetDefaultRouteSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment identifier for the API stage. Can't be updated if autoDeploy
     * is enabled.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }
    inline UpdateStageRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline UpdateStageRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline UpdateStageRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the API stage.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateStageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateStageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateStageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Route settings for the stage.</p>
     */
    inline const Aws::Map<Aws::String, RouteSettings>& GetRouteSettings() const{ return m_routeSettings; }
    inline bool RouteSettingsHasBeenSet() const { return m_routeSettingsHasBeenSet; }
    inline void SetRouteSettings(const Aws::Map<Aws::String, RouteSettings>& value) { m_routeSettingsHasBeenSet = true; m_routeSettings = value; }
    inline void SetRouteSettings(Aws::Map<Aws::String, RouteSettings>&& value) { m_routeSettingsHasBeenSet = true; m_routeSettings = std::move(value); }
    inline UpdateStageRequest& WithRouteSettings(const Aws::Map<Aws::String, RouteSettings>& value) { SetRouteSettings(value); return *this;}
    inline UpdateStageRequest& WithRouteSettings(Aws::Map<Aws::String, RouteSettings>&& value) { SetRouteSettings(std::move(value)); return *this;}
    inline UpdateStageRequest& AddRouteSettings(const Aws::String& key, const RouteSettings& value) { m_routeSettingsHasBeenSet = true; m_routeSettings.emplace(key, value); return *this; }
    inline UpdateStageRequest& AddRouteSettings(Aws::String&& key, const RouteSettings& value) { m_routeSettingsHasBeenSet = true; m_routeSettings.emplace(std::move(key), value); return *this; }
    inline UpdateStageRequest& AddRouteSettings(const Aws::String& key, RouteSettings&& value) { m_routeSettingsHasBeenSet = true; m_routeSettings.emplace(key, std::move(value)); return *this; }
    inline UpdateStageRequest& AddRouteSettings(Aws::String&& key, RouteSettings&& value) { m_routeSettingsHasBeenSet = true; m_routeSettings.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateStageRequest& AddRouteSettings(const char* key, RouteSettings&& value) { m_routeSettingsHasBeenSet = true; m_routeSettings.emplace(key, std::move(value)); return *this; }
    inline UpdateStageRequest& AddRouteSettings(const char* key, const RouteSettings& value) { m_routeSettingsHasBeenSet = true; m_routeSettings.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stage name. Stage names can contain only alphanumeric characters,
     * hyphens, and underscores, or be $default. Maximum length is 128 characters.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }
    inline UpdateStageRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline UpdateStageRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline UpdateStageRequest& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that defines the stage variables for a Stage. Variable names can have
     * alphanumeric and underscore characters, and the values must match
     * [A-Za-z0-9-._~:/?#&amp;=,]+.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariables() const{ return m_stageVariables; }
    inline bool StageVariablesHasBeenSet() const { return m_stageVariablesHasBeenSet; }
    inline void SetStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = value; }
    inline void SetStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = std::move(value); }
    inline UpdateStageRequest& WithStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetStageVariables(value); return *this;}
    inline UpdateStageRequest& WithStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetStageVariables(std::move(value)); return *this;}
    inline UpdateStageRequest& AddStageVariables(const Aws::String& key, const Aws::String& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, value); return *this; }
    inline UpdateStageRequest& AddStageVariables(Aws::String&& key, const Aws::String& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), value); return *this; }
    inline UpdateStageRequest& AddStageVariables(const Aws::String& key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, std::move(value)); return *this; }
    inline UpdateStageRequest& AddStageVariables(Aws::String&& key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateStageRequest& AddStageVariables(const char* key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, std::move(value)); return *this; }
    inline UpdateStageRequest& AddStageVariables(Aws::String&& key, const char* value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), value); return *this; }
    inline UpdateStageRequest& AddStageVariables(const char* key, const char* value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, value); return *this; }
    ///@}
  private:

    AccessLogSettings m_accessLogSettings;
    bool m_accessLogSettingsHasBeenSet = false;

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    bool m_autoDeploy;
    bool m_autoDeployHasBeenSet = false;

    Aws::String m_clientCertificateId;
    bool m_clientCertificateIdHasBeenSet = false;

    RouteSettings m_defaultRouteSettings;
    bool m_defaultRouteSettingsHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, RouteSettings> m_routeSettings;
    bool m_routeSettingsHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_stageVariables;
    bool m_stageVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
