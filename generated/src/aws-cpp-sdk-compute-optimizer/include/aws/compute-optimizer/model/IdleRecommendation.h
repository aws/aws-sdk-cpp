/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/IdleRecommendationResourceType.h>
#include <aws/compute-optimizer/model/IdleFinding.h>
#include <aws/compute-optimizer/model/IdleSavingsOpportunity.h>
#include <aws/compute-optimizer/model/IdleSavingsOpportunityAfterDiscounts.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/compute-optimizer/model/IdleUtilizationMetric.h>
#include <aws/compute-optimizer/model/Tag.h>
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
   * <p>Describes an Idle resource recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/IdleRecommendation">AWS
   * API Reference</a></p>
   */
  class IdleRecommendation
  {
  public:
    AWS_COMPUTEOPTIMIZER_API IdleRecommendation() = default;
    AWS_COMPUTEOPTIMIZER_API IdleRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API IdleRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the current idle resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    IdleRecommendation& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    IdleRecommendation& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource that is idle.</p>
     */
    inline IdleRecommendationResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(IdleRecommendationResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline IdleRecommendation& WithResourceType(IdleRecommendationResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the idle resource.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    IdleRecommendation& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding classification of an idle resource.</p>
     */
    inline IdleFinding GetFinding() const { return m_finding; }
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }
    inline void SetFinding(IdleFinding value) { m_findingHasBeenSet = true; m_finding = value; }
    inline IdleRecommendation& WithFinding(IdleFinding value) { SetFinding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the findings for the resource.</p>
     */
    inline const Aws::String& GetFindingDescription() const { return m_findingDescription; }
    inline bool FindingDescriptionHasBeenSet() const { return m_findingDescriptionHasBeenSet; }
    template<typename FindingDescriptionT = Aws::String>
    void SetFindingDescription(FindingDescriptionT&& value) { m_findingDescriptionHasBeenSet = true; m_findingDescription = std::forward<FindingDescriptionT>(value); }
    template<typename FindingDescriptionT = Aws::String>
    IdleRecommendation& WithFindingDescription(FindingDescriptionT&& value) { SetFindingDescription(std::forward<FindingDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The savings opportunity for the idle resource.</p>
     */
    inline const IdleSavingsOpportunity& GetSavingsOpportunity() const { return m_savingsOpportunity; }
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }
    template<typename SavingsOpportunityT = IdleSavingsOpportunity>
    void SetSavingsOpportunity(SavingsOpportunityT&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::forward<SavingsOpportunityT>(value); }
    template<typename SavingsOpportunityT = IdleSavingsOpportunity>
    IdleRecommendation& WithSavingsOpportunity(SavingsOpportunityT&& value) { SetSavingsOpportunity(std::forward<SavingsOpportunityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The savings opportunity for the idle resource after any applying
     * discounts.</p>
     */
    inline const IdleSavingsOpportunityAfterDiscounts& GetSavingsOpportunityAfterDiscounts() const { return m_savingsOpportunityAfterDiscounts; }
    inline bool SavingsOpportunityAfterDiscountsHasBeenSet() const { return m_savingsOpportunityAfterDiscountsHasBeenSet; }
    template<typename SavingsOpportunityAfterDiscountsT = IdleSavingsOpportunityAfterDiscounts>
    void SetSavingsOpportunityAfterDiscounts(SavingsOpportunityAfterDiscountsT&& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = std::forward<SavingsOpportunityAfterDiscountsT>(value); }
    template<typename SavingsOpportunityAfterDiscountsT = IdleSavingsOpportunityAfterDiscounts>
    IdleRecommendation& WithSavingsOpportunityAfterDiscounts(SavingsOpportunityAfterDiscountsT&& value) { SetSavingsOpportunityAfterDiscounts(std::forward<SavingsOpportunityAfterDiscountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the utilization metrics of the idle
     * resource.</p>
     */
    inline const Aws::Vector<IdleUtilizationMetric>& GetUtilizationMetrics() const { return m_utilizationMetrics; }
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }
    template<typename UtilizationMetricsT = Aws::Vector<IdleUtilizationMetric>>
    void SetUtilizationMetrics(UtilizationMetricsT&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::forward<UtilizationMetricsT>(value); }
    template<typename UtilizationMetricsT = Aws::Vector<IdleUtilizationMetric>>
    IdleRecommendation& WithUtilizationMetrics(UtilizationMetricsT&& value) { SetUtilizationMetrics(std::forward<UtilizationMetricsT>(value)); return *this;}
    template<typename UtilizationMetricsT = IdleUtilizationMetric>
    IdleRecommendation& AddUtilizationMetrics(UtilizationMetricsT&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.emplace_back(std::forward<UtilizationMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days the idle resource utilization metrics were analyzed.</p>
     */
    inline double GetLookBackPeriodInDays() const { return m_lookBackPeriodInDays; }
    inline bool LookBackPeriodInDaysHasBeenSet() const { return m_lookBackPeriodInDaysHasBeenSet; }
    inline void SetLookBackPeriodInDays(double value) { m_lookBackPeriodInDaysHasBeenSet = true; m_lookBackPeriodInDays = value; }
    inline IdleRecommendation& WithLookBackPeriodInDays(double value) { SetLookBackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the idle resource recommendation was last
     * generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const { return m_lastRefreshTimestamp; }
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    void SetLastRefreshTimestamp(LastRefreshTimestampT&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::forward<LastRefreshTimestampT>(value); }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    IdleRecommendation& WithLastRefreshTimestamp(LastRefreshTimestampT&& value) { SetLastRefreshTimestamp(std::forward<LastRefreshTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags assigned to your idle resource recommendations.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    IdleRecommendation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    IdleRecommendation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    IdleRecommendationResourceType m_resourceType{IdleRecommendationResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    IdleFinding m_finding{IdleFinding::NOT_SET};
    bool m_findingHasBeenSet = false;

    Aws::String m_findingDescription;
    bool m_findingDescriptionHasBeenSet = false;

    IdleSavingsOpportunity m_savingsOpportunity;
    bool m_savingsOpportunityHasBeenSet = false;

    IdleSavingsOpportunityAfterDiscounts m_savingsOpportunityAfterDiscounts;
    bool m_savingsOpportunityAfterDiscountsHasBeenSet = false;

    Aws::Vector<IdleUtilizationMetric> m_utilizationMetrics;
    bool m_utilizationMetricsHasBeenSet = false;

    double m_lookBackPeriodInDays{0.0};
    bool m_lookBackPeriodInDaysHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp{};
    bool m_lastRefreshTimestampHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
