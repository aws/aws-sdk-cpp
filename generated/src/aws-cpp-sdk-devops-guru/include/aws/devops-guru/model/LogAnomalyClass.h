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


    ///@{
    /**
     * <p> The name of the Amazon CloudWatch log stream that the anomalous log event
     * belongs to. A log stream is a sequence of log events that share the same source.
     * </p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::move(value); }
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }
    inline LogAnomalyClass& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}
    inline LogAnomalyClass& WithLogStreamName(Aws::String&& value) { SetLogStreamName(std::move(value)); return *this;}
    inline LogAnomalyClass& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of log anomaly that has been detected. </p>
     */
    inline const LogAnomalyType& GetLogAnomalyType() const{ return m_logAnomalyType; }
    inline bool LogAnomalyTypeHasBeenSet() const { return m_logAnomalyTypeHasBeenSet; }
    inline void SetLogAnomalyType(const LogAnomalyType& value) { m_logAnomalyTypeHasBeenSet = true; m_logAnomalyType = value; }
    inline void SetLogAnomalyType(LogAnomalyType&& value) { m_logAnomalyTypeHasBeenSet = true; m_logAnomalyType = std::move(value); }
    inline LogAnomalyClass& WithLogAnomalyType(const LogAnomalyType& value) { SetLogAnomalyType(value); return *this;}
    inline LogAnomalyClass& WithLogAnomalyType(LogAnomalyType&& value) { SetLogAnomalyType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token where the anomaly was detected. This may refer to an exception or
     * another location, or it may be blank for log anomalies such as format anomalies.
     * </p>
     */
    inline const Aws::String& GetLogAnomalyToken() const{ return m_logAnomalyToken; }
    inline bool LogAnomalyTokenHasBeenSet() const { return m_logAnomalyTokenHasBeenSet; }
    inline void SetLogAnomalyToken(const Aws::String& value) { m_logAnomalyTokenHasBeenSet = true; m_logAnomalyToken = value; }
    inline void SetLogAnomalyToken(Aws::String&& value) { m_logAnomalyTokenHasBeenSet = true; m_logAnomalyToken = std::move(value); }
    inline void SetLogAnomalyToken(const char* value) { m_logAnomalyTokenHasBeenSet = true; m_logAnomalyToken.assign(value); }
    inline LogAnomalyClass& WithLogAnomalyToken(const Aws::String& value) { SetLogAnomalyToken(value); return *this;}
    inline LogAnomalyClass& WithLogAnomalyToken(Aws::String&& value) { SetLogAnomalyToken(std::move(value)); return *this;}
    inline LogAnomalyClass& WithLogAnomalyToken(const char* value) { SetLogAnomalyToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the log event. </p>
     */
    inline const Aws::String& GetLogEventId() const{ return m_logEventId; }
    inline bool LogEventIdHasBeenSet() const { return m_logEventIdHasBeenSet; }
    inline void SetLogEventId(const Aws::String& value) { m_logEventIdHasBeenSet = true; m_logEventId = value; }
    inline void SetLogEventId(Aws::String&& value) { m_logEventIdHasBeenSet = true; m_logEventId = std::move(value); }
    inline void SetLogEventId(const char* value) { m_logEventIdHasBeenSet = true; m_logEventId.assign(value); }
    inline LogAnomalyClass& WithLogEventId(const Aws::String& value) { SetLogEventId(value); return *this;}
    inline LogAnomalyClass& WithLogEventId(Aws::String&& value) { SetLogEventId(std::move(value)); return *this;}
    inline LogAnomalyClass& WithLogEventId(const char* value) { SetLogEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The explanation for why the log event is considered an anomaly. </p>
     */
    inline const Aws::String& GetExplanation() const{ return m_explanation; }
    inline bool ExplanationHasBeenSet() const { return m_explanationHasBeenSet; }
    inline void SetExplanation(const Aws::String& value) { m_explanationHasBeenSet = true; m_explanation = value; }
    inline void SetExplanation(Aws::String&& value) { m_explanationHasBeenSet = true; m_explanation = std::move(value); }
    inline void SetExplanation(const char* value) { m_explanationHasBeenSet = true; m_explanation.assign(value); }
    inline LogAnomalyClass& WithExplanation(const Aws::String& value) { SetExplanation(value); return *this;}
    inline LogAnomalyClass& WithExplanation(Aws::String&& value) { SetExplanation(std::move(value)); return *this;}
    inline LogAnomalyClass& WithExplanation(const char* value) { SetExplanation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of log lines where this anomalous log event occurs. </p>
     */
    inline int GetNumberOfLogLinesOccurrences() const{ return m_numberOfLogLinesOccurrences; }
    inline bool NumberOfLogLinesOccurrencesHasBeenSet() const { return m_numberOfLogLinesOccurrencesHasBeenSet; }
    inline void SetNumberOfLogLinesOccurrences(int value) { m_numberOfLogLinesOccurrencesHasBeenSet = true; m_numberOfLogLinesOccurrences = value; }
    inline LogAnomalyClass& WithNumberOfLogLinesOccurrences(int value) { SetNumberOfLogLinesOccurrences(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time of the first occurrence of the anomalous log event. </p>
     */
    inline const Aws::Utils::DateTime& GetLogEventTimestamp() const{ return m_logEventTimestamp; }
    inline bool LogEventTimestampHasBeenSet() const { return m_logEventTimestampHasBeenSet; }
    inline void SetLogEventTimestamp(const Aws::Utils::DateTime& value) { m_logEventTimestampHasBeenSet = true; m_logEventTimestamp = value; }
    inline void SetLogEventTimestamp(Aws::Utils::DateTime&& value) { m_logEventTimestampHasBeenSet = true; m_logEventTimestamp = std::move(value); }
    inline LogAnomalyClass& WithLogEventTimestamp(const Aws::Utils::DateTime& value) { SetLogEventTimestamp(value); return *this;}
    inline LogAnomalyClass& WithLogEventTimestamp(Aws::Utils::DateTime&& value) { SetLogEventTimestamp(std::move(value)); return *this;}
    ///@}
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
