/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataQualityRuleResultStatus.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Describes the result of the evaluation of a data quality rule.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityRuleResult">AWS
   * API Reference</a></p>
   */
  class DataQualityRuleResult
  {
  public:
    AWS_GLUE_API DataQualityRuleResult() = default;
    AWS_GLUE_API DataQualityRuleResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityRuleResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data quality rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataQualityRuleResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the data quality rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DataQualityRuleResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An evaluation message.</p>
     */
    inline const Aws::String& GetEvaluationMessage() const { return m_evaluationMessage; }
    inline bool EvaluationMessageHasBeenSet() const { return m_evaluationMessageHasBeenSet; }
    template<typename EvaluationMessageT = Aws::String>
    void SetEvaluationMessage(EvaluationMessageT&& value) { m_evaluationMessageHasBeenSet = true; m_evaluationMessage = std::forward<EvaluationMessageT>(value); }
    template<typename EvaluationMessageT = Aws::String>
    DataQualityRuleResult& WithEvaluationMessage(EvaluationMessageT&& value) { SetEvaluationMessage(std::forward<EvaluationMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pass or fail status for the rule.</p>
     */
    inline DataQualityRuleResultStatus GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(DataQualityRuleResultStatus value) { m_resultHasBeenSet = true; m_result = value; }
    inline DataQualityRuleResult& WithResult(DataQualityRuleResultStatus value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of metrics associated with the evaluation of the rule.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetEvaluatedMetrics() const { return m_evaluatedMetrics; }
    inline bool EvaluatedMetricsHasBeenSet() const { return m_evaluatedMetricsHasBeenSet; }
    template<typename EvaluatedMetricsT = Aws::Map<Aws::String, double>>
    void SetEvaluatedMetrics(EvaluatedMetricsT&& value) { m_evaluatedMetricsHasBeenSet = true; m_evaluatedMetrics = std::forward<EvaluatedMetricsT>(value); }
    template<typename EvaluatedMetricsT = Aws::Map<Aws::String, double>>
    DataQualityRuleResult& WithEvaluatedMetrics(EvaluatedMetricsT&& value) { SetEvaluatedMetrics(std::forward<EvaluatedMetricsT>(value)); return *this;}
    inline DataQualityRuleResult& AddEvaluatedMetrics(Aws::String key, double value) {
      m_evaluatedMetricsHasBeenSet = true; m_evaluatedMetrics.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The evaluated rule.</p>
     */
    inline const Aws::String& GetEvaluatedRule() const { return m_evaluatedRule; }
    inline bool EvaluatedRuleHasBeenSet() const { return m_evaluatedRuleHasBeenSet; }
    template<typename EvaluatedRuleT = Aws::String>
    void SetEvaluatedRule(EvaluatedRuleT&& value) { m_evaluatedRuleHasBeenSet = true; m_evaluatedRule = std::forward<EvaluatedRuleT>(value); }
    template<typename EvaluatedRuleT = Aws::String>
    DataQualityRuleResult& WithEvaluatedRule(EvaluatedRuleT&& value) { SetEvaluatedRule(std::forward<EvaluatedRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map containing metrics associated with the evaluation of the rule based on
     * row-level results. </p>
     */
    inline const Aws::Map<Aws::String, double>& GetRuleMetrics() const { return m_ruleMetrics; }
    inline bool RuleMetricsHasBeenSet() const { return m_ruleMetricsHasBeenSet; }
    template<typename RuleMetricsT = Aws::Map<Aws::String, double>>
    void SetRuleMetrics(RuleMetricsT&& value) { m_ruleMetricsHasBeenSet = true; m_ruleMetrics = std::forward<RuleMetricsT>(value); }
    template<typename RuleMetricsT = Aws::Map<Aws::String, double>>
    DataQualityRuleResult& WithRuleMetrics(RuleMetricsT&& value) { SetRuleMetrics(std::forward<RuleMetricsT>(value)); return *this;}
    inline DataQualityRuleResult& AddRuleMetrics(Aws::String key, double value) {
      m_ruleMetricsHasBeenSet = true; m_ruleMetrics.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_evaluationMessage;
    bool m_evaluationMessageHasBeenSet = false;

    DataQualityRuleResultStatus m_result{DataQualityRuleResultStatus::NOT_SET};
    bool m_resultHasBeenSet = false;

    Aws::Map<Aws::String, double> m_evaluatedMetrics;
    bool m_evaluatedMetricsHasBeenSet = false;

    Aws::String m_evaluatedRule;
    bool m_evaluatedRuleHasBeenSet = false;

    Aws::Map<Aws::String, double> m_ruleMetrics;
    bool m_ruleMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
