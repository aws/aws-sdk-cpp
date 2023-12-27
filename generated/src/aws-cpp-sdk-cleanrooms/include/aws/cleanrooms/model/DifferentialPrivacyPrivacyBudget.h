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
    AWS_CLEANROOMS_API DifferentialPrivacyPrivacyBudget();
    AWS_CLEANROOMS_API DifferentialPrivacyPrivacyBudget(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API DifferentialPrivacyPrivacyBudget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This information includes the configured epsilon value and the utility in
     * terms of total aggregations, as well as the remaining aggregations.</p>
     */
    inline const Aws::Vector<DifferentialPrivacyPrivacyBudgetAggregation>& GetAggregations() const{ return m_aggregations; }

    /**
     * <p>This information includes the configured epsilon value and the utility in
     * terms of total aggregations, as well as the remaining aggregations.</p>
     */
    inline bool AggregationsHasBeenSet() const { return m_aggregationsHasBeenSet; }

    /**
     * <p>This information includes the configured epsilon value and the utility in
     * terms of total aggregations, as well as the remaining aggregations.</p>
     */
    inline void SetAggregations(const Aws::Vector<DifferentialPrivacyPrivacyBudgetAggregation>& value) { m_aggregationsHasBeenSet = true; m_aggregations = value; }

    /**
     * <p>This information includes the configured epsilon value and the utility in
     * terms of total aggregations, as well as the remaining aggregations.</p>
     */
    inline void SetAggregations(Aws::Vector<DifferentialPrivacyPrivacyBudgetAggregation>&& value) { m_aggregationsHasBeenSet = true; m_aggregations = std::move(value); }

    /**
     * <p>This information includes the configured epsilon value and the utility in
     * terms of total aggregations, as well as the remaining aggregations.</p>
     */
    inline DifferentialPrivacyPrivacyBudget& WithAggregations(const Aws::Vector<DifferentialPrivacyPrivacyBudgetAggregation>& value) { SetAggregations(value); return *this;}

    /**
     * <p>This information includes the configured epsilon value and the utility in
     * terms of total aggregations, as well as the remaining aggregations.</p>
     */
    inline DifferentialPrivacyPrivacyBudget& WithAggregations(Aws::Vector<DifferentialPrivacyPrivacyBudgetAggregation>&& value) { SetAggregations(std::move(value)); return *this;}

    /**
     * <p>This information includes the configured epsilon value and the utility in
     * terms of total aggregations, as well as the remaining aggregations.</p>
     */
    inline DifferentialPrivacyPrivacyBudget& AddAggregations(const DifferentialPrivacyPrivacyBudgetAggregation& value) { m_aggregationsHasBeenSet = true; m_aggregations.push_back(value); return *this; }

    /**
     * <p>This information includes the configured epsilon value and the utility in
     * terms of total aggregations, as well as the remaining aggregations.</p>
     */
    inline DifferentialPrivacyPrivacyBudget& AddAggregations(DifferentialPrivacyPrivacyBudgetAggregation&& value) { m_aggregationsHasBeenSet = true; m_aggregations.push_back(std::move(value)); return *this; }


    /**
     * <p>The epsilon value that you configured.</p>
     */
    inline int GetEpsilon() const{ return m_epsilon; }

    /**
     * <p>The epsilon value that you configured.</p>
     */
    inline bool EpsilonHasBeenSet() const { return m_epsilonHasBeenSet; }

    /**
     * <p>The epsilon value that you configured.</p>
     */
    inline void SetEpsilon(int value) { m_epsilonHasBeenSet = true; m_epsilon = value; }

    /**
     * <p>The epsilon value that you configured.</p>
     */
    inline DifferentialPrivacyPrivacyBudget& WithEpsilon(int value) { SetEpsilon(value); return *this;}

  private:

    Aws::Vector<DifferentialPrivacyPrivacyBudgetAggregation> m_aggregations;
    bool m_aggregationsHasBeenSet = false;

    int m_epsilon;
    bool m_epsilonHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
