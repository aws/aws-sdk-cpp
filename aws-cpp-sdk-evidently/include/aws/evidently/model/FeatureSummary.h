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
    AWS_CLOUDWATCHEVIDENTLY_API FeatureSummary();
    AWS_CLOUDWATCHEVIDENTLY_API FeatureSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API FeatureSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the feature.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the feature.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the feature.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the feature.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the feature.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the feature.</p>
     */
    inline FeatureSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the feature.</p>
     */
    inline FeatureSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the feature.</p>
     */
    inline FeatureSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time that the feature is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time that the feature is created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time that the feature is created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time that the feature is created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time that the feature is created.</p>
     */
    inline FeatureSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time that the feature is created.</p>
     */
    inline FeatureSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the variation that is used as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline const Aws::String& GetDefaultVariation() const{ return m_defaultVariation; }

    /**
     * <p>The name of the variation that is used as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline bool DefaultVariationHasBeenSet() const { return m_defaultVariationHasBeenSet; }

    /**
     * <p>The name of the variation that is used as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline void SetDefaultVariation(const Aws::String& value) { m_defaultVariationHasBeenSet = true; m_defaultVariation = value; }

    /**
     * <p>The name of the variation that is used as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline void SetDefaultVariation(Aws::String&& value) { m_defaultVariationHasBeenSet = true; m_defaultVariation = std::move(value); }

    /**
     * <p>The name of the variation that is used as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline void SetDefaultVariation(const char* value) { m_defaultVariationHasBeenSet = true; m_defaultVariation.assign(value); }

    /**
     * <p>The name of the variation that is used as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline FeatureSummary& WithDefaultVariation(const Aws::String& value) { SetDefaultVariation(value); return *this;}

    /**
     * <p>The name of the variation that is used as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline FeatureSummary& WithDefaultVariation(Aws::String&& value) { SetDefaultVariation(std::move(value)); return *this;}

    /**
     * <p>The name of the variation that is used as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p>
     */
    inline FeatureSummary& WithDefaultVariation(const char* value) { SetDefaultVariation(value); return *this;}


    /**
     * <p>An array of structures that define</p>
     */
    inline const Aws::Vector<EvaluationRule>& GetEvaluationRules() const{ return m_evaluationRules; }

    /**
     * <p>An array of structures that define</p>
     */
    inline bool EvaluationRulesHasBeenSet() const { return m_evaluationRulesHasBeenSet; }

    /**
     * <p>An array of structures that define</p>
     */
    inline void SetEvaluationRules(const Aws::Vector<EvaluationRule>& value) { m_evaluationRulesHasBeenSet = true; m_evaluationRules = value; }

    /**
     * <p>An array of structures that define</p>
     */
    inline void SetEvaluationRules(Aws::Vector<EvaluationRule>&& value) { m_evaluationRulesHasBeenSet = true; m_evaluationRules = std::move(value); }

    /**
     * <p>An array of structures that define</p>
     */
    inline FeatureSummary& WithEvaluationRules(const Aws::Vector<EvaluationRule>& value) { SetEvaluationRules(value); return *this;}

    /**
     * <p>An array of structures that define</p>
     */
    inline FeatureSummary& WithEvaluationRules(Aws::Vector<EvaluationRule>&& value) { SetEvaluationRules(std::move(value)); return *this;}

    /**
     * <p>An array of structures that define</p>
     */
    inline FeatureSummary& AddEvaluationRules(const EvaluationRule& value) { m_evaluationRulesHasBeenSet = true; m_evaluationRules.push_back(value); return *this; }

    /**
     * <p>An array of structures that define</p>
     */
    inline FeatureSummary& AddEvaluationRules(EvaluationRule&& value) { m_evaluationRulesHasBeenSet = true; m_evaluationRules.push_back(std::move(value)); return *this; }


    /**
     * <p>If this value is <code>ALL_RULES</code>, the traffic allocation specified by
     * any ongoing launches or experiments is being used. If this is
     * <code>DEFAULT_VARIATION</code>, the default variation is being served to all
     * users.</p>
     */
    inline const FeatureEvaluationStrategy& GetEvaluationStrategy() const{ return m_evaluationStrategy; }

    /**
     * <p>If this value is <code>ALL_RULES</code>, the traffic allocation specified by
     * any ongoing launches or experiments is being used. If this is
     * <code>DEFAULT_VARIATION</code>, the default variation is being served to all
     * users.</p>
     */
    inline bool EvaluationStrategyHasBeenSet() const { return m_evaluationStrategyHasBeenSet; }

    /**
     * <p>If this value is <code>ALL_RULES</code>, the traffic allocation specified by
     * any ongoing launches or experiments is being used. If this is
     * <code>DEFAULT_VARIATION</code>, the default variation is being served to all
     * users.</p>
     */
    inline void SetEvaluationStrategy(const FeatureEvaluationStrategy& value) { m_evaluationStrategyHasBeenSet = true; m_evaluationStrategy = value; }

    /**
     * <p>If this value is <code>ALL_RULES</code>, the traffic allocation specified by
     * any ongoing launches or experiments is being used. If this is
     * <code>DEFAULT_VARIATION</code>, the default variation is being served to all
     * users.</p>
     */
    inline void SetEvaluationStrategy(FeatureEvaluationStrategy&& value) { m_evaluationStrategyHasBeenSet = true; m_evaluationStrategy = std::move(value); }

    /**
     * <p>If this value is <code>ALL_RULES</code>, the traffic allocation specified by
     * any ongoing launches or experiments is being used. If this is
     * <code>DEFAULT_VARIATION</code>, the default variation is being served to all
     * users.</p>
     */
    inline FeatureSummary& WithEvaluationStrategy(const FeatureEvaluationStrategy& value) { SetEvaluationStrategy(value); return *this;}

    /**
     * <p>If this value is <code>ALL_RULES</code>, the traffic allocation specified by
     * any ongoing launches or experiments is being used. If this is
     * <code>DEFAULT_VARIATION</code>, the default variation is being served to all
     * users.</p>
     */
    inline FeatureSummary& WithEvaluationStrategy(FeatureEvaluationStrategy&& value) { SetEvaluationStrategy(std::move(value)); return *this;}


    /**
     * <p>The date and time that the feature was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The date and time that the feature was most recently updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The date and time that the feature was most recently updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The date and time that the feature was most recently updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The date and time that the feature was most recently updated.</p>
     */
    inline FeatureSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The date and time that the feature was most recently updated.</p>
     */
    inline FeatureSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the feature.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the feature.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the feature.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the feature.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the feature.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the feature.</p>
     */
    inline FeatureSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the feature.</p>
     */
    inline FeatureSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature.</p>
     */
    inline FeatureSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline FeatureSummary& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline FeatureSummary& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that contains the feature.</p>
     */
    inline FeatureSummary& WithProject(const char* value) { SetProject(value); return *this;}


    /**
     * <p>The current state of the feature.</p>
     */
    inline const FeatureStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the feature.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the feature.</p>
     */
    inline void SetStatus(const FeatureStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the feature.</p>
     */
    inline void SetStatus(FeatureStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the feature.</p>
     */
    inline FeatureSummary& WithStatus(const FeatureStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the feature.</p>
     */
    inline FeatureSummary& WithStatus(FeatureStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The list of tag keys and values associated with this feature.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tag keys and values associated with this feature.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tag keys and values associated with this feature.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tag keys and values associated with this feature.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tag keys and values associated with this feature.</p>
     */
    inline FeatureSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tag keys and values associated with this feature.</p>
     */
    inline FeatureSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tag keys and values associated with this feature.</p>
     */
    inline FeatureSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this feature.</p>
     */
    inline FeatureSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this feature.</p>
     */
    inline FeatureSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this feature.</p>
     */
    inline FeatureSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this feature.</p>
     */
    inline FeatureSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this feature.</p>
     */
    inline FeatureSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this feature.</p>
     */
    inline FeatureSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_defaultVariation;
    bool m_defaultVariationHasBeenSet = false;

    Aws::Vector<EvaluationRule> m_evaluationRules;
    bool m_evaluationRulesHasBeenSet = false;

    FeatureEvaluationStrategy m_evaluationStrategy;
    bool m_evaluationStrategyHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    FeatureStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
