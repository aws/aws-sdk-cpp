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
   * <p>Provides a description of CloudWatch logging options, including the log
   * stream Amazon Resource Name (ARN) and the role ARN.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/CloudWatchLoggingOption">AWS
   * API Reference</a></p>
   */
  class CloudWatchLoggingOption
  {
  public:
    AWS_KINESISANALYTICS_API CloudWatchLoggingOption() = default;
    AWS_KINESISANALYTICS_API CloudWatchLoggingOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API CloudWatchLoggingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline const Aws::String& GetLogStreamARN() const { return m_logStreamARN; }
    inline bool LogStreamARNHasBeenSet() const { return m_logStreamARNHasBeenSet; }
    template<typename LogStreamARNT = Aws::String>
    void SetLogStreamARN(LogStreamARNT&& value) { m_logStreamARNHasBeenSet = true; m_logStreamARN = std::forward<LogStreamARNT>(value); }
    template<typename LogStreamARNT = Aws::String>
    CloudWatchLoggingOption& WithLogStreamARN(LogStreamARNT&& value) { SetLogStreamARN(std::forward<LogStreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role that is used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    CloudWatchLoggingOption& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logStreamARN;
    bool m_logStreamARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
