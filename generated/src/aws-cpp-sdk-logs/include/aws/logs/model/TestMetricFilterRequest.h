/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class TestMetricFilterRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API TestMetricFilterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestMetricFilter"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetFilterPattern() const { return m_filterPattern; }
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }
    template<typename FilterPatternT = Aws::String>
    void SetFilterPattern(FilterPatternT&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::forward<FilterPatternT>(value); }
    template<typename FilterPatternT = Aws::String>
    TestMetricFilterRequest& WithFilterPattern(FilterPatternT&& value) { SetFilterPattern(std::forward<FilterPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log event messages to test.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogEventMessages() const { return m_logEventMessages; }
    inline bool LogEventMessagesHasBeenSet() const { return m_logEventMessagesHasBeenSet; }
    template<typename LogEventMessagesT = Aws::Vector<Aws::String>>
    void SetLogEventMessages(LogEventMessagesT&& value) { m_logEventMessagesHasBeenSet = true; m_logEventMessages = std::forward<LogEventMessagesT>(value); }
    template<typename LogEventMessagesT = Aws::Vector<Aws::String>>
    TestMetricFilterRequest& WithLogEventMessages(LogEventMessagesT&& value) { SetLogEventMessages(std::forward<LogEventMessagesT>(value)); return *this;}
    template<typename LogEventMessagesT = Aws::String>
    TestMetricFilterRequest& AddLogEventMessages(LogEventMessagesT&& value) { m_logEventMessagesHasBeenSet = true; m_logEventMessages.emplace_back(std::forward<LogEventMessagesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    Aws::Vector<Aws::String> m_logEventMessages;
    bool m_logEventMessagesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
