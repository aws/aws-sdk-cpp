/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/DeinterlaceAlgorithm.h>
#include <aws/mediaconvert/model/DeinterlacerControl.h>
#include <aws/mediaconvert/model/DeinterlacerMode.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for deinterlacer<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Deinterlacer">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Deinterlacer
  {
  public:
    Deinterlacer();
    Deinterlacer(Aws::Utils::Json::JsonView jsonValue);
    Deinterlacer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Only applies when you set Deinterlacer (DeinterlaceMode) to Deinterlace
     * (DEINTERLACE) or Adaptive (ADAPTIVE). Motion adaptive interpolate (INTERPOLATE)
     * produces sharper pictures, while blend (BLEND) produces smoother motion. Use
     * (INTERPOLATE_TICKER) OR (BLEND_TICKER) if your source file includes a ticker,
     * such as a scrolling headline at the bottom of the frame.
     */
    inline const DeinterlaceAlgorithm& GetAlgorithm() const{ return m_algorithm; }

    /**
     * Only applies when you set Deinterlacer (DeinterlaceMode) to Deinterlace
     * (DEINTERLACE) or Adaptive (ADAPTIVE). Motion adaptive interpolate (INTERPOLATE)
     * produces sharper pictures, while blend (BLEND) produces smoother motion. Use
     * (INTERPOLATE_TICKER) OR (BLEND_TICKER) if your source file includes a ticker,
     * such as a scrolling headline at the bottom of the frame.
     */
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }

    /**
     * Only applies when you set Deinterlacer (DeinterlaceMode) to Deinterlace
     * (DEINTERLACE) or Adaptive (ADAPTIVE). Motion adaptive interpolate (INTERPOLATE)
     * produces sharper pictures, while blend (BLEND) produces smoother motion. Use
     * (INTERPOLATE_TICKER) OR (BLEND_TICKER) if your source file includes a ticker,
     * such as a scrolling headline at the bottom of the frame.
     */
    inline void SetAlgorithm(const DeinterlaceAlgorithm& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    /**
     * Only applies when you set Deinterlacer (DeinterlaceMode) to Deinterlace
     * (DEINTERLACE) or Adaptive (ADAPTIVE). Motion adaptive interpolate (INTERPOLATE)
     * produces sharper pictures, while blend (BLEND) produces smoother motion. Use
     * (INTERPOLATE_TICKER) OR (BLEND_TICKER) if your source file includes a ticker,
     * such as a scrolling headline at the bottom of the frame.
     */
    inline void SetAlgorithm(DeinterlaceAlgorithm&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::move(value); }

    /**
     * Only applies when you set Deinterlacer (DeinterlaceMode) to Deinterlace
     * (DEINTERLACE) or Adaptive (ADAPTIVE). Motion adaptive interpolate (INTERPOLATE)
     * produces sharper pictures, while blend (BLEND) produces smoother motion. Use
     * (INTERPOLATE_TICKER) OR (BLEND_TICKER) if your source file includes a ticker,
     * such as a scrolling headline at the bottom of the frame.
     */
    inline Deinterlacer& WithAlgorithm(const DeinterlaceAlgorithm& value) { SetAlgorithm(value); return *this;}

    /**
     * Only applies when you set Deinterlacer (DeinterlaceMode) to Deinterlace
     * (DEINTERLACE) or Adaptive (ADAPTIVE). Motion adaptive interpolate (INTERPOLATE)
     * produces sharper pictures, while blend (BLEND) produces smoother motion. Use
     * (INTERPOLATE_TICKER) OR (BLEND_TICKER) if your source file includes a ticker,
     * such as a scrolling headline at the bottom of the frame.
     */
    inline Deinterlacer& WithAlgorithm(DeinterlaceAlgorithm&& value) { SetAlgorithm(std::move(value)); return *this;}


    /**
     * - When set to NORMAL (default), the deinterlacer does not convert frames that
     * are tagged  in metadata as progressive. It will only convert those that are
     * tagged as some other type. - When set to FORCE_ALL_FRAMES, the deinterlacer
     * converts every frame to progressive - even those that are already tagged as
     * progressive. Turn Force mode on only if there is  a good chance that the
     * metadata has tagged frames as progressive when they are not  progressive. Do not
     * turn on otherwise; processing frames that are already progressive  into
     * progressive will probably result in lower quality video.
     */
    inline const DeinterlacerControl& GetControl() const{ return m_control; }

    /**
     * - When set to NORMAL (default), the deinterlacer does not convert frames that
     * are tagged  in metadata as progressive. It will only convert those that are
     * tagged as some other type. - When set to FORCE_ALL_FRAMES, the deinterlacer
     * converts every frame to progressive - even those that are already tagged as
     * progressive. Turn Force mode on only if there is  a good chance that the
     * metadata has tagged frames as progressive when they are not  progressive. Do not
     * turn on otherwise; processing frames that are already progressive  into
     * progressive will probably result in lower quality video.
     */
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }

    /**
     * - When set to NORMAL (default), the deinterlacer does not convert frames that
     * are tagged  in metadata as progressive. It will only convert those that are
     * tagged as some other type. - When set to FORCE_ALL_FRAMES, the deinterlacer
     * converts every frame to progressive - even those that are already tagged as
     * progressive. Turn Force mode on only if there is  a good chance that the
     * metadata has tagged frames as progressive when they are not  progressive. Do not
     * turn on otherwise; processing frames that are already progressive  into
     * progressive will probably result in lower quality video.
     */
    inline void SetControl(const DeinterlacerControl& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * - When set to NORMAL (default), the deinterlacer does not convert frames that
     * are tagged  in metadata as progressive. It will only convert those that are
     * tagged as some other type. - When set to FORCE_ALL_FRAMES, the deinterlacer
     * converts every frame to progressive - even those that are already tagged as
     * progressive. Turn Force mode on only if there is  a good chance that the
     * metadata has tagged frames as progressive when they are not  progressive. Do not
     * turn on otherwise; processing frames that are already progressive  into
     * progressive will probably result in lower quality video.
     */
    inline void SetControl(DeinterlacerControl&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }

    /**
     * - When set to NORMAL (default), the deinterlacer does not convert frames that
     * are tagged  in metadata as progressive. It will only convert those that are
     * tagged as some other type. - When set to FORCE_ALL_FRAMES, the deinterlacer
     * converts every frame to progressive - even those that are already tagged as
     * progressive. Turn Force mode on only if there is  a good chance that the
     * metadata has tagged frames as progressive when they are not  progressive. Do not
     * turn on otherwise; processing frames that are already progressive  into
     * progressive will probably result in lower quality video.
     */
    inline Deinterlacer& WithControl(const DeinterlacerControl& value) { SetControl(value); return *this;}

    /**
     * - When set to NORMAL (default), the deinterlacer does not convert frames that
     * are tagged  in metadata as progressive. It will only convert those that are
     * tagged as some other type. - When set to FORCE_ALL_FRAMES, the deinterlacer
     * converts every frame to progressive - even those that are already tagged as
     * progressive. Turn Force mode on only if there is  a good chance that the
     * metadata has tagged frames as progressive when they are not  progressive. Do not
     * turn on otherwise; processing frames that are already progressive  into
     * progressive will probably result in lower quality video.
     */
    inline Deinterlacer& WithControl(DeinterlacerControl&& value) { SetControl(std::move(value)); return *this;}


    /**
     * Use Deinterlacer (DeinterlaceMode) to choose how the service will do
     * deinterlacing. Default is Deinterlace. - Deinterlace converts interlaced to
     * progressive. - Inverse telecine converts Hard Telecine 29.97i to progressive
     * 23.976p. - Adaptive auto-detects and converts to progressive.
     */
    inline const DeinterlacerMode& GetMode() const{ return m_mode; }

    /**
     * Use Deinterlacer (DeinterlaceMode) to choose how the service will do
     * deinterlacing. Default is Deinterlace. - Deinterlace converts interlaced to
     * progressive. - Inverse telecine converts Hard Telecine 29.97i to progressive
     * 23.976p. - Adaptive auto-detects and converts to progressive.
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * Use Deinterlacer (DeinterlaceMode) to choose how the service will do
     * deinterlacing. Default is Deinterlace. - Deinterlace converts interlaced to
     * progressive. - Inverse telecine converts Hard Telecine 29.97i to progressive
     * 23.976p. - Adaptive auto-detects and converts to progressive.
     */
    inline void SetMode(const DeinterlacerMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * Use Deinterlacer (DeinterlaceMode) to choose how the service will do
     * deinterlacing. Default is Deinterlace. - Deinterlace converts interlaced to
     * progressive. - Inverse telecine converts Hard Telecine 29.97i to progressive
     * 23.976p. - Adaptive auto-detects and converts to progressive.
     */
    inline void SetMode(DeinterlacerMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * Use Deinterlacer (DeinterlaceMode) to choose how the service will do
     * deinterlacing. Default is Deinterlace. - Deinterlace converts interlaced to
     * progressive. - Inverse telecine converts Hard Telecine 29.97i to progressive
     * 23.976p. - Adaptive auto-detects and converts to progressive.
     */
    inline Deinterlacer& WithMode(const DeinterlacerMode& value) { SetMode(value); return *this;}

    /**
     * Use Deinterlacer (DeinterlaceMode) to choose how the service will do
     * deinterlacing. Default is Deinterlace. - Deinterlace converts interlaced to
     * progressive. - Inverse telecine converts Hard Telecine 29.97i to progressive
     * 23.976p. - Adaptive auto-detects and converts to progressive.
     */
    inline Deinterlacer& WithMode(DeinterlacerMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    DeinterlaceAlgorithm m_algorithm;
    bool m_algorithmHasBeenSet;

    DeinterlacerControl m_control;
    bool m_controlHasBeenSet;

    DeinterlacerMode m_mode;
    bool m_modeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
