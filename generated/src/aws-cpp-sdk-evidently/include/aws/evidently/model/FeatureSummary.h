/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/FeatureEvaluationStrategy.h>
#include <aws/evidently/model/FeatureStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/evidently/model/EvaluationRule.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/FeatureSummary">AWS
   * API Reference</a></p>
   */
  class FeatureSummary
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API FeatureSummary() = default;
    AWS_CLOUDWATCHEVIDENTLY_API FeatureSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API FeatureSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    FeatureSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
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
    FeatureSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the variation that is used as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline const Aws::String& GetDefaultVariation() const { return m_defaultVariation; }
    inline bool DefaultVariationHasBeenSet() const { return m_defaultVariationHasBeenSet; }
    template<typename DefaultVariationT = Aws::String>
    void SetDefaultVariation(DefaultVariationT&& value) { m_defaultVariationHasBeenSet = true; m_defaultVariation = std::forward<DefaultVariationT>(value); }
    template<typename DefaultVariationT = Aws::String>
    FeatureSummary& WithDefaultVariation(DefaultVariationT&& value) { SetDefaultVariation(std::forward<DefaultVariationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that define</p>
     */
    inline const Aws::Vector<EvaluationRule>& GetEvaluationRules() const { return m_evaluationRules; }
    inline bool EvaluationRulesHasBeenSet() const { return m_evaluationRulesHasBeenSet; }
    template<typename EvaluationRulesT = Aws::Vector<EvaluationRule>>
    void SetEvaluationRules(EvaluationRulesT&& value) { m_evaluationRulesHasBeenSet = true; m_evaluationRules = std::forward<EvaluationRulesT>(value); }
    template<typename EvaluationRulesT = Aws::Vector<EvaluationRule>>
    FeatureSummary& WithEvaluationRules(EvaluationRulesT&& value) { SetEvaluationRules(std::forward<EvaluationRulesT>(value)); return *this;}
    template<typename EvaluationRulesT = EvaluationRule>
    FeatureSummary& AddEvaluationRules(EvaluationRulesT&& value) { m_evaluationRulesHasBeenSet = true; m_evaluationRules.emplace_back(std::forward<EvaluationRulesT>(value)); return *this; }
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
    inline FeatureSummary& WithEvaluationStrategy(FeatureEvaluationStrategy value) { SetEvaluationStrategy(value); return *this;}
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
    FeatureSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
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
    FeatureSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    FeatureSummary& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the feature.</p>
     */
    inline FeatureStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FeatureStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline FeatureSummary& WithStatus(FeatureStatus value) { SetStatus(value); return *this;}
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
    FeatureSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    FeatureSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_defaultVariation;
    bool m_defaultVariationHasBeenSet = false;

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
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
