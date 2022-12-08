/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   */
  class CreateQueryLoggingConfigRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API CreateQueryLoggingConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateQueryLoggingConfig"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the hosted zone that you want to log queries for. You can log
     * queries only for public hosted zones.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the hosted zone that you want to log queries for. You can log
     * queries only for public hosted zones.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>The ID of the hosted zone that you want to log queries for. You can log
     * queries only for public hosted zones.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone that you want to log queries for. You can log
     * queries only for public hosted zones.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>The ID of the hosted zone that you want to log queries for. You can log
     * queries only for public hosted zones.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the hosted zone that you want to log queries for. You can log
     * queries only for public hosted zones.</p>
     */
    inline CreateQueryLoggingConfigRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone that you want to log queries for. You can log
     * queries only for public hosted zones.</p>
     */
    inline CreateQueryLoggingConfigRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the hosted zone that you want to log queries for. You can log
     * queries only for public hosted zones.</p>
     */
    inline CreateQueryLoggingConfigRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the log group that you want to Amazon
     * Route 53 to send query logs to. This is the format of the ARN:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account-id</i>:log-group:<i>log_group_name</i>
     * </p> <p>To get the ARN for a log group, you can use the CloudWatch console, the
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeLogGroups.html">DescribeLogGroups</a>
     * API action, the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/logs/describe-log-groups.html">describe-log-groups</a>
     * command, or the applicable command in one of the Amazon Web Services SDKs.</p>
     */
    inline const Aws::String& GetCloudWatchLogsLogGroupArn() const{ return m_cloudWatchLogsLogGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the log group that you want to Amazon
     * Route 53 to send query logs to. This is the format of the ARN:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account-id</i>:log-group:<i>log_group_name</i>
     * </p> <p>To get the ARN for a log group, you can use the CloudWatch console, the
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeLogGroups.html">DescribeLogGroups</a>
     * API action, the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/logs/describe-log-groups.html">describe-log-groups</a>
     * command, or the applicable command in one of the Amazon Web Services SDKs.</p>
     */
    inline bool CloudWatchLogsLogGroupArnHasBeenSet() const { return m_cloudWatchLogsLogGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the log group that you want to Amazon
     * Route 53 to send query logs to. This is the format of the ARN:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account-id</i>:log-group:<i>log_group_name</i>
     * </p> <p>To get the ARN for a log group, you can use the CloudWatch console, the
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeLogGroups.html">DescribeLogGroups</a>
     * API action, the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/logs/describe-log-groups.html">describe-log-groups</a>
     * command, or the applicable command in one of the Amazon Web Services SDKs.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(const Aws::String& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the log group that you want to Amazon
     * Route 53 to send query logs to. This is the format of the ARN:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account-id</i>:log-group:<i>log_group_name</i>
     * </p> <p>To get the ARN for a log group, you can use the CloudWatch console, the
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeLogGroups.html">DescribeLogGroups</a>
     * API action, the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/logs/describe-log-groups.html">describe-log-groups</a>
     * command, or the applicable command in one of the Amazon Web Services SDKs.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(Aws::String&& value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the log group that you want to Amazon
     * Route 53 to send query logs to. This is the format of the ARN:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account-id</i>:log-group:<i>log_group_name</i>
     * </p> <p>To get the ARN for a log group, you can use the CloudWatch console, the
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeLogGroups.html">DescribeLogGroups</a>
     * API action, the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/logs/describe-log-groups.html">describe-log-groups</a>
     * command, or the applicable command in one of the Amazon Web Services SDKs.</p>
     */
    inline void SetCloudWatchLogsLogGroupArn(const char* value) { m_cloudWatchLogsLogGroupArnHasBeenSet = true; m_cloudWatchLogsLogGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the log group that you want to Amazon
     * Route 53 to send query logs to. This is the format of the ARN:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account-id</i>:log-group:<i>log_group_name</i>
     * </p> <p>To get the ARN for a log group, you can use the CloudWatch console, the
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeLogGroups.html">DescribeLogGroups</a>
     * API action, the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/logs/describe-log-groups.html">describe-log-groups</a>
     * command, or the applicable command in one of the Amazon Web Services SDKs.</p>
     */
    inline CreateQueryLoggingConfigRequest& WithCloudWatchLogsLogGroupArn(const Aws::String& value) { SetCloudWatchLogsLogGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the log group that you want to Amazon
     * Route 53 to send query logs to. This is the format of the ARN:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account-id</i>:log-group:<i>log_group_name</i>
     * </p> <p>To get the ARN for a log group, you can use the CloudWatch console, the
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeLogGroups.html">DescribeLogGroups</a>
     * API action, the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/logs/describe-log-groups.html">describe-log-groups</a>
     * command, or the applicable command in one of the Amazon Web Services SDKs.</p>
     */
    inline CreateQueryLoggingConfigRequest& WithCloudWatchLogsLogGroupArn(Aws::String&& value) { SetCloudWatchLogsLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the log group that you want to Amazon
     * Route 53 to send query logs to. This is the format of the ARN:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account-id</i>:log-group:<i>log_group_name</i>
     * </p> <p>To get the ARN for a log group, you can use the CloudWatch console, the
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeLogGroups.html">DescribeLogGroups</a>
     * API action, the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/logs/describe-log-groups.html">describe-log-groups</a>
     * command, or the applicable command in one of the Amazon Web Services SDKs.</p>
     */
    inline CreateQueryLoggingConfigRequest& WithCloudWatchLogsLogGroupArn(const char* value) { SetCloudWatchLogsLogGroupArn(value); return *this;}

  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_cloudWatchLogsLogGroupArn;
    bool m_cloudWatchLogsLogGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
