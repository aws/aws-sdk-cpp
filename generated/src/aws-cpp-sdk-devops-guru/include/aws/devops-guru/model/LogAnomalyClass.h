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
    AWS_DEVOPSGURU_API LogAnomalyClass() = default;
    AWS_DEVOPSGURU_API LogAnomalyClass(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API LogAnomalyClass& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the Amazon CloudWatch log stream that the anomalous log event
     * belongs to. A log stream is a sequence of log events that share the same source.
     * </p>
     */
    inline const Aws::String& GetLogStreamName() const { return m_logStreamName; }
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
    template<typename LogStreamNameT = Aws::String>
    void SetLogStreamName(LogStreamNameT&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::forward<LogStreamNameT>(value); }
    template<typename LogStreamNameT = Aws::String>
    LogAnomalyClass& WithLogStreamName(LogStreamNameT&& value) { SetLogStreamName(std::forward<LogStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of log anomaly that has been detected. </p>
     */
    inline LogAnomalyType GetLogAnomalyType() const { return m_logAnomalyType; }
    inline bool LogAnomalyTypeHasBeenSet() const { return m_logAnomalyTypeHasBeenSet; }
    inline void SetLogAnomalyType(LogAnomalyType value) { m_logAnomalyTypeHasBeenSet = true; m_logAnomalyType = value; }
    inline LogAnomalyClass& WithLogAnomalyType(LogAnomalyType value) { SetLogAnomalyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token where the anomaly was detected. This may refer to an exception or
     * another location, or it may be blank for log anomalies such as format anomalies.
     * </p>
     */
    inline const Aws::String& GetLogAnomalyToken() const { return m_logAnomalyToken; }
    inline bool LogAnomalyTokenHasBeenSet() const { return m_logAnomalyTokenHasBeenSet; }
    template<typename LogAnomalyTokenT = Aws::String>
    void SetLogAnomalyToken(LogAnomalyTokenT&& value) { m_logAnomalyTokenHasBeenSet = true; m_logAnomalyToken = std::forward<LogAnomalyTokenT>(value); }
    template<typename LogAnomalyTokenT = Aws::String>
    LogAnomalyClass& WithLogAnomalyToken(LogAnomalyTokenT&& value) { SetLogAnomalyToken(std::forward<LogAnomalyTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the log event. </p>
     */
    inline const Aws::String& GetLogEventId() const { return m_logEventId; }
    inline bool LogEventIdHasBeenSet() const { return m_logEventIdHasBeenSet; }
    template<typename LogEventIdT = Aws::String>
    void SetLogEventId(LogEventIdT&& value) { m_logEventIdHasBeenSet = true; m_logEventId = std::forward<LogEventIdT>(value); }
    template<typename LogEventIdT = Aws::String>
    LogAnomalyClass& WithLogEventId(LogEventIdT&& value) { SetLogEventId(std::forward<LogEventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The explanation for why the log event is considered an anomaly. </p>
     */
    inline const Aws::String& GetExplanation() const { return m_explanation; }
    inline bool ExplanationHasBeenSet() const { return m_explanationHasBeenSet; }
    template<typename ExplanationT = Aws::String>
    void SetExplanation(ExplanationT&& value) { m_explanationHasBeenSet = true; m_explanation = std::forward<ExplanationT>(value); }
    template<typename ExplanationT = Aws::String>
    LogAnomalyClass& WithExplanation(ExplanationT&& value) { SetExplanation(std::forward<ExplanationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of log lines where this anomalous log event occurs. </p>
     */
    inline int GetNumberOfLogLinesOccurrences() const { return m_numberOfLogLinesOccurrences; }
    inline bool NumberOfLogLinesOccurrencesHasBeenSet() const { return m_numberOfLogLinesOccurrencesHasBeenSet; }
    inline void SetNumberOfLogLinesOccurrences(int value) { m_numberOfLogLinesOccurrencesHasBeenSet = true; m_numberOfLogLinesOccurrences = value; }
    inline LogAnomalyClass& WithNumberOfLogLinesOccurrences(int value) { SetNumberOfLogLinesOccurrences(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time of the first occurrence of the anomalous log event. </p>
     */
    inline const Aws::Utils::DateTime& GetLogEventTimestamp() const { return m_logEventTimestamp; }
    inline bool LogEventTimestampHasBeenSet() const { return m_logEventTimestampHasBeenSet; }
    template<typename LogEventTimestampT = Aws::Utils::DateTime>
    void SetLogEventTimestamp(LogEventTimestampT&& value) { m_logEventTimestampHasBeenSet = true; m_logEventTimestamp = std::forward<LogEventTimestampT>(value); }
    template<typename LogEventTimestampT = Aws::Utils::DateTime>
    LogAnomalyClass& WithLogEventTimestamp(LogEventTimestampT&& value) { SetLogEventTimestamp(std::forward<LogEventTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;

    LogAnomalyType m_logAnomalyType{LogAnomalyType::NOT_SET};
    bool m_logAnomalyTypeHasBeenSet = false;

    Aws::String m_logAnomalyToken;
    bool m_logAnomalyTokenHasBeenSet = false;

    Aws::String m_logEventId;
    bool m_logEventIdHasBeenSet = false;

    Aws::String m_explanation;
    bool m_explanationHasBeenSet = false;

    int m_numberOfLogLinesOccurrences{0};
    bool m_numberOfLogLinesOccurrencesHasBeenSet = false;

    Aws::Utils::DateTime m_logEventTimestamp{};
    bool m_logEventTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
