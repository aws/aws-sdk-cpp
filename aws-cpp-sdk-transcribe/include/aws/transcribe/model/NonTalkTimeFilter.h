/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/AbsoluteTimeRange.h>
#include <aws/transcribe/model/RelativeTimeRange.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Flag the presence or absence of periods of silence in your Call Analytics
   * transcription output.</p> <p>Rules using <code>NonTalkTimeFilter</code> are
   * designed to match:</p> <ul> <li> <p>The presence of silence at specified periods
   * throughout the call</p> </li> <li> <p>The presence of speech at specified
   * periods throughout the call</p> </li> </ul> <p>See <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-categories-batch.html#tca-rules-batch">Rule
   * criteria for batch categories</a> for usage examples.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/NonTalkTimeFilter">AWS
   * API Reference</a></p>
   */
  class NonTalkTimeFilter
  {
  public:
    AWS_TRANSCRIBESERVICE_API NonTalkTimeFilter();
    AWS_TRANSCRIBESERVICE_API NonTalkTimeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API NonTalkTimeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify the duration, in milliseconds, of the period of silence that you want
     * to flag. For example, you can flag a silent period that lasts 30,000
     * milliseconds.</p>
     */
    inline long long GetThreshold() const{ return m_threshold; }

    /**
     * <p>Specify the duration, in milliseconds, of the period of silence that you want
     * to flag. For example, you can flag a silent period that lasts 30,000
     * milliseconds.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>Specify the duration, in milliseconds, of the period of silence that you want
     * to flag. For example, you can flag a silent period that lasts 30,000
     * milliseconds.</p>
     */
    inline void SetThreshold(long long value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>Specify the duration, in milliseconds, of the period of silence that you want
     * to flag. For example, you can flag a silent period that lasts 30,000
     * milliseconds.</p>
     */
    inline NonTalkTimeFilter& WithThreshold(long long value) { SetThreshold(value); return *this;}


    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for a period of silence. See for more
     * detail.</p>
     */
    inline const AbsoluteTimeRange& GetAbsoluteTimeRange() const{ return m_absoluteTimeRange; }

    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for a period of silence. See for more
     * detail.</p>
     */
    inline bool AbsoluteTimeRangeHasBeenSet() const { return m_absoluteTimeRangeHasBeenSet; }

    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for a period of silence. See for more
     * detail.</p>
     */
    inline void SetAbsoluteTimeRange(const AbsoluteTimeRange& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = value; }

    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for a period of silence. See for more
     * detail.</p>
     */
    inline void SetAbsoluteTimeRange(AbsoluteTimeRange&& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = std::move(value); }

    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for a period of silence. See for more
     * detail.</p>
     */
    inline NonTalkTimeFilter& WithAbsoluteTimeRange(const AbsoluteTimeRange& value) { SetAbsoluteTimeRange(value); return *this;}

    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for a period of silence. See for more
     * detail.</p>
     */
    inline NonTalkTimeFilter& WithAbsoluteTimeRange(AbsoluteTimeRange&& value) { SetAbsoluteTimeRange(std::move(value)); return *this;}


    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for a period of silence. See for more
     * detail.</p>
     */
    inline const RelativeTimeRange& GetRelativeTimeRange() const{ return m_relativeTimeRange; }

    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for a period of silence. See for more
     * detail.</p>
     */
    inline bool RelativeTimeRangeHasBeenSet() const { return m_relativeTimeRangeHasBeenSet; }

    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for a period of silence. See for more
     * detail.</p>
     */
    inline void SetRelativeTimeRange(const RelativeTimeRange& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = value; }

    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for a period of silence. See for more
     * detail.</p>
     */
    inline void SetRelativeTimeRange(RelativeTimeRange&& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = std::move(value); }

    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for a period of silence. See for more
     * detail.</p>
     */
    inline NonTalkTimeFilter& WithRelativeTimeRange(const RelativeTimeRange& value) { SetRelativeTimeRange(value); return *this;}

    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for a period of silence. See for more
     * detail.</p>
     */
    inline NonTalkTimeFilter& WithRelativeTimeRange(RelativeTimeRange&& value) { SetRelativeTimeRange(std::move(value)); return *this;}


    /**
     * <p>Set to <code>TRUE</code> to flag periods of speech. Set to <code>FALSE</code>
     * to flag periods of silence</p>
     */
    inline bool GetNegate() const{ return m_negate; }

    /**
     * <p>Set to <code>TRUE</code> to flag periods of speech. Set to <code>FALSE</code>
     * to flag periods of silence</p>
     */
    inline bool NegateHasBeenSet() const { return m_negateHasBeenSet; }

    /**
     * <p>Set to <code>TRUE</code> to flag periods of speech. Set to <code>FALSE</code>
     * to flag periods of silence</p>
     */
    inline void SetNegate(bool value) { m_negateHasBeenSet = true; m_negate = value; }

    /**
     * <p>Set to <code>TRUE</code> to flag periods of speech. Set to <code>FALSE</code>
     * to flag periods of silence</p>
     */
    inline NonTalkTimeFilter& WithNegate(bool value) { SetNegate(value); return *this;}

  private:

    long long m_threshold;
    bool m_thresholdHasBeenSet = false;

    AbsoluteTimeRange m_absoluteTimeRange;
    bool m_absoluteTimeRangeHasBeenSet = false;

    RelativeTimeRange m_relativeTimeRange;
    bool m_relativeTimeRangeHasBeenSet = false;

    bool m_negate;
    bool m_negateHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
