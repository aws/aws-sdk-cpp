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
#include <aws/mediaconvert/model/MovClapAtom.h>
#include <aws/mediaconvert/model/MovCslgAtom.h>
#include <aws/mediaconvert/model/MovMpeg2FourCCControl.h>
#include <aws/mediaconvert/model/MovPaddingControl.h>
#include <aws/mediaconvert/model/MovReference.h>
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
   * Settings for MOV Container.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MovSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API MovSettings
  {
  public:
    MovSettings();
    MovSettings(Aws::Utils::Json::JsonView jsonValue);
    MovSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * When enabled, include 'clap' atom if appropriate for the video output settings.
     */
    inline const MovClapAtom& GetClapAtom() const{ return m_clapAtom; }

    /**
     * When enabled, include 'clap' atom if appropriate for the video output settings.
     */
    inline bool ClapAtomHasBeenSet() const { return m_clapAtomHasBeenSet; }

    /**
     * When enabled, include 'clap' atom if appropriate for the video output settings.
     */
    inline void SetClapAtom(const MovClapAtom& value) { m_clapAtomHasBeenSet = true; m_clapAtom = value; }

    /**
     * When enabled, include 'clap' atom if appropriate for the video output settings.
     */
    inline void SetClapAtom(MovClapAtom&& value) { m_clapAtomHasBeenSet = true; m_clapAtom = std::move(value); }

    /**
     * When enabled, include 'clap' atom if appropriate for the video output settings.
     */
    inline MovSettings& WithClapAtom(const MovClapAtom& value) { SetClapAtom(value); return *this;}

    /**
     * When enabled, include 'clap' atom if appropriate for the video output settings.
     */
    inline MovSettings& WithClapAtom(MovClapAtom&& value) { SetClapAtom(std::move(value)); return *this;}


    /**
     * When enabled, file composition times will start at zero, composition times in
     * the 'ctts' (composition time to sample) box for B-frames will be negative, and a
     * 'cslg' (composition shift least greatest) box will be included per 14496-1
     * amendment 1. This improves compatibility with Apple players and tools.
     */
    inline const MovCslgAtom& GetCslgAtom() const{ return m_cslgAtom; }

    /**
     * When enabled, file composition times will start at zero, composition times in
     * the 'ctts' (composition time to sample) box for B-frames will be negative, and a
     * 'cslg' (composition shift least greatest) box will be included per 14496-1
     * amendment 1. This improves compatibility with Apple players and tools.
     */
    inline bool CslgAtomHasBeenSet() const { return m_cslgAtomHasBeenSet; }

    /**
     * When enabled, file composition times will start at zero, composition times in
     * the 'ctts' (composition time to sample) box for B-frames will be negative, and a
     * 'cslg' (composition shift least greatest) box will be included per 14496-1
     * amendment 1. This improves compatibility with Apple players and tools.
     */
    inline void SetCslgAtom(const MovCslgAtom& value) { m_cslgAtomHasBeenSet = true; m_cslgAtom = value; }

    /**
     * When enabled, file composition times will start at zero, composition times in
     * the 'ctts' (composition time to sample) box for B-frames will be negative, and a
     * 'cslg' (composition shift least greatest) box will be included per 14496-1
     * amendment 1. This improves compatibility with Apple players and tools.
     */
    inline void SetCslgAtom(MovCslgAtom&& value) { m_cslgAtomHasBeenSet = true; m_cslgAtom = std::move(value); }

    /**
     * When enabled, file composition times will start at zero, composition times in
     * the 'ctts' (composition time to sample) box for B-frames will be negative, and a
     * 'cslg' (composition shift least greatest) box will be included per 14496-1
     * amendment 1. This improves compatibility with Apple players and tools.
     */
    inline MovSettings& WithCslgAtom(const MovCslgAtom& value) { SetCslgAtom(value); return *this;}

    /**
     * When enabled, file composition times will start at zero, composition times in
     * the 'ctts' (composition time to sample) box for B-frames will be negative, and a
     * 'cslg' (composition shift least greatest) box will be included per 14496-1
     * amendment 1. This improves compatibility with Apple players and tools.
     */
    inline MovSettings& WithCslgAtom(MovCslgAtom&& value) { SetCslgAtom(std::move(value)); return *this;}


    /**
     * When set to XDCAM, writes MPEG2 video streams into the QuickTime file using
     * XDCAM fourcc codes. This increases compatibility with Apple editors and players,
     * but may decrease compatibility with other players. Only applicable when the
     * video codec is MPEG2.
     */
    inline const MovMpeg2FourCCControl& GetMpeg2FourCCControl() const{ return m_mpeg2FourCCControl; }

    /**
     * When set to XDCAM, writes MPEG2 video streams into the QuickTime file using
     * XDCAM fourcc codes. This increases compatibility with Apple editors and players,
     * but may decrease compatibility with other players. Only applicable when the
     * video codec is MPEG2.
     */
    inline bool Mpeg2FourCCControlHasBeenSet() const { return m_mpeg2FourCCControlHasBeenSet; }

    /**
     * When set to XDCAM, writes MPEG2 video streams into the QuickTime file using
     * XDCAM fourcc codes. This increases compatibility with Apple editors and players,
     * but may decrease compatibility with other players. Only applicable when the
     * video codec is MPEG2.
     */
    inline void SetMpeg2FourCCControl(const MovMpeg2FourCCControl& value) { m_mpeg2FourCCControlHasBeenSet = true; m_mpeg2FourCCControl = value; }

    /**
     * When set to XDCAM, writes MPEG2 video streams into the QuickTime file using
     * XDCAM fourcc codes. This increases compatibility with Apple editors and players,
     * but may decrease compatibility with other players. Only applicable when the
     * video codec is MPEG2.
     */
    inline void SetMpeg2FourCCControl(MovMpeg2FourCCControl&& value) { m_mpeg2FourCCControlHasBeenSet = true; m_mpeg2FourCCControl = std::move(value); }

    /**
     * When set to XDCAM, writes MPEG2 video streams into the QuickTime file using
     * XDCAM fourcc codes. This increases compatibility with Apple editors and players,
     * but may decrease compatibility with other players. Only applicable when the
     * video codec is MPEG2.
     */
    inline MovSettings& WithMpeg2FourCCControl(const MovMpeg2FourCCControl& value) { SetMpeg2FourCCControl(value); return *this;}

    /**
     * When set to XDCAM, writes MPEG2 video streams into the QuickTime file using
     * XDCAM fourcc codes. This increases compatibility with Apple editors and players,
     * but may decrease compatibility with other players. Only applicable when the
     * video codec is MPEG2.
     */
    inline MovSettings& WithMpeg2FourCCControl(MovMpeg2FourCCControl&& value) { SetMpeg2FourCCControl(std::move(value)); return *this;}


    /**
     * If set to OMNEON, inserts Omneon-compatible padding
     */
    inline const MovPaddingControl& GetPaddingControl() const{ return m_paddingControl; }

    /**
     * If set to OMNEON, inserts Omneon-compatible padding
     */
    inline bool PaddingControlHasBeenSet() const { return m_paddingControlHasBeenSet; }

    /**
     * If set to OMNEON, inserts Omneon-compatible padding
     */
    inline void SetPaddingControl(const MovPaddingControl& value) { m_paddingControlHasBeenSet = true; m_paddingControl = value; }

    /**
     * If set to OMNEON, inserts Omneon-compatible padding
     */
    inline void SetPaddingControl(MovPaddingControl&& value) { m_paddingControlHasBeenSet = true; m_paddingControl = std::move(value); }

    /**
     * If set to OMNEON, inserts Omneon-compatible padding
     */
    inline MovSettings& WithPaddingControl(const MovPaddingControl& value) { SetPaddingControl(value); return *this;}

    /**
     * If set to OMNEON, inserts Omneon-compatible padding
     */
    inline MovSettings& WithPaddingControl(MovPaddingControl&& value) { SetPaddingControl(std::move(value)); return *this;}


    /**
     * Always keep the default value (SELF_CONTAINED) for this setting.
     */
    inline const MovReference& GetReference() const{ return m_reference; }

    /**
     * Always keep the default value (SELF_CONTAINED) for this setting.
     */
    inline bool ReferenceHasBeenSet() const { return m_referenceHasBeenSet; }

    /**
     * Always keep the default value (SELF_CONTAINED) for this setting.
     */
    inline void SetReference(const MovReference& value) { m_referenceHasBeenSet = true; m_reference = value; }

    /**
     * Always keep the default value (SELF_CONTAINED) for this setting.
     */
    inline void SetReference(MovReference&& value) { m_referenceHasBeenSet = true; m_reference = std::move(value); }

    /**
     * Always keep the default value (SELF_CONTAINED) for this setting.
     */
    inline MovSettings& WithReference(const MovReference& value) { SetReference(value); return *this;}

    /**
     * Always keep the default value (SELF_CONTAINED) for this setting.
     */
    inline MovSettings& WithReference(MovReference&& value) { SetReference(std::move(value)); return *this;}

  private:

    MovClapAtom m_clapAtom;
    bool m_clapAtomHasBeenSet;

    MovCslgAtom m_cslgAtom;
    bool m_cslgAtomHasBeenSet;

    MovMpeg2FourCCControl m_mpeg2FourCCControl;
    bool m_mpeg2FourCCControlHasBeenSet;

    MovPaddingControl m_paddingControl;
    bool m_paddingControlHasBeenSet;

    MovReference m_reference;
    bool m_referenceHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
