/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Describes the result of the evaluation of a data quality
   * analyzer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityAnalyzerResult">AWS
   * API Reference</a></p>
   */
  class DataQualityAnalyzerResult
  {
  public:
    AWS_GLUE_API DataQualityAnalyzerResult() = default;
    AWS_GLUE_API DataQualityAnalyzerResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityAnalyzerResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data quality analyzer.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataQualityAnalyzerResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the data quality analyzer.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DataQualityAnalyzerResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    DataQualityAnalyzerResult& WithEvaluationMessage(EvaluationMessageT&& value) { SetEvaluationMessage(std::forward<EvaluationMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of metrics associated with the evaluation of the analyzer.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetEvaluatedMetrics() const { return m_evaluatedMetrics; }
    inline bool EvaluatedMetricsHasBeenSet() const { return m_evaluatedMetricsHasBeenSet; }
    template<typename EvaluatedMetricsT = Aws::Map<Aws::String, double>>
    void SetEvaluatedMetrics(EvaluatedMetricsT&& value) { m_evaluatedMetricsHasBeenSet = true; m_evaluatedMetrics = std::forward<EvaluatedMetricsT>(value); }
    template<typename EvaluatedMetricsT = Aws::Map<Aws::String, double>>
    DataQualityAnalyzerResult& WithEvaluatedMetrics(EvaluatedMetricsT&& value) { SetEvaluatedMetrics(std::forward<EvaluatedMetricsT>(value)); return *this;}
    inline DataQualityAnalyzerResult& AddEvaluatedMetrics(Aws::String key, double value) {
      m_evaluatedMetricsHasBeenSet = true; m_evaluatedMetrics.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_evaluationMessage;
    bool m_evaluationMessageHasBeenSet = false;

    Aws::Map<Aws::String, double> m_evaluatedMetrics;
    bool m_evaluatedMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
