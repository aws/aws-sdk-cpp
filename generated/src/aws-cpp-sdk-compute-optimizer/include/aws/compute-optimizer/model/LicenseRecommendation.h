/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/LicenseConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/compute-optimizer/model/LicenseFinding.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/LicenseFindingReasonCode.h>
#include <aws/compute-optimizer/model/LicenseRecommendationOption.h>
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
   * <p> Describes a license recommendation for an EC2 instance. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/LicenseRecommendation">AWS
   * API Reference</a></p>
   */
  class LicenseRecommendation
  {
  public:
    AWS_COMPUTEOPTIMIZER_API LicenseRecommendation() = default;
    AWS_COMPUTEOPTIMIZER_API LicenseRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LicenseRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    LicenseRecommendation& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID of the license. </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    LicenseRecommendation& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that describes the current configuration of an instance that runs
     * on a license. </p>
     */
    inline const LicenseConfiguration& GetCurrentLicenseConfiguration() const { return m_currentLicenseConfiguration; }
    inline bool CurrentLicenseConfigurationHasBeenSet() const { return m_currentLicenseConfigurationHasBeenSet; }
    template<typename CurrentLicenseConfigurationT = LicenseConfiguration>
    void SetCurrentLicenseConfiguration(CurrentLicenseConfigurationT&& value) { m_currentLicenseConfigurationHasBeenSet = true; m_currentLicenseConfiguration = std::forward<CurrentLicenseConfigurationT>(value); }
    template<typename CurrentLicenseConfigurationT = LicenseConfiguration>
    LicenseRecommendation& WithCurrentLicenseConfiguration(CurrentLicenseConfigurationT&& value) { SetCurrentLicenseConfiguration(std::forward<CurrentLicenseConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of days for which utilization metrics were analyzed for an
     * instance that runs on a license. </p>
     */
    inline double GetLookbackPeriodInDays() const { return m_lookbackPeriodInDays; }
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }
    inline void SetLookbackPeriodInDays(double value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }
    inline LicenseRecommendation& WithLookbackPeriodInDays(double value) { SetLookbackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of when the license recommendation was last generated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const { return m_lastRefreshTimestamp; }
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    void SetLastRefreshTimestamp(LastRefreshTimestampT&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::forward<LastRefreshTimestampT>(value); }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    LicenseRecommendation& WithLastRefreshTimestamp(LastRefreshTimestampT&& value) { SetLastRefreshTimestamp(std::forward<LastRefreshTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The finding classification for an instance that runs on a license. </p>
     * <p>Findings include:</p> <ul> <li> <p> <code>InsufficentMetrics</code> — When
     * Compute Optimizer detects that your CloudWatch Application Insights isn't
     * enabled or is enabled with insufficient permissions. </p> </li> <li> <p>
     * <code>NotOptimized</code> — When Compute Optimizer detects that your EC2
     * infrastructure isn't using any of the SQL server license features you're paying
     * for, a license is considered not optimized.</p> </li> <li> <p>
     * <code>Optimized</code> — When Compute Optimizer detects that all specifications
     * of your license meet the performance requirements of your workload. </p> </li>
     * </ul>
     */
    inline LicenseFinding GetFinding() const { return m_finding; }
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }
    inline void SetFinding(LicenseFinding value) { m_findingHasBeenSet = true; m_finding = value; }
    inline LicenseRecommendation& WithFinding(LicenseFinding value) { SetFinding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason for the finding classification for an instance that runs on a
     * license. </p> <p>Finding reason codes include:</p> <ul> <li> <p>
     * <code>Optimized</code> — All specifications of your license meet the performance
     * requirements of your workload. </p> </li> <li> <p>
     * <code>LicenseOverprovisioned</code> — A license is considered over-provisioned
     * when your license can be downgraded while still meeting the performance
     * requirements of your workload.</p> </li> <li> <p>
     * <code>InvalidCloudwatchApplicationInsights</code> — CloudWatch Application
     * Insights isn't configured properly.</p> </li> <li> <p>
     * <code>CloudwatchApplicationInsightsError</code> — There is a CloudWatch
     * Application Insights error. </p> </li> </ul>
     */
    inline const Aws::Vector<LicenseFindingReasonCode>& GetFindingReasonCodes() const { return m_findingReasonCodes; }
    inline bool FindingReasonCodesHasBeenSet() const { return m_findingReasonCodesHasBeenSet; }
    template<typename FindingReasonCodesT = Aws::Vector<LicenseFindingReasonCode>>
    void SetFindingReasonCodes(FindingReasonCodesT&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = std::forward<FindingReasonCodesT>(value); }
    template<typename FindingReasonCodesT = Aws::Vector<LicenseFindingReasonCode>>
    LicenseRecommendation& WithFindingReasonCodes(FindingReasonCodesT&& value) { SetFindingReasonCodes(std::forward<FindingReasonCodesT>(value)); return *this;}
    inline LicenseRecommendation& AddFindingReasonCodes(LicenseFindingReasonCode value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the license recommendation options. </p>
     */
    inline const Aws::Vector<LicenseRecommendationOption>& GetLicenseRecommendationOptions() const { return m_licenseRecommendationOptions; }
    inline bool LicenseRecommendationOptionsHasBeenSet() const { return m_licenseRecommendationOptionsHasBeenSet; }
    template<typename LicenseRecommendationOptionsT = Aws::Vector<LicenseRecommendationOption>>
    void SetLicenseRecommendationOptions(LicenseRecommendationOptionsT&& value) { m_licenseRecommendationOptionsHasBeenSet = true; m_licenseRecommendationOptions = std::forward<LicenseRecommendationOptionsT>(value); }
    template<typename LicenseRecommendationOptionsT = Aws::Vector<LicenseRecommendationOption>>
    LicenseRecommendation& WithLicenseRecommendationOptions(LicenseRecommendationOptionsT&& value) { SetLicenseRecommendationOptions(std::forward<LicenseRecommendationOptionsT>(value)); return *this;}
    template<typename LicenseRecommendationOptionsT = LicenseRecommendationOption>
    LicenseRecommendation& AddLicenseRecommendationOptions(LicenseRecommendationOptionsT&& value) { m_licenseRecommendationOptionsHasBeenSet = true; m_licenseRecommendationOptions.emplace_back(std::forward<LicenseRecommendationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of tags assigned to an EC2 instance. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    LicenseRecommendation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    LicenseRecommendation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    LicenseConfiguration m_currentLicenseConfiguration;
    bool m_currentLicenseConfigurationHasBeenSet = false;

    double m_lookbackPeriodInDays{0.0};
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp{};
    bool m_lastRefreshTimestampHasBeenSet = false;

    LicenseFinding m_finding{LicenseFinding::NOT_SET};
    bool m_findingHasBeenSet = false;

    Aws::Vector<LicenseFindingReasonCode> m_findingReasonCodes;
    bool m_findingReasonCodesHasBeenSet = false;

    Aws::Vector<LicenseRecommendationOption> m_licenseRecommendationOptions;
    bool m_licenseRecommendationOptionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
