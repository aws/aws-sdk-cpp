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
    AWS_CLOUDWATCHLOGS_API DateTimeConverter();
    AWS_CLOUDWATCHLOGS_API DateTimeConverter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API DateTimeConverter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key to apply the date conversion to.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline DateTimeConverter& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline DateTimeConverter& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline DateTimeConverter& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON field to store the result in.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline DateTimeConverter& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline DateTimeConverter& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline DateTimeConverter& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datetime format to use for the converted data in the target field.</p>
     * <p>If you omit this, the default of <code> yyyy-MM-dd'T'HH:mm:ss.SSS'Z</code> is
     * used.</p>
     */
    inline const Aws::String& GetTargetFormat() const{ return m_targetFormat; }
    inline bool TargetFormatHasBeenSet() const { return m_targetFormatHasBeenSet; }
    inline void SetTargetFormat(const Aws::String& value) { m_targetFormatHasBeenSet = true; m_targetFormat = value; }
    inline void SetTargetFormat(Aws::String&& value) { m_targetFormatHasBeenSet = true; m_targetFormat = std::move(value); }
    inline void SetTargetFormat(const char* value) { m_targetFormatHasBeenSet = true; m_targetFormat.assign(value); }
    inline DateTimeConverter& WithTargetFormat(const Aws::String& value) { SetTargetFormat(value); return *this;}
    inline DateTimeConverter& WithTargetFormat(Aws::String&& value) { SetTargetFormat(std::move(value)); return *this;}
    inline DateTimeConverter& WithTargetFormat(const char* value) { SetTargetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of patterns to match against the <code>source</code> field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchPatterns() const{ return m_matchPatterns; }
    inline bool MatchPatternsHasBeenSet() const { return m_matchPatternsHasBeenSet; }
    inline void SetMatchPatterns(const Aws::Vector<Aws::String>& value) { m_matchPatternsHasBeenSet = true; m_matchPatterns = value; }
    inline void SetMatchPatterns(Aws::Vector<Aws::String>&& value) { m_matchPatternsHasBeenSet = true; m_matchPatterns = std::move(value); }
    inline DateTimeConverter& WithMatchPatterns(const Aws::Vector<Aws::String>& value) { SetMatchPatterns(value); return *this;}
    inline DateTimeConverter& WithMatchPatterns(Aws::Vector<Aws::String>&& value) { SetMatchPatterns(std::move(value)); return *this;}
    inline DateTimeConverter& AddMatchPatterns(const Aws::String& value) { m_matchPatternsHasBeenSet = true; m_matchPatterns.push_back(value); return *this; }
    inline DateTimeConverter& AddMatchPatterns(Aws::String&& value) { m_matchPatternsHasBeenSet = true; m_matchPatterns.push_back(std::move(value)); return *this; }
    inline DateTimeConverter& AddMatchPatterns(const char* value) { m_matchPatternsHasBeenSet = true; m_matchPatterns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time zone of the source field. If you omit this, the default used is the
     * UTC zone.</p>
     */
    inline const Aws::String& GetSourceTimezone() const{ return m_sourceTimezone; }
    inline bool SourceTimezoneHasBeenSet() const { return m_sourceTimezoneHasBeenSet; }
    inline void SetSourceTimezone(const Aws::String& value) { m_sourceTimezoneHasBeenSet = true; m_sourceTimezone = value; }
    inline void SetSourceTimezone(Aws::String&& value) { m_sourceTimezoneHasBeenSet = true; m_sourceTimezone = std::move(value); }
    inline void SetSourceTimezone(const char* value) { m_sourceTimezoneHasBeenSet = true; m_sourceTimezone.assign(value); }
    inline DateTimeConverter& WithSourceTimezone(const Aws::String& value) { SetSourceTimezone(value); return *this;}
    inline DateTimeConverter& WithSourceTimezone(Aws::String&& value) { SetSourceTimezone(std::move(value)); return *this;}
    inline DateTimeConverter& WithSourceTimezone(const char* value) { SetSourceTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone of the target field. If you omit this, the default used is the
     * UTC zone.</p>
     */
    inline const Aws::String& GetTargetTimezone() const{ return m_targetTimezone; }
    inline bool TargetTimezoneHasBeenSet() const { return m_targetTimezoneHasBeenSet; }
    inline void SetTargetTimezone(const Aws::String& value) { m_targetTimezoneHasBeenSet = true; m_targetTimezone = value; }
    inline void SetTargetTimezone(Aws::String&& value) { m_targetTimezoneHasBeenSet = true; m_targetTimezone = std::move(value); }
    inline void SetTargetTimezone(const char* value) { m_targetTimezoneHasBeenSet = true; m_targetTimezone.assign(value); }
    inline DateTimeConverter& WithTargetTimezone(const Aws::String& value) { SetTargetTimezone(value); return *this;}
    inline DateTimeConverter& WithTargetTimezone(Aws::String&& value) { SetTargetTimezone(std::move(value)); return *this;}
    inline DateTimeConverter& WithTargetTimezone(const char* value) { SetTargetTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the source field. If you omit this, the default of
     * <code>locale.ROOT</code> is used.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }
    inline DateTimeConverter& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}
    inline DateTimeConverter& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}
    inline DateTimeConverter& WithLocale(const char* value) { SetLocale(value); return *this;}
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
