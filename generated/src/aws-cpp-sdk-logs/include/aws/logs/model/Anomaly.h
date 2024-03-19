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
    AWS_CLOUDWATCHLOGS_API Anomaly();
    AWS_CLOUDWATCHLOGS_API Anomaly(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Anomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID that CloudWatch Logs assigned to this anomaly.</p>
     */
    inline const Aws::String& GetAnomalyId() const{ return m_anomalyId; }

    /**
     * <p>The unique ID that CloudWatch Logs assigned to this anomaly.</p>
     */
    inline bool AnomalyIdHasBeenSet() const { return m_anomalyIdHasBeenSet; }

    /**
     * <p>The unique ID that CloudWatch Logs assigned to this anomaly.</p>
     */
    inline void SetAnomalyId(const Aws::String& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = value; }

    /**
     * <p>The unique ID that CloudWatch Logs assigned to this anomaly.</p>
     */
    inline void SetAnomalyId(Aws::String&& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = std::move(value); }

    /**
     * <p>The unique ID that CloudWatch Logs assigned to this anomaly.</p>
     */
    inline void SetAnomalyId(const char* value) { m_anomalyIdHasBeenSet = true; m_anomalyId.assign(value); }

    /**
     * <p>The unique ID that CloudWatch Logs assigned to this anomaly.</p>
     */
    inline Anomaly& WithAnomalyId(const Aws::String& value) { SetAnomalyId(value); return *this;}

    /**
     * <p>The unique ID that CloudWatch Logs assigned to this anomaly.</p>
     */
    inline Anomaly& WithAnomalyId(Aws::String&& value) { SetAnomalyId(std::move(value)); return *this;}

    /**
     * <p>The unique ID that CloudWatch Logs assigned to this anomaly.</p>
     */
    inline Anomaly& WithAnomalyId(const char* value) { SetAnomalyId(value); return *this;}


    /**
     * <p>The ID of the pattern used to help identify this anomaly.</p>
     */
    inline const Aws::String& GetPatternId() const{ return m_patternId; }

    /**
     * <p>The ID of the pattern used to help identify this anomaly.</p>
     */
    inline bool PatternIdHasBeenSet() const { return m_patternIdHasBeenSet; }

    /**
     * <p>The ID of the pattern used to help identify this anomaly.</p>
     */
    inline void SetPatternId(const Aws::String& value) { m_patternIdHasBeenSet = true; m_patternId = value; }

    /**
     * <p>The ID of the pattern used to help identify this anomaly.</p>
     */
    inline void SetPatternId(Aws::String&& value) { m_patternIdHasBeenSet = true; m_patternId = std::move(value); }

    /**
     * <p>The ID of the pattern used to help identify this anomaly.</p>
     */
    inline void SetPatternId(const char* value) { m_patternIdHasBeenSet = true; m_patternId.assign(value); }

    /**
     * <p>The ID of the pattern used to help identify this anomaly.</p>
     */
    inline Anomaly& WithPatternId(const Aws::String& value) { SetPatternId(value); return *this;}

    /**
     * <p>The ID of the pattern used to help identify this anomaly.</p>
     */
    inline Anomaly& WithPatternId(Aws::String&& value) { SetPatternId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pattern used to help identify this anomaly.</p>
     */
    inline Anomaly& WithPatternId(const char* value) { SetPatternId(value); return *this;}


    /**
     * <p>The ARN of the anomaly detector that identified this anomaly.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }

    /**
     * <p>The ARN of the anomaly detector that identified this anomaly.</p>
     */
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }

    /**
     * <p>The ARN of the anomaly detector that identified this anomaly.</p>
     */
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }

    /**
     * <p>The ARN of the anomaly detector that identified this anomaly.</p>
     */
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }

    /**
     * <p>The ARN of the anomaly detector that identified this anomaly.</p>
     */
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }

    /**
     * <p>The ARN of the anomaly detector that identified this anomaly.</p>
     */
    inline Anomaly& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>The ARN of the anomaly detector that identified this anomaly.</p>
     */
    inline Anomaly& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the anomaly detector that identified this anomaly.</p>
     */
    inline Anomaly& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    /**
     * <p>The pattern used to help identify this anomaly, in string format.</p>
     */
    inline const Aws::String& GetPatternString() const{ return m_patternString; }

    /**
     * <p>The pattern used to help identify this anomaly, in string format.</p>
     */
    inline bool PatternStringHasBeenSet() const { return m_patternStringHasBeenSet; }

    /**
     * <p>The pattern used to help identify this anomaly, in string format.</p>
     */
    inline void SetPatternString(const Aws::String& value) { m_patternStringHasBeenSet = true; m_patternString = value; }

    /**
     * <p>The pattern used to help identify this anomaly, in string format.</p>
     */
    inline void SetPatternString(Aws::String&& value) { m_patternStringHasBeenSet = true; m_patternString = std::move(value); }

    /**
     * <p>The pattern used to help identify this anomaly, in string format.</p>
     */
    inline void SetPatternString(const char* value) { m_patternStringHasBeenSet = true; m_patternString.assign(value); }

    /**
     * <p>The pattern used to help identify this anomaly, in string format.</p>
     */
    inline Anomaly& WithPatternString(const Aws::String& value) { SetPatternString(value); return *this;}

    /**
     * <p>The pattern used to help identify this anomaly, in string format.</p>
     */
    inline Anomaly& WithPatternString(Aws::String&& value) { SetPatternString(std::move(value)); return *this;}

    /**
     * <p>The pattern used to help identify this anomaly, in string format.</p>
     */
    inline Anomaly& WithPatternString(const char* value) { SetPatternString(value); return *this;}


    /**
     * <p>The pattern used to help identify this anomaly, in regular expression
     * format.</p>
     */
    inline const Aws::String& GetPatternRegex() const{ return m_patternRegex; }

    /**
     * <p>The pattern used to help identify this anomaly, in regular expression
     * format.</p>
     */
    inline bool PatternRegexHasBeenSet() const { return m_patternRegexHasBeenSet; }

    /**
     * <p>The pattern used to help identify this anomaly, in regular expression
     * format.</p>
     */
    inline void SetPatternRegex(const Aws::String& value) { m_patternRegexHasBeenSet = true; m_patternRegex = value; }

    /**
     * <p>The pattern used to help identify this anomaly, in regular expression
     * format.</p>
     */
    inline void SetPatternRegex(Aws::String&& value) { m_patternRegexHasBeenSet = true; m_patternRegex = std::move(value); }

    /**
     * <p>The pattern used to help identify this anomaly, in regular expression
     * format.</p>
     */
    inline void SetPatternRegex(const char* value) { m_patternRegexHasBeenSet = true; m_patternRegex.assign(value); }

    /**
     * <p>The pattern used to help identify this anomaly, in regular expression
     * format.</p>
     */
    inline Anomaly& WithPatternRegex(const Aws::String& value) { SetPatternRegex(value); return *this;}

    /**
     * <p>The pattern used to help identify this anomaly, in regular expression
     * format.</p>
     */
    inline Anomaly& WithPatternRegex(Aws::String&& value) { SetPatternRegex(std::move(value)); return *this;}

    /**
     * <p>The pattern used to help identify this anomaly, in regular expression
     * format.</p>
     */
    inline Anomaly& WithPatternRegex(const char* value) { SetPatternRegex(value); return *this;}


    /**
     * <p>The priority level of this anomaly, as determined by CloudWatch Logs.
     * Priority is computed based on log severity labels such as <code>FATAL</code> and
     * <code>ERROR</code> and the amount of deviation from the baseline. Possible
     * values are <code>HIGH</code>, <code>MEDIUM</code>, and <code>LOW</code>.</p>
     */
    inline const Aws::String& GetPriority() const{ return m_priority; }

    /**
     * <p>The priority level of this anomaly, as determined by CloudWatch Logs.
     * Priority is computed based on log severity labels such as <code>FATAL</code> and
     * <code>ERROR</code> and the amount of deviation from the baseline. Possible
     * values are <code>HIGH</code>, <code>MEDIUM</code>, and <code>LOW</code>.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority level of this anomaly, as determined by CloudWatch Logs.
     * Priority is computed based on log severity labels such as <code>FATAL</code> and
     * <code>ERROR</code> and the amount of deviation from the baseline. Possible
     * values are <code>HIGH</code>, <code>MEDIUM</code>, and <code>LOW</code>.</p>
     */
    inline void SetPriority(const Aws::String& value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority level of this anomaly, as determined by CloudWatch Logs.
     * Priority is computed based on log severity labels such as <code>FATAL</code> and
     * <code>ERROR</code> and the amount of deviation from the baseline. Possible
     * values are <code>HIGH</code>, <code>MEDIUM</code>, and <code>LOW</code>.</p>
     */
    inline void SetPriority(Aws::String&& value) { m_priorityHasBeenSet = true; m_priority = std::move(value); }

    /**
     * <p>The priority level of this anomaly, as determined by CloudWatch Logs.
     * Priority is computed based on log severity labels such as <code>FATAL</code> and
     * <code>ERROR</code> and the amount of deviation from the baseline. Possible
     * values are <code>HIGH</code>, <code>MEDIUM</code>, and <code>LOW</code>.</p>
     */
    inline void SetPriority(const char* value) { m_priorityHasBeenSet = true; m_priority.assign(value); }

    /**
     * <p>The priority level of this anomaly, as determined by CloudWatch Logs.
     * Priority is computed based on log severity labels such as <code>FATAL</code> and
     * <code>ERROR</code> and the amount of deviation from the baseline. Possible
     * values are <code>HIGH</code>, <code>MEDIUM</code>, and <code>LOW</code>.</p>
     */
    inline Anomaly& WithPriority(const Aws::String& value) { SetPriority(value); return *this;}

    /**
     * <p>The priority level of this anomaly, as determined by CloudWatch Logs.
     * Priority is computed based on log severity labels such as <code>FATAL</code> and
     * <code>ERROR</code> and the amount of deviation from the baseline. Possible
     * values are <code>HIGH</code>, <code>MEDIUM</code>, and <code>LOW</code>.</p>
     */
    inline Anomaly& WithPriority(Aws::String&& value) { SetPriority(std::move(value)); return *this;}

    /**
     * <p>The priority level of this anomaly, as determined by CloudWatch Logs.
     * Priority is computed based on log severity labels such as <code>FATAL</code> and
     * <code>ERROR</code> and the amount of deviation from the baseline. Possible
     * values are <code>HIGH</code>, <code>MEDIUM</code>, and <code>LOW</code>.</p>
     */
    inline Anomaly& WithPriority(const char* value) { SetPriority(value); return *this;}


    /**
     * <p>The date and time when the anomaly detector first saw this anomaly. It is
     * specified as epoch time, which is the number of seconds since <code>January 1,
     * 1970, 00:00:00 UTC</code>.</p>
     */
    inline long long GetFirstSeen() const{ return m_firstSeen; }

    /**
     * <p>The date and time when the anomaly detector first saw this anomaly. It is
     * specified as epoch time, which is the number of seconds since <code>January 1,
     * 1970, 00:00:00 UTC</code>.</p>
     */
    inline bool FirstSeenHasBeenSet() const { return m_firstSeenHasBeenSet; }

    /**
     * <p>The date and time when the anomaly detector first saw this anomaly. It is
     * specified as epoch time, which is the number of seconds since <code>January 1,
     * 1970, 00:00:00 UTC</code>.</p>
     */
    inline void SetFirstSeen(long long value) { m_firstSeenHasBeenSet = true; m_firstSeen = value; }

    /**
     * <p>The date and time when the anomaly detector first saw this anomaly. It is
     * specified as epoch time, which is the number of seconds since <code>January 1,
     * 1970, 00:00:00 UTC</code>.</p>
     */
    inline Anomaly& WithFirstSeen(long long value) { SetFirstSeen(value); return *this;}


    /**
     * <p>The date and time when the anomaly detector most recently saw this anomaly.
     * It is specified as epoch time, which is the number of seconds since
     * <code>January 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline long long GetLastSeen() const{ return m_lastSeen; }

    /**
     * <p>The date and time when the anomaly detector most recently saw this anomaly.
     * It is specified as epoch time, which is the number of seconds since
     * <code>January 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline bool LastSeenHasBeenSet() const { return m_lastSeenHasBeenSet; }

    /**
     * <p>The date and time when the anomaly detector most recently saw this anomaly.
     * It is specified as epoch time, which is the number of seconds since
     * <code>January 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline void SetLastSeen(long long value) { m_lastSeenHasBeenSet = true; m_lastSeen = value; }

    /**
     * <p>The date and time when the anomaly detector most recently saw this anomaly.
     * It is specified as epoch time, which is the number of seconds since
     * <code>January 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline Anomaly& WithLastSeen(long long value) { SetLastSeen(value); return *this;}


    /**
     * <p>A human-readable description of the anomaly. This description is generated by
     * CloudWatch Logs.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A human-readable description of the anomaly. This description is generated by
     * CloudWatch Logs.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A human-readable description of the anomaly. This description is generated by
     * CloudWatch Logs.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A human-readable description of the anomaly. This description is generated by
     * CloudWatch Logs.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A human-readable description of the anomaly. This description is generated by
     * CloudWatch Logs.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A human-readable description of the anomaly. This description is generated by
     * CloudWatch Logs.</p>
     */
    inline Anomaly& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A human-readable description of the anomaly. This description is generated by
     * CloudWatch Logs.</p>
     */
    inline Anomaly& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A human-readable description of the anomaly. This description is generated by
     * CloudWatch Logs.</p>
     */
    inline Anomaly& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies whether this anomaly is still ongoing.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Specifies whether this anomaly is still ongoing.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Specifies whether this anomaly is still ongoing.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Specifies whether this anomaly is still ongoing.</p>
     */
    inline Anomaly& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>Indicates the current state of this anomaly. If it is still being treated as
     * an anomaly, the value is <code>Active</code>. If you have suppressed this
     * anomaly by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateAnomaly.html">UpdateAnomaly</a>
     * operation, the value is <code>Suppressed</code>. If this behavior is now
     * considered to be normal, the value is <code>Baseline</code>.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>Indicates the current state of this anomaly. If it is still being treated as
     * an anomaly, the value is <code>Active</code>. If you have suppressed this
     * anomaly by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateAnomaly.html">UpdateAnomaly</a>
     * operation, the value is <code>Suppressed</code>. If this behavior is now
     * considered to be normal, the value is <code>Baseline</code>.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Indicates the current state of this anomaly. If it is still being treated as
     * an anomaly, the value is <code>Active</code>. If you have suppressed this
     * anomaly by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateAnomaly.html">UpdateAnomaly</a>
     * operation, the value is <code>Suppressed</code>. If this behavior is now
     * considered to be normal, the value is <code>Baseline</code>.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Indicates the current state of this anomaly. If it is still being treated as
     * an anomaly, the value is <code>Active</code>. If you have suppressed this
     * anomaly by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateAnomaly.html">UpdateAnomaly</a>
     * operation, the value is <code>Suppressed</code>. If this behavior is now
     * considered to be normal, the value is <code>Baseline</code>.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Indicates the current state of this anomaly. If it is still being treated as
     * an anomaly, the value is <code>Active</code>. If you have suppressed this
     * anomaly by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateAnomaly.html">UpdateAnomaly</a>
     * operation, the value is <code>Suppressed</code>. If this behavior is now
     * considered to be normal, the value is <code>Baseline</code>.</p>
     */
    inline Anomaly& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>Indicates the current state of this anomaly. If it is still being treated as
     * an anomaly, the value is <code>Active</code>. If you have suppressed this
     * anomaly by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateAnomaly.html">UpdateAnomaly</a>
     * operation, the value is <code>Suppressed</code>. If this behavior is now
     * considered to be normal, the value is <code>Baseline</code>.</p>
     */
    inline Anomaly& WithState(State&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A map showing times when the anomaly detector ran, and the number of
     * occurrences of this anomaly that were detected at each of those runs. The times
     * are specified in epoch time, which is the number of seconds since <code>January
     * 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline const Aws::Map<Aws::String, long long>& GetHistogram() const{ return m_histogram; }

    /**
     * <p>A map showing times when the anomaly detector ran, and the number of
     * occurrences of this anomaly that were detected at each of those runs. The times
     * are specified in epoch time, which is the number of seconds since <code>January
     * 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline bool HistogramHasBeenSet() const { return m_histogramHasBeenSet; }

    /**
     * <p>A map showing times when the anomaly detector ran, and the number of
     * occurrences of this anomaly that were detected at each of those runs. The times
     * are specified in epoch time, which is the number of seconds since <code>January
     * 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline void SetHistogram(const Aws::Map<Aws::String, long long>& value) { m_histogramHasBeenSet = true; m_histogram = value; }

    /**
     * <p>A map showing times when the anomaly detector ran, and the number of
     * occurrences of this anomaly that were detected at each of those runs. The times
     * are specified in epoch time, which is the number of seconds since <code>January
     * 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline void SetHistogram(Aws::Map<Aws::String, long long>&& value) { m_histogramHasBeenSet = true; m_histogram = std::move(value); }

    /**
     * <p>A map showing times when the anomaly detector ran, and the number of
     * occurrences of this anomaly that were detected at each of those runs. The times
     * are specified in epoch time, which is the number of seconds since <code>January
     * 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline Anomaly& WithHistogram(const Aws::Map<Aws::String, long long>& value) { SetHistogram(value); return *this;}

    /**
     * <p>A map showing times when the anomaly detector ran, and the number of
     * occurrences of this anomaly that were detected at each of those runs. The times
     * are specified in epoch time, which is the number of seconds since <code>January
     * 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline Anomaly& WithHistogram(Aws::Map<Aws::String, long long>&& value) { SetHistogram(std::move(value)); return *this;}

    /**
     * <p>A map showing times when the anomaly detector ran, and the number of
     * occurrences of this anomaly that were detected at each of those runs. The times
     * are specified in epoch time, which is the number of seconds since <code>January
     * 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline Anomaly& AddHistogram(const Aws::String& key, long long value) { m_histogramHasBeenSet = true; m_histogram.emplace(key, value); return *this; }

    /**
     * <p>A map showing times when the anomaly detector ran, and the number of
     * occurrences of this anomaly that were detected at each of those runs. The times
     * are specified in epoch time, which is the number of seconds since <code>January
     * 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline Anomaly& AddHistogram(Aws::String&& key, long long value) { m_histogramHasBeenSet = true; m_histogram.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map showing times when the anomaly detector ran, and the number of
     * occurrences of this anomaly that were detected at each of those runs. The times
     * are specified in epoch time, which is the number of seconds since <code>January
     * 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline Anomaly& AddHistogram(const char* key, long long value) { m_histogramHasBeenSet = true; m_histogram.emplace(key, value); return *this; }


    /**
     * <p>An array of sample log event messages that are considered to be part of this
     * anomaly.</p>
     */
    inline const Aws::Vector<LogEvent>& GetLogSamples() const{ return m_logSamples; }

    /**
     * <p>An array of sample log event messages that are considered to be part of this
     * anomaly.</p>
     */
    inline bool LogSamplesHasBeenSet() const { return m_logSamplesHasBeenSet; }

    /**
     * <p>An array of sample log event messages that are considered to be part of this
     * anomaly.</p>
     */
    inline void SetLogSamples(const Aws::Vector<LogEvent>& value) { m_logSamplesHasBeenSet = true; m_logSamples = value; }

    /**
     * <p>An array of sample log event messages that are considered to be part of this
     * anomaly.</p>
     */
    inline void SetLogSamples(Aws::Vector<LogEvent>&& value) { m_logSamplesHasBeenSet = true; m_logSamples = std::move(value); }

    /**
     * <p>An array of sample log event messages that are considered to be part of this
     * anomaly.</p>
     */
    inline Anomaly& WithLogSamples(const Aws::Vector<LogEvent>& value) { SetLogSamples(value); return *this;}

    /**
     * <p>An array of sample log event messages that are considered to be part of this
     * anomaly.</p>
     */
    inline Anomaly& WithLogSamples(Aws::Vector<LogEvent>&& value) { SetLogSamples(std::move(value)); return *this;}

    /**
     * <p>An array of sample log event messages that are considered to be part of this
     * anomaly.</p>
     */
    inline Anomaly& AddLogSamples(const LogEvent& value) { m_logSamplesHasBeenSet = true; m_logSamples.push_back(value); return *this; }

    /**
     * <p>An array of sample log event messages that are considered to be part of this
     * anomaly.</p>
     */
    inline Anomaly& AddLogSamples(LogEvent&& value) { m_logSamplesHasBeenSet = true; m_logSamples.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of structures where each structure contains information about one
     * token that makes up the pattern.</p>
     */
    inline const Aws::Vector<PatternToken>& GetPatternTokens() const{ return m_patternTokens; }

    /**
     * <p>An array of structures where each structure contains information about one
     * token that makes up the pattern.</p>
     */
    inline bool PatternTokensHasBeenSet() const { return m_patternTokensHasBeenSet; }

    /**
     * <p>An array of structures where each structure contains information about one
     * token that makes up the pattern.</p>
     */
    inline void SetPatternTokens(const Aws::Vector<PatternToken>& value) { m_patternTokensHasBeenSet = true; m_patternTokens = value; }

    /**
     * <p>An array of structures where each structure contains information about one
     * token that makes up the pattern.</p>
     */
    inline void SetPatternTokens(Aws::Vector<PatternToken>&& value) { m_patternTokensHasBeenSet = true; m_patternTokens = std::move(value); }

    /**
     * <p>An array of structures where each structure contains information about one
     * token that makes up the pattern.</p>
     */
    inline Anomaly& WithPatternTokens(const Aws::Vector<PatternToken>& value) { SetPatternTokens(value); return *this;}

    /**
     * <p>An array of structures where each structure contains information about one
     * token that makes up the pattern.</p>
     */
    inline Anomaly& WithPatternTokens(Aws::Vector<PatternToken>&& value) { SetPatternTokens(std::move(value)); return *this;}

    /**
     * <p>An array of structures where each structure contains information about one
     * token that makes up the pattern.</p>
     */
    inline Anomaly& AddPatternTokens(const PatternToken& value) { m_patternTokensHasBeenSet = true; m_patternTokens.push_back(value); return *this; }

    /**
     * <p>An array of structures where each structure contains information about one
     * token that makes up the pattern.</p>
     */
    inline Anomaly& AddPatternTokens(PatternToken&& value) { m_patternTokensHasBeenSet = true; m_patternTokens.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of ARNS of the log groups that contained log events considered to be
     * part of this anomaly.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupArnList() const{ return m_logGroupArnList; }

    /**
     * <p>An array of ARNS of the log groups that contained log events considered to be
     * part of this anomaly.</p>
     */
    inline bool LogGroupArnListHasBeenSet() const { return m_logGroupArnListHasBeenSet; }

    /**
     * <p>An array of ARNS of the log groups that contained log events considered to be
     * part of this anomaly.</p>
     */
    inline void SetLogGroupArnList(const Aws::Vector<Aws::String>& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList = value; }

    /**
     * <p>An array of ARNS of the log groups that contained log events considered to be
     * part of this anomaly.</p>
     */
    inline void SetLogGroupArnList(Aws::Vector<Aws::String>&& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList = std::move(value); }

    /**
     * <p>An array of ARNS of the log groups that contained log events considered to be
     * part of this anomaly.</p>
     */
    inline Anomaly& WithLogGroupArnList(const Aws::Vector<Aws::String>& value) { SetLogGroupArnList(value); return *this;}

    /**
     * <p>An array of ARNS of the log groups that contained log events considered to be
     * part of this anomaly.</p>
     */
    inline Anomaly& WithLogGroupArnList(Aws::Vector<Aws::String>&& value) { SetLogGroupArnList(std::move(value)); return *this;}

    /**
     * <p>An array of ARNS of the log groups that contained log events considered to be
     * part of this anomaly.</p>
     */
    inline Anomaly& AddLogGroupArnList(const Aws::String& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList.push_back(value); return *this; }

    /**
     * <p>An array of ARNS of the log groups that contained log events considered to be
     * part of this anomaly.</p>
     */
    inline Anomaly& AddLogGroupArnList(Aws::String&& value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of ARNS of the log groups that contained log events considered to be
     * part of this anomaly.</p>
     */
    inline Anomaly& AddLogGroupArnList(const char* value) { m_logGroupArnListHasBeenSet = true; m_logGroupArnList.push_back(value); return *this; }


    /**
     * <p>Indicates whether this anomaly is currently suppressed. To suppress an
     * anomaly, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateAnomaly.html">UpdateAnomaly</a>.</p>
     */
    inline bool GetSuppressed() const{ return m_suppressed; }

    /**
     * <p>Indicates whether this anomaly is currently suppressed. To suppress an
     * anomaly, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateAnomaly.html">UpdateAnomaly</a>.</p>
     */
    inline bool SuppressedHasBeenSet() const { return m_suppressedHasBeenSet; }

    /**
     * <p>Indicates whether this anomaly is currently suppressed. To suppress an
     * anomaly, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateAnomaly.html">UpdateAnomaly</a>.</p>
     */
    inline void SetSuppressed(bool value) { m_suppressedHasBeenSet = true; m_suppressed = value; }

    /**
     * <p>Indicates whether this anomaly is currently suppressed. To suppress an
     * anomaly, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateAnomaly.html">UpdateAnomaly</a>.</p>
     */
    inline Anomaly& WithSuppressed(bool value) { SetSuppressed(value); return *this;}


    /**
     * <p>If the anomaly is suppressed, this indicates when it was suppressed.</p>
     */
    inline long long GetSuppressedDate() const{ return m_suppressedDate; }

    /**
     * <p>If the anomaly is suppressed, this indicates when it was suppressed.</p>
     */
    inline bool SuppressedDateHasBeenSet() const { return m_suppressedDateHasBeenSet; }

    /**
     * <p>If the anomaly is suppressed, this indicates when it was suppressed.</p>
     */
    inline void SetSuppressedDate(long long value) { m_suppressedDateHasBeenSet = true; m_suppressedDate = value; }

    /**
     * <p>If the anomaly is suppressed, this indicates when it was suppressed.</p>
     */
    inline Anomaly& WithSuppressedDate(long long value) { SetSuppressedDate(value); return *this;}


    /**
     * <p>If the anomaly is suppressed, this indicates when the suppression will end.
     * If this value is <code>0</code>, the anomaly was suppressed with no expiration,
     * with the <code>INFINITE</code> value.</p>
     */
    inline long long GetSuppressedUntil() const{ return m_suppressedUntil; }

    /**
     * <p>If the anomaly is suppressed, this indicates when the suppression will end.
     * If this value is <code>0</code>, the anomaly was suppressed with no expiration,
     * with the <code>INFINITE</code> value.</p>
     */
    inline bool SuppressedUntilHasBeenSet() const { return m_suppressedUntilHasBeenSet; }

    /**
     * <p>If the anomaly is suppressed, this indicates when the suppression will end.
     * If this value is <code>0</code>, the anomaly was suppressed with no expiration,
     * with the <code>INFINITE</code> value.</p>
     */
    inline void SetSuppressedUntil(long long value) { m_suppressedUntilHasBeenSet = true; m_suppressedUntil = value; }

    /**
     * <p>If the anomaly is suppressed, this indicates when the suppression will end.
     * If this value is <code>0</code>, the anomaly was suppressed with no expiration,
     * with the <code>INFINITE</code> value.</p>
     */
    inline Anomaly& WithSuppressedUntil(long long value) { SetSuppressedUntil(value); return *this;}


    /**
     * <p>If this anomaly is suppressed, this field is <code>true</code> if the
     * suppression is because the pattern is suppressed. If <code>false</code>, then
     * only this particular anomaly is suppressed.</p>
     */
    inline bool GetIsPatternLevelSuppression() const{ return m_isPatternLevelSuppression; }

    /**
     * <p>If this anomaly is suppressed, this field is <code>true</code> if the
     * suppression is because the pattern is suppressed. If <code>false</code>, then
     * only this particular anomaly is suppressed.</p>
     */
    inline bool IsPatternLevelSuppressionHasBeenSet() const { return m_isPatternLevelSuppressionHasBeenSet; }

    /**
     * <p>If this anomaly is suppressed, this field is <code>true</code> if the
     * suppression is because the pattern is suppressed. If <code>false</code>, then
     * only this particular anomaly is suppressed.</p>
     */
    inline void SetIsPatternLevelSuppression(bool value) { m_isPatternLevelSuppressionHasBeenSet = true; m_isPatternLevelSuppression = value; }

    /**
     * <p>If this anomaly is suppressed, this field is <code>true</code> if the
     * suppression is because the pattern is suppressed. If <code>false</code>, then
     * only this particular anomaly is suppressed.</p>
     */
    inline Anomaly& WithIsPatternLevelSuppression(bool value) { SetIsPatternLevelSuppression(value); return *this;}

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

    long long m_firstSeen;
    bool m_firstSeenHasBeenSet = false;

    long long m_lastSeen;
    bool m_lastSeenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;

    State m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, long long> m_histogram;
    bool m_histogramHasBeenSet = false;

    Aws::Vector<LogEvent> m_logSamples;
    bool m_logSamplesHasBeenSet = false;

    Aws::Vector<PatternToken> m_patternTokens;
    bool m_patternTokensHasBeenSet = false;

    Aws::Vector<Aws::String> m_logGroupArnList;
    bool m_logGroupArnListHasBeenSet = false;

    bool m_suppressed;
    bool m_suppressedHasBeenSet = false;

    long long m_suppressedDate;
    bool m_suppressedDateHasBeenSet = false;

    long long m_suppressedUntil;
    bool m_suppressedUntilHasBeenSet = false;

    bool m_isPatternLevelSuppression;
    bool m_isPatternLevelSuppressionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
