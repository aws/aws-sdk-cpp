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
    AWS_COMPUTEOPTIMIZER_API LicenseRecommendation();
    AWS_COMPUTEOPTIMIZER_API LicenseRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LicenseRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p>
     */
    inline LicenseRecommendation& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p>
     */
    inline LicenseRecommendation& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p> The ARN that identifies the Amazon EC2 instance. </p>
     */
    inline LicenseRecommendation& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p> The Amazon Web Services account ID of the license. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p> The Amazon Web Services account ID of the license. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p> The Amazon Web Services account ID of the license. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p> The Amazon Web Services account ID of the license. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p> The Amazon Web Services account ID of the license. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p> The Amazon Web Services account ID of the license. </p>
     */
    inline LicenseRecommendation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p> The Amazon Web Services account ID of the license. </p>
     */
    inline LicenseRecommendation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services account ID of the license. </p>
     */
    inline LicenseRecommendation& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p> An object that describes the current configuration of an instance that runs
     * on a license. </p>
     */
    inline const LicenseConfiguration& GetCurrentLicenseConfiguration() const{ return m_currentLicenseConfiguration; }

    /**
     * <p> An object that describes the current configuration of an instance that runs
     * on a license. </p>
     */
    inline bool CurrentLicenseConfigurationHasBeenSet() const { return m_currentLicenseConfigurationHasBeenSet; }

    /**
     * <p> An object that describes the current configuration of an instance that runs
     * on a license. </p>
     */
    inline void SetCurrentLicenseConfiguration(const LicenseConfiguration& value) { m_currentLicenseConfigurationHasBeenSet = true; m_currentLicenseConfiguration = value; }

    /**
     * <p> An object that describes the current configuration of an instance that runs
     * on a license. </p>
     */
    inline void SetCurrentLicenseConfiguration(LicenseConfiguration&& value) { m_currentLicenseConfigurationHasBeenSet = true; m_currentLicenseConfiguration = std::move(value); }

    /**
     * <p> An object that describes the current configuration of an instance that runs
     * on a license. </p>
     */
    inline LicenseRecommendation& WithCurrentLicenseConfiguration(const LicenseConfiguration& value) { SetCurrentLicenseConfiguration(value); return *this;}

    /**
     * <p> An object that describes the current configuration of an instance that runs
     * on a license. </p>
     */
    inline LicenseRecommendation& WithCurrentLicenseConfiguration(LicenseConfiguration&& value) { SetCurrentLicenseConfiguration(std::move(value)); return *this;}


    /**
     * <p> The number of days for which utilization metrics were analyzed for an
     * instance that runs on a license. </p>
     */
    inline double GetLookbackPeriodInDays() const{ return m_lookbackPeriodInDays; }

    /**
     * <p> The number of days for which utilization metrics were analyzed for an
     * instance that runs on a license. </p>
     */
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }

    /**
     * <p> The number of days for which utilization metrics were analyzed for an
     * instance that runs on a license. </p>
     */
    inline void SetLookbackPeriodInDays(double value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }

    /**
     * <p> The number of days for which utilization metrics were analyzed for an
     * instance that runs on a license. </p>
     */
    inline LicenseRecommendation& WithLookbackPeriodInDays(double value) { SetLookbackPeriodInDays(value); return *this;}


    /**
     * <p> The timestamp of when the license recommendation was last generated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const{ return m_lastRefreshTimestamp; }

    /**
     * <p> The timestamp of when the license recommendation was last generated. </p>
     */
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }

    /**
     * <p> The timestamp of when the license recommendation was last generated. </p>
     */
    inline void SetLastRefreshTimestamp(const Aws::Utils::DateTime& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = value; }

    /**
     * <p> The timestamp of when the license recommendation was last generated. </p>
     */
    inline void SetLastRefreshTimestamp(Aws::Utils::DateTime&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::move(value); }

    /**
     * <p> The timestamp of when the license recommendation was last generated. </p>
     */
    inline LicenseRecommendation& WithLastRefreshTimestamp(const Aws::Utils::DateTime& value) { SetLastRefreshTimestamp(value); return *this;}

    /**
     * <p> The timestamp of when the license recommendation was last generated. </p>
     */
    inline LicenseRecommendation& WithLastRefreshTimestamp(Aws::Utils::DateTime&& value) { SetLastRefreshTimestamp(std::move(value)); return *this;}


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
    inline const LicenseFinding& GetFinding() const{ return m_finding; }

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
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }

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
    inline void SetFinding(const LicenseFinding& value) { m_findingHasBeenSet = true; m_finding = value; }

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
    inline void SetFinding(LicenseFinding&& value) { m_findingHasBeenSet = true; m_finding = std::move(value); }

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
    inline LicenseRecommendation& WithFinding(const LicenseFinding& value) { SetFinding(value); return *this;}

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
    inline LicenseRecommendation& WithFinding(LicenseFinding&& value) { SetFinding(std::move(value)); return *this;}


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
    inline const Aws::Vector<LicenseFindingReasonCode>& GetFindingReasonCodes() const{ return m_findingReasonCodes; }

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
    inline bool FindingReasonCodesHasBeenSet() const { return m_findingReasonCodesHasBeenSet; }

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
    inline void SetFindingReasonCodes(const Aws::Vector<LicenseFindingReasonCode>& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = value; }

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
    inline void SetFindingReasonCodes(Aws::Vector<LicenseFindingReasonCode>&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = std::move(value); }

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
    inline LicenseRecommendation& WithFindingReasonCodes(const Aws::Vector<LicenseFindingReasonCode>& value) { SetFindingReasonCodes(value); return *this;}

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
    inline LicenseRecommendation& WithFindingReasonCodes(Aws::Vector<LicenseFindingReasonCode>&& value) { SetFindingReasonCodes(std::move(value)); return *this;}

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
    inline LicenseRecommendation& AddFindingReasonCodes(const LicenseFindingReasonCode& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(value); return *this; }

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
    inline LicenseRecommendation& AddFindingReasonCodes(LicenseFindingReasonCode&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(std::move(value)); return *this; }


    /**
     * <p> An array of objects that describe the license recommendation options. </p>
     */
    inline const Aws::Vector<LicenseRecommendationOption>& GetLicenseRecommendationOptions() const{ return m_licenseRecommendationOptions; }

    /**
     * <p> An array of objects that describe the license recommendation options. </p>
     */
    inline bool LicenseRecommendationOptionsHasBeenSet() const { return m_licenseRecommendationOptionsHasBeenSet; }

    /**
     * <p> An array of objects that describe the license recommendation options. </p>
     */
    inline void SetLicenseRecommendationOptions(const Aws::Vector<LicenseRecommendationOption>& value) { m_licenseRecommendationOptionsHasBeenSet = true; m_licenseRecommendationOptions = value; }

    /**
     * <p> An array of objects that describe the license recommendation options. </p>
     */
    inline void SetLicenseRecommendationOptions(Aws::Vector<LicenseRecommendationOption>&& value) { m_licenseRecommendationOptionsHasBeenSet = true; m_licenseRecommendationOptions = std::move(value); }

    /**
     * <p> An array of objects that describe the license recommendation options. </p>
     */
    inline LicenseRecommendation& WithLicenseRecommendationOptions(const Aws::Vector<LicenseRecommendationOption>& value) { SetLicenseRecommendationOptions(value); return *this;}

    /**
     * <p> An array of objects that describe the license recommendation options. </p>
     */
    inline LicenseRecommendation& WithLicenseRecommendationOptions(Aws::Vector<LicenseRecommendationOption>&& value) { SetLicenseRecommendationOptions(std::move(value)); return *this;}

    /**
     * <p> An array of objects that describe the license recommendation options. </p>
     */
    inline LicenseRecommendation& AddLicenseRecommendationOptions(const LicenseRecommendationOption& value) { m_licenseRecommendationOptionsHasBeenSet = true; m_licenseRecommendationOptions.push_back(value); return *this; }

    /**
     * <p> An array of objects that describe the license recommendation options. </p>
     */
    inline LicenseRecommendation& AddLicenseRecommendationOptions(LicenseRecommendationOption&& value) { m_licenseRecommendationOptionsHasBeenSet = true; m_licenseRecommendationOptions.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of tags assigned to an EC2 instance. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> A list of tags assigned to an EC2 instance. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A list of tags assigned to an EC2 instance. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A list of tags assigned to an EC2 instance. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A list of tags assigned to an EC2 instance. </p>
     */
    inline LicenseRecommendation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> A list of tags assigned to an EC2 instance. </p>
     */
    inline LicenseRecommendation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A list of tags assigned to an EC2 instance. </p>
     */
    inline LicenseRecommendation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> A list of tags assigned to an EC2 instance. </p>
     */
    inline LicenseRecommendation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    LicenseConfiguration m_currentLicenseConfiguration;
    bool m_currentLicenseConfigurationHasBeenSet = false;

    double m_lookbackPeriodInDays;
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp;
    bool m_lastRefreshTimestampHasBeenSet = false;

    LicenseFinding m_finding;
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
