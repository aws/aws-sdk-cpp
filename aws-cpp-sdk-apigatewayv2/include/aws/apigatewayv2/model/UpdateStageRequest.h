/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   */
  class AWS_APIGATEWAYV2_API UpdateStageRequest : public ApiGatewayV2Request
  {
  public:
    UpdateStageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStage"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline const AccessLogSettings& GetAccessLogSettings() const{ return m_accessLogSettings; }

    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline bool AccessLogSettingsHasBeenSet() const { return m_accessLogSettingsHasBeenSet; }

    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline void SetAccessLogSettings(const AccessLogSettings& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = value; }

    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline void SetAccessLogSettings(AccessLogSettings&& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = std::move(value); }

    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline UpdateStageRequest& WithAccessLogSettings(const AccessLogSettings& value) { SetAccessLogSettings(value); return *this;}

    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline UpdateStageRequest& WithAccessLogSettings(AccessLogSettings&& value) { SetAccessLogSettings(std::move(value)); return *this;}


    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API identifier.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline UpdateStageRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline UpdateStageRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline UpdateStageRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }

    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline bool ClientCertificateIdHasBeenSet() const { return m_clientCertificateIdHasBeenSet; }

    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }

    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = std::move(value); }

    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline void SetClientCertificateId(const char* value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId.assign(value); }

    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline UpdateStageRequest& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}

    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline UpdateStageRequest& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline UpdateStageRequest& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}


    /**
     * <p>The default route settings for the stage.</p>
     */
    inline const RouteSettings& GetDefaultRouteSettings() const{ return m_defaultRouteSettings; }

    /**
     * <p>The default route settings for the stage.</p>
     */
    inline bool DefaultRouteSettingsHasBeenSet() const { return m_defaultRouteSettingsHasBeenSet; }

    /**
     * <p>The default route settings for the stage.</p>
     */
    inline void SetDefaultRouteSettings(const RouteSettings& value) { m_defaultRouteSettingsHasBeenSet = true; m_defaultRouteSettings = value; }

    /**
     * <p>The default route settings for the stage.</p>
     */
    inline void SetDefaultRouteSettings(RouteSettings&& value) { m_defaultRouteSettingsHasBeenSet = true; m_defaultRouteSettings = std::move(value); }

    /**
     * <p>The default route settings for the stage.</p>
     */
    inline UpdateStageRequest& WithDefaultRouteSettings(const RouteSettings& value) { SetDefaultRouteSettings(value); return *this;}

    /**
     * <p>The default route settings for the stage.</p>
     */
    inline UpdateStageRequest& WithDefaultRouteSettings(RouteSettings&& value) { SetDefaultRouteSettings(std::move(value)); return *this;}


    /**
     * <p>The deployment identifier for the API stage.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The deployment identifier for the API stage.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>The deployment identifier for the API stage.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The deployment identifier for the API stage.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The deployment identifier for the API stage.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The deployment identifier for the API stage.</p>
     */
    inline UpdateStageRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The deployment identifier for the API stage.</p>
     */
    inline UpdateStageRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The deployment identifier for the API stage.</p>
     */
    inline UpdateStageRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The description for the API stage.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the API stage.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the API stage.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the API stage.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the API stage.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the API stage.</p>
     */
    inline UpdateStageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the API stage.</p>
     */
    inline UpdateStageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the API stage.</p>
     */
    inline UpdateStageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Route settings for the stage.</p>
     */
    inline const Aws::Map<Aws::String, RouteSettings>& GetRouteSettings() const{ return m_routeSettings; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline bool RouteSettingsHasBeenSet() const { return m_routeSettingsHasBeenSet; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline void SetRouteSettings(const Aws::Map<Aws::String, RouteSettings>& value) { m_routeSettingsHasBeenSet = true; m_routeSettings = value; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline void SetRouteSettings(Aws::Map<Aws::String, RouteSettings>&& value) { m_routeSettingsHasBeenSet = true; m_routeSettings = std::move(value); }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageRequest& WithRouteSettings(const Aws::Map<Aws::String, RouteSettings>& value) { SetRouteSettings(value); return *this;}

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageRequest& WithRouteSettings(Aws::Map<Aws::String, RouteSettings>&& value) { SetRouteSettings(std::move(value)); return *this;}

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageRequest& AddRouteSettings(const Aws::String& key, const RouteSettings& value) { m_routeSettingsHasBeenSet = true; m_routeSettings.emplace(key, value); return *this; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageRequest& AddRouteSettings(Aws::String&& key, const RouteSettings& value) { m_routeSettingsHasBeenSet = true; m_routeSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageRequest& AddRouteSettings(const Aws::String& key, RouteSettings&& value) { m_routeSettingsHasBeenSet = true; m_routeSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageRequest& AddRouteSettings(Aws::String&& key, RouteSettings&& value) { m_routeSettingsHasBeenSet = true; m_routeSettings.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageRequest& AddRouteSettings(const char* key, RouteSettings&& value) { m_routeSettingsHasBeenSet = true; m_routeSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageRequest& AddRouteSettings(const char* key, const RouteSettings& value) { m_routeSettingsHasBeenSet = true; m_routeSettings.emplace(key, value); return *this; }


    /**
     * <p>The stage name.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The stage name.</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The stage name.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The stage name.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The stage name.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The stage name.</p>
     */
    inline UpdateStageRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The stage name.</p>
     */
    inline UpdateStageRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The stage name.</p>
     */
    inline UpdateStageRequest& WithStageName(const char* value) { SetStageName(value); return *this;}


    /**
     * <p>A map that defines the stage variables for a Stage. Variable names
 can have
     * alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariables() const{ return m_stageVariables; }

    /**
     * <p>A map that defines the stage variables for a Stage. Variable names
 can have
     * alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline bool StageVariablesHasBeenSet() const { return m_stageVariablesHasBeenSet; }

    /**
     * <p>A map that defines the stage variables for a Stage. Variable names
 can have
     * alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline void SetStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = value; }

    /**
     * <p>A map that defines the stage variables for a Stage. Variable names
 can have
     * alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline void SetStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = std::move(value); }

    /**
     * <p>A map that defines the stage variables for a Stage. Variable names
 can have
     * alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageRequest& WithStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetStageVariables(value); return *this;}

    /**
     * <p>A map that defines the stage variables for a Stage. Variable names
 can have
     * alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageRequest& WithStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetStageVariables(std::move(value)); return *this;}

    /**
     * <p>A map that defines the stage variables for a Stage. Variable names
 can have
     * alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageRequest& AddStageVariables(const Aws::String& key, const Aws::String& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, value); return *this; }

    /**
     * <p>A map that defines the stage variables for a Stage. Variable names
 can have
     * alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageRequest& AddStageVariables(Aws::String&& key, const Aws::String& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that defines the stage variables for a Stage. Variable names
 can have
     * alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageRequest& AddStageVariables(const Aws::String& key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for a Stage. Variable names
 can have
     * alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageRequest& AddStageVariables(Aws::String&& key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for a Stage. Variable names
 can have
     * alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageRequest& AddStageVariables(const char* key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for a Stage. Variable names
 can have
     * alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageRequest& AddStageVariables(Aws::String&& key, const char* value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that defines the stage variables for a Stage. Variable names
 can have
     * alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageRequest& AddStageVariables(const char* key, const char* value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, value); return *this; }

  private:

    AccessLogSettings m_accessLogSettings;
    bool m_accessLogSettingsHasBeenSet;

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    Aws::String m_clientCertificateId;
    bool m_clientCertificateIdHasBeenSet;

    RouteSettings m_defaultRouteSettings;
    bool m_defaultRouteSettingsHasBeenSet;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Map<Aws::String, RouteSettings> m_routeSettings;
    bool m_routeSettingsHasBeenSet;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_stageVariables;
    bool m_stageVariablesHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
