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
    AWS_APIGATEWAYV2_API UpdateStageRequest() = default;

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
    inline const AccessLogSettings& GetAccessLogSettings() const { return m_accessLogSettings; }
    inline bool AccessLogSettingsHasBeenSet() const { return m_accessLogSettingsHasBeenSet; }
    template<typename AccessLogSettingsT = AccessLogSettings>
    void SetAccessLogSettings(AccessLogSettingsT&& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = std::forward<AccessLogSettingsT>(value); }
    template<typename AccessLogSettingsT = AccessLogSettings>
    UpdateStageRequest& WithAccessLogSettings(AccessLogSettingsT&& value) { SetAccessLogSettings(std::forward<AccessLogSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    UpdateStageRequest& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether updates to an API automatically trigger a new deployment.
     * The default value is false.</p>
     */
    inline bool GetAutoDeploy() const { return m_autoDeploy; }
    inline bool AutoDeployHasBeenSet() const { return m_autoDeployHasBeenSet; }
    inline void SetAutoDeploy(bool value) { m_autoDeployHasBeenSet = true; m_autoDeploy = value; }
    inline UpdateStageRequest& WithAutoDeploy(bool value) { SetAutoDeploy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline const Aws::String& GetClientCertificateId() const { return m_clientCertificateId; }
    inline bool ClientCertificateIdHasBeenSet() const { return m_clientCertificateIdHasBeenSet; }
    template<typename ClientCertificateIdT = Aws::String>
    void SetClientCertificateId(ClientCertificateIdT&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = std::forward<ClientCertificateIdT>(value); }
    template<typename ClientCertificateIdT = Aws::String>
    UpdateStageRequest& WithClientCertificateId(ClientCertificateIdT&& value) { SetClientCertificateId(std::forward<ClientCertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default route settings for the stage.</p>
     */
    inline const RouteSettings& GetDefaultRouteSettings() const { return m_defaultRouteSettings; }
    inline bool DefaultRouteSettingsHasBeenSet() const { return m_defaultRouteSettingsHasBeenSet; }
    template<typename DefaultRouteSettingsT = RouteSettings>
    void SetDefaultRouteSettings(DefaultRouteSettingsT&& value) { m_defaultRouteSettingsHasBeenSet = true; m_defaultRouteSettings = std::forward<DefaultRouteSettingsT>(value); }
    template<typename DefaultRouteSettingsT = RouteSettings>
    UpdateStageRequest& WithDefaultRouteSettings(DefaultRouteSettingsT&& value) { SetDefaultRouteSettings(std::forward<DefaultRouteSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment identifier for the API stage. Can't be updated if autoDeploy
     * is enabled.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    UpdateStageRequest& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the API stage.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateStageRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Route settings for the stage.</p>
     */
    inline const Aws::Map<Aws::String, RouteSettings>& GetRouteSettings() const { return m_routeSettings; }
    inline bool RouteSettingsHasBeenSet() const { return m_routeSettingsHasBeenSet; }
    template<typename RouteSettingsT = Aws::Map<Aws::String, RouteSettings>>
    void SetRouteSettings(RouteSettingsT&& value) { m_routeSettingsHasBeenSet = true; m_routeSettings = std::forward<RouteSettingsT>(value); }
    template<typename RouteSettingsT = Aws::Map<Aws::String, RouteSettings>>
    UpdateStageRequest& WithRouteSettings(RouteSettingsT&& value) { SetRouteSettings(std::forward<RouteSettingsT>(value)); return *this;}
    template<typename RouteSettingsKeyT = Aws::String, typename RouteSettingsValueT = RouteSettings>
    UpdateStageRequest& AddRouteSettings(RouteSettingsKeyT&& key, RouteSettingsValueT&& value) {
      m_routeSettingsHasBeenSet = true; m_routeSettings.emplace(std::forward<RouteSettingsKeyT>(key), std::forward<RouteSettingsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The stage name. Stage names can contain only alphanumeric characters,
     * hyphens, and underscores, or be $default. Maximum length is 128 characters.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    UpdateStageRequest& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that defines the stage variables for a Stage. Variable names can have
     * alphanumeric and underscore characters, and the values must match
     * [A-Za-z0-9-._~:/?#&amp;=,]+.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariables() const { return m_stageVariables; }
    inline bool StageVariablesHasBeenSet() const { return m_stageVariablesHasBeenSet; }
    template<typename StageVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetStageVariables(StageVariablesT&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = std::forward<StageVariablesT>(value); }
    template<typename StageVariablesT = Aws::Map<Aws::String, Aws::String>>
    UpdateStageRequest& WithStageVariables(StageVariablesT&& value) { SetStageVariables(std::forward<StageVariablesT>(value)); return *this;}
    template<typename StageVariablesKeyT = Aws::String, typename StageVariablesValueT = Aws::String>
    UpdateStageRequest& AddStageVariables(StageVariablesKeyT&& key, StageVariablesValueT&& value) {
      m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::forward<StageVariablesKeyT>(key), std::forward<StageVariablesValueT>(value)); return *this;
    }
    ///@}
  private:

    AccessLogSettings m_accessLogSettings;
    bool m_accessLogSettingsHasBeenSet = false;

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    bool m_autoDeploy{false};
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
