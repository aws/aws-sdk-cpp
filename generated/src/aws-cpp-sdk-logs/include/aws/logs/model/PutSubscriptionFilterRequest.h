/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/Distribution.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class PutSubscriptionFilterRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutSubscriptionFilterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSubscriptionFilter"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    PutSubscriptionFilterRequest& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the subscription filter. If you are updating an existing filter,
     * you must specify the correct name in <code>filterName</code>. To find the name
     * of the filter currently associated with a log group, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeSubscriptionFilters.html">DescribeSubscriptionFilters</a>.</p>
     */
    inline const Aws::String& GetFilterName() const { return m_filterName; }
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }
    template<typename FilterNameT = Aws::String>
    void SetFilterName(FilterNameT&& value) { m_filterNameHasBeenSet = true; m_filterName = std::forward<FilterNameT>(value); }
    template<typename FilterNameT = Aws::String>
    PutSubscriptionFilterRequest& WithFilterName(FilterNameT&& value) { SetFilterName(std::forward<FilterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter pattern for subscribing to a filtered stream of log events.</p>
     */
    inline const Aws::String& GetFilterPattern() const { return m_filterPattern; }
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }
    template<typename FilterPatternT = Aws::String>
    void SetFilterPattern(FilterPatternT&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::forward<FilterPatternT>(value); }
    template<typename FilterPatternT = Aws::String>
    PutSubscriptionFilterRequest& WithFilterPattern(FilterPatternT&& value) { SetFilterPattern(std::forward<FilterPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the destination to deliver matching log events to. Currently, the
     * supported destinations are:</p> <ul> <li> <p>An Amazon Kinesis stream belonging
     * to the same account as the subscription filter, for same-account delivery.</p>
     * </li> <li> <p>A logical destination (specified using an ARN) belonging to a
     * different account, for cross-account delivery.</p> <p>If you're setting up a
     * cross-account subscription, the destination must have an IAM policy associated
     * with it. The IAM policy must allow the sender to send logs to the destination.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDestinationPolicy.html">PutDestinationPolicy</a>.</p>
     * </li> <li> <p>A Kinesis Data Firehose delivery stream belonging to the same
     * account as the subscription filter, for same-account delivery.</p> </li> <li>
     * <p>A Lambda function belonging to the same account as the subscription filter,
     * for same-account delivery.</p> </li> </ul>
     */
    inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    template<typename DestinationArnT = Aws::String>
    void SetDestinationArn(DestinationArnT&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::forward<DestinationArnT>(value); }
    template<typename DestinationArnT = Aws::String>
    PutSubscriptionFilterRequest& WithDestinationArn(DestinationArnT&& value) { SetDestinationArn(std::forward<DestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to deliver
     * ingested log events to the destination stream. You don't need to provide the ARN
     * when you are working with a logical destination for cross-account delivery.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    PutSubscriptionFilterRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method used to distribute log data to the destination. By default, log
     * data is grouped by log stream, but the grouping can be set to random for a more
     * even distribution. This property is only applicable when the destination is an
     * Amazon Kinesis data stream. </p>
     */
    inline Distribution GetDistribution() const { return m_distribution; }
    inline bool DistributionHasBeenSet() const { return m_distributionHasBeenSet; }
    inline void SetDistribution(Distribution value) { m_distributionHasBeenSet = true; m_distribution = value; }
    inline PutSubscriptionFilterRequest& WithDistribution(Distribution value) { SetDistribution(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is valid only for log groups that have an active log
     * transformer. For more information about log transformers, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutTransformer.html">PutTransformer</a>.</p>
     * <p>If the log group uses either a log-group level or account-level transformer,
     * and you specify <code>true</code>, the subscription filter will be applied on
     * the transformed version of the log events instead of the original ingested log
     * events.</p>
     */
    inline bool GetApplyOnTransformedLogs() const { return m_applyOnTransformedLogs; }
    inline bool ApplyOnTransformedLogsHasBeenSet() const { return m_applyOnTransformedLogsHasBeenSet; }
    inline void SetApplyOnTransformedLogs(bool value) { m_applyOnTransformedLogsHasBeenSet = true; m_applyOnTransformedLogs = value; }
    inline PutSubscriptionFilterRequest& WithApplyOnTransformedLogs(bool value) { SetApplyOnTransformedLogs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter expression that specifies which log events should be processed by
     * this subscription filter based on system fields such as source account and
     * source region. Uses selection criteria syntax with operators like
     * <code>=</code>, <code>!=</code>, <code>AND</code>, <code>OR</code>,
     * <code>IN</code>, <code>NOT IN</code>. Example: <code>@aws.region NOT IN
     * ["cn-north-1"]</code> or <code>@aws.account = "123456789012" AND @aws.region =
     * "us-east-1"</code>. Maximum length: 2000 characters.</p>
     */
    inline const Aws::String& GetFieldSelectionCriteria() const { return m_fieldSelectionCriteria; }
    inline bool FieldSelectionCriteriaHasBeenSet() const { return m_fieldSelectionCriteriaHasBeenSet; }
    template<typename FieldSelectionCriteriaT = Aws::String>
    void SetFieldSelectionCriteria(FieldSelectionCriteriaT&& value) { m_fieldSelectionCriteriaHasBeenSet = true; m_fieldSelectionCriteria = std::forward<FieldSelectionCriteriaT>(value); }
    template<typename FieldSelectionCriteriaT = Aws::String>
    PutSubscriptionFilterRequest& WithFieldSelectionCriteria(FieldSelectionCriteriaT&& value) { SetFieldSelectionCriteria(std::forward<FieldSelectionCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of system fields to include in the log events sent to the subscription
     * destination. Valid values are <code>@aws.account</code> and
     * <code>@aws.region</code>. These fields provide source information for
     * centralized log data in the forwarded payload.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEmitSystemFields() const { return m_emitSystemFields; }
    inline bool EmitSystemFieldsHasBeenSet() const { return m_emitSystemFieldsHasBeenSet; }
    template<typename EmitSystemFieldsT = Aws::Vector<Aws::String>>
    void SetEmitSystemFields(EmitSystemFieldsT&& value) { m_emitSystemFieldsHasBeenSet = true; m_emitSystemFields = std::forward<EmitSystemFieldsT>(value); }
    template<typename EmitSystemFieldsT = Aws::Vector<Aws::String>>
    PutSubscriptionFilterRequest& WithEmitSystemFields(EmitSystemFieldsT&& value) { SetEmitSystemFields(std::forward<EmitSystemFieldsT>(value)); return *this;}
    template<typename EmitSystemFieldsT = Aws::String>
    PutSubscriptionFilterRequest& AddEmitSystemFields(EmitSystemFieldsT&& value) { m_emitSystemFieldsHasBeenSet = true; m_emitSystemFields.emplace_back(std::forward<EmitSystemFieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_filterName;
    bool m_filterNameHasBeenSet = false;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Distribution m_distribution{Distribution::NOT_SET};
    bool m_distributionHasBeenSet = false;

    bool m_applyOnTransformedLogs{false};
    bool m_applyOnTransformedLogsHasBeenSet = false;

    Aws::String m_fieldSelectionCriteria;
    bool m_fieldSelectionCriteriaHasBeenSet = false;

    Aws::Vector<Aws::String> m_emitSystemFields;
    bool m_emitSystemFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
