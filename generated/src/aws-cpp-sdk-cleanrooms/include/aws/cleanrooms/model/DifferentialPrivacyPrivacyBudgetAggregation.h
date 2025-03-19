/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/DifferentialPrivacyAggregationType.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Information about the total number of aggregations, as well as the remaining
   * aggregations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DifferentialPrivacyPrivacyBudgetAggregation">AWS
   * API Reference</a></p>
   */
  class DifferentialPrivacyPrivacyBudgetAggregation
  {
  public:
    AWS_CLEANROOMS_API DifferentialPrivacyPrivacyBudgetAggregation() = default;
    AWS_CLEANROOMS_API DifferentialPrivacyPrivacyBudgetAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API DifferentialPrivacyPrivacyBudgetAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The different types of aggregation functions that you can perform.</p>
     */
    inline DifferentialPrivacyAggregationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DifferentialPrivacyAggregationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DifferentialPrivacyPrivacyBudgetAggregation& WithType(DifferentialPrivacyAggregationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of aggregation functions that you can perform with the
     * given privacy budget.</p>
     */
    inline int GetMaxCount() const { return m_maxCount; }
    inline bool MaxCountHasBeenSet() const { return m_maxCountHasBeenSet; }
    inline void SetMaxCount(int value) { m_maxCountHasBeenSet = true; m_maxCount = value; }
    inline DifferentialPrivacyPrivacyBudgetAggregation& WithMaxCount(int value) { SetMaxCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining number of aggregation functions that can be run with the
     * available privacy budget.</p>
     */
    inline int GetRemainingCount() const { return m_remainingCount; }
    inline bool RemainingCountHasBeenSet() const { return m_remainingCountHasBeenSet; }
    inline void SetRemainingCount(int value) { m_remainingCountHasBeenSet = true; m_remainingCount = value; }
    inline DifferentialPrivacyPrivacyBudgetAggregation& WithRemainingCount(int value) { SetRemainingCount(value); return *this;}
    ///@}
  private:

    DifferentialPrivacyAggregationType m_type{DifferentialPrivacyAggregationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_maxCount{0};
    bool m_maxCountHasBeenSet = false;

    int m_remainingCount{0};
    bool m_remainingCountHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
