/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/KafkaConnectRequest.h>
#include <aws/kafkaconnect/model/CustomPluginContentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/CustomPluginLocation.h>
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
  class CreateCustomPluginRequest : public KafkaConnectRequest
  {
  public:
    AWS_KAFKACONNECT_API CreateCustomPluginRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomPlugin"; }

    AWS_KAFKACONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The type of the plugin file.</p>
     */
    inline const CustomPluginContentType& GetContentType() const{ return m_contentType; }

    /**
     * <p>The type of the plugin file.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The type of the plugin file.</p>
     */
    inline void SetContentType(const CustomPluginContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The type of the plugin file.</p>
     */
    inline void SetContentType(CustomPluginContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The type of the plugin file.</p>
     */
    inline CreateCustomPluginRequest& WithContentType(const CustomPluginContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>The type of the plugin file.</p>
     */
    inline CreateCustomPluginRequest& WithContentType(CustomPluginContentType&& value) { SetContentType(std::move(value)); return *this;}


    /**
     * <p>A summary description of the custom plugin.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A summary description of the custom plugin.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A summary description of the custom plugin.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A summary description of the custom plugin.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A summary description of the custom plugin.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A summary description of the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A summary description of the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A summary description of the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the location of a custom plugin.</p>
     */
    inline const CustomPluginLocation& GetLocation() const{ return m_location; }

    /**
     * <p>Information about the location of a custom plugin.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Information about the location of a custom plugin.</p>
     */
    inline void SetLocation(const CustomPluginLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Information about the location of a custom plugin.</p>
     */
    inline void SetLocation(CustomPluginLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Information about the location of a custom plugin.</p>
     */
    inline CreateCustomPluginRequest& WithLocation(const CustomPluginLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>Information about the location of a custom plugin.</p>
     */
    inline CreateCustomPluginRequest& WithLocation(CustomPluginLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The name of the custom plugin.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The tags you want to attach to the custom plugin.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags you want to attach to the custom plugin.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags you want to attach to the custom plugin.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags you want to attach to the custom plugin.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags you want to attach to the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags you want to attach to the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags you want to attach to the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags you want to attach to the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags you want to attach to the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags you want to attach to the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags you want to attach to the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags you want to attach to the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags you want to attach to the custom plugin.</p>
     */
    inline CreateCustomPluginRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    CustomPluginContentType m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CustomPluginLocation m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
