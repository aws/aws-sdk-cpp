/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/Distribution.h>
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
    AWS_CLOUDWATCHLOGS_API PutSubscriptionFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSubscriptionFilter"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline PutSubscriptionFilterRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline PutSubscriptionFilterRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline PutSubscriptionFilterRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>A name for the subscription filter. If you are updating an existing filter,
     * you must specify the correct name in <code>filterName</code>. To find the name
     * of the filter currently associated with a log group, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeSubscriptionFilters.html">DescribeSubscriptionFilters</a>.</p>
     */
    inline const Aws::String& GetFilterName() const{ return m_filterName; }

    /**
     * <p>A name for the subscription filter. If you are updating an existing filter,
     * you must specify the correct name in <code>filterName</code>. To find the name
     * of the filter currently associated with a log group, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeSubscriptionFilters.html">DescribeSubscriptionFilters</a>.</p>
     */
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }

    /**
     * <p>A name for the subscription filter. If you are updating an existing filter,
     * you must specify the correct name in <code>filterName</code>. To find the name
     * of the filter currently associated with a log group, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeSubscriptionFilters.html">DescribeSubscriptionFilters</a>.</p>
     */
    inline void SetFilterName(const Aws::String& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    /**
     * <p>A name for the subscription filter. If you are updating an existing filter,
     * you must specify the correct name in <code>filterName</code>. To find the name
     * of the filter currently associated with a log group, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeSubscriptionFilters.html">DescribeSubscriptionFilters</a>.</p>
     */
    inline void SetFilterName(Aws::String&& value) { m_filterNameHasBeenSet = true; m_filterName = std::move(value); }

    /**
     * <p>A name for the subscription filter. If you are updating an existing filter,
     * you must specify the correct name in <code>filterName</code>. To find the name
     * of the filter currently associated with a log group, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeSubscriptionFilters.html">DescribeSubscriptionFilters</a>.</p>
     */
    inline void SetFilterName(const char* value) { m_filterNameHasBeenSet = true; m_filterName.assign(value); }

    /**
     * <p>A name for the subscription filter. If you are updating an existing filter,
     * you must specify the correct name in <code>filterName</code>. To find the name
     * of the filter currently associated with a log group, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeSubscriptionFilters.html">DescribeSubscriptionFilters</a>.</p>
     */
    inline PutSubscriptionFilterRequest& WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}

    /**
     * <p>A name for the subscription filter. If you are updating an existing filter,
     * you must specify the correct name in <code>filterName</code>. To find the name
     * of the filter currently associated with a log group, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeSubscriptionFilters.html">DescribeSubscriptionFilters</a>.</p>
     */
    inline PutSubscriptionFilterRequest& WithFilterName(Aws::String&& value) { SetFilterName(std::move(value)); return *this;}

    /**
     * <p>A name for the subscription filter. If you are updating an existing filter,
     * you must specify the correct name in <code>filterName</code>. To find the name
     * of the filter currently associated with a log group, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeSubscriptionFilters.html">DescribeSubscriptionFilters</a>.</p>
     */
    inline PutSubscriptionFilterRequest& WithFilterName(const char* value) { SetFilterName(value); return *this;}


    /**
     * <p>A filter pattern for subscribing to a filtered stream of log events.</p>
     */
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }

    /**
     * <p>A filter pattern for subscribing to a filtered stream of log events.</p>
     */
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }

    /**
     * <p>A filter pattern for subscribing to a filtered stream of log events.</p>
     */
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }

    /**
     * <p>A filter pattern for subscribing to a filtered stream of log events.</p>
     */
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::move(value); }

    /**
     * <p>A filter pattern for subscribing to a filtered stream of log events.</p>
     */
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }

    /**
     * <p>A filter pattern for subscribing to a filtered stream of log events.</p>
     */
    inline PutSubscriptionFilterRequest& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}

    /**
     * <p>A filter pattern for subscribing to a filtered stream of log events.</p>
     */
    inline PutSubscriptionFilterRequest& WithFilterPattern(Aws::String&& value) { SetFilterPattern(std::move(value)); return *this;}

    /**
     * <p>A filter pattern for subscribing to a filtered stream of log events.</p>
     */
    inline PutSubscriptionFilterRequest& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}


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
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

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
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

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
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

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
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

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
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

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
    inline PutSubscriptionFilterRequest& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

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
    inline PutSubscriptionFilterRequest& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

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
    inline PutSubscriptionFilterRequest& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}


    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to deliver
     * ingested log events to the destination stream. You don't need to provide the ARN
     * when you are working with a logical destination for cross-account delivery.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to deliver
     * ingested log events to the destination stream. You don't need to provide the ARN
     * when you are working with a logical destination for cross-account delivery.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to deliver
     * ingested log events to the destination stream. You don't need to provide the ARN
     * when you are working with a logical destination for cross-account delivery.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to deliver
     * ingested log events to the destination stream. You don't need to provide the ARN
     * when you are working with a logical destination for cross-account delivery.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to deliver
     * ingested log events to the destination stream. You don't need to provide the ARN
     * when you are working with a logical destination for cross-account delivery.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to deliver
     * ingested log events to the destination stream. You don't need to provide the ARN
     * when you are working with a logical destination for cross-account delivery.</p>
     */
    inline PutSubscriptionFilterRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to deliver
     * ingested log events to the destination stream. You don't need to provide the ARN
     * when you are working with a logical destination for cross-account delivery.</p>
     */
    inline PutSubscriptionFilterRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role that grants CloudWatch Logs permissions to deliver
     * ingested log events to the destination stream. You don't need to provide the ARN
     * when you are working with a logical destination for cross-account delivery.</p>
     */
    inline PutSubscriptionFilterRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The method used to distribute log data to the destination. By default, log
     * data is grouped by log stream, but the grouping can be set to random for a more
     * even distribution. This property is only applicable when the destination is an
     * Amazon Kinesis data stream. </p>
     */
    inline const Distribution& GetDistribution() const{ return m_distribution; }

    /**
     * <p>The method used to distribute log data to the destination. By default, log
     * data is grouped by log stream, but the grouping can be set to random for a more
     * even distribution. This property is only applicable when the destination is an
     * Amazon Kinesis data stream. </p>
     */
    inline bool DistributionHasBeenSet() const { return m_distributionHasBeenSet; }

    /**
     * <p>The method used to distribute log data to the destination. By default, log
     * data is grouped by log stream, but the grouping can be set to random for a more
     * even distribution. This property is only applicable when the destination is an
     * Amazon Kinesis data stream. </p>
     */
    inline void SetDistribution(const Distribution& value) { m_distributionHasBeenSet = true; m_distribution = value; }

    /**
     * <p>The method used to distribute log data to the destination. By default, log
     * data is grouped by log stream, but the grouping can be set to random for a more
     * even distribution. This property is only applicable when the destination is an
     * Amazon Kinesis data stream. </p>
     */
    inline void SetDistribution(Distribution&& value) { m_distributionHasBeenSet = true; m_distribution = std::move(value); }

    /**
     * <p>The method used to distribute log data to the destination. By default, log
     * data is grouped by log stream, but the grouping can be set to random for a more
     * even distribution. This property is only applicable when the destination is an
     * Amazon Kinesis data stream. </p>
     */
    inline PutSubscriptionFilterRequest& WithDistribution(const Distribution& value) { SetDistribution(value); return *this;}

    /**
     * <p>The method used to distribute log data to the destination. By default, log
     * data is grouped by log stream, but the grouping can be set to random for a more
     * even distribution. This property is only applicable when the destination is an
     * Amazon Kinesis data stream. </p>
     */
    inline PutSubscriptionFilterRequest& WithDistribution(Distribution&& value) { SetDistribution(std::move(value)); return *this;}

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

    Distribution m_distribution;
    bool m_distributionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
