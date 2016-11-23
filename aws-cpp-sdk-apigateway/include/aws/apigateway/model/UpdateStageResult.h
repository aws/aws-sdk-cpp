/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/CacheClusterSize.h>
#include <aws/apigateway/model/CacheClusterStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/apigateway/model/MethodSetting.h>

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
   * <p>Represents a unique identifier for a version of a deployed <a>RestApi</a>
   * that is callable by users.</p> <div class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-deploy-api.html">Deploy
   * an API</a> </div>
   */
  class AWS_APIGATEWAY_API UpdateStageResult
  {
  public:
    UpdateStageResult();
    UpdateStageResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateStageResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentId = value; }

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentId = value; }

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentId.assign(value); }

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline UpdateStageResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline UpdateStageResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline UpdateStageResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateId = value; }

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateId = value; }

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline void SetClientCertificateId(const char* value) { m_clientCertificateId.assign(value); }

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline UpdateStageResult& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline UpdateStageResult& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(value); return *this;}

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline UpdateStageResult& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to Amazon API Gateway.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to Amazon API Gateway.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageName = value; }

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to Amazon API Gateway.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageName = value; }

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to Amazon API Gateway.</p>
     */
    inline void SetStageName(const char* value) { m_stageName.assign(value); }

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to Amazon API Gateway.</p>
     */
    inline UpdateStageResult& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to Amazon API Gateway.</p>
     */
    inline UpdateStageResult& WithStageName(Aws::String&& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to Amazon API Gateway.</p>
     */
    inline UpdateStageResult& WithStageName(const char* value) { SetStageName(value); return *this;}

    /**
     * <p>The stage's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The stage's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The stage's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    /**
     * <p>The stage's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The stage's description.</p>
     */
    inline UpdateStageResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The stage's description.</p>
     */
    inline UpdateStageResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The stage's description.</p>
     */
    inline UpdateStageResult& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Specifies whether a cache cluster is enabled for the stage.</p>
     */
    inline bool GetCacheClusterEnabled() const{ return m_cacheClusterEnabled; }

    /**
     * <p>Specifies whether a cache cluster is enabled for the stage.</p>
     */
    inline void SetCacheClusterEnabled(bool value) { m_cacheClusterEnabled = value; }

    /**
     * <p>Specifies whether a cache cluster is enabled for the stage.</p>
     */
    inline UpdateStageResult& WithCacheClusterEnabled(bool value) { SetCacheClusterEnabled(value); return *this;}

    /**
     * <p>The size of the cache cluster for the stage, if enabled.</p>
     */
    inline const CacheClusterSize& GetCacheClusterSize() const{ return m_cacheClusterSize; }

    /**
     * <p>The size of the cache cluster for the stage, if enabled.</p>
     */
    inline void SetCacheClusterSize(const CacheClusterSize& value) { m_cacheClusterSize = value; }

    /**
     * <p>The size of the cache cluster for the stage, if enabled.</p>
     */
    inline void SetCacheClusterSize(CacheClusterSize&& value) { m_cacheClusterSize = value; }

    /**
     * <p>The size of the cache cluster for the stage, if enabled.</p>
     */
    inline UpdateStageResult& WithCacheClusterSize(const CacheClusterSize& value) { SetCacheClusterSize(value); return *this;}

    /**
     * <p>The size of the cache cluster for the stage, if enabled.</p>
     */
    inline UpdateStageResult& WithCacheClusterSize(CacheClusterSize&& value) { SetCacheClusterSize(value); return *this;}

    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline const CacheClusterStatus& GetCacheClusterStatus() const{ return m_cacheClusterStatus; }

    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline void SetCacheClusterStatus(const CacheClusterStatus& value) { m_cacheClusterStatus = value; }

    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline void SetCacheClusterStatus(CacheClusterStatus&& value) { m_cacheClusterStatus = value; }

    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline UpdateStageResult& WithCacheClusterStatus(const CacheClusterStatus& value) { SetCacheClusterStatus(value); return *this;}

    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline UpdateStageResult& WithCacheClusterStatus(CacheClusterStatus&& value) { SetCacheClusterStatus(value); return *this;}

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline const Aws::Map<Aws::String, MethodSetting>& GetMethodSettings() const{ return m_methodSettings; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline void SetMethodSettings(const Aws::Map<Aws::String, MethodSetting>& value) { m_methodSettings = value; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline void SetMethodSettings(Aws::Map<Aws::String, MethodSetting>&& value) { m_methodSettings = value; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline UpdateStageResult& WithMethodSettings(const Aws::Map<Aws::String, MethodSetting>& value) { SetMethodSettings(value); return *this;}

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline UpdateStageResult& WithMethodSettings(Aws::Map<Aws::String, MethodSetting>&& value) { SetMethodSettings(value); return *this;}

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline UpdateStageResult& AddMethodSettings(const Aws::String& key, const MethodSetting& value) { m_methodSettings[key] = value; return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline UpdateStageResult& AddMethodSettings(Aws::String&& key, const MethodSetting& value) { m_methodSettings[key] = value; return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline UpdateStageResult& AddMethodSettings(const Aws::String& key, MethodSetting&& value) { m_methodSettings[key] = value; return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline UpdateStageResult& AddMethodSettings(Aws::String&& key, MethodSetting&& value) { m_methodSettings[key] = value; return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline UpdateStageResult& AddMethodSettings(const char* key, MethodSetting&& value) { m_methodSettings[key] = value; return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline UpdateStageResult& AddMethodSettings(const char* key, const MethodSetting& value) { m_methodSettings[key] = value; return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const{ return m_variables; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline void SetVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_variables = value; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline void SetVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_variables = value; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline UpdateStageResult& WithVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetVariables(value); return *this;}

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline UpdateStageResult& WithVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetVariables(value); return *this;}

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline UpdateStageResult& AddVariables(const Aws::String& key, const Aws::String& value) { m_variables[key] = value; return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline UpdateStageResult& AddVariables(Aws::String&& key, const Aws::String& value) { m_variables[key] = value; return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline UpdateStageResult& AddVariables(const Aws::String& key, Aws::String&& value) { m_variables[key] = value; return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline UpdateStageResult& AddVariables(Aws::String&& key, Aws::String&& value) { m_variables[key] = value; return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline UpdateStageResult& AddVariables(const char* key, Aws::String&& value) { m_variables[key] = value; return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline UpdateStageResult& AddVariables(Aws::String&& key, const char* value) { m_variables[key] = value; return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline UpdateStageResult& AddVariables(const char* key, const char* value) { m_variables[key] = value; return *this; }

    /**
     * <p>The date and time that the stage was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time that the stage was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date and time that the stage was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = value; }

    /**
     * <p>The date and time that the stage was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline UpdateStageResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time that the stage was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline UpdateStageResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time that information about the stage was last updated, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date and time that information about the stage was last updated, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The date and time that information about the stage was last updated, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The date and time that information about the stage was last updated, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline UpdateStageResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date and time that information about the stage was last updated, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline UpdateStageResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(value); return *this;}

  private:
    Aws::String m_deploymentId;
    Aws::String m_clientCertificateId;
    Aws::String m_stageName;
    Aws::String m_description;
    bool m_cacheClusterEnabled;
    CacheClusterSize m_cacheClusterSize;
    CacheClusterStatus m_cacheClusterStatus;
    Aws::Map<Aws::String, MethodSetting> m_methodSettings;
    Aws::Map<Aws::String, Aws::String> m_variables;
    Aws::Utils::DateTime m_createdDate;
    Aws::Utils::DateTime m_lastUpdatedDate;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
