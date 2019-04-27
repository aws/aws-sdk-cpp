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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AribDestinationSettings.h>
#include <aws/medialive/model/BurnInDestinationSettings.h>
#include <aws/medialive/model/DvbSubDestinationSettings.h>
#include <aws/medialive/model/EmbeddedDestinationSettings.h>
#include <aws/medialive/model/EmbeddedPlusScte20DestinationSettings.h>
#include <aws/medialive/model/RtmpCaptionInfoDestinationSettings.h>
#include <aws/medialive/model/Scte20PlusEmbeddedDestinationSettings.h>
#include <aws/medialive/model/Scte27DestinationSettings.h>
#include <aws/medialive/model/SmpteTtDestinationSettings.h>
#include <aws/medialive/model/TeletextDestinationSettings.h>
#include <aws/medialive/model/TtmlDestinationSettings.h>
#include <aws/medialive/model/WebvttDestinationSettings.h>
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
   * Caption Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CaptionDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API CaptionDestinationSettings
  {
  public:
    CaptionDestinationSettings();
    CaptionDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    CaptionDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AribDestinationSettings& GetAribDestinationSettings() const{ return m_aribDestinationSettings; }

    
    inline bool AribDestinationSettingsHasBeenSet() const { return m_aribDestinationSettingsHasBeenSet; }

    
    inline void SetAribDestinationSettings(const AribDestinationSettings& value) { m_aribDestinationSettingsHasBeenSet = true; m_aribDestinationSettings = value; }

    
    inline void SetAribDestinationSettings(AribDestinationSettings&& value) { m_aribDestinationSettingsHasBeenSet = true; m_aribDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithAribDestinationSettings(const AribDestinationSettings& value) { SetAribDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithAribDestinationSettings(AribDestinationSettings&& value) { SetAribDestinationSettings(std::move(value)); return *this;}


    
    inline const BurnInDestinationSettings& GetBurnInDestinationSettings() const{ return m_burnInDestinationSettings; }

    
    inline bool BurnInDestinationSettingsHasBeenSet() const { return m_burnInDestinationSettingsHasBeenSet; }

    
    inline void SetBurnInDestinationSettings(const BurnInDestinationSettings& value) { m_burnInDestinationSettingsHasBeenSet = true; m_burnInDestinationSettings = value; }

    
    inline void SetBurnInDestinationSettings(BurnInDestinationSettings&& value) { m_burnInDestinationSettingsHasBeenSet = true; m_burnInDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithBurnInDestinationSettings(const BurnInDestinationSettings& value) { SetBurnInDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithBurnInDestinationSettings(BurnInDestinationSettings&& value) { SetBurnInDestinationSettings(std::move(value)); return *this;}


    
    inline const DvbSubDestinationSettings& GetDvbSubDestinationSettings() const{ return m_dvbSubDestinationSettings; }

    
    inline bool DvbSubDestinationSettingsHasBeenSet() const { return m_dvbSubDestinationSettingsHasBeenSet; }

    
    inline void SetDvbSubDestinationSettings(const DvbSubDestinationSettings& value) { m_dvbSubDestinationSettingsHasBeenSet = true; m_dvbSubDestinationSettings = value; }

    
    inline void SetDvbSubDestinationSettings(DvbSubDestinationSettings&& value) { m_dvbSubDestinationSettingsHasBeenSet = true; m_dvbSubDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithDvbSubDestinationSettings(const DvbSubDestinationSettings& value) { SetDvbSubDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithDvbSubDestinationSettings(DvbSubDestinationSettings&& value) { SetDvbSubDestinationSettings(std::move(value)); return *this;}


    
    inline const EmbeddedDestinationSettings& GetEmbeddedDestinationSettings() const{ return m_embeddedDestinationSettings; }

    
    inline bool EmbeddedDestinationSettingsHasBeenSet() const { return m_embeddedDestinationSettingsHasBeenSet; }

    
    inline void SetEmbeddedDestinationSettings(const EmbeddedDestinationSettings& value) { m_embeddedDestinationSettingsHasBeenSet = true; m_embeddedDestinationSettings = value; }

    
    inline void SetEmbeddedDestinationSettings(EmbeddedDestinationSettings&& value) { m_embeddedDestinationSettingsHasBeenSet = true; m_embeddedDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithEmbeddedDestinationSettings(const EmbeddedDestinationSettings& value) { SetEmbeddedDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithEmbeddedDestinationSettings(EmbeddedDestinationSettings&& value) { SetEmbeddedDestinationSettings(std::move(value)); return *this;}


    
    inline const EmbeddedPlusScte20DestinationSettings& GetEmbeddedPlusScte20DestinationSettings() const{ return m_embeddedPlusScte20DestinationSettings; }

    
    inline bool EmbeddedPlusScte20DestinationSettingsHasBeenSet() const { return m_embeddedPlusScte20DestinationSettingsHasBeenSet; }

    
    inline void SetEmbeddedPlusScte20DestinationSettings(const EmbeddedPlusScte20DestinationSettings& value) { m_embeddedPlusScte20DestinationSettingsHasBeenSet = true; m_embeddedPlusScte20DestinationSettings = value; }

    
    inline void SetEmbeddedPlusScte20DestinationSettings(EmbeddedPlusScte20DestinationSettings&& value) { m_embeddedPlusScte20DestinationSettingsHasBeenSet = true; m_embeddedPlusScte20DestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithEmbeddedPlusScte20DestinationSettings(const EmbeddedPlusScte20DestinationSettings& value) { SetEmbeddedPlusScte20DestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithEmbeddedPlusScte20DestinationSettings(EmbeddedPlusScte20DestinationSettings&& value) { SetEmbeddedPlusScte20DestinationSettings(std::move(value)); return *this;}


    
    inline const RtmpCaptionInfoDestinationSettings& GetRtmpCaptionInfoDestinationSettings() const{ return m_rtmpCaptionInfoDestinationSettings; }

    
    inline bool RtmpCaptionInfoDestinationSettingsHasBeenSet() const { return m_rtmpCaptionInfoDestinationSettingsHasBeenSet; }

    
    inline void SetRtmpCaptionInfoDestinationSettings(const RtmpCaptionInfoDestinationSettings& value) { m_rtmpCaptionInfoDestinationSettingsHasBeenSet = true; m_rtmpCaptionInfoDestinationSettings = value; }

    
    inline void SetRtmpCaptionInfoDestinationSettings(RtmpCaptionInfoDestinationSettings&& value) { m_rtmpCaptionInfoDestinationSettingsHasBeenSet = true; m_rtmpCaptionInfoDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithRtmpCaptionInfoDestinationSettings(const RtmpCaptionInfoDestinationSettings& value) { SetRtmpCaptionInfoDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithRtmpCaptionInfoDestinationSettings(RtmpCaptionInfoDestinationSettings&& value) { SetRtmpCaptionInfoDestinationSettings(std::move(value)); return *this;}


    
    inline const Scte20PlusEmbeddedDestinationSettings& GetScte20PlusEmbeddedDestinationSettings() const{ return m_scte20PlusEmbeddedDestinationSettings; }

    
    inline bool Scte20PlusEmbeddedDestinationSettingsHasBeenSet() const { return m_scte20PlusEmbeddedDestinationSettingsHasBeenSet; }

    
    inline void SetScte20PlusEmbeddedDestinationSettings(const Scte20PlusEmbeddedDestinationSettings& value) { m_scte20PlusEmbeddedDestinationSettingsHasBeenSet = true; m_scte20PlusEmbeddedDestinationSettings = value; }

    
    inline void SetScte20PlusEmbeddedDestinationSettings(Scte20PlusEmbeddedDestinationSettings&& value) { m_scte20PlusEmbeddedDestinationSettingsHasBeenSet = true; m_scte20PlusEmbeddedDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithScte20PlusEmbeddedDestinationSettings(const Scte20PlusEmbeddedDestinationSettings& value) { SetScte20PlusEmbeddedDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithScte20PlusEmbeddedDestinationSettings(Scte20PlusEmbeddedDestinationSettings&& value) { SetScte20PlusEmbeddedDestinationSettings(std::move(value)); return *this;}


    
    inline const Scte27DestinationSettings& GetScte27DestinationSettings() const{ return m_scte27DestinationSettings; }

    
    inline bool Scte27DestinationSettingsHasBeenSet() const { return m_scte27DestinationSettingsHasBeenSet; }

    
    inline void SetScte27DestinationSettings(const Scte27DestinationSettings& value) { m_scte27DestinationSettingsHasBeenSet = true; m_scte27DestinationSettings = value; }

    
    inline void SetScte27DestinationSettings(Scte27DestinationSettings&& value) { m_scte27DestinationSettingsHasBeenSet = true; m_scte27DestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithScte27DestinationSettings(const Scte27DestinationSettings& value) { SetScte27DestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithScte27DestinationSettings(Scte27DestinationSettings&& value) { SetScte27DestinationSettings(std::move(value)); return *this;}


    
    inline const SmpteTtDestinationSettings& GetSmpteTtDestinationSettings() const{ return m_smpteTtDestinationSettings; }

    
    inline bool SmpteTtDestinationSettingsHasBeenSet() const { return m_smpteTtDestinationSettingsHasBeenSet; }

    
    inline void SetSmpteTtDestinationSettings(const SmpteTtDestinationSettings& value) { m_smpteTtDestinationSettingsHasBeenSet = true; m_smpteTtDestinationSettings = value; }

    
    inline void SetSmpteTtDestinationSettings(SmpteTtDestinationSettings&& value) { m_smpteTtDestinationSettingsHasBeenSet = true; m_smpteTtDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithSmpteTtDestinationSettings(const SmpteTtDestinationSettings& value) { SetSmpteTtDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithSmpteTtDestinationSettings(SmpteTtDestinationSettings&& value) { SetSmpteTtDestinationSettings(std::move(value)); return *this;}


    
    inline const TeletextDestinationSettings& GetTeletextDestinationSettings() const{ return m_teletextDestinationSettings; }

    
    inline bool TeletextDestinationSettingsHasBeenSet() const { return m_teletextDestinationSettingsHasBeenSet; }

    
    inline void SetTeletextDestinationSettings(const TeletextDestinationSettings& value) { m_teletextDestinationSettingsHasBeenSet = true; m_teletextDestinationSettings = value; }

    
    inline void SetTeletextDestinationSettings(TeletextDestinationSettings&& value) { m_teletextDestinationSettingsHasBeenSet = true; m_teletextDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithTeletextDestinationSettings(const TeletextDestinationSettings& value) { SetTeletextDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithTeletextDestinationSettings(TeletextDestinationSettings&& value) { SetTeletextDestinationSettings(std::move(value)); return *this;}


    
    inline const TtmlDestinationSettings& GetTtmlDestinationSettings() const{ return m_ttmlDestinationSettings; }

    
    inline bool TtmlDestinationSettingsHasBeenSet() const { return m_ttmlDestinationSettingsHasBeenSet; }

    
    inline void SetTtmlDestinationSettings(const TtmlDestinationSettings& value) { m_ttmlDestinationSettingsHasBeenSet = true; m_ttmlDestinationSettings = value; }

    
    inline void SetTtmlDestinationSettings(TtmlDestinationSettings&& value) { m_ttmlDestinationSettingsHasBeenSet = true; m_ttmlDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithTtmlDestinationSettings(const TtmlDestinationSettings& value) { SetTtmlDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithTtmlDestinationSettings(TtmlDestinationSettings&& value) { SetTtmlDestinationSettings(std::move(value)); return *this;}


    
    inline const WebvttDestinationSettings& GetWebvttDestinationSettings() const{ return m_webvttDestinationSettings; }

    
    inline bool WebvttDestinationSettingsHasBeenSet() const { return m_webvttDestinationSettingsHasBeenSet; }

    
    inline void SetWebvttDestinationSettings(const WebvttDestinationSettings& value) { m_webvttDestinationSettingsHasBeenSet = true; m_webvttDestinationSettings = value; }

    
    inline void SetWebvttDestinationSettings(WebvttDestinationSettings&& value) { m_webvttDestinationSettingsHasBeenSet = true; m_webvttDestinationSettings = std::move(value); }

    
    inline CaptionDestinationSettings& WithWebvttDestinationSettings(const WebvttDestinationSettings& value) { SetWebvttDestinationSettings(value); return *this;}

    
    inline CaptionDestinationSettings& WithWebvttDestinationSettings(WebvttDestinationSettings&& value) { SetWebvttDestinationSettings(std::move(value)); return *this;}

  private:

    AribDestinationSettings m_aribDestinationSettings;
    bool m_aribDestinationSettingsHasBeenSet;

    BurnInDestinationSettings m_burnInDestinationSettings;
    bool m_burnInDestinationSettingsHasBeenSet;

    DvbSubDestinationSettings m_dvbSubDestinationSettings;
    bool m_dvbSubDestinationSettingsHasBeenSet;

    EmbeddedDestinationSettings m_embeddedDestinationSettings;
    bool m_embeddedDestinationSettingsHasBeenSet;

    EmbeddedPlusScte20DestinationSettings m_embeddedPlusScte20DestinationSettings;
    bool m_embeddedPlusScte20DestinationSettingsHasBeenSet;

    RtmpCaptionInfoDestinationSettings m_rtmpCaptionInfoDestinationSettings;
    bool m_rtmpCaptionInfoDestinationSettingsHasBeenSet;

    Scte20PlusEmbeddedDestinationSettings m_scte20PlusEmbeddedDestinationSettings;
    bool m_scte20PlusEmbeddedDestinationSettingsHasBeenSet;

    Scte27DestinationSettings m_scte27DestinationSettings;
    bool m_scte27DestinationSettingsHasBeenSet;

    SmpteTtDestinationSettings m_smpteTtDestinationSettings;
    bool m_smpteTtDestinationSettingsHasBeenSet;

    TeletextDestinationSettings m_teletextDestinationSettings;
    bool m_teletextDestinationSettingsHasBeenSet;

    TtmlDestinationSettings m_ttmlDestinationSettings;
    bool m_ttmlDestinationSettingsHasBeenSet;

    WebvttDestinationSettings m_webvttDestinationSettings;
    bool m_webvttDestinationSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
