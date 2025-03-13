/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>This processor converts a datetime string into a format that you specify.
   * </p> <p>For more information about this processor including examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-datetimeConverter">
   * datetimeConverter</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DateTimeConverter">AWS
   * API Reference</a></p>
   */
  class DateTimeConverter
  {
  public:
    AWS_CLOUDWATCHLOGS_API DateTimeConverter() = default;
    AWS_CLOUDWATCHLOGS_API DateTimeConverter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API DateTimeConverter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key to apply the date conversion to.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    DateTimeConverter& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON field to store the result in.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    DateTimeConverter& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datetime format to use for the converted data in the target field.</p>
     * <p>If you omit this, the default of <code> yyyy-MM-dd'T'HH:mm:ss.SSS'Z</code> is
     * used.</p>
     */
    inline const Aws::String& GetTargetFormat() const { return m_targetFormat; }
    inline bool TargetFormatHasBeenSet() const { return m_targetFormatHasBeenSet; }
    template<typename TargetFormatT = Aws::String>
    void SetTargetFormat(TargetFormatT&& value) { m_targetFormatHasBeenSet = true; m_targetFormat = std::forward<TargetFormatT>(value); }
    template<typename TargetFormatT = Aws::String>
    DateTimeConverter& WithTargetFormat(TargetFormatT&& value) { SetTargetFormat(std::forward<TargetFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of patterns to match against the <code>source</code> field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchPatterns() const { return m_matchPatterns; }
    inline bool MatchPatternsHasBeenSet() const { return m_matchPatternsHasBeenSet; }
    template<typename MatchPatternsT = Aws::Vector<Aws::String>>
    void SetMatchPatterns(MatchPatternsT&& value) { m_matchPatternsHasBeenSet = true; m_matchPatterns = std::forward<MatchPatternsT>(value); }
    template<typename MatchPatternsT = Aws::Vector<Aws::String>>
    DateTimeConverter& WithMatchPatterns(MatchPatternsT&& value) { SetMatchPatterns(std::forward<MatchPatternsT>(value)); return *this;}
    template<typename MatchPatternsT = Aws::String>
    DateTimeConverter& AddMatchPatterns(MatchPatternsT&& value) { m_matchPatternsHasBeenSet = true; m_matchPatterns.emplace_back(std::forward<MatchPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time zone of the source field. If you omit this, the default used is the
     * UTC zone.</p>
     */
    inline const Aws::String& GetSourceTimezone() const { return m_sourceTimezone; }
    inline bool SourceTimezoneHasBeenSet() const { return m_sourceTimezoneHasBeenSet; }
    template<typename SourceTimezoneT = Aws::String>
    void SetSourceTimezone(SourceTimezoneT&& value) { m_sourceTimezoneHasBeenSet = true; m_sourceTimezone = std::forward<SourceTimezoneT>(value); }
    template<typename SourceTimezoneT = Aws::String>
    DateTimeConverter& WithSourceTimezone(SourceTimezoneT&& value) { SetSourceTimezone(std::forward<SourceTimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone of the target field. If you omit this, the default used is the
     * UTC zone.</p>
     */
    inline const Aws::String& GetTargetTimezone() const { return m_targetTimezone; }
    inline bool TargetTimezoneHasBeenSet() const { return m_targetTimezoneHasBeenSet; }
    template<typename TargetTimezoneT = Aws::String>
    void SetTargetTimezone(TargetTimezoneT&& value) { m_targetTimezoneHasBeenSet = true; m_targetTimezone = std::forward<TargetTimezoneT>(value); }
    template<typename TargetTimezoneT = Aws::String>
    DateTimeConverter& WithTargetTimezone(TargetTimezoneT&& value) { SetTargetTimezone(std::forward<TargetTimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the source field. If you omit this, the default of
     * <code>locale.ROOT</code> is used.</p>
     */
    inline const Aws::String& GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    template<typename LocaleT = Aws::String>
    void SetLocale(LocaleT&& value) { m_localeHasBeenSet = true; m_locale = std::forward<LocaleT>(value); }
    template<typename LocaleT = Aws::String>
    DateTimeConverter& WithLocale(LocaleT&& value) { SetLocale(std::forward<LocaleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_targetFormat;
    bool m_targetFormatHasBeenSet = false;

    Aws::Vector<Aws::String> m_matchPatterns;
    bool m_matchPatternsHasBeenSet = false;

    Aws::String m_sourceTimezone;
    bool m_sourceTimezoneHasBeenSet = false;

    Aws::String m_targetTimezone;
    bool m_targetTimezoneHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
