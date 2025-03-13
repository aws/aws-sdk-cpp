/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes the Amazon CloudWatch logging option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CloudWatchLoggingOptionDescription">AWS
   * API Reference</a></p>
   */
  class CloudWatchLoggingOptionDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API CloudWatchLoggingOptionDescription() = default;
    AWS_KINESISANALYTICSV2_API CloudWatchLoggingOptionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CloudWatchLoggingOptionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the CloudWatch logging option description.</p>
     */
    inline const Aws::String& GetCloudWatchLoggingOptionId() const { return m_cloudWatchLoggingOptionId; }
    inline bool CloudWatchLoggingOptionIdHasBeenSet() const { return m_cloudWatchLoggingOptionIdHasBeenSet; }
    template<typename CloudWatchLoggingOptionIdT = Aws::String>
    void SetCloudWatchLoggingOptionId(CloudWatchLoggingOptionIdT&& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = std::forward<CloudWatchLoggingOptionIdT>(value); }
    template<typename CloudWatchLoggingOptionIdT = Aws::String>
    CloudWatchLoggingOptionDescription& WithCloudWatchLoggingOptionId(CloudWatchLoggingOptionIdT&& value) { SetCloudWatchLoggingOptionId(std::forward<CloudWatchLoggingOptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline const Aws::String& GetLogStreamARN() const { return m_logStreamARN; }
    inline bool LogStreamARNHasBeenSet() const { return m_logStreamARNHasBeenSet; }
    template<typename LogStreamARNT = Aws::String>
    void SetLogStreamARN(LogStreamARNT&& value) { m_logStreamARNHasBeenSet = true; m_logStreamARN = std::forward<LogStreamARNT>(value); }
    template<typename LogStreamARNT = Aws::String>
    CloudWatchLoggingOptionDescription& WithLogStreamARN(LogStreamARNT&& value) { SetLogStreamARN(std::forward<LogStreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM ARN of the role to use to send application messages. </p> 
     * <p>Provided for backward compatibility. Applications created with the current
     * API version have an application-level service execution role rather than a
     * resource-level role.</p> 
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    CloudWatchLoggingOptionDescription& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cloudWatchLoggingOptionId;
    bool m_cloudWatchLoggingOptionIdHasBeenSet = false;

    Aws::String m_logStreamARN;
    bool m_logStreamARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
