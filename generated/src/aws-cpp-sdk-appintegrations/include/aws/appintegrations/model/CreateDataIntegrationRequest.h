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
    AWS_APPINTEGRATIONSSERVICE_API CreateDataIntegrationRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateDataIntegrationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDataIntegrationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDataIntegrationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateDataIntegrationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateDataIntegrationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateDataIntegrationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key ARN for the DataIntegration.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }
    inline CreateDataIntegrationRequest& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}
    inline CreateDataIntegrationRequest& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}
    inline CreateDataIntegrationRequest& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the data source.</p>
     */
    inline const Aws::String& GetSourceURI() const{ return m_sourceURI; }
    inline bool SourceURIHasBeenSet() const { return m_sourceURIHasBeenSet; }
    inline void SetSourceURI(const Aws::String& value) { m_sourceURIHasBeenSet = true; m_sourceURI = value; }
    inline void SetSourceURI(Aws::String&& value) { m_sourceURIHasBeenSet = true; m_sourceURI = std::move(value); }
    inline void SetSourceURI(const char* value) { m_sourceURIHasBeenSet = true; m_sourceURI.assign(value); }
    inline CreateDataIntegrationRequest& WithSourceURI(const Aws::String& value) { SetSourceURI(value); return *this;}
    inline CreateDataIntegrationRequest& WithSourceURI(Aws::String&& value) { SetSourceURI(std::move(value)); return *this;}
    inline CreateDataIntegrationRequest& WithSourceURI(const char* value) { SetSourceURI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data and how often it should be pulled from the source.</p>
     */
    inline const ScheduleConfiguration& GetScheduleConfig() const{ return m_scheduleConfig; }
    inline bool ScheduleConfigHasBeenSet() const { return m_scheduleConfigHasBeenSet; }
    inline void SetScheduleConfig(const ScheduleConfiguration& value) { m_scheduleConfigHasBeenSet = true; m_scheduleConfig = value; }
    inline void SetScheduleConfig(ScheduleConfiguration&& value) { m_scheduleConfigHasBeenSet = true; m_scheduleConfig = std::move(value); }
    inline CreateDataIntegrationRequest& WithScheduleConfig(const ScheduleConfiguration& value) { SetScheduleConfig(value); return *this;}
    inline CreateDataIntegrationRequest& WithScheduleConfig(ScheduleConfiguration&& value) { SetScheduleConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDataIntegrationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateDataIntegrationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDataIntegrationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateDataIntegrationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDataIntegrationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDataIntegrationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDataIntegrationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDataIntegrationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDataIntegrationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateDataIntegrationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateDataIntegrationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateDataIntegrationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for what files should be pulled from the source.</p>
     */
    inline const FileConfiguration& GetFileConfiguration() const{ return m_fileConfiguration; }
    inline bool FileConfigurationHasBeenSet() const { return m_fileConfigurationHasBeenSet; }
    inline void SetFileConfiguration(const FileConfiguration& value) { m_fileConfigurationHasBeenSet = true; m_fileConfiguration = value; }
    inline void SetFileConfiguration(FileConfiguration&& value) { m_fileConfigurationHasBeenSet = true; m_fileConfiguration = std::move(value); }
    inline CreateDataIntegrationRequest& WithFileConfiguration(const FileConfiguration& value) { SetFileConfiguration(value); return *this;}
    inline CreateDataIntegrationRequest& WithFileConfiguration(FileConfiguration&& value) { SetFileConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for what data should be pulled from the source.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetObjectConfiguration() const{ return m_objectConfiguration; }
    inline bool ObjectConfigurationHasBeenSet() const { return m_objectConfigurationHasBeenSet; }
    inline void SetObjectConfiguration(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration = value; }
    inline void SetObjectConfiguration(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration = std::move(value); }
    inline CreateDataIntegrationRequest& WithObjectConfiguration(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { SetObjectConfiguration(value); return *this;}
    inline CreateDataIntegrationRequest& WithObjectConfiguration(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { SetObjectConfiguration(std::move(value)); return *this;}
    inline CreateDataIntegrationRequest& AddObjectConfiguration(const Aws::String& key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(key, value); return *this; }
    inline CreateDataIntegrationRequest& AddObjectConfiguration(Aws::String&& key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(std::move(key), value); return *this; }
    inline CreateDataIntegrationRequest& AddObjectConfiguration(const Aws::String& key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(key, std::move(value)); return *this; }
    inline CreateDataIntegrationRequest& AddObjectConfiguration(Aws::String&& key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDataIntegrationRequest& AddObjectConfiguration(const char* key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(key, std::move(value)); return *this; }
    inline CreateDataIntegrationRequest& AddObjectConfiguration(const char* key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(key, value); return *this; }
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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    FileConfiguration m_fileConfiguration;
    bool m_fileConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_objectConfiguration;
    bool m_objectConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
