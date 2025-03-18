/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/DifferentialPrivacyPrivacyBudgetAggregation.h>
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
   * <p>Specifies the configured epsilon value and the utility in terms of total
   * aggregations, as well as the remaining aggregations available.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DifferentialPrivacyPrivacyBudget">AWS
   * API Reference</a></p>
   */
  class DifferentialPrivacyPrivacyBudget
  {
  public:
    AWS_CLEANROOMS_API DifferentialPrivacyPrivacyBudget() = default;
    AWS_CLEANROOMS_API DifferentialPrivacyPrivacyBudget(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API DifferentialPrivacyPrivacyBudget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This information includes the configured epsilon value and the utility in
     * terms of total aggregations, as well as the remaining aggregations.</p>
     */
    inline const Aws::Vector<DifferentialPrivacyPrivacyBudgetAggregation>& GetAggregations() const { return m_aggregations; }
    inline bool AggregationsHasBeenSet() const { return m_aggregationsHasBeenSet; }
    template<typename AggregationsT = Aws::Vector<DifferentialPrivacyPrivacyBudgetAggregation>>
    void SetAggregations(AggregationsT&& value) { m_aggregationsHasBeenSet = true; m_aggregations = std::forward<AggregationsT>(value); }
    template<typename AggregationsT = Aws::Vector<DifferentialPrivacyPrivacyBudgetAggregation>>
    DifferentialPrivacyPrivacyBudget& WithAggregations(AggregationsT&& value) { SetAggregations(std::forward<AggregationsT>(value)); return *this;}
    template<typename AggregationsT = DifferentialPrivacyPrivacyBudgetAggregation>
    DifferentialPrivacyPrivacyBudget& AddAggregations(AggregationsT&& value) { m_aggregationsHasBeenSet = true; m_aggregations.emplace_back(std::forward<AggregationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The epsilon value that you configured.</p>
     */
    inline int GetEpsilon() const { return m_epsilon; }
    inline bool EpsilonHasBeenSet() const { return m_epsilonHasBeenSet; }
    inline void SetEpsilon(int value) { m_epsilonHasBeenSet = true; m_epsilon = value; }
    inline DifferentialPrivacyPrivacyBudget& WithEpsilon(int value) { SetEpsilon(value); return *this;}
    ///@}
  private:

    Aws::Vector<DifferentialPrivacyPrivacyBudgetAggregation> m_aggregations;
    bool m_aggregationsHasBeenSet = false;

    int m_epsilon{0};
    bool m_epsilonHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
