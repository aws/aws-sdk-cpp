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
  class AWS_APIGATEWAYV2_API UpdateStageResult
  {
  public:
    UpdateStageResult();
    UpdateStageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateStageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline const AccessLogSettings& GetAccessLogSettings() const{ return m_accessLogSettings; }

    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline void SetAccessLogSettings(const AccessLogSettings& value) { m_accessLogSettings = value; }

    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline void SetAccessLogSettings(AccessLogSettings&& value) { m_accessLogSettings = std::move(value); }

    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline UpdateStageResult& WithAccessLogSettings(const AccessLogSettings& value) { SetAccessLogSettings(value); return *this;}

    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline UpdateStageResult& WithAccessLogSettings(AccessLogSettings&& value) { SetAccessLogSettings(std::move(value)); return *this;}


    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }

    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateId = value; }

    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateId = std::move(value); }

    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline void SetClientCertificateId(const char* value) { m_clientCertificateId.assign(value); }

    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline UpdateStageResult& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}

    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline UpdateStageResult& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a client certificate for a Stage.</p>
     */
    inline UpdateStageResult& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}


    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline UpdateStageResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline UpdateStageResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>Default route settings for the stage.</p>
     */
    inline const RouteSettings& GetDefaultRouteSettings() const{ return m_defaultRouteSettings; }

    /**
     * <p>Default route settings for the stage.</p>
     */
    inline void SetDefaultRouteSettings(const RouteSettings& value) { m_defaultRouteSettings = value; }

    /**
     * <p>Default route settings for the stage.</p>
     */
    inline void SetDefaultRouteSettings(RouteSettings&& value) { m_defaultRouteSettings = std::move(value); }

    /**
     * <p>Default route settings for the stage.</p>
     */
    inline UpdateStageResult& WithDefaultRouteSettings(const RouteSettings& value) { SetDefaultRouteSettings(value); return *this;}

    /**
     * <p>Default route settings for the stage.</p>
     */
    inline UpdateStageResult& WithDefaultRouteSettings(RouteSettings&& value) { SetDefaultRouteSettings(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Deployment that the Stage is
 associated with.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The identifier of the Deployment that the Stage is
 associated with.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentId = value; }

    /**
     * <p>The identifier of the Deployment that the Stage is
 associated with.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentId = std::move(value); }

    /**
     * <p>The identifier of the Deployment that the Stage is
 associated with.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentId.assign(value); }

    /**
     * <p>The identifier of the Deployment that the Stage is
 associated with.</p>
     */
    inline UpdateStageResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier of the Deployment that the Stage is
 associated with.</p>
     */
    inline UpdateStageResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Deployment that the Stage is
 associated with.</p>
     */
    inline UpdateStageResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The description of the stage.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the stage.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the stage.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the stage.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the stage.</p>
     */
    inline UpdateStageResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the stage.</p>
     */
    inline UpdateStageResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the stage.</p>
     */
    inline UpdateStageResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The timestamp when the stage was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The timestamp when the stage was last updated.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The timestamp when the stage was last updated.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The timestamp when the stage was last updated.</p>
     */
    inline UpdateStageResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The timestamp when the stage was last updated.</p>
     */
    inline UpdateStageResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    /**
     * <p>Route settings for the stage.</p>
     */
    inline const Aws::Map<Aws::String, RouteSettings>& GetRouteSettings() const{ return m_routeSettings; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline void SetRouteSettings(const Aws::Map<Aws::String, RouteSettings>& value) { m_routeSettings = value; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline void SetRouteSettings(Aws::Map<Aws::String, RouteSettings>&& value) { m_routeSettings = std::move(value); }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageResult& WithRouteSettings(const Aws::Map<Aws::String, RouteSettings>& value) { SetRouteSettings(value); return *this;}

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageResult& WithRouteSettings(Aws::Map<Aws::String, RouteSettings>&& value) { SetRouteSettings(std::move(value)); return *this;}

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageResult& AddRouteSettings(const Aws::String& key, const RouteSettings& value) { m_routeSettings.emplace(key, value); return *this; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageResult& AddRouteSettings(Aws::String&& key, const RouteSettings& value) { m_routeSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageResult& AddRouteSettings(const Aws::String& key, RouteSettings&& value) { m_routeSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageResult& AddRouteSettings(Aws::String&& key, RouteSettings&& value) { m_routeSettings.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageResult& AddRouteSettings(const char* key, RouteSettings&& value) { m_routeSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Route settings for the stage.</p>
     */
    inline UpdateStageResult& AddRouteSettings(const char* key, const RouteSettings& value) { m_routeSettings.emplace(key, value); return *this; }


    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageName = value; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageName = std::move(value); }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetStageName(const char* value) { m_stageName.assign(value); }

    /**
     * <p>The name of the stage.</p>
     */
    inline UpdateStageResult& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline UpdateStageResult& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline UpdateStageResult& WithStageName(const char* value) { SetStageName(value); return *this;}


    /**
     * <p>A map that defines the stage variables for a stage resource. Variable names
     * can
 have alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariables() const{ return m_stageVariables; }

    /**
     * <p>A map that defines the stage variables for a stage resource. Variable names
     * can
 have alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline void SetStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_stageVariables = value; }

    /**
     * <p>A map that defines the stage variables for a stage resource. Variable names
     * can
 have alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline void SetStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_stageVariables = std::move(value); }

    /**
     * <p>A map that defines the stage variables for a stage resource. Variable names
     * can
 have alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageResult& WithStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetStageVariables(value); return *this;}

    /**
     * <p>A map that defines the stage variables for a stage resource. Variable names
     * can
 have alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageResult& WithStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetStageVariables(std::move(value)); return *this;}

    /**
     * <p>A map that defines the stage variables for a stage resource. Variable names
     * can
 have alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageResult& AddStageVariables(const Aws::String& key, const Aws::String& value) { m_stageVariables.emplace(key, value); return *this; }

    /**
     * <p>A map that defines the stage variables for a stage resource. Variable names
     * can
 have alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageResult& AddStageVariables(Aws::String&& key, const Aws::String& value) { m_stageVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that defines the stage variables for a stage resource. Variable names
     * can
 have alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageResult& AddStageVariables(const Aws::String& key, Aws::String&& value) { m_stageVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for a stage resource. Variable names
     * can
 have alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageResult& AddStageVariables(Aws::String&& key, Aws::String&& value) { m_stageVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for a stage resource. Variable names
     * can
 have alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageResult& AddStageVariables(const char* key, Aws::String&& value) { m_stageVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for a stage resource. Variable names
     * can
 have alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageResult& AddStageVariables(Aws::String&& key, const char* value) { m_stageVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that defines the stage variables for a stage resource. Variable names
     * can
 have alphanumeric and underscore characters, and the values must match

     * [A-Za-z0-9-._~:/?#&=,]+.</p>
     */
    inline UpdateStageResult& AddStageVariables(const char* key, const char* value) { m_stageVariables.emplace(key, value); return *this; }


    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateStageResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateStageResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateStageResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateStageResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateStageResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateStageResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateStageResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateStageResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateStageResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    AccessLogSettings m_accessLogSettings;

    Aws::String m_clientCertificateId;

    Aws::Utils::DateTime m_createdDate;

    RouteSettings m_defaultRouteSettings;

    Aws::String m_deploymentId;

    Aws::String m_description;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::Map<Aws::String, RouteSettings> m_routeSettings;

    Aws::String m_stageName;

    Aws::Map<Aws::String, Aws::String> m_stageVariables;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
