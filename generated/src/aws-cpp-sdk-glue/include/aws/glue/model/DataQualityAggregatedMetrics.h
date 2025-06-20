/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
   * <p>A summary of metrics showing the total counts of processed rows and rules,
   * including their pass/fail statistics based on row-level results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityAggregatedMetrics">AWS
   * API Reference</a></p>
   */
  class DataQualityAggregatedMetrics
  {
  public:
    AWS_GLUE_API DataQualityAggregatedMetrics() = default;
    AWS_GLUE_API DataQualityAggregatedMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityAggregatedMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of rows that were processed during the data quality
     * evaluation.</p>
     */
    inline double GetTotalRowsProcessed() const { return m_totalRowsProcessed; }
    inline bool TotalRowsProcessedHasBeenSet() const { return m_totalRowsProcessedHasBeenSet; }
    inline void SetTotalRowsProcessed(double value) { m_totalRowsProcessedHasBeenSet = true; m_totalRowsProcessed = value; }
    inline DataQualityAggregatedMetrics& WithTotalRowsProcessed(double value) { SetTotalRowsProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of rows that passed all applicable data quality rules.</p>
     */
    inline double GetTotalRowsPassed() const { return m_totalRowsPassed; }
    inline bool TotalRowsPassedHasBeenSet() const { return m_totalRowsPassedHasBeenSet; }
    inline void SetTotalRowsPassed(double value) { m_totalRowsPassedHasBeenSet = true; m_totalRowsPassed = value; }
    inline DataQualityAggregatedMetrics& WithTotalRowsPassed(double value) { SetTotalRowsPassed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of rows that failed one or more data quality rules.</p>
     */
    inline double GetTotalRowsFailed() const { return m_totalRowsFailed; }
    inline bool TotalRowsFailedHasBeenSet() const { return m_totalRowsFailedHasBeenSet; }
    inline void SetTotalRowsFailed(double value) { m_totalRowsFailedHasBeenSet = true; m_totalRowsFailed = value; }
    inline DataQualityAggregatedMetrics& WithTotalRowsFailed(double value) { SetTotalRowsFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of data quality rules that were evaluated.</p>
     */
    inline double GetTotalRulesProcessed() const { return m_totalRulesProcessed; }
    inline bool TotalRulesProcessedHasBeenSet() const { return m_totalRulesProcessedHasBeenSet; }
    inline void SetTotalRulesProcessed(double value) { m_totalRulesProcessedHasBeenSet = true; m_totalRulesProcessed = value; }
    inline DataQualityAggregatedMetrics& WithTotalRulesProcessed(double value) { SetTotalRulesProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of data quality rules that passed their evaluation
     * criteria.</p>
     */
    inline double GetTotalRulesPassed() const { return m_totalRulesPassed; }
    inline bool TotalRulesPassedHasBeenSet() const { return m_totalRulesPassedHasBeenSet; }
    inline void SetTotalRulesPassed(double value) { m_totalRulesPassedHasBeenSet = true; m_totalRulesPassed = value; }
    inline DataQualityAggregatedMetrics& WithTotalRulesPassed(double value) { SetTotalRulesPassed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of data quality rules that failed their evaluation
     * criteria.</p>
     */
    inline double GetTotalRulesFailed() const { return m_totalRulesFailed; }
    inline bool TotalRulesFailedHasBeenSet() const { return m_totalRulesFailedHasBeenSet; }
    inline void SetTotalRulesFailed(double value) { m_totalRulesFailedHasBeenSet = true; m_totalRulesFailed = value; }
    inline DataQualityAggregatedMetrics& WithTotalRulesFailed(double value) { SetTotalRulesFailed(value); return *this;}
    ///@}
  private:

    double m_totalRowsProcessed{0.0};
    bool m_totalRowsProcessedHasBeenSet = false;

    double m_totalRowsPassed{0.0};
    bool m_totalRowsPassedHasBeenSet = false;

    double m_totalRowsFailed{0.0};
    bool m_totalRowsFailedHasBeenSet = false;

    double m_totalRulesProcessed{0.0};
    bool m_totalRulesProcessedHasBeenSet = false;

    double m_totalRulesPassed{0.0};
    bool m_totalRulesPassedHasBeenSet = false;

    double m_totalRulesFailed{0.0};
    bool m_totalRulesFailedHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
