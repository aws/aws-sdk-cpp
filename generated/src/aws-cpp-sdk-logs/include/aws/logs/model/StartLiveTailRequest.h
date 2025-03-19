/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/model/StartLiveTailHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class StartLiveTailRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API StartLiveTailRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartLiveTail"; }

    inline virtual bool HasEventStreamResponse() const override { return true; }
    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline StartLiveTailHandler& GetEventStreamHandler() { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const StartLiveTailHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline StartLiveTailRequest& WithEventStreamHandler(const StartLiveTailHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p>An array where each item in the array is a log group to include in the Live
     * Tail session.</p> <p>Specify each log group by its ARN. </p> <p>If you specify
     * an ARN, the ARN can't end with an asterisk (*).</p>  <p> You can include
     * up to 10 log groups.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const { return m_logGroupIdentifiers; }
    inline bool LogGroupIdentifiersHasBeenSet() const { return m_logGroupIdentifiersHasBeenSet; }
    template<typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
    void SetLogGroupIdentifiers(LogGroupIdentifiersT&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers = std::forward<LogGroupIdentifiersT>(value); }
    template<typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
    StartLiveTailRequest& WithLogGroupIdentifiers(LogGroupIdentifiersT&& value) { SetLogGroupIdentifiers(std::forward<LogGroupIdentifiersT>(value)); return *this;}
    template<typename LogGroupIdentifiersT = Aws::String>
    StartLiveTailRequest& AddLogGroupIdentifiers(LogGroupIdentifiersT&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.emplace_back(std::forward<LogGroupIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * you specify here are included in the Live Tail session.</p> <p>If you specify
     * this field, you can't also specify the <code>logStreamNamePrefixes</code>
     * field.</p>  <p>You can specify this parameter only if you specify only one
     * log group in <code>logGroupIdentifiers</code>.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLogStreamNames() const { return m_logStreamNames; }
    inline bool LogStreamNamesHasBeenSet() const { return m_logStreamNamesHasBeenSet; }
    template<typename LogStreamNamesT = Aws::Vector<Aws::String>>
    void SetLogStreamNames(LogStreamNamesT&& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames = std::forward<LogStreamNamesT>(value); }
    template<typename LogStreamNamesT = Aws::Vector<Aws::String>>
    StartLiveTailRequest& WithLogStreamNames(LogStreamNamesT&& value) { SetLogStreamNames(std::forward<LogStreamNamesT>(value)); return *this;}
    template<typename LogStreamNamesT = Aws::String>
    StartLiveTailRequest& AddLogStreamNames(LogStreamNamesT&& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames.emplace_back(std::forward<LogStreamNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * have names that start with the prefixes that you specify here are included in
     * the Live Tail session.</p> <p>If you specify this field, you can't also specify
     * the <code>logStreamNames</code> field.</p>  <p>You can specify this
     * parameter only if you specify only one log group in
     * <code>logGroupIdentifiers</code>.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLogStreamNamePrefixes() const { return m_logStreamNamePrefixes; }
    inline bool LogStreamNamePrefixesHasBeenSet() const { return m_logStreamNamePrefixesHasBeenSet; }
    template<typename LogStreamNamePrefixesT = Aws::Vector<Aws::String>>
    void SetLogStreamNamePrefixes(LogStreamNamePrefixesT&& value) { m_logStreamNamePrefixesHasBeenSet = true; m_logStreamNamePrefixes = std::forward<LogStreamNamePrefixesT>(value); }
    template<typename LogStreamNamePrefixesT = Aws::Vector<Aws::String>>
    StartLiveTailRequest& WithLogStreamNamePrefixes(LogStreamNamePrefixesT&& value) { SetLogStreamNamePrefixes(std::forward<LogStreamNamePrefixesT>(value)); return *this;}
    template<typename LogStreamNamePrefixesT = Aws::String>
    StartLiveTailRequest& AddLogStreamNamePrefixes(LogStreamNamePrefixesT&& value) { m_logStreamNamePrefixesHasBeenSet = true; m_logStreamNamePrefixes.emplace_back(std::forward<LogStreamNamePrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pattern to use to filter the results to include only log events
     * that match the pattern. For example, a filter pattern of <code>error 404</code>
     * causes only log events that include both <code>error</code> and <code>404</code>
     * to be included in the Live Tail stream.</p> <p>Regular expression filter
     * patterns are supported.</p> <p>For more information about filter pattern syntax,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p>
     */
    inline const Aws::String& GetLogEventFilterPattern() const { return m_logEventFilterPattern; }
    inline bool LogEventFilterPatternHasBeenSet() const { return m_logEventFilterPatternHasBeenSet; }
    template<typename LogEventFilterPatternT = Aws::String>
    void SetLogEventFilterPattern(LogEventFilterPatternT&& value) { m_logEventFilterPatternHasBeenSet = true; m_logEventFilterPattern = std::forward<LogEventFilterPatternT>(value); }
    template<typename LogEventFilterPatternT = Aws::String>
    StartLiveTailRequest& WithLogEventFilterPattern(LogEventFilterPatternT&& value) { SetLogEventFilterPattern(std::forward<LogEventFilterPatternT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_logGroupIdentifiers;
    bool m_logGroupIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_logStreamNames;
    bool m_logStreamNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_logStreamNamePrefixes;
    bool m_logStreamNamePrefixesHasBeenSet = false;

    Aws::String m_logEventFilterPattern;
    bool m_logEventFilterPatternHasBeenSet = false;
    StartLiveTailHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
