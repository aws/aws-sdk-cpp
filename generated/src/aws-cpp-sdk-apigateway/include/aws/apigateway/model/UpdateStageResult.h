/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents a unique identifier for a version of a deployed RestApi that is
   * callable by users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Stage">AWS
   * API Reference</a></p>
   */
  class UpdateStageResult
  {
  public:
    AWS_APIGATEWAY_API UpdateStageResult();
    AWS_APIGATEWAY_API UpdateStageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API UpdateStageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Deployment that the stage points to.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentId.assign(value); }
    inline UpdateStageResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline UpdateStageResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline UpdateStageResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateId = value; }
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateId = std::move(value); }
    inline void SetClientCertificateId(const char* value) { m_clientCertificateId.assign(value); }
    inline UpdateStageResult& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}
    inline UpdateStageResult& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(std::move(value)); return *this;}
    inline UpdateStageResult& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to API Gateway. Stage names can only contain
     * alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }
    inline void SetStageName(const Aws::String& value) { m_stageName = value; }
    inline void SetStageName(Aws::String&& value) { m_stageName = std::move(value); }
    inline void SetStageName(const char* value) { m_stageName.assign(value); }
    inline UpdateStageResult& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline UpdateStageResult& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline UpdateStageResult& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateStageResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateStageResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateStageResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a cache cluster is enabled for the stage. To activate a
     * method-level cache, set <code>CachingEnabled</code> to <code>true</code> for a
     * method. </p>
     */
    inline bool GetCacheClusterEnabled() const{ return m_cacheClusterEnabled; }
    inline void SetCacheClusterEnabled(bool value) { m_cacheClusterEnabled = value; }
    inline UpdateStageResult& WithCacheClusterEnabled(bool value) { SetCacheClusterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage's cache capacity in GB. For more information about choosing a cache
     * size, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-caching.html">Enabling
     * API caching to enhance responsiveness</a>.</p>
     */
    inline const CacheClusterSize& GetCacheClusterSize() const{ return m_cacheClusterSize; }
    inline void SetCacheClusterSize(const CacheClusterSize& value) { m_cacheClusterSize = value; }
    inline void SetCacheClusterSize(CacheClusterSize&& value) { m_cacheClusterSize = std::move(value); }
    inline UpdateStageResult& WithCacheClusterSize(const CacheClusterSize& value) { SetCacheClusterSize(value); return *this;}
    inline UpdateStageResult& WithCacheClusterSize(CacheClusterSize&& value) { SetCacheClusterSize(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline const CacheClusterStatus& GetCacheClusterStatus() const{ return m_cacheClusterStatus; }
    inline void SetCacheClusterStatus(const CacheClusterStatus& value) { m_cacheClusterStatus = value; }
    inline void SetCacheClusterStatus(CacheClusterStatus&& value) { m_cacheClusterStatus = std::move(value); }
    inline UpdateStageResult& WithCacheClusterStatus(const CacheClusterStatus& value) { SetCacheClusterStatus(value); return *this;}
    inline UpdateStageResult& WithCacheClusterStatus(CacheClusterStatus&& value) { SetCacheClusterStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that defines the method settings for a Stage resource. Keys (designated
     * as <code>/{method_setting_key</code> below) are method paths defined as
     * <code>{resource_path}/{http_method}</code> for an individual method override, or
     * <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline const Aws::Map<Aws::String, MethodSetting>& GetMethodSettings() const{ return m_methodSettings; }
    inline void SetMethodSettings(const Aws::Map<Aws::String, MethodSetting>& value) { m_methodSettings = value; }
    inline void SetMethodSettings(Aws::Map<Aws::String, MethodSetting>&& value) { m_methodSettings = std::move(value); }
    inline UpdateStageResult& WithMethodSettings(const Aws::Map<Aws::String, MethodSetting>& value) { SetMethodSettings(value); return *this;}
    inline UpdateStageResult& WithMethodSettings(Aws::Map<Aws::String, MethodSetting>&& value) { SetMethodSettings(std::move(value)); return *this;}
    inline UpdateStageResult& AddMethodSettings(const Aws::String& key, const MethodSetting& value) { m_methodSettings.emplace(key, value); return *this; }
    inline UpdateStageResult& AddMethodSettings(Aws::String&& key, const MethodSetting& value) { m_methodSettings.emplace(std::move(key), value); return *this; }
    inline UpdateStageResult& AddMethodSettings(const Aws::String& key, MethodSetting&& value) { m_methodSettings.emplace(key, std::move(value)); return *this; }
    inline UpdateStageResult& AddMethodSettings(Aws::String&& key, MethodSetting&& value) { m_methodSettings.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateStageResult& AddMethodSettings(const char* key, MethodSetting&& value) { m_methodSettings.emplace(key, std::move(value)); return *this; }
    inline UpdateStageResult& AddMethodSettings(const char* key, const MethodSetting& value) { m_methodSettings.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map that defines the stage variables for a Stage resource. Variable names
     * can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const{ return m_variables; }
    inline void SetVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_variables = value; }
    inline void SetVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_variables = std::move(value); }
    inline UpdateStageResult& WithVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetVariables(value); return *this;}
    inline UpdateStageResult& WithVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetVariables(std::move(value)); return *this;}
    inline UpdateStageResult& AddVariables(const Aws::String& key, const Aws::String& value) { m_variables.emplace(key, value); return *this; }
    inline UpdateStageResult& AddVariables(Aws::String&& key, const Aws::String& value) { m_variables.emplace(std::move(key), value); return *this; }
    inline UpdateStageResult& AddVariables(const Aws::String& key, Aws::String&& value) { m_variables.emplace(key, std::move(value)); return *this; }
    inline UpdateStageResult& AddVariables(Aws::String&& key, Aws::String&& value) { m_variables.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateStageResult& AddVariables(const char* key, Aws::String&& value) { m_variables.emplace(key, std::move(value)); return *this; }
    inline UpdateStageResult& AddVariables(Aws::String&& key, const char* value) { m_variables.emplace(std::move(key), value); return *this; }
    inline UpdateStageResult& AddVariables(const char* key, const char* value) { m_variables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline const Aws::String& GetDocumentationVersion() const{ return m_documentationVersion; }
    inline void SetDocumentationVersion(const Aws::String& value) { m_documentationVersion = value; }
    inline void SetDocumentationVersion(Aws::String&& value) { m_documentationVersion = std::move(value); }
    inline void SetDocumentationVersion(const char* value) { m_documentationVersion.assign(value); }
    inline UpdateStageResult& WithDocumentationVersion(const Aws::String& value) { SetDocumentationVersion(value); return *this;}
    inline UpdateStageResult& WithDocumentationVersion(Aws::String&& value) { SetDocumentationVersion(std::move(value)); return *this;}
    inline UpdateStageResult& WithDocumentationVersion(const char* value) { SetDocumentationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline const AccessLogSettings& GetAccessLogSettings() const{ return m_accessLogSettings; }
    inline void SetAccessLogSettings(const AccessLogSettings& value) { m_accessLogSettings = value; }
    inline void SetAccessLogSettings(AccessLogSettings&& value) { m_accessLogSettings = std::move(value); }
    inline UpdateStageResult& WithAccessLogSettings(const AccessLogSettings& value) { SetAccessLogSettings(value); return *this;}
    inline UpdateStageResult& WithAccessLogSettings(AccessLogSettings&& value) { SetAccessLogSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for the canary deployment in this stage.</p>
     */
    inline const CanarySettings& GetCanarySettings() const{ return m_canarySettings; }
    inline void SetCanarySettings(const CanarySettings& value) { m_canarySettings = value; }
    inline void SetCanarySettings(CanarySettings&& value) { m_canarySettings = std::move(value); }
    inline UpdateStageResult& WithCanarySettings(const CanarySettings& value) { SetCanarySettings(value); return *this;}
    inline UpdateStageResult& WithCanarySettings(CanarySettings&& value) { SetCanarySettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether active tracing with X-ray is enabled for the Stage.</p>
     */
    inline bool GetTracingEnabled() const{ return m_tracingEnabled; }
    inline void SetTracingEnabled(bool value) { m_tracingEnabled = value; }
    inline UpdateStageResult& WithTracingEnabled(bool value) { SetTracingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the WebAcl associated with the Stage.</p>
     */
    inline const Aws::String& GetWebAclArn() const{ return m_webAclArn; }
    inline void SetWebAclArn(const Aws::String& value) { m_webAclArn = value; }
    inline void SetWebAclArn(Aws::String&& value) { m_webAclArn = std::move(value); }
    inline void SetWebAclArn(const char* value) { m_webAclArn.assign(value); }
    inline UpdateStageResult& WithWebAclArn(const Aws::String& value) { SetWebAclArn(value); return *this;}
    inline UpdateStageResult& WithWebAclArn(Aws::String&& value) { SetWebAclArn(std::move(value)); return *this;}
    inline UpdateStageResult& WithWebAclArn(const char* value) { SetWebAclArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline UpdateStageResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UpdateStageResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateStageResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline UpdateStageResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateStageResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateStageResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateStageResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateStageResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateStageResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline UpdateStageResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline UpdateStageResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the stage last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }
    inline UpdateStageResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline UpdateStageResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateStageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateStageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateStageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
