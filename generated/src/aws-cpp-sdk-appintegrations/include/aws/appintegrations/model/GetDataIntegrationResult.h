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
    AWS_APPINTEGRATIONSSERVICE_API GetDataIntegrationResult() = default;
    AWS_APPINTEGRATIONSSERVICE_API GetDataIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API GetDataIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DataIntegration.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetDataIntegrationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetDataIntegrationResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetDataIntegrationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key ARN for the DataIntegration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetDataIntegrationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key ARN for the DataIntegration.</p>
     */
    inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
    template<typename KmsKeyT = Aws::String>
    void SetKmsKey(KmsKeyT&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::forward<KmsKeyT>(value); }
    template<typename KmsKeyT = Aws::String>
    GetDataIntegrationResult& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the data source.</p>
     */
    inline const Aws::String& GetSourceURI() const { return m_sourceURI; }
    template<typename SourceURIT = Aws::String>
    void SetSourceURI(SourceURIT&& value) { m_sourceURIHasBeenSet = true; m_sourceURI = std::forward<SourceURIT>(value); }
    template<typename SourceURIT = Aws::String>
    GetDataIntegrationResult& WithSourceURI(SourceURIT&& value) { SetSourceURI(std::forward<SourceURIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data and how often it should be pulled from the source.</p>
     */
    inline const ScheduleConfiguration& GetScheduleConfiguration() const { return m_scheduleConfiguration; }
    template<typename ScheduleConfigurationT = ScheduleConfiguration>
    void SetScheduleConfiguration(ScheduleConfigurationT&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::forward<ScheduleConfigurationT>(value); }
    template<typename ScheduleConfigurationT = ScheduleConfiguration>
    GetDataIntegrationResult& WithScheduleConfiguration(ScheduleConfigurationT&& value) { SetScheduleConfiguration(std::forward<ScheduleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetDataIntegrationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetDataIntegrationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration for what files should be pulled from the source.</p>
     */
    inline const FileConfiguration& GetFileConfiguration() const { return m_fileConfiguration; }
    template<typename FileConfigurationT = FileConfiguration>
    void SetFileConfiguration(FileConfigurationT&& value) { m_fileConfigurationHasBeenSet = true; m_fileConfiguration = std::forward<FileConfigurationT>(value); }
    template<typename FileConfigurationT = FileConfiguration>
    GetDataIntegrationResult& WithFileConfiguration(FileConfigurationT&& value) { SetFileConfiguration(std::forward<FileConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for what data should be pulled from the source.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetObjectConfiguration() const { return m_objectConfiguration; }
    template<typename ObjectConfigurationT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
    void SetObjectConfiguration(ObjectConfigurationT&& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration = std::forward<ObjectConfigurationT>(value); }
    template<typename ObjectConfigurationT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
    GetDataIntegrationResult& WithObjectConfiguration(ObjectConfigurationT&& value) { SetObjectConfiguration(std::forward<ObjectConfigurationT>(value)); return *this;}
    template<typename ObjectConfigurationKeyT = Aws::String, typename ObjectConfigurationValueT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    GetDataIntegrationResult& AddObjectConfiguration(ObjectConfigurationKeyT&& key, ObjectConfigurationValueT&& value) {
      m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(std::forward<ObjectConfigurationKeyT>(key), std::forward<ObjectConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataIntegrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    Aws::String m_sourceURI;
    bool m_sourceURIHasBeenSet = false;

    ScheduleConfiguration m_scheduleConfiguration;
    bool m_scheduleConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    FileConfiguration m_fileConfiguration;
    bool m_fileConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_objectConfiguration;
    bool m_objectConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
