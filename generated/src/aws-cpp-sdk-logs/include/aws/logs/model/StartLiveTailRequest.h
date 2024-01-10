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
    AWS_CLOUDWATCHLOGS_API StartLiveTailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartLiveTail"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline const StartLiveTailHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const StartLiveTailHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline StartLiveTailRequest& WithEventStreamHandler(const StartLiveTailHandler& value) { SetEventStreamHandler(value); return *this; }


    /**
     * <p>An array where each item in the array is a log group to include in the Live
     * Tail session.</p> <p>Specify each log group by its ARN. </p> <p>If you specify
     * an ARN, the ARN can't end with an asterisk (*).</p>  <p> You can include
     * up to 10 log groups.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const{ return m_logGroupIdentifiers; }

    /**
     * <p>An array where each item in the array is a log group to include in the Live
     * Tail session.</p> <p>Specify each log group by its ARN. </p> <p>If you specify
     * an ARN, the ARN can't end with an asterisk (*).</p>  <p> You can include
     * up to 10 log groups.</p> 
     */
    inline bool LogGroupIdentifiersHasBeenSet() const { return m_logGroupIdentifiersHasBeenSet; }

    /**
     * <p>An array where each item in the array is a log group to include in the Live
     * Tail session.</p> <p>Specify each log group by its ARN. </p> <p>If you specify
     * an ARN, the ARN can't end with an asterisk (*).</p>  <p> You can include
     * up to 10 log groups.</p> 
     */
    inline void SetLogGroupIdentifiers(const Aws::Vector<Aws::String>& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers = value; }

    /**
     * <p>An array where each item in the array is a log group to include in the Live
     * Tail session.</p> <p>Specify each log group by its ARN. </p> <p>If you specify
     * an ARN, the ARN can't end with an asterisk (*).</p>  <p> You can include
     * up to 10 log groups.</p> 
     */
    inline void SetLogGroupIdentifiers(Aws::Vector<Aws::String>&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers = std::move(value); }

    /**
     * <p>An array where each item in the array is a log group to include in the Live
     * Tail session.</p> <p>Specify each log group by its ARN. </p> <p>If you specify
     * an ARN, the ARN can't end with an asterisk (*).</p>  <p> You can include
     * up to 10 log groups.</p> 
     */
    inline StartLiveTailRequest& WithLogGroupIdentifiers(const Aws::Vector<Aws::String>& value) { SetLogGroupIdentifiers(value); return *this;}

    /**
     * <p>An array where each item in the array is a log group to include in the Live
     * Tail session.</p> <p>Specify each log group by its ARN. </p> <p>If you specify
     * an ARN, the ARN can't end with an asterisk (*).</p>  <p> You can include
     * up to 10 log groups.</p> 
     */
    inline StartLiveTailRequest& WithLogGroupIdentifiers(Aws::Vector<Aws::String>&& value) { SetLogGroupIdentifiers(std::move(value)); return *this;}

    /**
     * <p>An array where each item in the array is a log group to include in the Live
     * Tail session.</p> <p>Specify each log group by its ARN. </p> <p>If you specify
     * an ARN, the ARN can't end with an asterisk (*).</p>  <p> You can include
     * up to 10 log groups.</p> 
     */
    inline StartLiveTailRequest& AddLogGroupIdentifiers(const Aws::String& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.push_back(value); return *this; }

    /**
     * <p>An array where each item in the array is a log group to include in the Live
     * Tail session.</p> <p>Specify each log group by its ARN. </p> <p>If you specify
     * an ARN, the ARN can't end with an asterisk (*).</p>  <p> You can include
     * up to 10 log groups.</p> 
     */
    inline StartLiveTailRequest& AddLogGroupIdentifiers(Aws::String&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>An array where each item in the array is a log group to include in the Live
     * Tail session.</p> <p>Specify each log group by its ARN. </p> <p>If you specify
     * an ARN, the ARN can't end with an asterisk (*).</p>  <p> You can include
     * up to 10 log groups.</p> 
     */
    inline StartLiveTailRequest& AddLogGroupIdentifiers(const char* value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.push_back(value); return *this; }


    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * you specify here are included in the Live Tail session.</p> <p>If you specify
     * this field, you can't also specify the <code>logStreamNamePrefixes</code>
     * field.</p>  <p>You can specify this parameter only if you specify only one
     * log group in <code>logGroupIdentifiers</code>.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLogStreamNames() const{ return m_logStreamNames; }

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * you specify here are included in the Live Tail session.</p> <p>If you specify
     * this field, you can't also specify the <code>logStreamNamePrefixes</code>
     * field.</p>  <p>You can specify this parameter only if you specify only one
     * log group in <code>logGroupIdentifiers</code>.</p> 
     */
    inline bool LogStreamNamesHasBeenSet() const { return m_logStreamNamesHasBeenSet; }

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * you specify here are included in the Live Tail session.</p> <p>If you specify
     * this field, you can't also specify the <code>logStreamNamePrefixes</code>
     * field.</p>  <p>You can specify this parameter only if you specify only one
     * log group in <code>logGroupIdentifiers</code>.</p> 
     */
    inline void SetLogStreamNames(const Aws::Vector<Aws::String>& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames = value; }

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * you specify here are included in the Live Tail session.</p> <p>If you specify
     * this field, you can't also specify the <code>logStreamNamePrefixes</code>
     * field.</p>  <p>You can specify this parameter only if you specify only one
     * log group in <code>logGroupIdentifiers</code>.</p> 
     */
    inline void SetLogStreamNames(Aws::Vector<Aws::String>&& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames = std::move(value); }

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * you specify here are included in the Live Tail session.</p> <p>If you specify
     * this field, you can't also specify the <code>logStreamNamePrefixes</code>
     * field.</p>  <p>You can specify this parameter only if you specify only one
     * log group in <code>logGroupIdentifiers</code>.</p> 
     */
    inline StartLiveTailRequest& WithLogStreamNames(const Aws::Vector<Aws::String>& value) { SetLogStreamNames(value); return *this;}

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * you specify here are included in the Live Tail session.</p> <p>If you specify
     * this field, you can't also specify the <code>logStreamNamePrefixes</code>
     * field.</p>  <p>You can specify this parameter only if you specify only one
     * log group in <code>logGroupIdentifiers</code>.</p> 
     */
    inline StartLiveTailRequest& WithLogStreamNames(Aws::Vector<Aws::String>&& value) { SetLogStreamNames(std::move(value)); return *this;}

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * you specify here are included in the Live Tail session.</p> <p>If you specify
     * this field, you can't also specify the <code>logStreamNamePrefixes</code>
     * field.</p>  <p>You can specify this parameter only if you specify only one
     * log group in <code>logGroupIdentifiers</code>.</p> 
     */
    inline StartLiveTailRequest& AddLogStreamNames(const Aws::String& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames.push_back(value); return *this; }

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * you specify here are included in the Live Tail session.</p> <p>If you specify
     * this field, you can't also specify the <code>logStreamNamePrefixes</code>
     * field.</p>  <p>You can specify this parameter only if you specify only one
     * log group in <code>logGroupIdentifiers</code>.</p> 
     */
    inline StartLiveTailRequest& AddLogStreamNames(Aws::String&& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames.push_back(std::move(value)); return *this; }

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * you specify here are included in the Live Tail session.</p> <p>If you specify
     * this field, you can't also specify the <code>logStreamNamePrefixes</code>
     * field.</p>  <p>You can specify this parameter only if you specify only one
     * log group in <code>logGroupIdentifiers</code>.</p> 
     */
    inline StartLiveTailRequest& AddLogStreamNames(const char* value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames.push_back(value); return *this; }


    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * have names that start with the prefixes that you specify here are included in
     * the Live Tail session.</p> <p>If you specify this field, you can't also specify
     * the <code>logStreamNames</code> field.</p>  <p>You can specify this
     * parameter only if you specify only one log group in
     * <code>logGroupIdentifiers</code>.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLogStreamNamePrefixes() const{ return m_logStreamNamePrefixes; }

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * have names that start with the prefixes that you specify here are included in
     * the Live Tail session.</p> <p>If you specify this field, you can't also specify
     * the <code>logStreamNames</code> field.</p>  <p>You can specify this
     * parameter only if you specify only one log group in
     * <code>logGroupIdentifiers</code>.</p> 
     */
    inline bool LogStreamNamePrefixesHasBeenSet() const { return m_logStreamNamePrefixesHasBeenSet; }

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * have names that start with the prefixes that you specify here are included in
     * the Live Tail session.</p> <p>If you specify this field, you can't also specify
     * the <code>logStreamNames</code> field.</p>  <p>You can specify this
     * parameter only if you specify only one log group in
     * <code>logGroupIdentifiers</code>.</p> 
     */
    inline void SetLogStreamNamePrefixes(const Aws::Vector<Aws::String>& value) { m_logStreamNamePrefixesHasBeenSet = true; m_logStreamNamePrefixes = value; }

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * have names that start with the prefixes that you specify here are included in
     * the Live Tail session.</p> <p>If you specify this field, you can't also specify
     * the <code>logStreamNames</code> field.</p>  <p>You can specify this
     * parameter only if you specify only one log group in
     * <code>logGroupIdentifiers</code>.</p> 
     */
    inline void SetLogStreamNamePrefixes(Aws::Vector<Aws::String>&& value) { m_logStreamNamePrefixesHasBeenSet = true; m_logStreamNamePrefixes = std::move(value); }

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * have names that start with the prefixes that you specify here are included in
     * the Live Tail session.</p> <p>If you specify this field, you can't also specify
     * the <code>logStreamNames</code> field.</p>  <p>You can specify this
     * parameter only if you specify only one log group in
     * <code>logGroupIdentifiers</code>.</p> 
     */
    inline StartLiveTailRequest& WithLogStreamNamePrefixes(const Aws::Vector<Aws::String>& value) { SetLogStreamNamePrefixes(value); return *this;}

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * have names that start with the prefixes that you specify here are included in
     * the Live Tail session.</p> <p>If you specify this field, you can't also specify
     * the <code>logStreamNames</code> field.</p>  <p>You can specify this
     * parameter only if you specify only one log group in
     * <code>logGroupIdentifiers</code>.</p> 
     */
    inline StartLiveTailRequest& WithLogStreamNamePrefixes(Aws::Vector<Aws::String>&& value) { SetLogStreamNamePrefixes(std::move(value)); return *this;}

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * have names that start with the prefixes that you specify here are included in
     * the Live Tail session.</p> <p>If you specify this field, you can't also specify
     * the <code>logStreamNames</code> field.</p>  <p>You can specify this
     * parameter only if you specify only one log group in
     * <code>logGroupIdentifiers</code>.</p> 
     */
    inline StartLiveTailRequest& AddLogStreamNamePrefixes(const Aws::String& value) { m_logStreamNamePrefixesHasBeenSet = true; m_logStreamNamePrefixes.push_back(value); return *this; }

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * have names that start with the prefixes that you specify here are included in
     * the Live Tail session.</p> <p>If you specify this field, you can't also specify
     * the <code>logStreamNames</code> field.</p>  <p>You can specify this
     * parameter only if you specify only one log group in
     * <code>logGroupIdentifiers</code>.</p> 
     */
    inline StartLiveTailRequest& AddLogStreamNamePrefixes(Aws::String&& value) { m_logStreamNamePrefixesHasBeenSet = true; m_logStreamNamePrefixes.push_back(std::move(value)); return *this; }

    /**
     * <p>If you specify this parameter, then only log events in the log streams that
     * have names that start with the prefixes that you specify here are included in
     * the Live Tail session.</p> <p>If you specify this field, you can't also specify
     * the <code>logStreamNames</code> field.</p>  <p>You can specify this
     * parameter only if you specify only one log group in
     * <code>logGroupIdentifiers</code>.</p> 
     */
    inline StartLiveTailRequest& AddLogStreamNamePrefixes(const char* value) { m_logStreamNamePrefixesHasBeenSet = true; m_logStreamNamePrefixes.push_back(value); return *this; }


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
    inline const Aws::String& GetLogEventFilterPattern() const{ return m_logEventFilterPattern; }

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
    inline bool LogEventFilterPatternHasBeenSet() const { return m_logEventFilterPatternHasBeenSet; }

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
    inline void SetLogEventFilterPattern(const Aws::String& value) { m_logEventFilterPatternHasBeenSet = true; m_logEventFilterPattern = value; }

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
    inline void SetLogEventFilterPattern(Aws::String&& value) { m_logEventFilterPatternHasBeenSet = true; m_logEventFilterPattern = std::move(value); }

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
    inline void SetLogEventFilterPattern(const char* value) { m_logEventFilterPatternHasBeenSet = true; m_logEventFilterPattern.assign(value); }

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
    inline StartLiveTailRequest& WithLogEventFilterPattern(const Aws::String& value) { SetLogEventFilterPattern(value); return *this;}

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
    inline StartLiveTailRequest& WithLogEventFilterPattern(Aws::String&& value) { SetLogEventFilterPattern(std::move(value)); return *this;}

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
    inline StartLiveTailRequest& WithLogEventFilterPattern(const char* value) { SetLogEventFilterPattern(value); return *this;}

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
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
