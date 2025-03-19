/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/FeatureEvaluationStrategy.h>
#include <aws/evidently/model/FeatureStatus.h>
#include <aws/evidently/model/VariationValueType.h>
#include <aws/evidently/model/EvaluationRule.h>
#include <aws/evidently/model/Variation.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>This structure contains information about one Evidently feature in your
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/Feature">AWS
   * API Reference</a></p>
   */
  class Feature
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API Feature() = default;
    AWS_CLOUDWATCHEVIDENTLY_API Feature(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Feature& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the feature.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Feature& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the feature is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Feature& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the variation that is used as the default variation. The default
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
    Feature& WithDefaultVariation(DefaultVariationT&& value) { SetDefaultVariation(std::forward<DefaultVariationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the feature.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Feature& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key-value pairs that specify users who should always be served a
     * specific variation of a feature. Each key specifies a user using their user ID,
     * account ID, or some other identifier. The value specifies the name of the
     * variation that the user is to be served.</p> <p>For the override to be
     * successful, the value of the key must match the <code>entityId</code> used in
     * the <a
     * href="https://docs.aws.amazon.com/cloudwatchevidently/latest/APIReference/API_EvaluateFeature.html">EvaluateFeature</a>
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEntityOverrides() const { return m_entityOverrides; }
    inline bool EntityOverridesHasBeenSet() const { return m_entityOverridesHasBeenSet; }
    template<typename EntityOverridesT = Aws::Map<Aws::String, Aws::String>>
    void SetEntityOverrides(EntityOverridesT&& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides = std::forward<EntityOverridesT>(value); }
    template<typename EntityOverridesT = Aws::Map<Aws::String, Aws::String>>
    Feature& WithEntityOverrides(EntityOverridesT&& value) { SetEntityOverrides(std::forward<EntityOverridesT>(value)); return *this;}
    template<typename EntityOverridesKeyT = Aws::String, typename EntityOverridesValueT = Aws::String>
    Feature& AddEntityOverrides(EntityOverridesKeyT&& key, EntityOverridesValueT&& value) {
      m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(std::forward<EntityOverridesKeyT>(key), std::forward<EntityOverridesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the evaluation rules for the feature.</p>
     */
    inline const Aws::Vector<EvaluationRule>& GetEvaluationRules() const { return m_evaluationRules; }
    inline bool EvaluationRulesHasBeenSet() const { return m_evaluationRulesHasBeenSet; }
    template<typename EvaluationRulesT = Aws::Vector<EvaluationRule>>
    void SetEvaluationRules(EvaluationRulesT&& value) { m_evaluationRulesHasBeenSet = true; m_evaluationRules = std::forward<EvaluationRulesT>(value); }
    template<typename EvaluationRulesT = Aws::Vector<EvaluationRule>>
    Feature& WithEvaluationRules(EvaluationRulesT&& value) { SetEvaluationRules(std::forward<EvaluationRulesT>(value)); return *this;}
    template<typename EvaluationRulesT = EvaluationRule>
    Feature& AddEvaluationRules(EvaluationRulesT&& value) { m_evaluationRulesHasBeenSet = true; m_evaluationRules.emplace_back(std::forward<EvaluationRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If this value is <code>ALL_RULES</code>, the traffic allocation specified by
     * any ongoing launches or experiments is being used. If this is
     * <code>DEFAULT_VARIATION</code>, the default variation is being served to all
     * users.</p>
     */
    inline FeatureEvaluationStrategy GetEvaluationStrategy() const { return m_evaluationStrategy; }
    inline bool EvaluationStrategyHasBeenSet() const { return m_evaluationStrategyHasBeenSet; }
    inline void SetEvaluationStrategy(FeatureEvaluationStrategy value) { m_evaluationStrategyHasBeenSet = true; m_evaluationStrategy = value; }
    inline Feature& WithEvaluationStrategy(FeatureEvaluationStrategy value) { SetEvaluationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the feature was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Feature& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the feature.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Feature& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    Feature& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the feature.</p>
     */
    inline FeatureStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FeatureStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Feature& WithStatus(FeatureStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tag keys and values associated with this feature.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Feature& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Feature& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Defines the type of value used to define the different feature variations.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-variationtypes.html">Variation
     * types</a> </p>
     */
    inline VariationValueType GetValueType() const { return m_valueType; }
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
    inline void SetValueType(VariationValueType value) { m_valueTypeHasBeenSet = true; m_valueType = value; }
    inline Feature& WithValueType(VariationValueType value) { SetValueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that contain the configuration of the feature's
     * different variations.</p>
     */
    inline const Aws::Vector<Variation>& GetVariations() const { return m_variations; }
    inline bool VariationsHasBeenSet() const { return m_variationsHasBeenSet; }
    template<typename VariationsT = Aws::Vector<Variation>>
    void SetVariations(VariationsT&& value) { m_variationsHasBeenSet = true; m_variations = std::forward<VariationsT>(value); }
    template<typename VariationsT = Aws::Vector<Variation>>
    Feature& WithVariations(VariationsT&& value) { SetVariations(std::forward<VariationsT>(value)); return *this;}
    template<typename VariationsT = Variation>
    Feature& AddVariations(VariationsT&& value) { m_variationsHasBeenSet = true; m_variations.emplace_back(std::forward<VariationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_defaultVariation;
    bool m_defaultVariationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_entityOverrides;
    bool m_entityOverridesHasBeenSet = false;

    Aws::Vector<EvaluationRule> m_evaluationRules;
    bool m_evaluationRulesHasBeenSet = false;

    FeatureEvaluationStrategy m_evaluationStrategy{FeatureEvaluationStrategy::NOT_SET};
    bool m_evaluationStrategyHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    FeatureStatus m_status{FeatureStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    VariationValueType m_valueType{VariationValueType::NOT_SET};
    bool m_valueTypeHasBeenSet = false;

    Aws::Vector<Variation> m_variations;
    bool m_variationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
