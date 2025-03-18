/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>

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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>Information about the evaluation performance of a trained model.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ModelPerformance">AWS
   * API Reference</a></p>
   */
  class ModelPerformance
  {
  public:
    AWS_LOOKOUTFORVISION_API ModelPerformance() = default;
    AWS_LOOKOUTFORVISION_API ModelPerformance(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API ModelPerformance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The overall F1 score metric for the trained model.</p>
     */
    inline double GetF1Score() const { return m_f1Score; }
    inline bool F1ScoreHasBeenSet() const { return m_f1ScoreHasBeenSet; }
    inline void SetF1Score(double value) { m_f1ScoreHasBeenSet = true; m_f1Score = value; }
    inline ModelPerformance& WithF1Score(double value) { SetF1Score(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall recall metric value for the trained model. </p>
     */
    inline double GetRecall() const { return m_recall; }
    inline bool RecallHasBeenSet() const { return m_recallHasBeenSet; }
    inline void SetRecall(double value) { m_recallHasBeenSet = true; m_recall = value; }
    inline ModelPerformance& WithRecall(double value) { SetRecall(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall precision metric value for the trained model.</p>
     */
    inline double GetPrecision() const { return m_precision; }
    inline bool PrecisionHasBeenSet() const { return m_precisionHasBeenSet; }
    inline void SetPrecision(double value) { m_precisionHasBeenSet = true; m_precision = value; }
    inline ModelPerformance& WithPrecision(double value) { SetPrecision(value); return *this;}
    ///@}
  private:

    double m_f1Score{0.0};
    bool m_f1ScoreHasBeenSet = false;

    double m_recall{0.0};
    bool m_recallHasBeenSet = false;

    double m_precision{0.0};
    bool m_precisionHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
