/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/RecommendationSourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/SavingsOpportunity.h>
#include <aws/compute-optimizer/model/CurrentPerformanceRiskRatings.h>
#include <aws/compute-optimizer/model/Summary.h>
#include <aws/compute-optimizer/model/IdleSummary.h>
#include <aws/compute-optimizer/model/InferredWorkloadSaving.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>A summary of a recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RecommendationSummary">AWS
   * API Reference</a></p>
   */
  class RecommendationSummary
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RecommendationSummary();
    AWS_COMPUTEOPTIMIZER_API RecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects that describe a recommendation summary.</p>
     */
    inline const Aws::Vector<Summary>& GetSummaries() const{ return m_summaries; }
    inline bool SummariesHasBeenSet() const { return m_summariesHasBeenSet; }
    inline void SetSummaries(const Aws::Vector<Summary>& value) { m_summariesHasBeenSet = true; m_summaries = value; }
    inline void SetSummaries(Aws::Vector<Summary>&& value) { m_summariesHasBeenSet = true; m_summaries = std::move(value); }
    inline RecommendationSummary& WithSummaries(const Aws::Vector<Summary>& value) { SetSummaries(value); return *this;}
    inline RecommendationSummary& WithSummaries(Aws::Vector<Summary>&& value) { SetSummaries(std::move(value)); return *this;}
    inline RecommendationSummary& AddSummaries(const Summary& value) { m_summariesHasBeenSet = true; m_summaries.push_back(value); return *this; }
    inline RecommendationSummary& AddSummaries(Summary&& value) { m_summariesHasBeenSet = true; m_summaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Describes the findings summary of the idle resources. </p>
     */
    inline const Aws::Vector<IdleSummary>& GetIdleSummaries() const{ return m_idleSummaries; }
    inline bool IdleSummariesHasBeenSet() const { return m_idleSummariesHasBeenSet; }
    inline void SetIdleSummaries(const Aws::Vector<IdleSummary>& value) { m_idleSummariesHasBeenSet = true; m_idleSummaries = value; }
    inline void SetIdleSummaries(Aws::Vector<IdleSummary>&& value) { m_idleSummariesHasBeenSet = true; m_idleSummaries = std::move(value); }
    inline RecommendationSummary& WithIdleSummaries(const Aws::Vector<IdleSummary>& value) { SetIdleSummaries(value); return *this;}
    inline RecommendationSummary& WithIdleSummaries(Aws::Vector<IdleSummary>&& value) { SetIdleSummaries(std::move(value)); return *this;}
    inline RecommendationSummary& AddIdleSummaries(const IdleSummary& value) { m_idleSummariesHasBeenSet = true; m_idleSummaries.push_back(value); return *this; }
    inline RecommendationSummary& AddIdleSummaries(IdleSummary&& value) { m_idleSummariesHasBeenSet = true; m_idleSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource type that the recommendation summary applies to.</p>
     */
    inline const RecommendationSourceType& GetRecommendationResourceType() const{ return m_recommendationResourceType; }
    inline bool RecommendationResourceTypeHasBeenSet() const { return m_recommendationResourceTypeHasBeenSet; }
    inline void SetRecommendationResourceType(const RecommendationSourceType& value) { m_recommendationResourceTypeHasBeenSet = true; m_recommendationResourceType = value; }
    inline void SetRecommendationResourceType(RecommendationSourceType&& value) { m_recommendationResourceTypeHasBeenSet = true; m_recommendationResourceType = std::move(value); }
    inline RecommendationSummary& WithRecommendationResourceType(const RecommendationSourceType& value) { SetRecommendationResourceType(value); return *this;}
    inline RecommendationSummary& WithRecommendationResourceType(RecommendationSourceType&& value) { SetRecommendationResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the recommendation summary.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline RecommendationSummary& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline RecommendationSummary& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline RecommendationSummary& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the savings opportunity for a given resource type.
     * Savings opportunity includes the estimated monthly savings amount and
     * percentage.</p>
     */
    inline const SavingsOpportunity& GetSavingsOpportunity() const{ return m_savingsOpportunity; }
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }
    inline void SetSavingsOpportunity(const SavingsOpportunity& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = value; }
    inline void SetSavingsOpportunity(SavingsOpportunity&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::move(value); }
    inline RecommendationSummary& WithSavingsOpportunity(const SavingsOpportunity& value) { SetSavingsOpportunity(value); return *this;}
    inline RecommendationSummary& WithSavingsOpportunity(SavingsOpportunity&& value) { SetSavingsOpportunity(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SavingsOpportunity& GetIdleSavingsOpportunity() const{ return m_idleSavingsOpportunity; }
    inline bool IdleSavingsOpportunityHasBeenSet() const { return m_idleSavingsOpportunityHasBeenSet; }
    inline void SetIdleSavingsOpportunity(const SavingsOpportunity& value) { m_idleSavingsOpportunityHasBeenSet = true; m_idleSavingsOpportunity = value; }
    inline void SetIdleSavingsOpportunity(SavingsOpportunity&& value) { m_idleSavingsOpportunityHasBeenSet = true; m_idleSavingsOpportunity = std::move(value); }
    inline RecommendationSummary& WithIdleSavingsOpportunity(const SavingsOpportunity& value) { SetIdleSavingsOpportunity(value); return *this;}
    inline RecommendationSummary& WithIdleSavingsOpportunity(SavingsOpportunity&& value) { SetIdleSavingsOpportunity(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SavingsOpportunity& GetAggregatedSavingsOpportunity() const{ return m_aggregatedSavingsOpportunity; }
    inline bool AggregatedSavingsOpportunityHasBeenSet() const { return m_aggregatedSavingsOpportunityHasBeenSet; }
    inline void SetAggregatedSavingsOpportunity(const SavingsOpportunity& value) { m_aggregatedSavingsOpportunityHasBeenSet = true; m_aggregatedSavingsOpportunity = value; }
    inline void SetAggregatedSavingsOpportunity(SavingsOpportunity&& value) { m_aggregatedSavingsOpportunityHasBeenSet = true; m_aggregatedSavingsOpportunity = std::move(value); }
    inline RecommendationSummary& WithAggregatedSavingsOpportunity(const SavingsOpportunity& value) { SetAggregatedSavingsOpportunity(value); return *this;}
    inline RecommendationSummary& WithAggregatedSavingsOpportunity(SavingsOpportunity&& value) { SetAggregatedSavingsOpportunity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the performance risk ratings for a given resource
     * type.</p>
     */
    inline const CurrentPerformanceRiskRatings& GetCurrentPerformanceRiskRatings() const{ return m_currentPerformanceRiskRatings; }
    inline bool CurrentPerformanceRiskRatingsHasBeenSet() const { return m_currentPerformanceRiskRatingsHasBeenSet; }
    inline void SetCurrentPerformanceRiskRatings(const CurrentPerformanceRiskRatings& value) { m_currentPerformanceRiskRatingsHasBeenSet = true; m_currentPerformanceRiskRatings = value; }
    inline void SetCurrentPerformanceRiskRatings(CurrentPerformanceRiskRatings&& value) { m_currentPerformanceRiskRatingsHasBeenSet = true; m_currentPerformanceRiskRatings = std::move(value); }
    inline RecommendationSummary& WithCurrentPerformanceRiskRatings(const CurrentPerformanceRiskRatings& value) { SetCurrentPerformanceRiskRatings(value); return *this;}
    inline RecommendationSummary& WithCurrentPerformanceRiskRatings(CurrentPerformanceRiskRatings&& value) { SetCurrentPerformanceRiskRatings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects that describes the estimated monthly saving amounts for
     * the instances running on the specified <code>inferredWorkloadTypes</code>. The
     * array contains the top five savings opportunites for the instances that run
     * inferred workload types. </p>
     */
    inline const Aws::Vector<InferredWorkloadSaving>& GetInferredWorkloadSavings() const{ return m_inferredWorkloadSavings; }
    inline bool InferredWorkloadSavingsHasBeenSet() const { return m_inferredWorkloadSavingsHasBeenSet; }
    inline void SetInferredWorkloadSavings(const Aws::Vector<InferredWorkloadSaving>& value) { m_inferredWorkloadSavingsHasBeenSet = true; m_inferredWorkloadSavings = value; }
    inline void SetInferredWorkloadSavings(Aws::Vector<InferredWorkloadSaving>&& value) { m_inferredWorkloadSavingsHasBeenSet = true; m_inferredWorkloadSavings = std::move(value); }
    inline RecommendationSummary& WithInferredWorkloadSavings(const Aws::Vector<InferredWorkloadSaving>& value) { SetInferredWorkloadSavings(value); return *this;}
    inline RecommendationSummary& WithInferredWorkloadSavings(Aws::Vector<InferredWorkloadSaving>&& value) { SetInferredWorkloadSavings(std::move(value)); return *this;}
    inline RecommendationSummary& AddInferredWorkloadSavings(const InferredWorkloadSaving& value) { m_inferredWorkloadSavingsHasBeenSet = true; m_inferredWorkloadSavings.push_back(value); return *this; }
    inline RecommendationSummary& AddInferredWorkloadSavings(InferredWorkloadSaving&& value) { m_inferredWorkloadSavingsHasBeenSet = true; m_inferredWorkloadSavings.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Summary> m_summaries;
    bool m_summariesHasBeenSet = false;

    Aws::Vector<IdleSummary> m_idleSummaries;
    bool m_idleSummariesHasBeenSet = false;

    RecommendationSourceType m_recommendationResourceType;
    bool m_recommendationResourceTypeHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    SavingsOpportunity m_savingsOpportunity;
    bool m_savingsOpportunityHasBeenSet = false;

    SavingsOpportunity m_idleSavingsOpportunity;
    bool m_idleSavingsOpportunityHasBeenSet = false;

    SavingsOpportunity m_aggregatedSavingsOpportunity;
    bool m_aggregatedSavingsOpportunityHasBeenSet = false;

    CurrentPerformanceRiskRatings m_currentPerformanceRiskRatings;
    bool m_currentPerformanceRiskRatingsHasBeenSet = false;

    Aws::Vector<InferredWorkloadSaving> m_inferredWorkloadSavings;
    bool m_inferredWorkloadSavingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
