﻿/**
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
    AWS_GLUE_API DataQualityAnalyzerResult();
    AWS_GLUE_API DataQualityAnalyzerResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityAnalyzerResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data quality analyzer.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataQualityAnalyzerResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataQualityAnalyzerResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataQualityAnalyzerResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the data quality analyzer.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DataQualityAnalyzerResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DataQualityAnalyzerResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DataQualityAnalyzerResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An evaluation message.</p>
     */
    inline const Aws::String& GetEvaluationMessage() const{ return m_evaluationMessage; }
    inline bool EvaluationMessageHasBeenSet() const { return m_evaluationMessageHasBeenSet; }
    inline void SetEvaluationMessage(const Aws::String& value) { m_evaluationMessageHasBeenSet = true; m_evaluationMessage = value; }
    inline void SetEvaluationMessage(Aws::String&& value) { m_evaluationMessageHasBeenSet = true; m_evaluationMessage = std::move(value); }
    inline void SetEvaluationMessage(const char* value) { m_evaluationMessageHasBeenSet = true; m_evaluationMessage.assign(value); }
    inline DataQualityAnalyzerResult& WithEvaluationMessage(const Aws::String& value) { SetEvaluationMessage(value); return *this;}
    inline DataQualityAnalyzerResult& WithEvaluationMessage(Aws::String&& value) { SetEvaluationMessage(std::move(value)); return *this;}
    inline DataQualityAnalyzerResult& WithEvaluationMessage(const char* value) { SetEvaluationMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of metrics associated with the evaluation of the analyzer.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetEvaluatedMetrics() const{ return m_evaluatedMetrics; }
    inline bool EvaluatedMetricsHasBeenSet() const { return m_evaluatedMetricsHasBeenSet; }
    inline void SetEvaluatedMetrics(const Aws::Map<Aws::String, double>& value) { m_evaluatedMetricsHasBeenSet = true; m_evaluatedMetrics = value; }
    inline void SetEvaluatedMetrics(Aws::Map<Aws::String, double>&& value) { m_evaluatedMetricsHasBeenSet = true; m_evaluatedMetrics = std::move(value); }
    inline DataQualityAnalyzerResult& WithEvaluatedMetrics(const Aws::Map<Aws::String, double>& value) { SetEvaluatedMetrics(value); return *this;}
    inline DataQualityAnalyzerResult& WithEvaluatedMetrics(Aws::Map<Aws::String, double>&& value) { SetEvaluatedMetrics(std::move(value)); return *this;}
    inline DataQualityAnalyzerResult& AddEvaluatedMetrics(const Aws::String& key, double value) { m_evaluatedMetricsHasBeenSet = true; m_evaluatedMetrics.emplace(key, value); return *this; }
    inline DataQualityAnalyzerResult& AddEvaluatedMetrics(Aws::String&& key, double value) { m_evaluatedMetricsHasBeenSet = true; m_evaluatedMetrics.emplace(std::move(key), value); return *this; }
    inline DataQualityAnalyzerResult& AddEvaluatedMetrics(const char* key, double value) { m_evaluatedMetricsHasBeenSet = true; m_evaluatedMetrics.emplace(key, value); return *this; }
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
