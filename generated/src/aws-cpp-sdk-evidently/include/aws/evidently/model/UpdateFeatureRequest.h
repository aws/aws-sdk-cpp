/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/evidently/model/FeatureEvaluationStrategy.h>
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
  class UpdateFeatureRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API UpdateFeatureRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFeature"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>To update variation configurations for this feature, or add new ones, specify
     * this structure. In this array, include any variations that you want to add or
     * update. If the array includes a variation name that already exists for this
     * feature, it is updated. If it includes a new variation name, it is added as a
     * new variation.</p>
     */
    inline const Aws::Vector<VariationConfig>& GetAddOrUpdateVariations() const { return m_addOrUpdateVariations; }
    inline bool AddOrUpdateVariationsHasBeenSet() const { return m_addOrUpdateVariationsHasBeenSet; }
    template<typename AddOrUpdateVariationsT = Aws::Vector<VariationConfig>>
    void SetAddOrUpdateVariations(AddOrUpdateVariationsT&& value) { m_addOrUpdateVariationsHasBeenSet = true; m_addOrUpdateVariations = std::forward<AddOrUpdateVariationsT>(value); }
    template<typename AddOrUpdateVariationsT = Aws::Vector<VariationConfig>>
    UpdateFeatureRequest& WithAddOrUpdateVariations(AddOrUpdateVariationsT&& value) { SetAddOrUpdateVariations(std::forward<AddOrUpdateVariationsT>(value)); return *this;}
    template<typename AddOrUpdateVariationsT = VariationConfig>
    UpdateFeatureRequest& AddAddOrUpdateVariations(AddOrUpdateVariationsT&& value) { m_addOrUpdateVariationsHasBeenSet = true; m_addOrUpdateVariations.emplace_back(std::forward<AddOrUpdateVariationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the variation to use as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline const Aws::String& GetDefaultVariation() const { return m_defaultVariation; }
    inline bool DefaultVariationHasBeenSet() const { return m_defaultVariationHasBeenSet; }
    template<typename DefaultVariationT = Aws::String>
    void SetDefaultVariation(DefaultVariationT&& value) { m_defaultVariationHasBeenSet = true; m_defaultVariation = std::forward<DefaultVariationT>(value); }
    template<typename DefaultVariationT = Aws::String>
    UpdateFeatureRequest& WithDefaultVariation(DefaultVariationT&& value) { SetDefaultVariation(std::forward<DefaultVariationT>(value)); return *this;}
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
    UpdateFeatureRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specified users that should always be served a specific variation of a
     * feature. Each user is specified by a key-value pair . For each key, specify a
     * user by entering their user ID, account ID, or some other identifier. For the
     * value, specify the name of the variation that they are to be served.</p> <p>This
     * parameter is limited to 2500 overrides or a total of 40KB. The 40KB limit
     * includes an overhead of 6 bytes per override.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEntityOverrides() const { return m_entityOverrides; }
    inline bool EntityOverridesHasBeenSet() const { return m_entityOverridesHasBeenSet; }
    template<typename EntityOverridesT = Aws::Map<Aws::String, Aws::String>>
    void SetEntityOverrides(EntityOverridesT&& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides = std::forward<EntityOverridesT>(value); }
    template<typename EntityOverridesT = Aws::Map<Aws::String, Aws::String>>
    UpdateFeatureRequest& WithEntityOverrides(EntityOverridesT&& value) { SetEntityOverrides(std::forward<EntityOverridesT>(value)); return *this;}
    template<typename EntityOverridesKeyT = Aws::String, typename EntityOverridesValueT = Aws::String>
    UpdateFeatureRequest& AddEntityOverrides(EntityOverridesKeyT&& key, EntityOverridesValueT&& value) {
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
    inline UpdateFeatureRequest& WithEvaluationStrategy(FeatureEvaluationStrategy value) { SetEvaluationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the feature to be updated.</p>
     */
    inline const Aws::String& GetFeature() const { return m_feature; }
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
    template<typename FeatureT = Aws::String>
    void SetFeature(FeatureT&& value) { m_featureHasBeenSet = true; m_feature = std::forward<FeatureT>(value); }
    template<typename FeatureT = Aws::String>
    UpdateFeatureRequest& WithFeature(FeatureT&& value) { SetFeature(std::forward<FeatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains the feature to be updated.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    UpdateFeatureRequest& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Removes a variation from the feature. If the variation you specify doesn't
     * exist, then this makes no change and does not report an error.</p> <p>This
     * operation fails if you try to remove a variation that is part of an ongoing
     * launch or experiment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveVariations() const { return m_removeVariations; }
    inline bool RemoveVariationsHasBeenSet() const { return m_removeVariationsHasBeenSet; }
    template<typename RemoveVariationsT = Aws::Vector<Aws::String>>
    void SetRemoveVariations(RemoveVariationsT&& value) { m_removeVariationsHasBeenSet = true; m_removeVariations = std::forward<RemoveVariationsT>(value); }
    template<typename RemoveVariationsT = Aws::Vector<Aws::String>>
    UpdateFeatureRequest& WithRemoveVariations(RemoveVariationsT&& value) { SetRemoveVariations(std::forward<RemoveVariationsT>(value)); return *this;}
    template<typename RemoveVariationsT = Aws::String>
    UpdateFeatureRequest& AddRemoveVariations(RemoveVariationsT&& value) { m_removeVariationsHasBeenSet = true; m_removeVariations.emplace_back(std::forward<RemoveVariationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<VariationConfig> m_addOrUpdateVariations;
    bool m_addOrUpdateVariationsHasBeenSet = false;

    Aws::String m_defaultVariation;
    bool m_defaultVariationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_entityOverrides;
    bool m_entityOverridesHasBeenSet = false;

    FeatureEvaluationStrategy m_evaluationStrategy{FeatureEvaluationStrategy::NOT_SET};
    bool m_evaluationStrategyHasBeenSet = false;

    Aws::String m_feature;
    bool m_featureHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeVariations;
    bool m_removeVariationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
