/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/AccessLogSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/apigatewayv2/model/RouteSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ApiGatewayV2
{
namespace Model
{
  class CreateStageResult
  {
  public:
    AWS_APIGATEWAYV2_API CreateStageResult() = default;
    AWS_APIGATEWAYV2_API CreateStageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API CreateStageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline const AccessLogSettings& GetAccessLogSettings() const { return m_accessLogSettings; }
    template<typename AccessLogSettingsT = AccessLogSettings>
    void SetAccessLogSettings(AccessLogSettingsT&& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = std::forward<AccessLogSettingsT>(value); }
    template<typename AccessLogSettingsT = AccessLogSettings>
    CreateStageResult& WithAccessLogSettings(AccessLogSettingsT&& value) { SetAccessLogSettings(std::forward<AccessLogSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a stage is managed by API Gateway. If you created an API
     * using quick create, the $default stage is managed by API Gateway. You can't
     * modify the $default stage.</p>
     */
    inline bool GetApiGatewayManaged() const { return m_apiGatewayManaged; }
    inline void SetApiGatewayManaged(bool value) { m_apiGatewayManagedHasBeenSet = true; m_apiGatewayManaged = value; }
    inline CreateStageResult& WithApiGatewayManaged(bool value) { SetApiGatewayManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether updates to an API automatically trigger a new deployment.
     * The default value is false.</p>
     */
    inline bool GetAutoDeploy() const { return m_autoDeploy; }
    inline void SetAutoDeploy(bool value) { m_autoDeployHasBeenSet = true; m_autoDeploy = value; }
    inline CreateStageResult& WithAutoDeploy(bool value) { SetAutoDeploy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a client certificate for a Stage. Supported only for
     * WebSocket APIs.</p>
     */
    inline const Aws::String& GetClientCertificateId() const { return m_clientCertificateId; }
    template<typename ClientCertificateIdT = Aws::String>
    void SetClientCertificateId(ClientCertificateIdT&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = std::forward<ClientCertificateIdT>(value); }
    template<typename ClientCertificateIdT = Aws::String>
    CreateStageResult& WithClientCertificateId(ClientCertificateIdT&& value) { SetClientCertificateId(std::forward<ClientCertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    CreateStageResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default route settings for the stage.</p>
     */
    inline const RouteSettings& GetDefaultRouteSettings() const { return m_defaultRouteSettings; }
    template<typename DefaultRouteSettingsT = RouteSettings>
    void SetDefaultRouteSettings(DefaultRouteSettingsT&& value) { m_defaultRouteSettingsHasBeenSet = true; m_defaultRouteSettings = std::forward<DefaultRouteSettingsT>(value); }
    template<typename DefaultRouteSettingsT = RouteSettings>
    CreateStageResult& WithDefaultRouteSettings(DefaultRouteSettingsT&& value) { SetDefaultRouteSettings(std::forward<DefaultRouteSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Deployment that the Stage is associated with. Can't be
     * updated if autoDeploy is enabled.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    CreateStageResult& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the stage.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateStageResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the status of the last deployment of a stage. Supported only for
     * stages with autoDeploy enabled.</p>
     */
    inline const Aws::String& GetLastDeploymentStatusMessage() const { return m_lastDeploymentStatusMessage; }
    template<typename LastDeploymentStatusMessageT = Aws::String>
    void SetLastDeploymentStatusMessage(LastDeploymentStatusMessageT&& value) { m_lastDeploymentStatusMessageHasBeenSet = true; m_lastDeploymentStatusMessage = std::forward<LastDeploymentStatusMessageT>(value); }
    template<typename LastDeploymentStatusMessageT = Aws::String>
    CreateStageResult& WithLastDeploymentStatusMessage(LastDeploymentStatusMessageT&& value) { SetLastDeploymentStatusMessage(std::forward<LastDeploymentStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the stage was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    CreateStageResult& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Route settings for the stage, by routeKey.</p>
     */
    inline const Aws::Map<Aws::String, RouteSettings>& GetRouteSettings() const { return m_routeSettings; }
    template<typename RouteSettingsT = Aws::Map<Aws::String, RouteSettings>>
    void SetRouteSettings(RouteSettingsT&& value) { m_routeSettingsHasBeenSet = true; m_routeSettings = std::forward<RouteSettingsT>(value); }
    template<typename RouteSettingsT = Aws::Map<Aws::String, RouteSettings>>
    CreateStageResult& WithRouteSettings(RouteSettingsT&& value) { SetRouteSettings(std::forward<RouteSettingsT>(value)); return *this;}
    template<typename RouteSettingsKeyT = Aws::String, typename RouteSettingsValueT = RouteSettings>
    CreateStageResult& AddRouteSettings(RouteSettingsKeyT&& key, RouteSettingsValueT&& value) {
      m_routeSettingsHasBeenSet = true; m_routeSettings.emplace(std::forward<RouteSettingsKeyT>(key), std::forward<RouteSettingsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    CreateStageResult& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that defines the stage variables for a stage resource. Variable names
     * can have alphanumeric and underscore characters, and the values must match
     * [A-Za-z0-9-._~:/?#&amp;=,]+.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariables() const { return m_stageVariables; }
    template<typename StageVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetStageVariables(StageVariablesT&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = std::forward<StageVariablesT>(value); }
    template<typename StageVariablesT = Aws::Map<Aws::String, Aws::String>>
    CreateStageResult& WithStageVariables(StageVariablesT&& value) { SetStageVariables(std::forward<StageVariablesT>(value)); return *this;}
    template<typename StageVariablesKeyT = Aws::String, typename StageVariablesValueT = Aws::String>
    CreateStageResult& AddStageVariables(StageVariablesKeyT&& key, StageVariablesValueT&& value) {
      m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::forward<StageVariablesKeyT>(key), std::forward<StageVariablesValueT>(value)); return *this;
    }
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
    CreateStageResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateStageResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateStageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccessLogSettings m_accessLogSettings;
    bool m_accessLogSettingsHasBeenSet = false;

    bool m_apiGatewayManaged{false};
    bool m_apiGatewayManagedHasBeenSet = false;

    bool m_autoDeploy{false};
    bool m_autoDeployHasBeenSet = false;

    Aws::String m_clientCertificateId;
    bool m_clientCertificateIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    RouteSettings m_defaultRouteSettings;
    bool m_defaultRouteSettingsHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_lastDeploymentStatusMessage;
    bool m_lastDeploymentStatusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::Map<Aws::String, RouteSettings> m_routeSettings;
    bool m_routeSettingsHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_stageVariables;
    bool m_stageVariablesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
