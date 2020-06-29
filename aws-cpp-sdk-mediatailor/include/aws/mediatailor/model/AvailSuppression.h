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
   * <p>The configuration for Avail Suppression. Ad suppression can be used to turn
   * off ad personalization in a long manifest, or if a viewer joins
   * mid-break.</p><p><h3>See Also:</h3>   <a
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
     * Sets the mode for avail suppression, also known as ad suppression. By default,
     * ad suppression is off and all ad breaks are filled by MediaTailor with ads or
     * slate.
     */
    inline const Mode& GetMode() const{ return m_mode; }

    /**
     * Sets the mode for avail suppression, also known as ad suppression. By default,
     * ad suppression is off and all ad breaks are filled by MediaTailor with ads or
     * slate.
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * Sets the mode for avail suppression, also known as ad suppression. By default,
     * ad suppression is off and all ad breaks are filled by MediaTailor with ads or
     * slate.
     */
    inline void SetMode(const Mode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * Sets the mode for avail suppression, also known as ad suppression. By default,
     * ad suppression is off and all ad breaks are filled by MediaTailor with ads or
     * slate.
     */
    inline void SetMode(Mode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * Sets the mode for avail suppression, also known as ad suppression. By default,
     * ad suppression is off and all ad breaks are filled by MediaTailor with ads or
     * slate.
     */
    inline AvailSuppression& WithMode(const Mode& value) { SetMode(value); return *this;}

    /**
     * Sets the mode for avail suppression, also known as ad suppression. By default,
     * ad suppression is off and all ad breaks are filled by MediaTailor with ads or
     * slate.
     */
    inline AvailSuppression& WithMode(Mode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * The avail suppression value is a live edge offset time in HH:MM:SS. MediaTailor
     * won't fill ad breaks on or behind this time in the manifest lookback window. 
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * The avail suppression value is a live edge offset time in HH:MM:SS. MediaTailor
     * won't fill ad breaks on or behind this time in the manifest lookback window. 
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * The avail suppression value is a live edge offset time in HH:MM:SS. MediaTailor
     * won't fill ad breaks on or behind this time in the manifest lookback window. 
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * The avail suppression value is a live edge offset time in HH:MM:SS. MediaTailor
     * won't fill ad breaks on or behind this time in the manifest lookback window. 
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * The avail suppression value is a live edge offset time in HH:MM:SS. MediaTailor
     * won't fill ad breaks on or behind this time in the manifest lookback window. 
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * The avail suppression value is a live edge offset time in HH:MM:SS. MediaTailor
     * won't fill ad breaks on or behind this time in the manifest lookback window. 
     */
    inline AvailSuppression& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * The avail suppression value is a live edge offset time in HH:MM:SS. MediaTailor
     * won't fill ad breaks on or behind this time in the manifest lookback window. 
     */
    inline AvailSuppression& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * The avail suppression value is a live edge offset time in HH:MM:SS. MediaTailor
     * won't fill ad breaks on or behind this time in the manifest lookback window. 
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
