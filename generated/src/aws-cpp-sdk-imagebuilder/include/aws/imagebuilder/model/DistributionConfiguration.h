/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/Distribution.h>
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
   * <p>A distribution configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DistributionConfiguration">AWS
   * API Reference</a></p>
   */
  class DistributionConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API DistributionConfiguration();
    AWS_IMAGEBUILDER_API DistributionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API DistributionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline DistributionConfiguration& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration.</p>
     */
    inline DistributionConfiguration& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration.</p>
     */
    inline DistributionConfiguration& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline DistributionConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the distribution configuration.</p>
     */
    inline DistributionConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the distribution configuration.</p>
     */
    inline DistributionConfiguration& WithName(const char* value) { SetName(value); return *this;}


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
    inline DistributionConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the distribution configuration.</p>
     */
    inline DistributionConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the distribution configuration.</p>
     */
    inline DistributionConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The distribution objects that apply Region-specific settings for the
     * deployment of the image to targeted Regions.</p>
     */
    inline const Aws::Vector<Distribution>& GetDistributions() const{ return m_distributions; }

    /**
     * <p>The distribution objects that apply Region-specific settings for the
     * deployment of the image to targeted Regions.</p>
     */
    inline bool DistributionsHasBeenSet() const { return m_distributionsHasBeenSet; }

    /**
     * <p>The distribution objects that apply Region-specific settings for the
     * deployment of the image to targeted Regions.</p>
     */
    inline void SetDistributions(const Aws::Vector<Distribution>& value) { m_distributionsHasBeenSet = true; m_distributions = value; }

    /**
     * <p>The distribution objects that apply Region-specific settings for the
     * deployment of the image to targeted Regions.</p>
     */
    inline void SetDistributions(Aws::Vector<Distribution>&& value) { m_distributionsHasBeenSet = true; m_distributions = std::move(value); }

    /**
     * <p>The distribution objects that apply Region-specific settings for the
     * deployment of the image to targeted Regions.</p>
     */
    inline DistributionConfiguration& WithDistributions(const Aws::Vector<Distribution>& value) { SetDistributions(value); return *this;}

    /**
     * <p>The distribution objects that apply Region-specific settings for the
     * deployment of the image to targeted Regions.</p>
     */
    inline DistributionConfiguration& WithDistributions(Aws::Vector<Distribution>&& value) { SetDistributions(std::move(value)); return *this;}

    /**
     * <p>The distribution objects that apply Region-specific settings for the
     * deployment of the image to targeted Regions.</p>
     */
    inline DistributionConfiguration& AddDistributions(const Distribution& value) { m_distributionsHasBeenSet = true; m_distributions.push_back(value); return *this; }

    /**
     * <p>The distribution objects that apply Region-specific settings for the
     * deployment of the image to targeted Regions.</p>
     */
    inline DistributionConfiguration& AddDistributions(Distribution&& value) { m_distributionsHasBeenSet = true; m_distributions.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum duration in minutes for this distribution configuration.</p>
     */
    inline int GetTimeoutMinutes() const{ return m_timeoutMinutes; }

    /**
     * <p>The maximum duration in minutes for this distribution configuration.</p>
     */
    inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }

    /**
     * <p>The maximum duration in minutes for this distribution configuration.</p>
     */
    inline void SetTimeoutMinutes(int value) { m_timeoutMinutesHasBeenSet = true; m_timeoutMinutes = value; }

    /**
     * <p>The maximum duration in minutes for this distribution configuration.</p>
     */
    inline DistributionConfiguration& WithTimeoutMinutes(int value) { SetTimeoutMinutes(value); return *this;}


    /**
     * <p>The date on which this distribution configuration was created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date on which this distribution configuration was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date on which this distribution configuration was created.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date on which this distribution configuration was created.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date on which this distribution configuration was created.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The date on which this distribution configuration was created.</p>
     */
    inline DistributionConfiguration& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date on which this distribution configuration was created.</p>
     */
    inline DistributionConfiguration& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The date on which this distribution configuration was created.</p>
     */
    inline DistributionConfiguration& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


    /**
     * <p>The date on which this distribution configuration was last updated.</p>
     */
    inline const Aws::String& GetDateUpdated() const{ return m_dateUpdated; }

    /**
     * <p>The date on which this distribution configuration was last updated.</p>
     */
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }

    /**
     * <p>The date on which this distribution configuration was last updated.</p>
     */
    inline void SetDateUpdated(const Aws::String& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }

    /**
     * <p>The date on which this distribution configuration was last updated.</p>
     */
    inline void SetDateUpdated(Aws::String&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }

    /**
     * <p>The date on which this distribution configuration was last updated.</p>
     */
    inline void SetDateUpdated(const char* value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated.assign(value); }

    /**
     * <p>The date on which this distribution configuration was last updated.</p>
     */
    inline DistributionConfiguration& WithDateUpdated(const Aws::String& value) { SetDateUpdated(value); return *this;}

    /**
     * <p>The date on which this distribution configuration was last updated.</p>
     */
    inline DistributionConfiguration& WithDateUpdated(Aws::String&& value) { SetDateUpdated(std::move(value)); return *this;}

    /**
     * <p>The date on which this distribution configuration was last updated.</p>
     */
    inline DistributionConfiguration& WithDateUpdated(const char* value) { SetDateUpdated(value); return *this;}


    /**
     * <p>The tags of the distribution configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the distribution configuration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the distribution configuration.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the distribution configuration.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the distribution configuration.</p>
     */
    inline DistributionConfiguration& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the distribution configuration.</p>
     */
    inline DistributionConfiguration& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the distribution configuration.</p>
     */
    inline DistributionConfiguration& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the distribution configuration.</p>
     */
    inline DistributionConfiguration& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the distribution configuration.</p>
     */
    inline DistributionConfiguration& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the distribution configuration.</p>
     */
    inline DistributionConfiguration& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the distribution configuration.</p>
     */
    inline DistributionConfiguration& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the distribution configuration.</p>
     */
    inline DistributionConfiguration& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the distribution configuration.</p>
     */
    inline DistributionConfiguration& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Distribution> m_distributions;
    bool m_distributionsHasBeenSet = false;

    int m_timeoutMinutes;
    bool m_timeoutMinutesHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::String m_dateUpdated;
    bool m_dateUpdatedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
