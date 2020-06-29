/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/model/CloudWatchLogsLogGroup.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/LogDestination">AWS
   * API Reference</a></p>
   */
  class AWS_SFN_API LogDestination
  {
  public:
    LogDestination();
    LogDestination(Aws::Utils::Json::JsonView jsonValue);
    LogDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object describing a CloudWatch log group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-logs-loggroup.html">AWS::Logs::LogGroup</a>
     * in the AWS CloudFormation User Guide.</p>
     */
    inline const CloudWatchLogsLogGroup& GetCloudWatchLogsLogGroup() const{ return m_cloudWatchLogsLogGroup; }

    /**
     * <p>An object describing a CloudWatch log group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-logs-loggroup.html">AWS::Logs::LogGroup</a>
     * in the AWS CloudFormation User Guide.</p>
     */
    inline bool CloudWatchLogsLogGroupHasBeenSet() const { return m_cloudWatchLogsLogGroupHasBeenSet; }

    /**
     * <p>An object describing a CloudWatch log group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-logs-loggroup.html">AWS::Logs::LogGroup</a>
     * in the AWS CloudFormation User Guide.</p>
     */
    inline void SetCloudWatchLogsLogGroup(const CloudWatchLogsLogGroup& value) { m_cloudWatchLogsLogGroupHasBeenSet = true; m_cloudWatchLogsLogGroup = value; }

    /**
     * <p>An object describing a CloudWatch log group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-logs-loggroup.html">AWS::Logs::LogGroup</a>
     * in the AWS CloudFormation User Guide.</p>
     */
    inline void SetCloudWatchLogsLogGroup(CloudWatchLogsLogGroup&& value) { m_cloudWatchLogsLogGroupHasBeenSet = true; m_cloudWatchLogsLogGroup = std::move(value); }

    /**
     * <p>An object describing a CloudWatch log group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-logs-loggroup.html">AWS::Logs::LogGroup</a>
     * in the AWS CloudFormation User Guide.</p>
     */
    inline LogDestination& WithCloudWatchLogsLogGroup(const CloudWatchLogsLogGroup& value) { SetCloudWatchLogsLogGroup(value); return *this;}

    /**
     * <p>An object describing a CloudWatch log group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-logs-loggroup.html">AWS::Logs::LogGroup</a>
     * in the AWS CloudFormation User Guide.</p>
     */
    inline LogDestination& WithCloudWatchLogsLogGroup(CloudWatchLogsLogGroup&& value) { SetCloudWatchLogsLogGroup(std::move(value)); return *this;}

  private:

    CloudWatchLogsLogGroup m_cloudWatchLogsLogGroup;
    bool m_cloudWatchLogsLogGroupHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
