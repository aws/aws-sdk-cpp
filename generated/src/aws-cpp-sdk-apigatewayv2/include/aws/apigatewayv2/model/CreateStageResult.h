﻿/**
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
    AWS_APIGATEWAYV2_API CreateStageResult();
    AWS_APIGATEWAYV2_API CreateStageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API CreateStageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline const AccessLogSettings& GetAccessLogSettings() const{ return m_accessLogSettings; }
    inline void SetAccessLogSettings(const AccessLogSettings& value) { m_accessLogSettings = value; }
    inline void SetAccessLogSettings(AccessLogSettings&& value) { m_accessLogSettings = std::move(value); }
    inline CreateStageResult& WithAccessLogSettings(const AccessLogSettings& value) { SetAccessLogSettings(value); return *this;}
    inline CreateStageResult& WithAccessLogSettings(AccessLogSettings&& value) { SetAccessLogSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a stage is managed by API Gateway. If you created an API
     * using quick create, the $default stage is managed by API Gateway. You can't
     * modify the $default stage.</p>
     */
    inline bool GetApiGatewayManaged() const{ return m_apiGatewayManaged; }
    inline void SetApiGatewayManaged(bool value) { m_apiGatewayManaged = value; }
    inline CreateStageResult& WithApiGatewayManaged(bool value) { SetApiGatewayManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether updates to an API automatically trigger a new deployment.
     * The default value is false.</p>
     */
    inline bool GetAutoDeploy() const{ return m_autoDeploy; }
    inline void SetAutoDeploy(bool value) { m_autoDeploy = value; }
    inline CreateStageResult& WithAutoDeploy(bool value) { SetAutoDeploy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a client certificate for a Stage. Supported only for
     * WebSocket APIs.</p>
     */
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateId = value; }
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateId = std::move(value); }
    inline void SetClientCertificateId(const char* value) { m_clientCertificateId.assign(value); }
    inline CreateStageResult& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}
    inline CreateStageResult& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(std::move(value)); return *this;}
    inline CreateStageResult& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline CreateStageResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline CreateStageResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default route settings for the stage.</p>
     */
    inline const RouteSettings& GetDefaultRouteSettings() const{ return m_defaultRouteSettings; }
    inline void SetDefaultRouteSettings(const RouteSettings& value) { m_defaultRouteSettings = value; }
    inline void SetDefaultRouteSettings(RouteSettings&& value) { m_defaultRouteSettings = std::move(value); }
    inline CreateStageResult& WithDefaultRouteSettings(const RouteSettings& value) { SetDefaultRouteSettings(value); return *this;}
    inline CreateStageResult& WithDefaultRouteSettings(RouteSettings&& value) { SetDefaultRouteSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Deployment that the Stage is associated with. Can't be
     * updated if autoDeploy is enabled.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentId.assign(value); }
    inline CreateStageResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline CreateStageResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline CreateStageResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the stage.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateStageResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateStageResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateStageResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the status of the last deployment of a stage. Supported only for
     * stages with autoDeploy enabled.</p>
     */
    inline const Aws::String& GetLastDeploymentStatusMessage() const{ return m_lastDeploymentStatusMessage; }
    inline void SetLastDeploymentStatusMessage(const Aws::String& value) { m_lastDeploymentStatusMessage = value; }
    inline void SetLastDeploymentStatusMessage(Aws::String&& value) { m_lastDeploymentStatusMessage = std::move(value); }
    inline void SetLastDeploymentStatusMessage(const char* value) { m_lastDeploymentStatusMessage.assign(value); }
    inline CreateStageResult& WithLastDeploymentStatusMessage(const Aws::String& value) { SetLastDeploymentStatusMessage(value); return *this;}
    inline CreateStageResult& WithLastDeploymentStatusMessage(Aws::String&& value) { SetLastDeploymentStatusMessage(std::move(value)); return *this;}
    inline CreateStageResult& WithLastDeploymentStatusMessage(const char* value) { SetLastDeploymentStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the stage was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }
    inline CreateStageResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline CreateStageResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Route settings for the stage, by routeKey.</p>
     */
    inline const Aws::Map<Aws::String, RouteSettings>& GetRouteSettings() const{ return m_routeSettings; }
    inline void SetRouteSettings(const Aws::Map<Aws::String, RouteSettings>& value) { m_routeSettings = value; }
    inline void SetRouteSettings(Aws::Map<Aws::String, RouteSettings>&& value) { m_routeSettings = std::move(value); }
    inline CreateStageResult& WithRouteSettings(const Aws::Map<Aws::String, RouteSettings>& value) { SetRouteSettings(value); return *this;}
    inline CreateStageResult& WithRouteSettings(Aws::Map<Aws::String, RouteSettings>&& value) { SetRouteSettings(std::move(value)); return *this;}
    inline CreateStageResult& AddRouteSettings(const Aws::String& key, const RouteSettings& value) { m_routeSettings.emplace(key, value); return *this; }
    inline CreateStageResult& AddRouteSettings(Aws::String&& key, const RouteSettings& value) { m_routeSettings.emplace(std::move(key), value); return *this; }
    inline CreateStageResult& AddRouteSettings(const Aws::String& key, RouteSettings&& value) { m_routeSettings.emplace(key, std::move(value)); return *this; }
    inline CreateStageResult& AddRouteSettings(Aws::String&& key, RouteSettings&& value) { m_routeSettings.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateStageResult& AddRouteSettings(const char* key, RouteSettings&& value) { m_routeSettings.emplace(key, std::move(value)); return *this; }
    inline CreateStageResult& AddRouteSettings(const char* key, const RouteSettings& value) { m_routeSettings.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }
    inline void SetStageName(const Aws::String& value) { m_stageName = value; }
    inline void SetStageName(Aws::String&& value) { m_stageName = std::move(value); }
    inline void SetStageName(const char* value) { m_stageName.assign(value); }
    inline CreateStageResult& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline CreateStageResult& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline CreateStageResult& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that defines the stage variables for a stage resource. Variable names
     * can have alphanumeric and underscore characters, and the values must match
     * [A-Za-z0-9-._~:/?#&amp;=,]+.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariables() const{ return m_stageVariables; }
    inline void SetStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_stageVariables = value; }
    inline void SetStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_stageVariables = std::move(value); }
    inline CreateStageResult& WithStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetStageVariables(value); return *this;}
    inline CreateStageResult& WithStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetStageVariables(std::move(value)); return *this;}
    inline CreateStageResult& AddStageVariables(const Aws::String& key, const Aws::String& value) { m_stageVariables.emplace(key, value); return *this; }
    inline CreateStageResult& AddStageVariables(Aws::String&& key, const Aws::String& value) { m_stageVariables.emplace(std::move(key), value); return *this; }
    inline CreateStageResult& AddStageVariables(const Aws::String& key, Aws::String&& value) { m_stageVariables.emplace(key, std::move(value)); return *this; }
    inline CreateStageResult& AddStageVariables(Aws::String&& key, Aws::String&& value) { m_stageVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateStageResult& AddStageVariables(const char* key, Aws::String&& value) { m_stageVariables.emplace(key, std::move(value)); return *this; }
    inline CreateStageResult& AddStageVariables(Aws::String&& key, const char* value) { m_stageVariables.emplace(std::move(key), value); return *this; }
    inline CreateStageResult& AddStageVariables(const char* key, const char* value) { m_stageVariables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateStageResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateStageResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateStageResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateStageResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateStageResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateStageResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateStageResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateStageResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateStageResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateStageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateStageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateStageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AccessLogSettings m_accessLogSettings;

    bool m_apiGatewayManaged;

    bool m_autoDeploy;

    Aws::String m_clientCertificateId;

    Aws::Utils::DateTime m_createdDate;

    RouteSettings m_defaultRouteSettings;

    Aws::String m_deploymentId;

    Aws::String m_description;

    Aws::String m_lastDeploymentStatusMessage;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::Map<Aws::String, RouteSettings> m_routeSettings;

    Aws::String m_stageName;

    Aws::Map<Aws::String, Aws::String> m_stageVariables;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
