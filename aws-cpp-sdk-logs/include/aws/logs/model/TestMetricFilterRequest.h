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
    AWS_CLOUDWATCHLOGS_API TestMetricFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestMetricFilter"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }

    
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }

    
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }

    
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::move(value); }

    
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }

    
    inline TestMetricFilterRequest& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}

    
    inline TestMetricFilterRequest& WithFilterPattern(Aws::String&& value) { SetFilterPattern(std::move(value)); return *this;}

    
    inline TestMetricFilterRequest& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}


    /**
     * <p>The log event messages to test.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogEventMessages() const{ return m_logEventMessages; }

    /**
     * <p>The log event messages to test.</p>
     */
    inline bool LogEventMessagesHasBeenSet() const { return m_logEventMessagesHasBeenSet; }

    /**
     * <p>The log event messages to test.</p>
     */
    inline void SetLogEventMessages(const Aws::Vector<Aws::String>& value) { m_logEventMessagesHasBeenSet = true; m_logEventMessages = value; }

    /**
     * <p>The log event messages to test.</p>
     */
    inline void SetLogEventMessages(Aws::Vector<Aws::String>&& value) { m_logEventMessagesHasBeenSet = true; m_logEventMessages = std::move(value); }

    /**
     * <p>The log event messages to test.</p>
     */
    inline TestMetricFilterRequest& WithLogEventMessages(const Aws::Vector<Aws::String>& value) { SetLogEventMessages(value); return *this;}

    /**
     * <p>The log event messages to test.</p>
     */
    inline TestMetricFilterRequest& WithLogEventMessages(Aws::Vector<Aws::String>&& value) { SetLogEventMessages(std::move(value)); return *this;}

    /**
     * <p>The log event messages to test.</p>
     */
    inline TestMetricFilterRequest& AddLogEventMessages(const Aws::String& value) { m_logEventMessagesHasBeenSet = true; m_logEventMessages.push_back(value); return *this; }

    /**
     * <p>The log event messages to test.</p>
     */
    inline TestMetricFilterRequest& AddLogEventMessages(Aws::String&& value) { m_logEventMessagesHasBeenSet = true; m_logEventMessages.push_back(std::move(value)); return *this; }

    /**
     * <p>The log event messages to test.</p>
     */
    inline TestMetricFilterRequest& AddLogEventMessages(const char* value) { m_logEventMessagesHasBeenSet = true; m_logEventMessages.push_back(value); return *this; }

  private:

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    Aws::Vector<Aws::String> m_logEventMessages;
    bool m_logEventMessagesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
