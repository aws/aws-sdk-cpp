/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/State.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/LogEvent.h>
#include <aws/logs/model/PatternToken.h>
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
   * <p>This structure represents one anomaly that has been found by a logs anomaly
   * detector.</p> <p>For more information about patterns and anomalies, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CreateLogAnomalyDetector.html">CreateLogAnomalyDetector</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/Anomaly">AWS API
   * Reference</a></p>
   */
  class Anomaly
  {
  public:
    AWS_CLOUDWATCHLOGS_API Anomaly() = default;
    AWS_CLOUDWATCHLOGS_API Anomaly(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Anomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID that CloudWatch Logs assigned to this anomaly.</p>
     */
    inline const Aws::String& GetAnomalyId() const { return m_anomalyId; }
    inline bool AnomalyIdHasBeenSet() const { return m_anomalyIdHasBeenSet; }
    template<typename AnomalyIdT = Aws::String>
    void SetAnomalyId(AnomalyIdT&& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = std::forward<AnomalyIdT>(value); }
    template<typename AnomalyIdT = Aws::String>
    Anomaly& WithAnomalyId(AnomalyIdT&& value) { SetAnomalyId(std::forward<AnomalyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pattern used to help identify this anomaly.</p>
     */
    inline const Aws::String& GetPatternId() const { return m_patternId; }
    inline bool PatternIdHasBeenSet() const { return m_patternIdHasBeenSet; }
    template<typename PatternIdT = Aws::String>
    void SetPatternId(PatternIdT&& value) { m_patternIdHasBeenSet = true; m_patternId = std::forward<PatternIdT>(value); }
    template<typename PatternIdT = Aws::String>
    Anomaly& WithPatternId(PatternIdT&& value) { SetPatternId(std::forward<PatternIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the anomaly detector that identified this anomaly.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const { return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    template<typename AnomalyDetectorArnT = Aws::String>
    void SetAnomalyDetectorArn(AnomalyDetectorArnT&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::forward<AnomalyDetectorArnT>(value); }
    template<typename AnomalyDetectorArnT = Aws::String>
    Anomaly& WithAnomalyDetectorArn(AnomalyDetectorArnT&& value) { SetAnomalyDetectorArn(std::forward<AnomalyDetectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pattern used to help identify this anomaly, in string format.</p>
     */
    inline const Aws::String& GetPatternString() const { return m_patternString; }
    inline bool PatternStringHasBeenSet() const { return m_patternStringHasBeenSet; }
    template<typename PatternStringT = Aws::String>
    void SetPatternString(PatternStringT&& value) { m_patternStringHasBeenSet = true; m_patternString = std::forward<PatternStringT>(value); }
    template<typename PatternStringT = Aws::String>
    Anomaly& WithPatternString(PatternStringT&& value) { SetPatternString(std::forward<PatternStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pattern used to help identify this anomaly, in regular expression
     * format.</p>
     */
    inline const Aws::String& GetPatternRegex() const { return m_patternRegex; }
    inline bool PatternRegexHasBeenSet() const { return m_patternRegexHasBeenSet; }
    template<typename PatternRegexT = Aws::String>
    void SetPatternRegex(PatternRegexT&& value) { m_patternRegexHasBeenSet = true; m_patternRegex = std::forward<PatternRegexT>(value); }
    template<typename PatternRegexT = Aws::String>
    Anomaly& WithPatternRegex(PatternRegexT&& value) { SetPatternRegex(std::forward<PatternRegexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority level of this anomaly, as determined by CloudWatch Logs.
     * Priority is computed based on log severity labels such as <code>FATAL</code> and
     * <code>ERROR</code> and the amount of deviation from the baseline. Possible
     * values are <code>HIGH</code>, <code>MEDIUM</code>, and <code>LOW</code>.</p>
     */
    inline const Aws::String& GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    template<typename PriorityT = Aws::String>
    void SetPriority(PriorityT&& value) { m_priorityHasBeenSet = true; m_priority = std::forward<PriorityT>(value); }
    template<typename PriorityT = Aws::String>
    Anomaly& WithPriority(PriorityT&& value) { SetPriority(std::forward<PriorityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the anomaly detector first saw this anomaly. It is
     * specified as epoch time, which is the number of seconds since <code>January 1,
     * 1970, 00:00:00 UTC</code>.</p>
     */
    inline long long GetFirstSeen() const { return m_firstSeen; }
    inline bool FirstSeenHasBeenSet() const { return m_firstSeenHasBeenSet; }
    inline void SetFirstSeen(long long value) { m_firstSeenHasBeenSet = true; m_firstSeen = value; }
    inline Anomaly& WithFirstSeen(long long value) { SetFirstSeen(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the anomaly detector most recently saw this anomaly.
     * It is specified as epoch time, which is the number of seconds since
     * <code>January 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline long long GetLastSeen() const { return m_lastSeen; }
    inline bool LastSeenHasBeenSet() const { return m_lastSeenHasBeenSet; }
    inline void SetLastSeen(long long value) { m_lastSeenHasBeenSet = true; m_lastSeen = value; }
    inline Anomaly& WithLastSeen(long long value) { SetLastSeen(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable description of the anomaly. This description is generated by
     * CloudWatch Logs.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Anomaly& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this anomaly is still ongoing.</p>
     */
    inline bool GetActive() const { return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline Anomaly& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current state of this anomaly. If it is still being treated as
     * an anomaly, the value is <code>Active</code>. If you have suppressed this
     * anomaly by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateAnomaly.html">UpdateAnomaly</a>
     * operation, the value is <code>Suppressed</code>. If this behavior is now
     * considered to be normal, the value is <code>Baseline</code>.</p>
     */
    inline State GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(State value) { m_stateHasBeenSet = true; m_state = value; }
    inline Anomaly& WithState(State value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map showing times when the anomaly detector ran, and the number of
     * occurrences of this anomaly that were detected at each of those runs. The times
     * are specified in epoch time, which is the number of seconds since <code>January
     * 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline const Aws::Map<Aws::String, long long>& GetHistogram() const { return m_histogram; }
    inline bool HistogramHasBeenSet() const { return m_histogramHasBeenSet; }
    template<typename HistogramT = Aws::Map<Aws::String, long long>>
    void SetHistogram(HistogramT&& value) { m_histogramHasBeenSet = true; m_histogram = std::forward<HistogramT>(value); }
    template<typename HistogramT = Aws::Map<Aws::String, long long>>
    Anomaly& WithHistogram(HistogramT&& value) { SetHistogram(std::forward<HistogramT>(value)); return *this;}
    inline Anomaly& AddHistogram(Aws::String key, long long value) {
      m_histogramHasBeenSet = true; m_histogram.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An array of sample log event messages that are considered to be part of this
     * anomaly.</p>
     */
    inline const Aws::Vector<LogEvent>& GetLogSamples() const { return m_logSamples; }
    inline bool LogSamplesHasBeenSet() const { return m_logSamplesHasBeenSet; }
    template<typename LogSamplesT = Aws::Vector<LogEvent>>
    void SetLogSamples(LogSamplesT&& value) { m_logSamplesHasBeenSet = true; m_logSamples = std::forward<LogSamplesT>(value); }
    template<typename LogSamplesT = Aws::Vector<LogEvent>>
    Anomaly& WithLogSamples(LogSamplesT&& value) { SetLogSamples(std::forward<LogSamplesT>(value)); return *this;}
    template<typename LogSamplesT = LogEvent>
    Anomaly& AddLogSamples(LogSamplesT&& value) { m_logSamplesHasBeenSet = true; m_logSamples.emplace_back(std::forward<LogSamplesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of structures where each structure contains information about one
     * token that makes up the pattern.</p>
     */
    inline const Aws::Vector<PatternToken>& GetPatternTokens() const { return m_patternTokens; }
    inline bool PatternTokensHasBeenSet() const { return m_patternTokensHasBeenSet; }
    template<typename PatternTokensT = Aws::Vector<PatternToken>>
    void SetPatternTokens(PatternTokensT&& value) { m_patternTokensHasBeenSet = true; m_patternTokens = std::forward<PatternTokensT>(value); }
    template<typename PatternTokensT = Aws::Vector<PatternToken>>
    Anomaly& WithPatternTokens(PatternTokensT&& value) { SetPatternTokens(std::forward<PatternTokensT>(value)); return *this;}
    template<typename PatternTokensT = PatternToken>
    Anomaly& AddPatternTokens(PatternTokensT&& value) { m_patternTokensHasBeenSet = true; m_patternTokens.emplace_back(std::forward<PatternTokensT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of ARNS of the log groups that contained log events considered to be
     * part of this anomaly.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupArnList() const { return m_logGroupArnList; }
    inline bool LogGroupArnListHasBeenSet() const { return m_logGroupArnListHasBeenSet; }
    template<typename LogGroupArnListT = Aws::Vector<Aws::String>>
    void SetLogGroupArnList(LogGroupArnListT&& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList = std::forward<LogGroupArnListT>(value); }
    template<typename LogGroupArnListT = Aws::Vector<Aws::String>>
    Anomaly& WithLogGroupArnList(LogGroupArnListT&& value) { SetLogGroupArnList(std::forward<LogGroupArnListT>(value)); return *this;}
    template<typename LogGroupArnListT = Aws::String>
    Anomaly& AddLogGroupArnList(LogGroupArnListT&& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList.emplace_back(std::forward<LogGroupArnListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether this anomaly is currently suppressed. To suppress an
     * anomaly, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateAnomaly.html">UpdateAnomaly</a>.</p>
     */
    inline bool GetSuppressed() const { return m_suppressed; }
    inline bool SuppressedHasBeenSet() const { return m_suppressedHasBeenSet; }
    inline void SetSuppressed(bool value) { m_suppressedHasBeenSet = true; m_suppressed = value; }
    inline Anomaly& WithSuppressed(bool value) { SetSuppressed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the anomaly is suppressed, this indicates when it was suppressed.</p>
     */
    inline long long GetSuppressedDate() const { return m_suppressedDate; }
    inline bool SuppressedDateHasBeenSet() const { return m_suppressedDateHasBeenSet; }
    inline void SetSuppressedDate(long long value) { m_suppressedDateHasBeenSet = true; m_suppressedDate = value; }
    inline Anomaly& WithSuppressedDate(long long value) { SetSuppressedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the anomaly is suppressed, this indicates when the suppression will end.
     * If this value is <code>0</code>, the anomaly was suppressed with no expiration,
     * with the <code>INFINITE</code> value.</p>
     */
    inline long long GetSuppressedUntil() const { return m_suppressedUntil; }
    inline bool SuppressedUntilHasBeenSet() const { return m_suppressedUntilHasBeenSet; }
    inline void SetSuppressedUntil(long long value) { m_suppressedUntilHasBeenSet = true; m_suppressedUntil = value; }
    inline Anomaly& WithSuppressedUntil(long long value) { SetSuppressedUntil(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this anomaly is suppressed, this field is <code>true</code> if the
     * suppression is because the pattern is suppressed. If <code>false</code>, then
     * only this particular anomaly is suppressed.</p>
     */
    inline bool GetIsPatternLevelSuppression() const { return m_isPatternLevelSuppression; }
    inline bool IsPatternLevelSuppressionHasBeenSet() const { return m_isPatternLevelSuppressionHasBeenSet; }
    inline void SetIsPatternLevelSuppression(bool value) { m_isPatternLevelSuppressionHasBeenSet = true; m_isPatternLevelSuppression = value; }
    inline Anomaly& WithIsPatternLevelSuppression(bool value) { SetIsPatternLevelSuppression(value); return *this;}
    ///@}
  private:

    Aws::String m_anomalyId;
    bool m_anomalyIdHasBeenSet = false;

    Aws::String m_patternId;
    bool m_patternIdHasBeenSet = false;

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    Aws::String m_patternString;
    bool m_patternStringHasBeenSet = false;

    Aws::String m_patternRegex;
    bool m_patternRegexHasBeenSet = false;

    Aws::String m_priority;
    bool m_priorityHasBeenSet = false;

    long long m_firstSeen{0};
    bool m_firstSeenHasBeenSet = false;

    long long m_lastSeen{0};
    bool m_lastSeenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_active{false};
    bool m_activeHasBeenSet = false;

    State m_state{State::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, long long> m_histogram;
    bool m_histogramHasBeenSet = false;

    Aws::Vector<LogEvent> m_logSamples;
    bool m_logSamplesHasBeenSet = false;

    Aws::Vector<PatternToken> m_patternTokens;
    bool m_patternTokensHasBeenSet = false;

    Aws::Vector<Aws::String> m_logGroupArnList;
    bool m_logGroupArnListHasBeenSet = false;

    bool m_suppressed{false};
    bool m_suppressedHasBeenSet = false;

    long long m_suppressedDate{0};
    bool m_suppressedDateHasBeenSet = false;

    long long m_suppressedUntil{0};
    bool m_suppressedUntilHasBeenSet = false;

    bool m_isPatternLevelSuppression{false};
    bool m_isPatternLevelSuppressionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
