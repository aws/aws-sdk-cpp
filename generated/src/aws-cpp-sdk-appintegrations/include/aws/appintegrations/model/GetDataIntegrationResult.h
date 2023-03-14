/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/ScheduleConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appintegrations/model/FileConfiguration.h>
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
  class GetDataIntegrationResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API GetDataIntegrationResult();
    AWS_APPINTEGRATIONSSERVICE_API GetDataIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API GetDataIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the DataIntegration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DataIntegration.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DataIntegration.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DataIntegration.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DataIntegration.</p>
     */
    inline GetDataIntegrationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DataIntegration.</p>
     */
    inline GetDataIntegrationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DataIntegration.</p>
     */
    inline GetDataIntegrationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A unique identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>A unique identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>A unique identifier.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>A unique identifier.</p>
     */
    inline GetDataIntegrationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier.</p>
     */
    inline GetDataIntegrationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier.</p>
     */
    inline GetDataIntegrationResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline GetDataIntegrationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline GetDataIntegrationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline GetDataIntegrationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline GetDataIntegrationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline GetDataIntegrationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline GetDataIntegrationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline void SetKmsKey(const Aws::String& value) { m_kmsKey = value; }

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline void SetKmsKey(Aws::String&& value) { m_kmsKey = std::move(value); }

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline void SetKmsKey(const char* value) { m_kmsKey.assign(value); }

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline GetDataIntegrationResult& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline GetDataIntegrationResult& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline GetDataIntegrationResult& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}


    /**
     * <p>The URI of the data source.</p>
     */
    inline const Aws::String& GetSourceURI() const{ return m_sourceURI; }

    /**
     * <p>The URI of the data source.</p>
     */
    inline void SetSourceURI(const Aws::String& value) { m_sourceURI = value; }

    /**
     * <p>The URI of the data source.</p>
     */
    inline void SetSourceURI(Aws::String&& value) { m_sourceURI = std::move(value); }

    /**
     * <p>The URI of the data source.</p>
     */
    inline void SetSourceURI(const char* value) { m_sourceURI.assign(value); }

    /**
     * <p>The URI of the data source.</p>
     */
    inline GetDataIntegrationResult& WithSourceURI(const Aws::String& value) { SetSourceURI(value); return *this;}

    /**
     * <p>The URI of the data source.</p>
     */
    inline GetDataIntegrationResult& WithSourceURI(Aws::String&& value) { SetSourceURI(std::move(value)); return *this;}

    /**
     * <p>The URI of the data source.</p>
     */
    inline GetDataIntegrationResult& WithSourceURI(const char* value) { SetSourceURI(value); return *this;}


    /**
     * <p>The name of the data and how often it should be pulled from the source.</p>
     */
    inline const ScheduleConfiguration& GetScheduleConfiguration() const{ return m_scheduleConfiguration; }

    /**
     * <p>The name of the data and how often it should be pulled from the source.</p>
     */
    inline void SetScheduleConfiguration(const ScheduleConfiguration& value) { m_scheduleConfiguration = value; }

    /**
     * <p>The name of the data and how often it should be pulled from the source.</p>
     */
    inline void SetScheduleConfiguration(ScheduleConfiguration&& value) { m_scheduleConfiguration = std::move(value); }

    /**
     * <p>The name of the data and how often it should be pulled from the source.</p>
     */
    inline GetDataIntegrationResult& WithScheduleConfiguration(const ScheduleConfiguration& value) { SetScheduleConfiguration(value); return *this;}

    /**
     * <p>The name of the data and how often it should be pulled from the source.</p>
     */
    inline GetDataIntegrationResult& WithScheduleConfiguration(ScheduleConfiguration&& value) { SetScheduleConfiguration(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline GetDataIntegrationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline GetDataIntegrationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline GetDataIntegrationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline GetDataIntegrationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline GetDataIntegrationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline GetDataIntegrationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline GetDataIntegrationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline GetDataIntegrationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline GetDataIntegrationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The configuration for what files should be pulled from the source.</p>
     */
    inline const FileConfiguration& GetFileConfiguration() const{ return m_fileConfiguration; }

    /**
     * <p>The configuration for what files should be pulled from the source.</p>
     */
    inline void SetFileConfiguration(const FileConfiguration& value) { m_fileConfiguration = value; }

    /**
     * <p>The configuration for what files should be pulled from the source.</p>
     */
    inline void SetFileConfiguration(FileConfiguration&& value) { m_fileConfiguration = std::move(value); }

    /**
     * <p>The configuration for what files should be pulled from the source.</p>
     */
    inline GetDataIntegrationResult& WithFileConfiguration(const FileConfiguration& value) { SetFileConfiguration(value); return *this;}

    /**
     * <p>The configuration for what files should be pulled from the source.</p>
     */
    inline GetDataIntegrationResult& WithFileConfiguration(FileConfiguration&& value) { SetFileConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration for what data should be pulled from the source.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetObjectConfiguration() const{ return m_objectConfiguration; }

    /**
     * <p>The configuration for what data should be pulled from the source.</p>
     */
    inline void SetObjectConfiguration(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { m_objectConfiguration = value; }

    /**
     * <p>The configuration for what data should be pulled from the source.</p>
     */
    inline void SetObjectConfiguration(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { m_objectConfiguration = std::move(value); }

    /**
     * <p>The configuration for what data should be pulled from the source.</p>
     */
    inline GetDataIntegrationResult& WithObjectConfiguration(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { SetObjectConfiguration(value); return *this;}

    /**
     * <p>The configuration for what data should be pulled from the source.</p>
     */
    inline GetDataIntegrationResult& WithObjectConfiguration(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { SetObjectConfiguration(std::move(value)); return *this;}

    /**
     * <p>The configuration for what data should be pulled from the source.</p>
     */
    inline GetDataIntegrationResult& AddObjectConfiguration(const Aws::String& key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_objectConfiguration.emplace(key, value); return *this; }

    /**
     * <p>The configuration for what data should be pulled from the source.</p>
     */
    inline GetDataIntegrationResult& AddObjectConfiguration(Aws::String&& key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_objectConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>The configuration for what data should be pulled from the source.</p>
     */
    inline GetDataIntegrationResult& AddObjectConfiguration(const Aws::String& key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_objectConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration for what data should be pulled from the source.</p>
     */
    inline GetDataIntegrationResult& AddObjectConfiguration(Aws::String&& key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_objectConfiguration.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The configuration for what data should be pulled from the source.</p>
     */
    inline GetDataIntegrationResult& AddObjectConfiguration(const char* key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_objectConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration for what data should be pulled from the source.</p>
     */
    inline GetDataIntegrationResult& AddObjectConfiguration(const char* key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_objectConfiguration.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDataIntegrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDataIntegrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDataIntegrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_kmsKey;

    Aws::String m_sourceURI;

    ScheduleConfiguration m_scheduleConfiguration;

    Aws::Map<Aws::String, Aws::String> m_tags;

    FileConfiguration m_fileConfiguration;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_objectConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
