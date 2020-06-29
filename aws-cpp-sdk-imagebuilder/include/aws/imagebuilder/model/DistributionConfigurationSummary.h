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
   * <p>A high-level overview of a distribution configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DistributionConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IMAGEBUILDER_API DistributionConfigurationSummary
  {
  public:
    DistributionConfigurationSummary();
    DistributionConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    DistributionConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the distribution configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the distribution configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the distribution configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the distribution configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the distribution configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the distribution configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the distribution configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the distribution configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the distribution configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the distribution configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date on which the distribution configuration was created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date on which the distribution configuration was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date on which the distribution configuration was created.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date on which the distribution configuration was created.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date on which the distribution configuration was created.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The date on which the distribution configuration was created.</p>
     */
    inline DistributionConfigurationSummary& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date on which the distribution configuration was created.</p>
     */
    inline DistributionConfigurationSummary& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The date on which the distribution configuration was created.</p>
     */
    inline DistributionConfigurationSummary& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


    /**
     * <p>The date on which the distribution configuration was updated.</p>
     */
    inline const Aws::String& GetDateUpdated() const{ return m_dateUpdated; }

    /**
     * <p>The date on which the distribution configuration was updated.</p>
     */
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }

    /**
     * <p>The date on which the distribution configuration was updated.</p>
     */
    inline void SetDateUpdated(const Aws::String& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }

    /**
     * <p>The date on which the distribution configuration was updated.</p>
     */
    inline void SetDateUpdated(Aws::String&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }

    /**
     * <p>The date on which the distribution configuration was updated.</p>
     */
    inline void SetDateUpdated(const char* value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated.assign(value); }

    /**
     * <p>The date on which the distribution configuration was updated.</p>
     */
    inline DistributionConfigurationSummary& WithDateUpdated(const Aws::String& value) { SetDateUpdated(value); return *this;}

    /**
     * <p>The date on which the distribution configuration was updated.</p>
     */
    inline DistributionConfigurationSummary& WithDateUpdated(Aws::String&& value) { SetDateUpdated(std::move(value)); return *this;}

    /**
     * <p>The date on which the distribution configuration was updated.</p>
     */
    inline DistributionConfigurationSummary& WithDateUpdated(const char* value) { SetDateUpdated(value); return *this;}


    /**
     * <p>The tags associated with the distribution configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the distribution configuration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the distribution configuration.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the distribution configuration.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags associated with the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags associated with the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the distribution configuration.</p>
     */
    inline DistributionConfigurationSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
