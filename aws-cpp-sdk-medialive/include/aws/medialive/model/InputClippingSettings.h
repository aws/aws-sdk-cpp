/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputTimecodeSource.h>
#include <aws/medialive/model/StartTimecode.h>
#include <aws/medialive/model/StopTimecode.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings to let you create a clip of the file input, in order to set up the
   * input to ingest only a portion of the file.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputClippingSettings">AWS
   * API Reference</a></p>
   */
  class InputClippingSettings
  {
  public:
    AWS_MEDIALIVE_API InputClippingSettings();
    AWS_MEDIALIVE_API InputClippingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputClippingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The source of the timecodes in the source being clipped.
     */
    inline const InputTimecodeSource& GetInputTimecodeSource() const{ return m_inputTimecodeSource; }

    /**
     * The source of the timecodes in the source being clipped.
     */
    inline bool InputTimecodeSourceHasBeenSet() const { return m_inputTimecodeSourceHasBeenSet; }

    /**
     * The source of the timecodes in the source being clipped.
     */
    inline void SetInputTimecodeSource(const InputTimecodeSource& value) { m_inputTimecodeSourceHasBeenSet = true; m_inputTimecodeSource = value; }

    /**
     * The source of the timecodes in the source being clipped.
     */
    inline void SetInputTimecodeSource(InputTimecodeSource&& value) { m_inputTimecodeSourceHasBeenSet = true; m_inputTimecodeSource = std::move(value); }

    /**
     * The source of the timecodes in the source being clipped.
     */
    inline InputClippingSettings& WithInputTimecodeSource(const InputTimecodeSource& value) { SetInputTimecodeSource(value); return *this;}

    /**
     * The source of the timecodes in the source being clipped.
     */
    inline InputClippingSettings& WithInputTimecodeSource(InputTimecodeSource&& value) { SetInputTimecodeSource(std::move(value)); return *this;}


    /**
     * Settings to identify the start of the clip.
     */
    inline const StartTimecode& GetStartTimecode() const{ return m_startTimecode; }

    /**
     * Settings to identify the start of the clip.
     */
    inline bool StartTimecodeHasBeenSet() const { return m_startTimecodeHasBeenSet; }

    /**
     * Settings to identify the start of the clip.
     */
    inline void SetStartTimecode(const StartTimecode& value) { m_startTimecodeHasBeenSet = true; m_startTimecode = value; }

    /**
     * Settings to identify the start of the clip.
     */
    inline void SetStartTimecode(StartTimecode&& value) { m_startTimecodeHasBeenSet = true; m_startTimecode = std::move(value); }

    /**
     * Settings to identify the start of the clip.
     */
    inline InputClippingSettings& WithStartTimecode(const StartTimecode& value) { SetStartTimecode(value); return *this;}

    /**
     * Settings to identify the start of the clip.
     */
    inline InputClippingSettings& WithStartTimecode(StartTimecode&& value) { SetStartTimecode(std::move(value)); return *this;}


    /**
     * Settings to identify the end of the clip.
     */
    inline const StopTimecode& GetStopTimecode() const{ return m_stopTimecode; }

    /**
     * Settings to identify the end of the clip.
     */
    inline bool StopTimecodeHasBeenSet() const { return m_stopTimecodeHasBeenSet; }

    /**
     * Settings to identify the end of the clip.
     */
    inline void SetStopTimecode(const StopTimecode& value) { m_stopTimecodeHasBeenSet = true; m_stopTimecode = value; }

    /**
     * Settings to identify the end of the clip.
     */
    inline void SetStopTimecode(StopTimecode&& value) { m_stopTimecodeHasBeenSet = true; m_stopTimecode = std::move(value); }

    /**
     * Settings to identify the end of the clip.
     */
    inline InputClippingSettings& WithStopTimecode(const StopTimecode& value) { SetStopTimecode(value); return *this;}

    /**
     * Settings to identify the end of the clip.
     */
    inline InputClippingSettings& WithStopTimecode(StopTimecode&& value) { SetStopTimecode(std::move(value)); return *this;}

  private:

    InputTimecodeSource m_inputTimecodeSource;
    bool m_inputTimecodeSourceHasBeenSet = false;

    StartTimecode m_startTimecode;
    bool m_startTimecodeHasBeenSet = false;

    StopTimecode m_stopTimecode;
    bool m_stopTimecodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
