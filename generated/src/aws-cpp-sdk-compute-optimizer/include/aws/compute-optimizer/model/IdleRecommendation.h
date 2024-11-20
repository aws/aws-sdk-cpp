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
    AWS_COMPUTEOPTIMIZER_API IdleRecommendation();
    AWS_COMPUTEOPTIMIZER_API IdleRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API IdleRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the current idle resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline IdleRecommendation& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline IdleRecommendation& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline IdleRecommendation& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline IdleRecommendation& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline IdleRecommendation& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline IdleRecommendation& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource that is idle.</p>
     */
    inline const IdleRecommendationResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const IdleRecommendationResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(IdleRecommendationResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline IdleRecommendation& WithResourceType(const IdleRecommendationResourceType& value) { SetResourceType(value); return *this;}
    inline IdleRecommendation& WithResourceType(IdleRecommendationResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the idle resource.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline IdleRecommendation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline IdleRecommendation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline IdleRecommendation& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding classification of an idle resource.</p>
     */
    inline const IdleFinding& GetFinding() const{ return m_finding; }
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }
    inline void SetFinding(const IdleFinding& value) { m_findingHasBeenSet = true; m_finding = value; }
    inline void SetFinding(IdleFinding&& value) { m_findingHasBeenSet = true; m_finding = std::move(value); }
    inline IdleRecommendation& WithFinding(const IdleFinding& value) { SetFinding(value); return *this;}
    inline IdleRecommendation& WithFinding(IdleFinding&& value) { SetFinding(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the findings for the resource.</p>
     */
    inline const Aws::String& GetFindingDescription() const{ return m_findingDescription; }
    inline bool FindingDescriptionHasBeenSet() const { return m_findingDescriptionHasBeenSet; }
    inline void SetFindingDescription(const Aws::String& value) { m_findingDescriptionHasBeenSet = true; m_findingDescription = value; }
    inline void SetFindingDescription(Aws::String&& value) { m_findingDescriptionHasBeenSet = true; m_findingDescription = std::move(value); }
    inline void SetFindingDescription(const char* value) { m_findingDescriptionHasBeenSet = true; m_findingDescription.assign(value); }
    inline IdleRecommendation& WithFindingDescription(const Aws::String& value) { SetFindingDescription(value); return *this;}
    inline IdleRecommendation& WithFindingDescription(Aws::String&& value) { SetFindingDescription(std::move(value)); return *this;}
    inline IdleRecommendation& WithFindingDescription(const char* value) { SetFindingDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The savings opportunity for the idle resource.</p>
     */
    inline const IdleSavingsOpportunity& GetSavingsOpportunity() const{ return m_savingsOpportunity; }
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }
    inline void SetSavingsOpportunity(const IdleSavingsOpportunity& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = value; }
    inline void SetSavingsOpportunity(IdleSavingsOpportunity&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::move(value); }
    inline IdleRecommendation& WithSavingsOpportunity(const IdleSavingsOpportunity& value) { SetSavingsOpportunity(value); return *this;}
    inline IdleRecommendation& WithSavingsOpportunity(IdleSavingsOpportunity&& value) { SetSavingsOpportunity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The savings opportunity for the idle resource after any applying
     * discounts.</p>
     */
    inline const IdleSavingsOpportunityAfterDiscounts& GetSavingsOpportunityAfterDiscounts() const{ return m_savingsOpportunityAfterDiscounts; }
    inline bool SavingsOpportunityAfterDiscountsHasBeenSet() const { return m_savingsOpportunityAfterDiscountsHasBeenSet; }
    inline void SetSavingsOpportunityAfterDiscounts(const IdleSavingsOpportunityAfterDiscounts& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = value; }
    inline void SetSavingsOpportunityAfterDiscounts(IdleSavingsOpportunityAfterDiscounts&& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = std::move(value); }
    inline IdleRecommendation& WithSavingsOpportunityAfterDiscounts(const IdleSavingsOpportunityAfterDiscounts& value) { SetSavingsOpportunityAfterDiscounts(value); return *this;}
    inline IdleRecommendation& WithSavingsOpportunityAfterDiscounts(IdleSavingsOpportunityAfterDiscounts&& value) { SetSavingsOpportunityAfterDiscounts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the utilization metrics of the idle
     * resource.</p>
     */
    inline const Aws::Vector<IdleUtilizationMetric>& GetUtilizationMetrics() const{ return m_utilizationMetrics; }
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }
    inline void SetUtilizationMetrics(const Aws::Vector<IdleUtilizationMetric>& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = value; }
    inline void SetUtilizationMetrics(Aws::Vector<IdleUtilizationMetric>&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::move(value); }
    inline IdleRecommendation& WithUtilizationMetrics(const Aws::Vector<IdleUtilizationMetric>& value) { SetUtilizationMetrics(value); return *this;}
    inline IdleRecommendation& WithUtilizationMetrics(Aws::Vector<IdleUtilizationMetric>&& value) { SetUtilizationMetrics(std::move(value)); return *this;}
    inline IdleRecommendation& AddUtilizationMetrics(const IdleUtilizationMetric& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(value); return *this; }
    inline IdleRecommendation& AddUtilizationMetrics(IdleUtilizationMetric&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days the idle resource utilization metrics were analyzed.</p>
     */
    inline double GetLookBackPeriodInDays() const{ return m_lookBackPeriodInDays; }
    inline bool LookBackPeriodInDaysHasBeenSet() const { return m_lookBackPeriodInDaysHasBeenSet; }
    inline void SetLookBackPeriodInDays(double value) { m_lookBackPeriodInDaysHasBeenSet = true; m_lookBackPeriodInDays = value; }
    inline IdleRecommendation& WithLookBackPeriodInDays(double value) { SetLookBackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the idle resource recommendation was last
     * generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const{ return m_lastRefreshTimestamp; }
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }
    inline void SetLastRefreshTimestamp(const Aws::Utils::DateTime& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = value; }
    inline void SetLastRefreshTimestamp(Aws::Utils::DateTime&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::move(value); }
    inline IdleRecommendation& WithLastRefreshTimestamp(const Aws::Utils::DateTime& value) { SetLastRefreshTimestamp(value); return *this;}
    inline IdleRecommendation& WithLastRefreshTimestamp(Aws::Utils::DateTime&& value) { SetLastRefreshTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags assigned to your idle resource recommendations.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline IdleRecommendation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline IdleRecommendation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline IdleRecommendation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline IdleRecommendation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    IdleRecommendationResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    IdleFinding m_finding;
    bool m_findingHasBeenSet = false;

    Aws::String m_findingDescription;
    bool m_findingDescriptionHasBeenSet = false;

    IdleSavingsOpportunity m_savingsOpportunity;
    bool m_savingsOpportunityHasBeenSet = false;

    IdleSavingsOpportunityAfterDiscounts m_savingsOpportunityAfterDiscounts;
    bool m_savingsOpportunityAfterDiscountsHasBeenSet = false;

    Aws::Vector<IdleUtilizationMetric> m_utilizationMetrics;
    bool m_utilizationMetricsHasBeenSet = false;

    double m_lookBackPeriodInDays;
    bool m_lookBackPeriodInDaysHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp;
    bool m_lastRefreshTimestampHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
