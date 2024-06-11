/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/KafkaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

  /**
   */
  class CreateWorkerConfigurationRequest : public KafkaConnectRequest
  {
  public:
    AWS_KAFKACONNECT_API CreateWorkerConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkerConfiguration"; }

    AWS_KAFKACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A summary description of the worker configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateWorkerConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateWorkerConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateWorkerConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the worker configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateWorkerConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateWorkerConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateWorkerConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Base64 encoded contents of connect-distributed.properties file.</p>
     */
    inline const Aws::String& GetPropertiesFileContent() const{ return m_propertiesFileContent; }
    inline bool PropertiesFileContentHasBeenSet() const { return m_propertiesFileContentHasBeenSet; }
    inline void SetPropertiesFileContent(const Aws::String& value) { m_propertiesFileContentHasBeenSet = true; m_propertiesFileContent = value; }
    inline void SetPropertiesFileContent(Aws::String&& value) { m_propertiesFileContentHasBeenSet = true; m_propertiesFileContent = std::move(value); }
    inline void SetPropertiesFileContent(const char* value) { m_propertiesFileContentHasBeenSet = true; m_propertiesFileContent.assign(value); }
    inline CreateWorkerConfigurationRequest& WithPropertiesFileContent(const Aws::String& value) { SetPropertiesFileContent(value); return *this;}
    inline CreateWorkerConfigurationRequest& WithPropertiesFileContent(Aws::String&& value) { SetPropertiesFileContent(std::move(value)); return *this;}
    inline CreateWorkerConfigurationRequest& WithPropertiesFileContent(const char* value) { SetPropertiesFileContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags you want to attach to the worker configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateWorkerConfigurationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateWorkerConfigurationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateWorkerConfigurationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateWorkerConfigurationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateWorkerConfigurationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateWorkerConfigurationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateWorkerConfigurationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateWorkerConfigurationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateWorkerConfigurationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_propertiesFileContent;
    bool m_propertiesFileContentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
