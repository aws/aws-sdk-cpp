/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/TransformType.h>
#include <aws/glue/model/FindMatchesMetrics.h>
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
   * <p>Evaluation metrics provide an estimate of the quality of your machine
   * learning transform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/EvaluationMetrics">AWS
   * API Reference</a></p>
   */
  class EvaluationMetrics
  {
  public:
    AWS_GLUE_API EvaluationMetrics();
    AWS_GLUE_API EvaluationMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API EvaluationMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of machine learning transform.</p>
     */
    inline const TransformType& GetTransformType() const{ return m_transformType; }

    /**
     * <p>The type of machine learning transform.</p>
     */
    inline bool TransformTypeHasBeenSet() const { return m_transformTypeHasBeenSet; }

    /**
     * <p>The type of machine learning transform.</p>
     */
    inline void SetTransformType(const TransformType& value) { m_transformTypeHasBeenSet = true; m_transformType = value; }

    /**
     * <p>The type of machine learning transform.</p>
     */
    inline void SetTransformType(TransformType&& value) { m_transformTypeHasBeenSet = true; m_transformType = std::move(value); }

    /**
     * <p>The type of machine learning transform.</p>
     */
    inline EvaluationMetrics& WithTransformType(const TransformType& value) { SetTransformType(value); return *this;}

    /**
     * <p>The type of machine learning transform.</p>
     */
    inline EvaluationMetrics& WithTransformType(TransformType&& value) { SetTransformType(std::move(value)); return *this;}


    /**
     * <p>The evaluation metrics for the find matches algorithm.</p>
     */
    inline const FindMatchesMetrics& GetFindMatchesMetrics() const{ return m_findMatchesMetrics; }

    /**
     * <p>The evaluation metrics for the find matches algorithm.</p>
     */
    inline bool FindMatchesMetricsHasBeenSet() const { return m_findMatchesMetricsHasBeenSet; }

    /**
     * <p>The evaluation metrics for the find matches algorithm.</p>
     */
    inline void SetFindMatchesMetrics(const FindMatchesMetrics& value) { m_findMatchesMetricsHasBeenSet = true; m_findMatchesMetrics = value; }

    /**
     * <p>The evaluation metrics for the find matches algorithm.</p>
     */
    inline void SetFindMatchesMetrics(FindMatchesMetrics&& value) { m_findMatchesMetricsHasBeenSet = true; m_findMatchesMetrics = std::move(value); }

    /**
     * <p>The evaluation metrics for the find matches algorithm.</p>
     */
    inline EvaluationMetrics& WithFindMatchesMetrics(const FindMatchesMetrics& value) { SetFindMatchesMetrics(value); return *this;}

    /**
     * <p>The evaluation metrics for the find matches algorithm.</p>
     */
    inline EvaluationMetrics& WithFindMatchesMetrics(FindMatchesMetrics&& value) { SetFindMatchesMetrics(std::move(value)); return *this;}

  private:

    TransformType m_transformType;
    bool m_transformTypeHasBeenSet = false;

    FindMatchesMetrics m_findMatchesMetrics;
    bool m_findMatchesMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
