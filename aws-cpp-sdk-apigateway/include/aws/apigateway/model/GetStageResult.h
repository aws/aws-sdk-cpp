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
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-deploy-api.html">Deploy
   * an API</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Stage">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetStageResult
  {
  public:
    GetStageResult();
    GetStageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetStageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentId = std::move(value); }

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentId.assign(value); }

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline GetStageResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline GetStageResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline GetStageResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


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
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateId = std::move(value); }

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline void SetClientCertificateId(const char* value) { m_clientCertificateId.assign(value); }

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline GetStageResult& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline GetStageResult& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline GetStageResult& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}


    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to API Gateway. Stage names can only contain
     * alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to API Gateway. Stage names can only contain
     * alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageName = value; }

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to API Gateway. Stage names can only contain
     * alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageName = std::move(value); }

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to API Gateway. Stage names can only contain
     * alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline void SetStageName(const char* value) { m_stageName.assign(value); }

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to API Gateway. Stage names can only contain
     * alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline GetStageResult& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to API Gateway. Stage names can only contain
     * alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline GetStageResult& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to API Gateway. Stage names can only contain
     * alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline GetStageResult& WithStageName(const char* value) { SetStageName(value); return *this;}


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
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The stage's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The stage's description.</p>
     */
    inline GetStageResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The stage's description.</p>
     */
    inline GetStageResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The stage's description.</p>
     */
    inline GetStageResult& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline GetStageResult& WithCacheClusterEnabled(bool value) { SetCacheClusterEnabled(value); return *this;}


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
    inline void SetCacheClusterSize(CacheClusterSize&& value) { m_cacheClusterSize = std::move(value); }

    /**
     * <p>The size of the cache cluster for the stage, if enabled.</p>
     */
    inline GetStageResult& WithCacheClusterSize(const CacheClusterSize& value) { SetCacheClusterSize(value); return *this;}

    /**
     * <p>The size of the cache cluster for the stage, if enabled.</p>
     */
    inline GetStageResult& WithCacheClusterSize(CacheClusterSize&& value) { SetCacheClusterSize(std::move(value)); return *this;}


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
    inline void SetCacheClusterStatus(CacheClusterStatus&& value) { m_cacheClusterStatus = std::move(value); }

    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline GetStageResult& WithCacheClusterStatus(const CacheClusterStatus& value) { SetCacheClusterStatus(value); return *this;}

    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline GetStageResult& WithCacheClusterStatus(CacheClusterStatus&& value) { SetCacheClusterStatus(std::move(value)); return *this;}


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
    inline void SetMethodSettings(Aws::Map<Aws::String, MethodSetting>&& value) { m_methodSettings = std::move(value); }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline GetStageResult& WithMethodSettings(const Aws::Map<Aws::String, MethodSetting>& value) { SetMethodSettings(value); return *this;}

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline GetStageResult& WithMethodSettings(Aws::Map<Aws::String, MethodSetting>&& value) { SetMethodSettings(std::move(value)); return *this;}

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline GetStageResult& AddMethodSettings(const Aws::String& key, const MethodSetting& value) { m_methodSettings.emplace(key, value); return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline GetStageResult& AddMethodSettings(Aws::String&& key, const MethodSetting& value) { m_methodSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline GetStageResult& AddMethodSettings(const Aws::String& key, MethodSetting&& value) { m_methodSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline GetStageResult& AddMethodSettings(Aws::String&& key, MethodSetting&& value) { m_methodSettings.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline GetStageResult& AddMethodSettings(const char* key, MethodSetting&& value) { m_methodSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline GetStageResult& AddMethodSettings(const char* key, const MethodSetting& value) { m_methodSettings.emplace(key, value); return *this; }


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
    inline void SetVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_variables = std::move(value); }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline GetStageResult& WithVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetVariables(value); return *this;}

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline GetStageResult& WithVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetVariables(std::move(value)); return *this;}

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline GetStageResult& AddVariables(const Aws::String& key, const Aws::String& value) { m_variables.emplace(key, value); return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline GetStageResult& AddVariables(Aws::String&& key, const Aws::String& value) { m_variables.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline GetStageResult& AddVariables(const Aws::String& key, Aws::String&& value) { m_variables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline GetStageResult& AddVariables(Aws::String&& key, Aws::String&& value) { m_variables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline GetStageResult& AddVariables(const char* key, Aws::String&& value) { m_variables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline GetStageResult& AddVariables(Aws::String&& key, const char* value) { m_variables.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline GetStageResult& AddVariables(const char* key, const char* value) { m_variables.emplace(key, value); return *this; }


    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline const Aws::String& GetDocumentationVersion() const{ return m_documentationVersion; }

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline void SetDocumentationVersion(const Aws::String& value) { m_documentationVersion = value; }

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline void SetDocumentationVersion(Aws::String&& value) { m_documentationVersion = std::move(value); }

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline void SetDocumentationVersion(const char* value) { m_documentationVersion.assign(value); }

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline GetStageResult& WithDocumentationVersion(const Aws::String& value) { SetDocumentationVersion(value); return *this;}

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline GetStageResult& WithDocumentationVersion(Aws::String&& value) { SetDocumentationVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline GetStageResult& WithDocumentationVersion(const char* value) { SetDocumentationVersion(value); return *this;}


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
    inline GetStageResult& WithAccessLogSettings(const AccessLogSettings& value) { SetAccessLogSettings(value); return *this;}

    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline GetStageResult& WithAccessLogSettings(AccessLogSettings&& value) { SetAccessLogSettings(std::move(value)); return *this;}


    /**
     * <p>Settings for the canary deployment in this stage.</p>
     */
    inline const CanarySettings& GetCanarySettings() const{ return m_canarySettings; }

    /**
     * <p>Settings for the canary deployment in this stage.</p>
     */
    inline void SetCanarySettings(const CanarySettings& value) { m_canarySettings = value; }

    /**
     * <p>Settings for the canary deployment in this stage.</p>
     */
    inline void SetCanarySettings(CanarySettings&& value) { m_canarySettings = std::move(value); }

    /**
     * <p>Settings for the canary deployment in this stage.</p>
     */
    inline GetStageResult& WithCanarySettings(const CanarySettings& value) { SetCanarySettings(value); return *this;}

    /**
     * <p>Settings for the canary deployment in this stage.</p>
     */
    inline GetStageResult& WithCanarySettings(CanarySettings&& value) { SetCanarySettings(std::move(value)); return *this;}


    /**
     * <p>Specifies whether active tracing with X-ray is enabled for the
     * <a>Stage</a>.</p>
     */
    inline bool GetTracingEnabled() const{ return m_tracingEnabled; }

    /**
     * <p>Specifies whether active tracing with X-ray is enabled for the
     * <a>Stage</a>.</p>
     */
    inline void SetTracingEnabled(bool value) { m_tracingEnabled = value; }

    /**
     * <p>Specifies whether active tracing with X-ray is enabled for the
     * <a>Stage</a>.</p>
     */
    inline GetStageResult& WithTracingEnabled(bool value) { SetTracingEnabled(value); return *this;}


    /**
     * <p>The ARN of the WebAcl associated with the <a>Stage</a>.</p>
     */
    inline const Aws::String& GetWebAclArn() const{ return m_webAclArn; }

    /**
     * <p>The ARN of the WebAcl associated with the <a>Stage</a>.</p>
     */
    inline void SetWebAclArn(const Aws::String& value) { m_webAclArn = value; }

    /**
     * <p>The ARN of the WebAcl associated with the <a>Stage</a>.</p>
     */
    inline void SetWebAclArn(Aws::String&& value) { m_webAclArn = std::move(value); }

    /**
     * <p>The ARN of the WebAcl associated with the <a>Stage</a>.</p>
     */
    inline void SetWebAclArn(const char* value) { m_webAclArn.assign(value); }

    /**
     * <p>The ARN of the WebAcl associated with the <a>Stage</a>.</p>
     */
    inline GetStageResult& WithWebAclArn(const Aws::String& value) { SetWebAclArn(value); return *this;}

    /**
     * <p>The ARN of the WebAcl associated with the <a>Stage</a>.</p>
     */
    inline GetStageResult& WithWebAclArn(Aws::String&& value) { SetWebAclArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the WebAcl associated with the <a>Stage</a>.</p>
     */
    inline GetStageResult& WithWebAclArn(const char* value) { SetWebAclArn(value); return *this;}


    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetStageResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetStageResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetStageResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetStageResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetStageResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetStageResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetStageResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetStageResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetStageResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


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
    inline GetStageResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline GetStageResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the stage last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The timestamp when the stage last updated.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The timestamp when the stage last updated.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The timestamp when the stage last updated.</p>
     */
    inline GetStageResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The timestamp when the stage last updated.</p>
     */
    inline GetStageResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}

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

    Aws::String m_documentationVersion;

    AccessLogSettings m_accessLogSettings;

    CanarySettings m_canarySettings;

    bool m_tracingEnabled;

    Aws::String m_webAclArn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_createdDate;

    Aws::Utils::DateTime m_lastUpdatedDate;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
