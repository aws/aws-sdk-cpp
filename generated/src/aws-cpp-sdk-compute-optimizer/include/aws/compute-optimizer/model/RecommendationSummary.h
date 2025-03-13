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
    AWS_COMPUTEOPTIMIZER_API RecommendationSummary() = default;
    AWS_COMPUTEOPTIMIZER_API RecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects that describe a recommendation summary.</p>
     */
    inline const Aws::Vector<Summary>& GetSummaries() const { return m_summaries; }
    inline bool SummariesHasBeenSet() const { return m_summariesHasBeenSet; }
    template<typename SummariesT = Aws::Vector<Summary>>
    void SetSummaries(SummariesT&& value) { m_summariesHasBeenSet = true; m_summaries = std::forward<SummariesT>(value); }
    template<typename SummariesT = Aws::Vector<Summary>>
    RecommendationSummary& WithSummaries(SummariesT&& value) { SetSummaries(std::forward<SummariesT>(value)); return *this;}
    template<typename SummariesT = Summary>
    RecommendationSummary& AddSummaries(SummariesT&& value) { m_summariesHasBeenSet = true; m_summaries.emplace_back(std::forward<SummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Describes the findings summary of the idle resources. </p>
     */
    inline const Aws::Vector<IdleSummary>& GetIdleSummaries() const { return m_idleSummaries; }
    inline bool IdleSummariesHasBeenSet() const { return m_idleSummariesHasBeenSet; }
    template<typename IdleSummariesT = Aws::Vector<IdleSummary>>
    void SetIdleSummaries(IdleSummariesT&& value) { m_idleSummariesHasBeenSet = true; m_idleSummaries = std::forward<IdleSummariesT>(value); }
    template<typename IdleSummariesT = Aws::Vector<IdleSummary>>
    RecommendationSummary& WithIdleSummaries(IdleSummariesT&& value) { SetIdleSummaries(std::forward<IdleSummariesT>(value)); return *this;}
    template<typename IdleSummariesT = IdleSummary>
    RecommendationSummary& AddIdleSummaries(IdleSummariesT&& value) { m_idleSummariesHasBeenSet = true; m_idleSummaries.emplace_back(std::forward<IdleSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource type that the recommendation summary applies to.</p>
     */
    inline RecommendationSourceType GetRecommendationResourceType() const { return m_recommendationResourceType; }
    inline bool RecommendationResourceTypeHasBeenSet() const { return m_recommendationResourceTypeHasBeenSet; }
    inline void SetRecommendationResourceType(RecommendationSourceType value) { m_recommendationResourceTypeHasBeenSet = true; m_recommendationResourceType = value; }
    inline RecommendationSummary& WithRecommendationResourceType(RecommendationSourceType value) { SetRecommendationResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the recommendation summary.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    RecommendationSummary& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the savings opportunity for a given resource type.
     * Savings opportunity includes the estimated monthly savings amount and
     * percentage.</p>
     */
    inline const SavingsOpportunity& GetSavingsOpportunity() const { return m_savingsOpportunity; }
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }
    template<typename SavingsOpportunityT = SavingsOpportunity>
    void SetSavingsOpportunity(SavingsOpportunityT&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::forward<SavingsOpportunityT>(value); }
    template<typename SavingsOpportunityT = SavingsOpportunity>
    RecommendationSummary& WithSavingsOpportunity(SavingsOpportunityT&& value) { SetSavingsOpportunity(std::forward<SavingsOpportunityT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SavingsOpportunity& GetIdleSavingsOpportunity() const { return m_idleSavingsOpportunity; }
    inline bool IdleSavingsOpportunityHasBeenSet() const { return m_idleSavingsOpportunityHasBeenSet; }
    template<typename IdleSavingsOpportunityT = SavingsOpportunity>
    void SetIdleSavingsOpportunity(IdleSavingsOpportunityT&& value) { m_idleSavingsOpportunityHasBeenSet = true; m_idleSavingsOpportunity = std::forward<IdleSavingsOpportunityT>(value); }
    template<typename IdleSavingsOpportunityT = SavingsOpportunity>
    RecommendationSummary& WithIdleSavingsOpportunity(IdleSavingsOpportunityT&& value) { SetIdleSavingsOpportunity(std::forward<IdleSavingsOpportunityT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SavingsOpportunity& GetAggregatedSavingsOpportunity() const { return m_aggregatedSavingsOpportunity; }
    inline bool AggregatedSavingsOpportunityHasBeenSet() const { return m_aggregatedSavingsOpportunityHasBeenSet; }
    template<typename AggregatedSavingsOpportunityT = SavingsOpportunity>
    void SetAggregatedSavingsOpportunity(AggregatedSavingsOpportunityT&& value) { m_aggregatedSavingsOpportunityHasBeenSet = true; m_aggregatedSavingsOpportunity = std::forward<AggregatedSavingsOpportunityT>(value); }
    template<typename AggregatedSavingsOpportunityT = SavingsOpportunity>
    RecommendationSummary& WithAggregatedSavingsOpportunity(AggregatedSavingsOpportunityT&& value) { SetAggregatedSavingsOpportunity(std::forward<AggregatedSavingsOpportunityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the performance risk ratings for a given resource
     * type.</p>
     */
    inline const CurrentPerformanceRiskRatings& GetCurrentPerformanceRiskRatings() const { return m_currentPerformanceRiskRatings; }
    inline bool CurrentPerformanceRiskRatingsHasBeenSet() const { return m_currentPerformanceRiskRatingsHasBeenSet; }
    template<typename CurrentPerformanceRiskRatingsT = CurrentPerformanceRiskRatings>
    void SetCurrentPerformanceRiskRatings(CurrentPerformanceRiskRatingsT&& value) { m_currentPerformanceRiskRatingsHasBeenSet = true; m_currentPerformanceRiskRatings = std::forward<CurrentPerformanceRiskRatingsT>(value); }
    template<typename CurrentPerformanceRiskRatingsT = CurrentPerformanceRiskRatings>
    RecommendationSummary& WithCurrentPerformanceRiskRatings(CurrentPerformanceRiskRatingsT&& value) { SetCurrentPerformanceRiskRatings(std::forward<CurrentPerformanceRiskRatingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects that describes the estimated monthly saving amounts for
     * the instances running on the specified <code>inferredWorkloadTypes</code>. The
     * array contains the top five savings opportunites for the instances that run
     * inferred workload types. </p>
     */
    inline const Aws::Vector<InferredWorkloadSaving>& GetInferredWorkloadSavings() const { return m_inferredWorkloadSavings; }
    inline bool InferredWorkloadSavingsHasBeenSet() const { return m_inferredWorkloadSavingsHasBeenSet; }
    template<typename InferredWorkloadSavingsT = Aws::Vector<InferredWorkloadSaving>>
    void SetInferredWorkloadSavings(InferredWorkloadSavingsT&& value) { m_inferredWorkloadSavingsHasBeenSet = true; m_inferredWorkloadSavings = std::forward<InferredWorkloadSavingsT>(value); }
    template<typename InferredWorkloadSavingsT = Aws::Vector<InferredWorkloadSaving>>
    RecommendationSummary& WithInferredWorkloadSavings(InferredWorkloadSavingsT&& value) { SetInferredWorkloadSavings(std::forward<InferredWorkloadSavingsT>(value)); return *this;}
    template<typename InferredWorkloadSavingsT = InferredWorkloadSaving>
    RecommendationSummary& AddInferredWorkloadSavings(InferredWorkloadSavingsT&& value) { m_inferredWorkloadSavingsHasBeenSet = true; m_inferredWorkloadSavings.emplace_back(std::forward<InferredWorkloadSavingsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Summary> m_summaries;
    bool m_summariesHasBeenSet = false;

    Aws::Vector<IdleSummary> m_idleSummaries;
    bool m_idleSummariesHasBeenSet = false;

    RecommendationSourceType m_recommendationResourceType{RecommendationSourceType::NOT_SET};
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
