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
    AWS_CLOUDWATCHEVIDENTLY_API UpdateFeatureRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFeature"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    /**
     * <p>To update variation configurations for this feature, or add new ones, specify
     * this structure. In this array, include any variations that you want to add or
     * update. If the array includes a variation name that already exists for this
     * feature, it is updated. If it includes a new variation name, it is added as a
     * new variation.</p>
     */
    inline const Aws::Vector<VariationConfig>& GetAddOrUpdateVariations() const{ return m_addOrUpdateVariations; }

    /**
     * <p>To update variation configurations for this feature, or add new ones, specify
     * this structure. In this array, include any variations that you want to add or
     * update. If the array includes a variation name that already exists for this
     * feature, it is updated. If it includes a new variation name, it is added as a
     * new variation.</p>
     */
    inline bool AddOrUpdateVariationsHasBeenSet() const { return m_addOrUpdateVariationsHasBeenSet; }

    /**
     * <p>To update variation configurations for this feature, or add new ones, specify
     * this structure. In this array, include any variations that you want to add or
     * update. If the array includes a variation name that already exists for this
     * feature, it is updated. If it includes a new variation name, it is added as a
     * new variation.</p>
     */
    inline void SetAddOrUpdateVariations(const Aws::Vector<VariationConfig>& value) { m_addOrUpdateVariationsHasBeenSet = true; m_addOrUpdateVariations = value; }

    /**
     * <p>To update variation configurations for this feature, or add new ones, specify
     * this structure. In this array, include any variations that you want to add or
     * update. If the array includes a variation name that already exists for this
     * feature, it is updated. If it includes a new variation name, it is added as a
     * new variation.</p>
     */
    inline void SetAddOrUpdateVariations(Aws::Vector<VariationConfig>&& value) { m_addOrUpdateVariationsHasBeenSet = true; m_addOrUpdateVariations = std::move(value); }

    /**
     * <p>To update variation configurations for this feature, or add new ones, specify
     * this structure. In this array, include any variations that you want to add or
     * update. If the array includes a variation name that already exists for this
     * feature, it is updated. If it includes a new variation name, it is added as a
     * new variation.</p>
     */
    inline UpdateFeatureRequest& WithAddOrUpdateVariations(const Aws::Vector<VariationConfig>& value) { SetAddOrUpdateVariations(value); return *this;}

    /**
     * <p>To update variation configurations for this feature, or add new ones, specify
     * this structure. In this array, include any variations that you want to add or
     * update. If the array includes a variation name that already exists for this
     * feature, it is updated. If it includes a new variation name, it is added as a
     * new variation.</p>
     */
    inline UpdateFeatureRequest& WithAddOrUpdateVariations(Aws::Vector<VariationConfig>&& value) { SetAddOrUpdateVariations(std::move(value)); return *this;}

    /**
     * <p>To update variation configurations for this feature, or add new ones, specify
     * this structure. In this array, include any variations that you want to add or
     * update. If the array includes a variation name that already exists for this
     * feature, it is updated. If it includes a new variation name, it is added as a
     * new variation.</p>
     */
    inline UpdateFeatureRequest& AddAddOrUpdateVariations(const VariationConfig& value) { m_addOrUpdateVariationsHasBeenSet = true; m_addOrUpdateVariations.push_back(value); return *this; }

    /**
     * <p>To update variation configurations for this feature, or add new ones, specify
     * this structure. In this array, include any variations that you want to add or
     * update. If the array includes a variation name that already exists for this
     * feature, it is updated. If it includes a new variation name, it is added as a
     * new variation.</p>
     */
    inline UpdateFeatureRequest& AddAddOrUpdateVariations(VariationConfig&& value) { m_addOrUpdateVariationsHasBeenSet = true; m_addOrUpdateVariations.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the variation to use as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline const Aws::String& GetDefaultVariation() const{ return m_defaultVariation; }

    /**
     * <p>The name of the variation to use as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline bool DefaultVariationHasBeenSet() const { return m_defaultVariationHasBeenSet; }

    /**
     * <p>The name of the variation to use as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline void SetDefaultVariation(const Aws::String& value) { m_defaultVariationHasBeenSet = true; m_defaultVariation = value; }

    /**
     * <p>The name of the variation to use as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline void SetDefaultVariation(Aws::String&& value) { m_defaultVariationHasBeenSet = true; m_defaultVariation = std::move(value); }

    /**
     * <p>The name of the variation to use as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline void SetDefaultVariation(const char* value) { m_defaultVariationHasBeenSet = true; m_defaultVariation.assign(value); }

    /**
     * <p>The name of the variation to use as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline UpdateFeatureRequest& WithDefaultVariation(const Aws::String& value) { SetDefaultVariation(value); return *this;}

    /**
     * <p>The name of the variation to use as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline UpdateFeatureRequest& WithDefaultVariation(Aws::String&& value) { SetDefaultVariation(std::move(value)); return *this;}

    /**
     * <p>The name of the variation to use as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline UpdateFeatureRequest& WithDefaultVariation(const char* value) { SetDefaultVariation(value); return *this;}


    /**
     * <p>An optional description of the feature.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of the feature.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of the feature.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of the feature.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of the feature.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of the feature.</p>
     */
    inline UpdateFeatureRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the feature.</p>
     */
    inline UpdateFeatureRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the feature.</p>
     */
    inline UpdateFeatureRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specified users that should always be served a specific variation of a
     * feature. Each user is specified by a key-value pair . For each key, specify a
     * user by entering their user ID, account ID, or some other identifier. For the
     * value, specify the name of the variation that they are to be served.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEntityOverrides() const{ return m_entityOverrides; }

    /**
     * <p>Specified users that should always be served a specific variation of a
     * feature. Each user is specified by a key-value pair . For each key, specify a
     * user by entering their user ID, account ID, or some other identifier. For the
     * value, specify the name of the variation that they are to be served.</p>
     */
    inline bool EntityOverridesHasBeenSet() const { return m_entityOverridesHasBeenSet; }

    /**
     * <p>Specified users that should always be served a specific variation of a
     * feature. Each user is specified by a key-value pair . For each key, specify a
     * user by entering their user ID, account ID, or some other identifier. For the
     * value, specify the name of the variation that they are to be served.</p>
     */
    inline void SetEntityOverrides(const Aws::Map<Aws::String, Aws::String>& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides = value; }

    /**
     * <p>Specified users that should always be served a specific variation of a
     * feature. Each user is specified by a key-value pair . For each key, specify a
     * user by entering their user ID, account ID, or some other identifier. For the
     * value, specify the name of the variation that they are to be served.</p>
     */
    inline void SetEntityOverrides(Aws::Map<Aws::String, Aws::String>&& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides = std::move(value); }

    /**
     * <p>Specified users that should always be served a specific variation of a
     * feature. Each user is specified by a key-value pair . For each key, specify a
     * user by entering their user ID, account ID, or some other identifier. For the
     * value, specify the name of the variation that they are to be served.</p>
     */
    inline UpdateFeatureRequest& WithEntityOverrides(const Aws::Map<Aws::String, Aws::String>& value) { SetEntityOverrides(value); return *this;}

    /**
     * <p>Specified users that should always be served a specific variation of a
     * feature. Each user is specified by a key-value pair . For each key, specify a
     * user by entering their user ID, account ID, or some other identifier. For the
     * value, specify the name of the variation that they are to be served.</p>
     */
    inline UpdateFeatureRequest& WithEntityOverrides(Aws::Map<Aws::String, Aws::String>&& value) { SetEntityOverrides(std::move(value)); return *this;}

    /**
     * <p>Specified users that should always be served a specific variation of a
     * feature. Each user is specified by a key-value pair . For each key, specify a
     * user by entering their user ID, account ID, or some other identifier. For the
     * value, specify the name of the variation that they are to be served.</p>
     */
    inline UpdateFeatureRequest& AddEntityOverrides(const Aws::String& key, const Aws::String& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(key, value); return *this; }

    /**
     * <p>Specified users that should always be served a specific variation of a
     * feature. Each user is specified by a key-value pair . For each key, specify a
     * user by entering their user ID, account ID, or some other identifier. For the
     * value, specify the name of the variation that they are to be served.</p>
     */
    inline UpdateFeatureRequest& AddEntityOverrides(Aws::String&& key, const Aws::String& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specified users that should always be served a specific variation of a
     * feature. Each user is specified by a key-value pair . For each key, specify a
     * user by entering their user ID, account ID, or some other identifier. For the
     * value, specify the name of the variation that they are to be served.</p>
     */
    inline UpdateFeatureRequest& AddEntityOverrides(const Aws::String& key, Aws::String&& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specified users that should always be served a specific variation of a
     * feature. Each user is specified by a key-value pair . For each key, specify a
     * user by entering their user ID, account ID, or some other identifier. For the
     * value, specify the name of the variation that they are to be served.</p>
     */
    inline UpdateFeatureRequest& AddEntityOverrides(Aws::String&& key, Aws::String&& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specified users that should always be served a specific variation of a
     * feature. Each user is specified by a key-value pair . For each key, specify a
     * user by entering their user ID, account ID, or some other identifier. For the
     * value, specify the name of the variation that they are to be served.</p>
     */
    inline UpdateFeatureRequest& AddEntityOverrides(const char* key, Aws::String&& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specified users that should always be served a specific variation of a
     * feature. Each user is specified by a key-value pair . For each key, specify a
     * user by entering their user ID, account ID, or some other identifier. For the
     * value, specify the name of the variation that they are to be served.</p>
     */
    inline UpdateFeatureRequest& AddEntityOverrides(Aws::String&& key, const char* value) { m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specified users that should always be served a specific variation of a
     * feature. Each user is specified by a key-value pair . For each key, specify a
     * user by entering their user ID, account ID, or some other identifier. For the
     * value, specify the name of the variation that they are to be served.</p>
     */
    inline UpdateFeatureRequest& AddEntityOverrides(const char* key, const char* value) { m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(key, value); return *this; }


    /**
     * <p>Specify <code>ALL_RULES</code> to activate the traffic allocation specified
     * by any ongoing launches or experiments. Specify <code>DEFAULT_VARIATION</code>
     * to serve the default variation to all users instead.</p>
     */
    inline const FeatureEvaluationStrategy& GetEvaluationStrategy() const{ return m_evaluationStrategy; }

    /**
     * <p>Specify <code>ALL_RULES</code> to activate the traffic allocation specified
     * by any ongoing launches or experiments. Specify <code>DEFAULT_VARIATION</code>
     * to serve the default variation to all users instead.</p>
     */
    inline bool EvaluationStrategyHasBeenSet() const { return m_evaluationStrategyHasBeenSet; }

    /**
     * <p>Specify <code>ALL_RULES</code> to activate the traffic allocation specified
     * by any ongoing launches or experiments. Specify <code>DEFAULT_VARIATION</code>
     * to serve the default variation to all users instead.</p>
     */
    inline void SetEvaluationStrategy(const FeatureEvaluationStrategy& value) { m_evaluationStrategyHasBeenSet = true; m_evaluationStrategy = value; }

    /**
     * <p>Specify <code>ALL_RULES</code> to activate the traffic allocation specified
     * by any ongoing launches or experiments. Specify <code>DEFAULT_VARIATION</code>
     * to serve the default variation to all users instead.</p>
     */
    inline void SetEvaluationStrategy(FeatureEvaluationStrategy&& value) { m_evaluationStrategyHasBeenSet = true; m_evaluationStrategy = std::move(value); }

    /**
     * <p>Specify <code>ALL_RULES</code> to activate the traffic allocation specified
     * by any ongoing launches or experiments. Specify <code>DEFAULT_VARIATION</code>
     * to serve the default variation to all users instead.</p>
     */
    inline UpdateFeatureRequest& WithEvaluationStrategy(const FeatureEvaluationStrategy& value) { SetEvaluationStrategy(value); return *this;}

    /**
     * <p>Specify <code>ALL_RULES</code> to activate the traffic allocation specified
     * by any ongoing launches or experiments. Specify <code>DEFAULT_VARIATION</code>
     * to serve the default variation to all users instead.</p>
     */
    inline UpdateFeatureRequest& WithEvaluationStrategy(FeatureEvaluationStrategy&& value) { SetEvaluationStrategy(std::move(value)); return *this;}


    /**
     * <p>The name of the feature to be updated.</p>
     */
    inline const Aws::String& GetFeature() const{ return m_feature; }

    /**
     * <p>The name of the feature to be updated.</p>
     */
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }

    /**
     * <p>The name of the feature to be updated.</p>
     */
    inline void SetFeature(const Aws::String& value) { m_featureHasBeenSet = true; m_feature = value; }

    /**
     * <p>The name of the feature to be updated.</p>
     */
    inline void SetFeature(Aws::String&& value) { m_featureHasBeenSet = true; m_feature = std::move(value); }

    /**
     * <p>The name of the feature to be updated.</p>
     */
    inline void SetFeature(const char* value) { m_featureHasBeenSet = true; m_feature.assign(value); }

    /**
     * <p>The name of the feature to be updated.</p>
     */
    inline UpdateFeatureRequest& WithFeature(const Aws::String& value) { SetFeature(value); return *this;}

    /**
     * <p>The name of the feature to be updated.</p>
     */
    inline UpdateFeatureRequest& WithFeature(Aws::String&& value) { SetFeature(std::move(value)); return *this;}

    /**
     * <p>The name of the feature to be updated.</p>
     */
    inline UpdateFeatureRequest& WithFeature(const char* value) { SetFeature(value); return *this;}


    /**
     * <p>The name or ARN of the project that contains the feature to be updated.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that contains the feature to be updated.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that contains the feature to be updated.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that contains the feature to be updated.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that contains the feature to be updated.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that contains the feature to be updated.</p>
     */
    inline UpdateFeatureRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that contains the feature to be updated.</p>
     */
    inline UpdateFeatureRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that contains the feature to be updated.</p>
     */
    inline UpdateFeatureRequest& WithProject(const char* value) { SetProject(value); return *this;}


    /**
     * <p>Removes a variation from the feature. If the variation you specify doesn't
     * exist, then this makes no change and does not report an error.</p> <p>This
     * operation fails if you try to remove a variation that is part of an ongoing
     * launch or experiment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveVariations() const{ return m_removeVariations; }

    /**
     * <p>Removes a variation from the feature. If the variation you specify doesn't
     * exist, then this makes no change and does not report an error.</p> <p>This
     * operation fails if you try to remove a variation that is part of an ongoing
     * launch or experiment.</p>
     */
    inline bool RemoveVariationsHasBeenSet() const { return m_removeVariationsHasBeenSet; }

    /**
     * <p>Removes a variation from the feature. If the variation you specify doesn't
     * exist, then this makes no change and does not report an error.</p> <p>This
     * operation fails if you try to remove a variation that is part of an ongoing
     * launch or experiment.</p>
     */
    inline void SetRemoveVariations(const Aws::Vector<Aws::String>& value) { m_removeVariationsHasBeenSet = true; m_removeVariations = value; }

    /**
     * <p>Removes a variation from the feature. If the variation you specify doesn't
     * exist, then this makes no change and does not report an error.</p> <p>This
     * operation fails if you try to remove a variation that is part of an ongoing
     * launch or experiment.</p>
     */
    inline void SetRemoveVariations(Aws::Vector<Aws::String>&& value) { m_removeVariationsHasBeenSet = true; m_removeVariations = std::move(value); }

    /**
     * <p>Removes a variation from the feature. If the variation you specify doesn't
     * exist, then this makes no change and does not report an error.</p> <p>This
     * operation fails if you try to remove a variation that is part of an ongoing
     * launch or experiment.</p>
     */
    inline UpdateFeatureRequest& WithRemoveVariations(const Aws::Vector<Aws::String>& value) { SetRemoveVariations(value); return *this;}

    /**
     * <p>Removes a variation from the feature. If the variation you specify doesn't
     * exist, then this makes no change and does not report an error.</p> <p>This
     * operation fails if you try to remove a variation that is part of an ongoing
     * launch or experiment.</p>
     */
    inline UpdateFeatureRequest& WithRemoveVariations(Aws::Vector<Aws::String>&& value) { SetRemoveVariations(std::move(value)); return *this;}

    /**
     * <p>Removes a variation from the feature. If the variation you specify doesn't
     * exist, then this makes no change and does not report an error.</p> <p>This
     * operation fails if you try to remove a variation that is part of an ongoing
     * launch or experiment.</p>
     */
    inline UpdateFeatureRequest& AddRemoveVariations(const Aws::String& value) { m_removeVariationsHasBeenSet = true; m_removeVariations.push_back(value); return *this; }

    /**
     * <p>Removes a variation from the feature. If the variation you specify doesn't
     * exist, then this makes no change and does not report an error.</p> <p>This
     * operation fails if you try to remove a variation that is part of an ongoing
     * launch or experiment.</p>
     */
    inline UpdateFeatureRequest& AddRemoveVariations(Aws::String&& value) { m_removeVariationsHasBeenSet = true; m_removeVariations.push_back(std::move(value)); return *this; }

    /**
     * <p>Removes a variation from the feature. If the variation you specify doesn't
     * exist, then this makes no change and does not report an error.</p> <p>This
     * operation fails if you try to remove a variation that is part of an ongoing
     * launch or experiment.</p>
     */
    inline UpdateFeatureRequest& AddRemoveVariations(const char* value) { m_removeVariationsHasBeenSet = true; m_removeVariations.push_back(value); return *this; }

  private:

    Aws::Vector<VariationConfig> m_addOrUpdateVariations;
    bool m_addOrUpdateVariationsHasBeenSet = false;

    Aws::String m_defaultVariation;
    bool m_defaultVariationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_entityOverrides;
    bool m_entityOverridesHasBeenSet = false;

    FeatureEvaluationStrategy m_evaluationStrategy;
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
