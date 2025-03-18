/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/evidently/model/FeatureEvaluationStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/VariationConfig.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class CreateFeatureRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API CreateFeatureRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFeature"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the variation to use as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p> <p>This variation must also be listed in the
     * <code>variations</code> structure.</p> <p>If you omit
     * <code>defaultVariation</code>, the first variation listed in the
     * <code>variations</code> structure is used as the default variation.</p>
     */
    inline const Aws::String& GetDefaultVariation() const { return m_defaultVariation; }
    inline bool DefaultVariationHasBeenSet() const { return m_defaultVariationHasBeenSet; }
    template<typename DefaultVariationT = Aws::String>
    void SetDefaultVariation(DefaultVariationT&& value) { m_defaultVariationHasBeenSet = true; m_defaultVariation = std::forward<DefaultVariationT>(value); }
    template<typename DefaultVariationT = Aws::String>
    CreateFeatureRequest& WithDefaultVariation(DefaultVariationT&& value) { SetDefaultVariation(std::forward<DefaultVariationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the feature.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateFeatureRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify users that should always be served a specific variation of a feature.
     * Each user is specified by a key-value pair . For each key, specify a user by
     * entering their user ID, account ID, or some other identifier. For the value,
     * specify the name of the variation that they are to be served.</p> <p>This
     * parameter is limited to 2500 overrides or a total of 40KB. The 40KB limit
     * includes an overhead of 6 bytes per override.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEntityOverrides() const { return m_entityOverrides; }
    inline bool EntityOverridesHasBeenSet() const { return m_entityOverridesHasBeenSet; }
    template<typename EntityOverridesT = Aws::Map<Aws::String, Aws::String>>
    void SetEntityOverrides(EntityOverridesT&& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides = std::forward<EntityOverridesT>(value); }
    template<typename EntityOverridesT = Aws::Map<Aws::String, Aws::String>>
    CreateFeatureRequest& WithEntityOverrides(EntityOverridesT&& value) { SetEntityOverrides(std::forward<EntityOverridesT>(value)); return *this;}
    template<typename EntityOverridesKeyT = Aws::String, typename EntityOverridesValueT = Aws::String>
    CreateFeatureRequest& AddEntityOverrides(EntityOverridesKeyT&& key, EntityOverridesValueT&& value) {
      m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(std::forward<EntityOverridesKeyT>(key), std::forward<EntityOverridesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specify <code>ALL_RULES</code> to activate the traffic allocation specified
     * by any ongoing launches or experiments. Specify <code>DEFAULT_VARIATION</code>
     * to serve the default variation to all users instead.</p>
     */
    inline FeatureEvaluationStrategy GetEvaluationStrategy() const { return m_evaluationStrategy; }
    inline bool EvaluationStrategyHasBeenSet() const { return m_evaluationStrategyHasBeenSet; }
    inline void SetEvaluationStrategy(FeatureEvaluationStrategy value) { m_evaluationStrategyHasBeenSet = true; m_evaluationStrategy = value; }
    inline CreateFeatureRequest& WithEvaluationStrategy(FeatureEvaluationStrategy value) { SetEvaluationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the new feature.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateFeatureRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that is to contain the new feature.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    CreateFeatureRequest& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigns one or more tags (key-value pairs) to the feature.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <p>You can associate as many as 50 tags with a feature.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateFeatureRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateFeatureRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An array of structures that contain the configuration of the feature's
     * different variations.</p>
     */
    inline const Aws::Vector<VariationConfig>& GetVariations() const { return m_variations; }
    inline bool VariationsHasBeenSet() const { return m_variationsHasBeenSet; }
    template<typename VariationsT = Aws::Vector<VariationConfig>>
    void SetVariations(VariationsT&& value) { m_variationsHasBeenSet = true; m_variations = std::forward<VariationsT>(value); }
    template<typename VariationsT = Aws::Vector<VariationConfig>>
    CreateFeatureRequest& WithVariations(VariationsT&& value) { SetVariations(std::forward<VariationsT>(value)); return *this;}
    template<typename VariationsT = VariationConfig>
    CreateFeatureRequest& AddVariations(VariationsT&& value) { m_variationsHasBeenSet = true; m_variations.emplace_back(std::forward<VariationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_defaultVariation;
    bool m_defaultVariationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_entityOverrides;
    bool m_entityOverridesHasBeenSet = false;

    FeatureEvaluationStrategy m_evaluationStrategy{FeatureEvaluationStrategy::NOT_SET};
    bool m_evaluationStrategyHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<VariationConfig> m_variations;
    bool m_variationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
