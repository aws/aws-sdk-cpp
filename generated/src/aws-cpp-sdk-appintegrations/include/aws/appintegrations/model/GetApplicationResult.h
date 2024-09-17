/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/ApplicationSourceConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AppIntegrationsService
{
namespace Model
{
  class GetApplicationResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API GetApplicationResult();
    AWS_APPINTEGRATIONSSERVICE_API GetApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API GetApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetApplicationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetApplicationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetApplicationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the Application.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetApplicationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetApplicationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetApplicationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetApplicationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the application.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline void SetNamespace(const Aws::String& value) { m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespace.assign(value); }
    inline GetApplicationResult& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline GetApplicationResult& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline GetApplicationResult& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetApplicationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetApplicationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetApplicationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for where the application should be loaded from.</p>
     */
    inline const ApplicationSourceConfig& GetApplicationSourceConfig() const{ return m_applicationSourceConfig; }
    inline void SetApplicationSourceConfig(const ApplicationSourceConfig& value) { m_applicationSourceConfig = value; }
    inline void SetApplicationSourceConfig(ApplicationSourceConfig&& value) { m_applicationSourceConfig = std::move(value); }
    inline GetApplicationResult& WithApplicationSourceConfig(const ApplicationSourceConfig& value) { SetApplicationSourceConfig(value); return *this;}
    inline GetApplicationResult& WithApplicationSourceConfig(ApplicationSourceConfig&& value) { SetApplicationSourceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The created time of the Application.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }
    inline GetApplicationResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline GetApplicationResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time of the Application.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline GetApplicationResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline GetApplicationResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetApplicationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetApplicationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetApplicationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetApplicationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetApplicationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetApplicationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetApplicationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetApplicationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetApplicationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration of events or requests that the application has access
     * to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPermissions() const{ return m_permissions; }
    inline void SetPermissions(const Aws::Vector<Aws::String>& value) { m_permissions = value; }
    inline void SetPermissions(Aws::Vector<Aws::String>&& value) { m_permissions = std::move(value); }
    inline GetApplicationResult& WithPermissions(const Aws::Vector<Aws::String>& value) { SetPermissions(value); return *this;}
    inline GetApplicationResult& WithPermissions(Aws::Vector<Aws::String>&& value) { SetPermissions(std::move(value)); return *this;}
    inline GetApplicationResult& AddPermissions(const Aws::String& value) { m_permissions.push_back(value); return *this; }
    inline GetApplicationResult& AddPermissions(Aws::String&& value) { m_permissions.push_back(std::move(value)); return *this; }
    inline GetApplicationResult& AddPermissions(const char* value) { m_permissions.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_namespace;

    Aws::String m_description;

    ApplicationSourceConfig m_applicationSourceConfig;

    Aws::Utils::DateTime m_createdTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Vector<Aws::String> m_permissions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
