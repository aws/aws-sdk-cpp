/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/LogAnomalyType.h>
#include <aws/core/utils/DateTime.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about an anomalous log event found within a log group.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/LogAnomalyClass">AWS
   * API Reference</a></p>
   */
  class LogAnomalyClass
  {
  public:
    AWS_DEVOPSGURU_API LogAnomalyClass();
    AWS_DEVOPSGURU_API LogAnomalyClass(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API LogAnomalyClass& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the Amazon CloudWatch log stream that the anomalous log event
     * belongs to. A log stream is a sequence of log events that share the same source.
     * </p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }

    /**
     * <p> The name of the Amazon CloudWatch log stream that the anomalous log event
     * belongs to. A log stream is a sequence of log events that share the same source.
     * </p>
     */
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }

    /**
     * <p> The name of the Amazon CloudWatch log stream that the anomalous log event
     * belongs to. A log stream is a sequence of log events that share the same source.
     * </p>
     */
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p> The name of the Amazon CloudWatch log stream that the anomalous log event
     * belongs to. A log stream is a sequence of log events that share the same source.
     * </p>
     */
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::move(value); }

    /**
     * <p> The name of the Amazon CloudWatch log stream that the anomalous log event
     * belongs to. A log stream is a sequence of log events that share the same source.
     * </p>
     */
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }

    /**
     * <p> The name of the Amazon CloudWatch log stream that the anomalous log event
     * belongs to. A log stream is a sequence of log events that share the same source.
     * </p>
     */
    inline LogAnomalyClass& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}

    /**
     * <p> The name of the Amazon CloudWatch log stream that the anomalous log event
     * belongs to. A log stream is a sequence of log events that share the same source.
     * </p>
     */
    inline LogAnomalyClass& WithLogStreamName(Aws::String&& value) { SetLogStreamName(std::move(value)); return *this;}

    /**
     * <p> The name of the Amazon CloudWatch log stream that the anomalous log event
     * belongs to. A log stream is a sequence of log events that share the same source.
     * </p>
     */
    inline LogAnomalyClass& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}


    /**
     * <p> The type of log anomaly that has been detected. </p>
     */
    inline const LogAnomalyType& GetLogAnomalyType() const{ return m_logAnomalyType; }

    /**
     * <p> The type of log anomaly that has been detected. </p>
     */
    inline bool LogAnomalyTypeHasBeenSet() const { return m_logAnomalyTypeHasBeenSet; }

    /**
     * <p> The type of log anomaly that has been detected. </p>
     */
    inline void SetLogAnomalyType(const LogAnomalyType& value) { m_logAnomalyTypeHasBeenSet = true; m_logAnomalyType = value; }

    /**
     * <p> The type of log anomaly that has been detected. </p>
     */
    inline void SetLogAnomalyType(LogAnomalyType&& value) { m_logAnomalyTypeHasBeenSet = true; m_logAnomalyType = std::move(value); }

    /**
     * <p> The type of log anomaly that has been detected. </p>
     */
    inline LogAnomalyClass& WithLogAnomalyType(const LogAnomalyType& value) { SetLogAnomalyType(value); return *this;}

    /**
     * <p> The type of log anomaly that has been detected. </p>
     */
    inline LogAnomalyClass& WithLogAnomalyType(LogAnomalyType&& value) { SetLogAnomalyType(std::move(value)); return *this;}


    /**
     * <p> The token where the anomaly was detected. This may refer to an exception or
     * another location, or it may be blank for log anomalies such as format anomalies.
     * </p>
     */
    inline const Aws::String& GetLogAnomalyToken() const{ return m_logAnomalyToken; }

    /**
     * <p> The token where the anomaly was detected. This may refer to an exception or
     * another location, or it may be blank for log anomalies such as format anomalies.
     * </p>
     */
    inline bool LogAnomalyTokenHasBeenSet() const { return m_logAnomalyTokenHasBeenSet; }

    /**
     * <p> The token where the anomaly was detected. This may refer to an exception or
     * another location, or it may be blank for log anomalies such as format anomalies.
     * </p>
     */
    inline void SetLogAnomalyToken(const Aws::String& value) { m_logAnomalyTokenHasBeenSet = true; m_logAnomalyToken = value; }

    /**
     * <p> The token where the anomaly was detected. This may refer to an exception or
     * another location, or it may be blank for log anomalies such as format anomalies.
     * </p>
     */
    inline void SetLogAnomalyToken(Aws::String&& value) { m_logAnomalyTokenHasBeenSet = true; m_logAnomalyToken = std::move(value); }

    /**
     * <p> The token where the anomaly was detected. This may refer to an exception or
     * another location, or it may be blank for log anomalies such as format anomalies.
     * </p>
     */
    inline void SetLogAnomalyToken(const char* value) { m_logAnomalyTokenHasBeenSet = true; m_logAnomalyToken.assign(value); }

    /**
     * <p> The token where the anomaly was detected. This may refer to an exception or
     * another location, or it may be blank for log anomalies such as format anomalies.
     * </p>
     */
    inline LogAnomalyClass& WithLogAnomalyToken(const Aws::String& value) { SetLogAnomalyToken(value); return *this;}

    /**
     * <p> The token where the anomaly was detected. This may refer to an exception or
     * another location, or it may be blank for log anomalies such as format anomalies.
     * </p>
     */
    inline LogAnomalyClass& WithLogAnomalyToken(Aws::String&& value) { SetLogAnomalyToken(std::move(value)); return *this;}

    /**
     * <p> The token where the anomaly was detected. This may refer to an exception or
     * another location, or it may be blank for log anomalies such as format anomalies.
     * </p>
     */
    inline LogAnomalyClass& WithLogAnomalyToken(const char* value) { SetLogAnomalyToken(value); return *this;}


    /**
     * <p> The ID of the log event. </p>
     */
    inline const Aws::String& GetLogEventId() const{ return m_logEventId; }

    /**
     * <p> The ID of the log event. </p>
     */
    inline bool LogEventIdHasBeenSet() const { return m_logEventIdHasBeenSet; }

    /**
     * <p> The ID of the log event. </p>
     */
    inline void SetLogEventId(const Aws::String& value) { m_logEventIdHasBeenSet = true; m_logEventId = value; }

    /**
     * <p> The ID of the log event. </p>
     */
    inline void SetLogEventId(Aws::String&& value) { m_logEventIdHasBeenSet = true; m_logEventId = std::move(value); }

    /**
     * <p> The ID of the log event. </p>
     */
    inline void SetLogEventId(const char* value) { m_logEventIdHasBeenSet = true; m_logEventId.assign(value); }

    /**
     * <p> The ID of the log event. </p>
     */
    inline LogAnomalyClass& WithLogEventId(const Aws::String& value) { SetLogEventId(value); return *this;}

    /**
     * <p> The ID of the log event. </p>
     */
    inline LogAnomalyClass& WithLogEventId(Aws::String&& value) { SetLogEventId(std::move(value)); return *this;}

    /**
     * <p> The ID of the log event. </p>
     */
    inline LogAnomalyClass& WithLogEventId(const char* value) { SetLogEventId(value); return *this;}


    /**
     * <p> The explanation for why the log event is considered an anomaly. </p>
     */
    inline const Aws::String& GetExplanation() const{ return m_explanation; }

    /**
     * <p> The explanation for why the log event is considered an anomaly. </p>
     */
    inline bool ExplanationHasBeenSet() const { return m_explanationHasBeenSet; }

    /**
     * <p> The explanation for why the log event is considered an anomaly. </p>
     */
    inline void SetExplanation(const Aws::String& value) { m_explanationHasBeenSet = true; m_explanation = value; }

    /**
     * <p> The explanation for why the log event is considered an anomaly. </p>
     */
    inline void SetExplanation(Aws::String&& value) { m_explanationHasBeenSet = true; m_explanation = std::move(value); }

    /**
     * <p> The explanation for why the log event is considered an anomaly. </p>
     */
    inline void SetExplanation(const char* value) { m_explanationHasBeenSet = true; m_explanation.assign(value); }

    /**
     * <p> The explanation for why the log event is considered an anomaly. </p>
     */
    inline LogAnomalyClass& WithExplanation(const Aws::String& value) { SetExplanation(value); return *this;}

    /**
     * <p> The explanation for why the log event is considered an anomaly. </p>
     */
    inline LogAnomalyClass& WithExplanation(Aws::String&& value) { SetExplanation(std::move(value)); return *this;}

    /**
     * <p> The explanation for why the log event is considered an anomaly. </p>
     */
    inline LogAnomalyClass& WithExplanation(const char* value) { SetExplanation(value); return *this;}


    /**
     * <p> The number of log lines where this anomalous log event occurs. </p>
     */
    inline int GetNumberOfLogLinesOccurrences() const{ return m_numberOfLogLinesOccurrences; }

    /**
     * <p> The number of log lines where this anomalous log event occurs. </p>
     */
    inline bool NumberOfLogLinesOccurrencesHasBeenSet() const { return m_numberOfLogLinesOccurrencesHasBeenSet; }

    /**
     * <p> The number of log lines where this anomalous log event occurs. </p>
     */
    inline void SetNumberOfLogLinesOccurrences(int value) { m_numberOfLogLinesOccurrencesHasBeenSet = true; m_numberOfLogLinesOccurrences = value; }

    /**
     * <p> The number of log lines where this anomalous log event occurs. </p>
     */
    inline LogAnomalyClass& WithNumberOfLogLinesOccurrences(int value) { SetNumberOfLogLinesOccurrences(value); return *this;}


    /**
     * <p> The time of the first occurrence of the anomalous log event. </p>
     */
    inline const Aws::Utils::DateTime& GetLogEventTimestamp() const{ return m_logEventTimestamp; }

    /**
     * <p> The time of the first occurrence of the anomalous log event. </p>
     */
    inline bool LogEventTimestampHasBeenSet() const { return m_logEventTimestampHasBeenSet; }

    /**
     * <p> The time of the first occurrence of the anomalous log event. </p>
     */
    inline void SetLogEventTimestamp(const Aws::Utils::DateTime& value) { m_logEventTimestampHasBeenSet = true; m_logEventTimestamp = value; }

    /**
     * <p> The time of the first occurrence of the anomalous log event. </p>
     */
    inline void SetLogEventTimestamp(Aws::Utils::DateTime&& value) { m_logEventTimestampHasBeenSet = true; m_logEventTimestamp = std::move(value); }

    /**
     * <p> The time of the first occurrence of the anomalous log event. </p>
     */
    inline LogAnomalyClass& WithLogEventTimestamp(const Aws::Utils::DateTime& value) { SetLogEventTimestamp(value); return *this;}

    /**
     * <p> The time of the first occurrence of the anomalous log event. </p>
     */
    inline LogAnomalyClass& WithLogEventTimestamp(Aws::Utils::DateTime&& value) { SetLogEventTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;

    LogAnomalyType m_logAnomalyType;
    bool m_logAnomalyTypeHasBeenSet = false;

    Aws::String m_logAnomalyToken;
    bool m_logAnomalyTokenHasBeenSet = false;

    Aws::String m_logEventId;
    bool m_logEventIdHasBeenSet = false;

    Aws::String m_explanation;
    bool m_explanationHasBeenSet = false;

    int m_numberOfLogLinesOccurrences;
    bool m_numberOfLogLinesOccurrencesHasBeenSet = false;

    Aws::Utils::DateTime m_logEventTimestamp;
    bool m_logEventTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
