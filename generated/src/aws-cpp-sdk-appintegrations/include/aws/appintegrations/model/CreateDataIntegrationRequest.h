/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/AppIntegrationsServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/ScheduleConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appintegrations/model/FileConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

  /**
   */
  class CreateDataIntegrationRequest : public AppIntegrationsServiceRequest
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API CreateDataIntegrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataIntegration"; }

    AWS_APPINTEGRATIONSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDataIntegrationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateDataIntegrationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key ARN for the DataIntegration.</p>
     */
    inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    template<typename KmsKeyT = Aws::String>
    void SetKmsKey(KmsKeyT&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::forward<KmsKeyT>(value); }
    template<typename KmsKeyT = Aws::String>
    CreateDataIntegrationRequest& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the data source.</p>
     */
    inline const Aws::String& GetSourceURI() const { return m_sourceURI; }
    inline bool SourceURIHasBeenSet() const { return m_sourceURIHasBeenSet; }
    template<typename SourceURIT = Aws::String>
    void SetSourceURI(SourceURIT&& value) { m_sourceURIHasBeenSet = true; m_sourceURI = std::forward<SourceURIT>(value); }
    template<typename SourceURIT = Aws::String>
    CreateDataIntegrationRequest& WithSourceURI(SourceURIT&& value) { SetSourceURI(std::forward<SourceURIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data and how often it should be pulled from the source.</p>
     */
    inline const ScheduleConfiguration& GetScheduleConfig() const { return m_scheduleConfig; }
    inline bool ScheduleConfigHasBeenSet() const { return m_scheduleConfigHasBeenSet; }
    template<typename ScheduleConfigT = ScheduleConfiguration>
    void SetScheduleConfig(ScheduleConfigT&& value) { m_scheduleConfigHasBeenSet = true; m_scheduleConfig = std::forward<ScheduleConfigT>(value); }
    template<typename ScheduleConfigT = ScheduleConfiguration>
    CreateDataIntegrationRequest& WithScheduleConfig(ScheduleConfigT&& value) { SetScheduleConfig(std::forward<ScheduleConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDataIntegrationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDataIntegrationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateDataIntegrationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for what files should be pulled from the source.</p>
     */
    inline const FileConfiguration& GetFileConfiguration() const { return m_fileConfiguration; }
    inline bool FileConfigurationHasBeenSet() const { return m_fileConfigurationHasBeenSet; }
    template<typename FileConfigurationT = FileConfiguration>
    void SetFileConfiguration(FileConfigurationT&& value) { m_fileConfigurationHasBeenSet = true; m_fileConfiguration = std::forward<FileConfigurationT>(value); }
    template<typename FileConfigurationT = FileConfiguration>
    CreateDataIntegrationRequest& WithFileConfiguration(FileConfigurationT&& value) { SetFileConfiguration(std::forward<FileConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for what data should be pulled from the source.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetObjectConfiguration() const { return m_objectConfiguration; }
    inline bool ObjectConfigurationHasBeenSet() const { return m_objectConfigurationHasBeenSet; }
    template<typename ObjectConfigurationT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
    void SetObjectConfiguration(ObjectConfigurationT&& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration = std::forward<ObjectConfigurationT>(value); }
    template<typename ObjectConfigurationT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
    CreateDataIntegrationRequest& WithObjectConfiguration(ObjectConfigurationT&& value) { SetObjectConfiguration(std::forward<ObjectConfigurationT>(value)); return *this;}
    template<typename ObjectConfigurationKeyT = Aws::String, typename ObjectConfigurationValueT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    CreateDataIntegrationRequest& AddObjectConfiguration(ObjectConfigurationKeyT&& key, ObjectConfigurationValueT&& value) {
      m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(std::forward<ObjectConfigurationKeyT>(key), std::forward<ObjectConfigurationValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    Aws::String m_sourceURI;
    bool m_sourceURIHasBeenSet = false;

    ScheduleConfiguration m_scheduleConfig;
    bool m_scheduleConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    FileConfiguration m_fileConfiguration;
    bool m_fileConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_objectConfiguration;
    bool m_objectConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
