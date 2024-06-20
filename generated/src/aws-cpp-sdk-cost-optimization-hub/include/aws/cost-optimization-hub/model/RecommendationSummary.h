/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The summary of rightsizing recommendations, including de-duped savings from
   * all types of recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/RecommendationSummary">AWS
   * API Reference</a></p>
   */
  class RecommendationSummary
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API RecommendationSummary();
    AWS_COSTOPTIMIZATIONHUB_API RecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API RecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The grouping of recommendations.</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }
    inline RecommendationSummary& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}
    inline RecommendationSummary& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}
    inline RecommendationSummary& WithGroup(const char* value) { SetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated total savings resulting from modifications, on a monthly
     * basis.</p>
     */
    inline double GetEstimatedMonthlySavings() const{ return m_estimatedMonthlySavings; }
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
    inline void SetEstimatedMonthlySavings(double value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = value; }
    inline RecommendationSummary& WithEstimatedMonthlySavings(double value) { SetEstimatedMonthlySavings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instance recommendations.</p>
     */
    inline int GetRecommendationCount() const{ return m_recommendationCount; }
    inline bool RecommendationCountHasBeenSet() const { return m_recommendationCountHasBeenSet; }
    inline void SetRecommendationCount(int value) { m_recommendationCountHasBeenSet = true; m_recommendationCount = value; }
    inline RecommendationSummary& WithRecommendationCount(int value) { SetRecommendationCount(value); return *this;}
    ///@}
  private:

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    double m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet = false;

    int m_recommendationCount;
    bool m_recommendationCountHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
