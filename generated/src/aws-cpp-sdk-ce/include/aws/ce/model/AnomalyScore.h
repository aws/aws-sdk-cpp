/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>

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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Quantifies the anomaly. The higher score means that it's more anomalous.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/AnomalyScore">AWS API
   * Reference</a></p>
   */
  class AnomalyScore
  {
  public:
    AWS_COSTEXPLORER_API AnomalyScore();
    AWS_COSTEXPLORER_API AnomalyScore(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API AnomalyScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum score that's observed during the
     * <code>AnomalyDateInterval</code>. </p>
     */
    inline double GetMaxScore() const{ return m_maxScore; }

    /**
     * <p>The maximum score that's observed during the
     * <code>AnomalyDateInterval</code>. </p>
     */
    inline bool MaxScoreHasBeenSet() const { return m_maxScoreHasBeenSet; }

    /**
     * <p>The maximum score that's observed during the
     * <code>AnomalyDateInterval</code>. </p>
     */
    inline void SetMaxScore(double value) { m_maxScoreHasBeenSet = true; m_maxScore = value; }

    /**
     * <p>The maximum score that's observed during the
     * <code>AnomalyDateInterval</code>. </p>
     */
    inline AnomalyScore& WithMaxScore(double value) { SetMaxScore(value); return *this;}


    /**
     * <p>The last observed score. </p>
     */
    inline double GetCurrentScore() const{ return m_currentScore; }

    /**
     * <p>The last observed score. </p>
     */
    inline bool CurrentScoreHasBeenSet() const { return m_currentScoreHasBeenSet; }

    /**
     * <p>The last observed score. </p>
     */
    inline void SetCurrentScore(double value) { m_currentScoreHasBeenSet = true; m_currentScore = value; }

    /**
     * <p>The last observed score. </p>
     */
    inline AnomalyScore& WithCurrentScore(double value) { SetCurrentScore(value); return *this;}

  private:

    double m_maxScore;
    bool m_maxScoreHasBeenSet = false;

    double m_currentScore;
    bool m_currentScoreHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
