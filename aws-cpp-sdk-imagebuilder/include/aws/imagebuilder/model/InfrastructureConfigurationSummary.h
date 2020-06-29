/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>The infrastructure used when building EC2 AMIs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/InfrastructureConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IMAGEBUILDER_API InfrastructureConfigurationSummary
  {
  public:
    InfrastructureConfigurationSummary();
    InfrastructureConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    InfrastructureConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline InfrastructureConfigurationSummary& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline InfrastructureConfigurationSummary& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline InfrastructureConfigurationSummary& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline const Aws::String& GetDateUpdated() const{ return m_dateUpdated; }

    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }

    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline void SetDateUpdated(const Aws::String& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }

    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline void SetDateUpdated(Aws::String&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }

    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline void SetDateUpdated(const char* value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated.assign(value); }

    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline InfrastructureConfigurationSummary& WithDateUpdated(const Aws::String& value) { SetDateUpdated(value); return *this;}

    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline InfrastructureConfigurationSummary& WithDateUpdated(Aws::String&& value) { SetDateUpdated(std::move(value)); return *this;}

    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline InfrastructureConfigurationSummary& WithDateUpdated(const char* value) { SetDateUpdated(value); return *this;}


    /**
     * <p>The tags attached to the image created by Image Builder.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>The tags attached to the image created by Image Builder.</p>
     */
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }

    /**
     * <p>The tags attached to the image created by Image Builder.</p>
     */
    inline void SetResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }

    /**
     * <p>The tags attached to the image created by Image Builder.</p>
     */
    inline void SetResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }

    /**
     * <p>The tags attached to the image created by Image Builder.</p>
     */
    inline InfrastructureConfigurationSummary& WithResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>The tags attached to the image created by Image Builder.</p>
     */
    inline InfrastructureConfigurationSummary& WithResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>The tags attached to the image created by Image Builder.</p>
     */
    inline InfrastructureConfigurationSummary& AddResourceTags(const Aws::String& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }

    /**
     * <p>The tags attached to the image created by Image Builder.</p>
     */
    inline InfrastructureConfigurationSummary& AddResourceTags(Aws::String&& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the image created by Image Builder.</p>
     */
    inline InfrastructureConfigurationSummary& AddResourceTags(const Aws::String& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the image created by Image Builder.</p>
     */
    inline InfrastructureConfigurationSummary& AddResourceTags(Aws::String&& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags attached to the image created by Image Builder.</p>
     */
    inline InfrastructureConfigurationSummary& AddResourceTags(const char* key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the image created by Image Builder.</p>
     */
    inline InfrastructureConfigurationSummary& AddResourceTags(Aws::String&& key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the image created by Image Builder.</p>
     */
    inline InfrastructureConfigurationSummary& AddResourceTags(const char* key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }


    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfigurationSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet;

    Aws::String m_dateUpdated;
    bool m_dateUpdatedHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_resourceTags;
    bool m_resourceTagsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
