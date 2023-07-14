/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/Mode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The configuration for avail suppression, also known as ad suppression. For
   * more information about ad suppression, see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
   * Suppression</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AvailSuppression">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API AvailSuppression
  {
  public:
    AvailSuppression();
    AvailSuppression(Aws::Utils::Json::JsonView jsonValue);
    AvailSuppression& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sets the ad suppression mode. By default, ad suppression is off and all ad
     * breaks are filled with ads or slate. When Mode is set to BEHIND_LIVE_EDGE, ad
     * suppression is active and MediaTailor won't fill ad breaks on or behind the ad
     * suppression Value time in the manifest lookback window.</p>
     */
    inline const Mode& GetMode() const{ return m_mode; }

    /**
     * <p>Sets the ad suppression mode. By default, ad suppression is off and all ad
     * breaks are filled with ads or slate. When Mode is set to BEHIND_LIVE_EDGE, ad
     * suppression is active and MediaTailor won't fill ad breaks on or behind the ad
     * suppression Value time in the manifest lookback window.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Sets the ad suppression mode. By default, ad suppression is off and all ad
     * breaks are filled with ads or slate. When Mode is set to BEHIND_LIVE_EDGE, ad
     * suppression is active and MediaTailor won't fill ad breaks on or behind the ad
     * suppression Value time in the manifest lookback window.</p>
     */
    inline void SetMode(const Mode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Sets the ad suppression mode. By default, ad suppression is off and all ad
     * breaks are filled with ads or slate. When Mode is set to BEHIND_LIVE_EDGE, ad
     * suppression is active and MediaTailor won't fill ad breaks on or behind the ad
     * suppression Value time in the manifest lookback window.</p>
     */
    inline void SetMode(Mode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Sets the ad suppression mode. By default, ad suppression is off and all ad
     * breaks are filled with ads or slate. When Mode is set to BEHIND_LIVE_EDGE, ad
     * suppression is active and MediaTailor won't fill ad breaks on or behind the ad
     * suppression Value time in the manifest lookback window.</p>
     */
    inline AvailSuppression& WithMode(const Mode& value) { SetMode(value); return *this;}

    /**
     * <p>Sets the ad suppression mode. By default, ad suppression is off and all ad
     * breaks are filled with ads or slate. When Mode is set to BEHIND_LIVE_EDGE, ad
     * suppression is active and MediaTailor won't fill ad breaks on or behind the ad
     * suppression Value time in the manifest lookback window.</p>
     */
    inline AvailSuppression& WithMode(Mode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>A live edge offset time in HH:MM:SS. MediaTailor won't fill ad breaks on or
     * behind this time in the manifest lookback window. If Value is set to 00:00:00,
     * it is in sync with the live edge, and MediaTailor won't fill any ad breaks on or
     * behind the live edge. If you set a Value time, MediaTailor won't fill any ad
     * breaks on or behind this time in the manifest lookback window. For example, if
     * you set 00:45:00, then MediaTailor will fill ad breaks that occur within 45
     * minutes behind the live edge, but won't fill ad breaks on or behind 45 minutes
     * behind the live edge.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A live edge offset time in HH:MM:SS. MediaTailor won't fill ad breaks on or
     * behind this time in the manifest lookback window. If Value is set to 00:00:00,
     * it is in sync with the live edge, and MediaTailor won't fill any ad breaks on or
     * behind the live edge. If you set a Value time, MediaTailor won't fill any ad
     * breaks on or behind this time in the manifest lookback window. For example, if
     * you set 00:45:00, then MediaTailor will fill ad breaks that occur within 45
     * minutes behind the live edge, but won't fill ad breaks on or behind 45 minutes
     * behind the live edge.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A live edge offset time in HH:MM:SS. MediaTailor won't fill ad breaks on or
     * behind this time in the manifest lookback window. If Value is set to 00:00:00,
     * it is in sync with the live edge, and MediaTailor won't fill any ad breaks on or
     * behind the live edge. If you set a Value time, MediaTailor won't fill any ad
     * breaks on or behind this time in the manifest lookback window. For example, if
     * you set 00:45:00, then MediaTailor will fill ad breaks that occur within 45
     * minutes behind the live edge, but won't fill ad breaks on or behind 45 minutes
     * behind the live edge.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A live edge offset time in HH:MM:SS. MediaTailor won't fill ad breaks on or
     * behind this time in the manifest lookback window. If Value is set to 00:00:00,
     * it is in sync with the live edge, and MediaTailor won't fill any ad breaks on or
     * behind the live edge. If you set a Value time, MediaTailor won't fill any ad
     * breaks on or behind this time in the manifest lookback window. For example, if
     * you set 00:45:00, then MediaTailor will fill ad breaks that occur within 45
     * minutes behind the live edge, but won't fill ad breaks on or behind 45 minutes
     * behind the live edge.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A live edge offset time in HH:MM:SS. MediaTailor won't fill ad breaks on or
     * behind this time in the manifest lookback window. If Value is set to 00:00:00,
     * it is in sync with the live edge, and MediaTailor won't fill any ad breaks on or
     * behind the live edge. If you set a Value time, MediaTailor won't fill any ad
     * breaks on or behind this time in the manifest lookback window. For example, if
     * you set 00:45:00, then MediaTailor will fill ad breaks that occur within 45
     * minutes behind the live edge, but won't fill ad breaks on or behind 45 minutes
     * behind the live edge.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A live edge offset time in HH:MM:SS. MediaTailor won't fill ad breaks on or
     * behind this time in the manifest lookback window. If Value is set to 00:00:00,
     * it is in sync with the live edge, and MediaTailor won't fill any ad breaks on or
     * behind the live edge. If you set a Value time, MediaTailor won't fill any ad
     * breaks on or behind this time in the manifest lookback window. For example, if
     * you set 00:45:00, then MediaTailor will fill ad breaks that occur within 45
     * minutes behind the live edge, but won't fill ad breaks on or behind 45 minutes
     * behind the live edge.</p>
     */
    inline AvailSuppression& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A live edge offset time in HH:MM:SS. MediaTailor won't fill ad breaks on or
     * behind this time in the manifest lookback window. If Value is set to 00:00:00,
     * it is in sync with the live edge, and MediaTailor won't fill any ad breaks on or
     * behind the live edge. If you set a Value time, MediaTailor won't fill any ad
     * breaks on or behind this time in the manifest lookback window. For example, if
     * you set 00:45:00, then MediaTailor will fill ad breaks that occur within 45
     * minutes behind the live edge, but won't fill ad breaks on or behind 45 minutes
     * behind the live edge.</p>
     */
    inline AvailSuppression& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A live edge offset time in HH:MM:SS. MediaTailor won't fill ad breaks on or
     * behind this time in the manifest lookback window. If Value is set to 00:00:00,
     * it is in sync with the live edge, and MediaTailor won't fill any ad breaks on or
     * behind the live edge. If you set a Value time, MediaTailor won't fill any ad
     * breaks on or behind this time in the manifest lookback window. For example, if
     * you set 00:45:00, then MediaTailor will fill ad breaks that occur within 45
     * minutes behind the live edge, but won't fill ad breaks on or behind 45 minutes
     * behind the live edge.</p>
     */
    inline AvailSuppression& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Mode m_mode;
    bool m_modeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
