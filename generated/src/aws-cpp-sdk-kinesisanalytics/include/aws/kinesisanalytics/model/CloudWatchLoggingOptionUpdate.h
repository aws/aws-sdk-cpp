/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Describes CloudWatch logging option updates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/CloudWatchLoggingOptionUpdate">AWS
   * API Reference</a></p>
   */
  class CloudWatchLoggingOptionUpdate
  {
  public:
    AWS_KINESISANALYTICS_API CloudWatchLoggingOptionUpdate() = default;
    AWS_KINESISANALYTICS_API CloudWatchLoggingOptionUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API CloudWatchLoggingOptionUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID of the CloudWatch logging option to update</p>
     */
    inline const Aws::String& GetCloudWatchLoggingOptionId() const { return m_cloudWatchLoggingOptionId; }
    inline bool CloudWatchLoggingOptionIdHasBeenSet() const { return m_cloudWatchLoggingOptionIdHasBeenSet; }
    template<typename CloudWatchLoggingOptionIdT = Aws::String>
    void SetCloudWatchLoggingOptionId(CloudWatchLoggingOptionIdT&& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = std::forward<CloudWatchLoggingOptionIdT>(value); }
    template<typename CloudWatchLoggingOptionIdT = Aws::String>
    CloudWatchLoggingOptionUpdate& WithCloudWatchLoggingOptionId(CloudWatchLoggingOptionIdT&& value) { SetCloudWatchLoggingOptionId(std::forward<CloudWatchLoggingOptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline const Aws::String& GetLogStreamARNUpdate() const { return m_logStreamARNUpdate; }
    inline bool LogStreamARNUpdateHasBeenSet() const { return m_logStreamARNUpdateHasBeenSet; }
    template<typename LogStreamARNUpdateT = Aws::String>
    void SetLogStreamARNUpdate(LogStreamARNUpdateT&& value) { m_logStreamARNUpdateHasBeenSet = true; m_logStreamARNUpdate = std::forward<LogStreamARNUpdateT>(value); }
    template<typename LogStreamARNUpdateT = Aws::String>
    CloudWatchLoggingOptionUpdate& WithLogStreamARNUpdate(LogStreamARNUpdateT&& value) { SetLogStreamARNUpdate(std::forward<LogStreamARNUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline const Aws::String& GetRoleARNUpdate() const { return m_roleARNUpdate; }
    inline bool RoleARNUpdateHasBeenSet() const { return m_roleARNUpdateHasBeenSet; }
    template<typename RoleARNUpdateT = Aws::String>
    void SetRoleARNUpdate(RoleARNUpdateT&& value) { m_roleARNUpdateHasBeenSet = true; m_roleARNUpdate = std::forward<RoleARNUpdateT>(value); }
    template<typename RoleARNUpdateT = Aws::String>
    CloudWatchLoggingOptionUpdate& WithRoleARNUpdate(RoleARNUpdateT&& value) { SetRoleARNUpdate(std::forward<RoleARNUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cloudWatchLoggingOptionId;
    bool m_cloudWatchLoggingOptionIdHasBeenSet = false;

    Aws::String m_logStreamARNUpdate;
    bool m_logStreamARNUpdateHasBeenSet = false;

    Aws::String m_roleARNUpdate;
    bool m_roleARNUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
