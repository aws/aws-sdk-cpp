/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/LogGroupClass.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains information about one log group in your
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LogGroupSummary">AWS
   * API Reference</a></p>
   */
  class LogGroupSummary
  {
  public:
    AWS_CLOUDWATCHLOGS_API LogGroupSummary() = default;
    AWS_CLOUDWATCHLOGS_API LogGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API LogGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    LogGroupSummary& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the log group.</p>
     */
    inline const Aws::String& GetLogGroupArn() const { return m_logGroupArn; }
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }
    template<typename LogGroupArnT = Aws::String>
    void SetLogGroupArn(LogGroupArnT&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::forward<LogGroupArnT>(value); }
    template<typename LogGroupArnT = Aws::String>
    LogGroupSummary& WithLogGroupArn(LogGroupArnT&& value) { SetLogGroupArn(std::forward<LogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log group class for this log group. For details about the features
     * supported by each log group class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline LogGroupClass GetLogGroupClass() const { return m_logGroupClass; }
    inline bool LogGroupClassHasBeenSet() const { return m_logGroupClassHasBeenSet; }
    inline void SetLogGroupClass(LogGroupClass value) { m_logGroupClassHasBeenSet = true; m_logGroupClass = value; }
    inline LogGroupSummary& WithLogGroupClass(LogGroupClass value) { SetLogGroupClass(value); return *this;}
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;

    LogGroupClass m_logGroupClass{LogGroupClass::NOT_SET};
    bool m_logGroupClassHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
