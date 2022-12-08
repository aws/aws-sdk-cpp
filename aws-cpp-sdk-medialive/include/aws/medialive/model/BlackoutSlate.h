/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputLocation.h>
#include <aws/medialive/model/BlackoutSlateNetworkEndBlackout.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/BlackoutSlateState.h>
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
   * Blackout Slate<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BlackoutSlate">AWS
   * API Reference</a></p>
   */
  class BlackoutSlate
  {
  public:
    AWS_MEDIALIVE_API BlackoutSlate();
    AWS_MEDIALIVE_API BlackoutSlate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API BlackoutSlate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Blackout slate image to be used. Leave empty for solid black. Only bmp and png
     * images are supported.
     */
    inline const InputLocation& GetBlackoutSlateImage() const{ return m_blackoutSlateImage; }

    /**
     * Blackout slate image to be used. Leave empty for solid black. Only bmp and png
     * images are supported.
     */
    inline bool BlackoutSlateImageHasBeenSet() const { return m_blackoutSlateImageHasBeenSet; }

    /**
     * Blackout slate image to be used. Leave empty for solid black. Only bmp and png
     * images are supported.
     */
    inline void SetBlackoutSlateImage(const InputLocation& value) { m_blackoutSlateImageHasBeenSet = true; m_blackoutSlateImage = value; }

    /**
     * Blackout slate image to be used. Leave empty for solid black. Only bmp and png
     * images are supported.
     */
    inline void SetBlackoutSlateImage(InputLocation&& value) { m_blackoutSlateImageHasBeenSet = true; m_blackoutSlateImage = std::move(value); }

    /**
     * Blackout slate image to be used. Leave empty for solid black. Only bmp and png
     * images are supported.
     */
    inline BlackoutSlate& WithBlackoutSlateImage(const InputLocation& value) { SetBlackoutSlateImage(value); return *this;}

    /**
     * Blackout slate image to be used. Leave empty for solid black. Only bmp and png
     * images are supported.
     */
    inline BlackoutSlate& WithBlackoutSlateImage(InputLocation&& value) { SetBlackoutSlateImage(std::move(value)); return *this;}


    /**
     * Setting to enabled causes the encoder to blackout the video, audio, and
     * captions, and raise the "Network Blackout Image" slate when an SCTE104/35
     * Network End Segmentation Descriptor is encountered. The blackout will be lifted
     * when the Network Start Segmentation Descriptor is encountered. The Network End
     * and Network Start descriptors must contain a network ID that matches the value
     * entered in "Network ID".
     */
    inline const BlackoutSlateNetworkEndBlackout& GetNetworkEndBlackout() const{ return m_networkEndBlackout; }

    /**
     * Setting to enabled causes the encoder to blackout the video, audio, and
     * captions, and raise the "Network Blackout Image" slate when an SCTE104/35
     * Network End Segmentation Descriptor is encountered. The blackout will be lifted
     * when the Network Start Segmentation Descriptor is encountered. The Network End
     * and Network Start descriptors must contain a network ID that matches the value
     * entered in "Network ID".
     */
    inline bool NetworkEndBlackoutHasBeenSet() const { return m_networkEndBlackoutHasBeenSet; }

    /**
     * Setting to enabled causes the encoder to blackout the video, audio, and
     * captions, and raise the "Network Blackout Image" slate when an SCTE104/35
     * Network End Segmentation Descriptor is encountered. The blackout will be lifted
     * when the Network Start Segmentation Descriptor is encountered. The Network End
     * and Network Start descriptors must contain a network ID that matches the value
     * entered in "Network ID".
     */
    inline void SetNetworkEndBlackout(const BlackoutSlateNetworkEndBlackout& value) { m_networkEndBlackoutHasBeenSet = true; m_networkEndBlackout = value; }

    /**
     * Setting to enabled causes the encoder to blackout the video, audio, and
     * captions, and raise the "Network Blackout Image" slate when an SCTE104/35
     * Network End Segmentation Descriptor is encountered. The blackout will be lifted
     * when the Network Start Segmentation Descriptor is encountered. The Network End
     * and Network Start descriptors must contain a network ID that matches the value
     * entered in "Network ID".
     */
    inline void SetNetworkEndBlackout(BlackoutSlateNetworkEndBlackout&& value) { m_networkEndBlackoutHasBeenSet = true; m_networkEndBlackout = std::move(value); }

    /**
     * Setting to enabled causes the encoder to blackout the video, audio, and
     * captions, and raise the "Network Blackout Image" slate when an SCTE104/35
     * Network End Segmentation Descriptor is encountered. The blackout will be lifted
     * when the Network Start Segmentation Descriptor is encountered. The Network End
     * and Network Start descriptors must contain a network ID that matches the value
     * entered in "Network ID".
     */
    inline BlackoutSlate& WithNetworkEndBlackout(const BlackoutSlateNetworkEndBlackout& value) { SetNetworkEndBlackout(value); return *this;}

    /**
     * Setting to enabled causes the encoder to blackout the video, audio, and
     * captions, and raise the "Network Blackout Image" slate when an SCTE104/35
     * Network End Segmentation Descriptor is encountered. The blackout will be lifted
     * when the Network Start Segmentation Descriptor is encountered. The Network End
     * and Network Start descriptors must contain a network ID that matches the value
     * entered in "Network ID".
     */
    inline BlackoutSlate& WithNetworkEndBlackout(BlackoutSlateNetworkEndBlackout&& value) { SetNetworkEndBlackout(std::move(value)); return *this;}


    /**
     * Path to local file to use as Network End Blackout image. Image will be scaled to
     * fill the entire output raster.
     */
    inline const InputLocation& GetNetworkEndBlackoutImage() const{ return m_networkEndBlackoutImage; }

    /**
     * Path to local file to use as Network End Blackout image. Image will be scaled to
     * fill the entire output raster.
     */
    inline bool NetworkEndBlackoutImageHasBeenSet() const { return m_networkEndBlackoutImageHasBeenSet; }

    /**
     * Path to local file to use as Network End Blackout image. Image will be scaled to
     * fill the entire output raster.
     */
    inline void SetNetworkEndBlackoutImage(const InputLocation& value) { m_networkEndBlackoutImageHasBeenSet = true; m_networkEndBlackoutImage = value; }

    /**
     * Path to local file to use as Network End Blackout image. Image will be scaled to
     * fill the entire output raster.
     */
    inline void SetNetworkEndBlackoutImage(InputLocation&& value) { m_networkEndBlackoutImageHasBeenSet = true; m_networkEndBlackoutImage = std::move(value); }

    /**
     * Path to local file to use as Network End Blackout image. Image will be scaled to
     * fill the entire output raster.
     */
    inline BlackoutSlate& WithNetworkEndBlackoutImage(const InputLocation& value) { SetNetworkEndBlackoutImage(value); return *this;}

    /**
     * Path to local file to use as Network End Blackout image. Image will be scaled to
     * fill the entire output raster.
     */
    inline BlackoutSlate& WithNetworkEndBlackoutImage(InputLocation&& value) { SetNetworkEndBlackoutImage(std::move(value)); return *this;}


    /**
     * Provides Network ID that matches EIDR ID format (e.g.,
     * "10.XXXX/XXXX-XXXX-XXXX-XXXX-XXXX-C").
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }

    /**
     * Provides Network ID that matches EIDR ID format (e.g.,
     * "10.XXXX/XXXX-XXXX-XXXX-XXXX-XXXX-C").
     */
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }

    /**
     * Provides Network ID that matches EIDR ID format (e.g.,
     * "10.XXXX/XXXX-XXXX-XXXX-XXXX-XXXX-C").
     */
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * Provides Network ID that matches EIDR ID format (e.g.,
     * "10.XXXX/XXXX-XXXX-XXXX-XXXX-XXXX-C").
     */
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }

    /**
     * Provides Network ID that matches EIDR ID format (e.g.,
     * "10.XXXX/XXXX-XXXX-XXXX-XXXX-XXXX-C").
     */
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }

    /**
     * Provides Network ID that matches EIDR ID format (e.g.,
     * "10.XXXX/XXXX-XXXX-XXXX-XXXX-XXXX-C").
     */
    inline BlackoutSlate& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}

    /**
     * Provides Network ID that matches EIDR ID format (e.g.,
     * "10.XXXX/XXXX-XXXX-XXXX-XXXX-XXXX-C").
     */
    inline BlackoutSlate& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}

    /**
     * Provides Network ID that matches EIDR ID format (e.g.,
     * "10.XXXX/XXXX-XXXX-XXXX-XXXX-XXXX-C").
     */
    inline BlackoutSlate& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}


    /**
     * When set to enabled, causes video, audio and captions to be blanked when
     * indicated by program metadata.
     */
    inline const BlackoutSlateState& GetState() const{ return m_state; }

    /**
     * When set to enabled, causes video, audio and captions to be blanked when
     * indicated by program metadata.
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * When set to enabled, causes video, audio and captions to be blanked when
     * indicated by program metadata.
     */
    inline void SetState(const BlackoutSlateState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * When set to enabled, causes video, audio and captions to be blanked when
     * indicated by program metadata.
     */
    inline void SetState(BlackoutSlateState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * When set to enabled, causes video, audio and captions to be blanked when
     * indicated by program metadata.
     */
    inline BlackoutSlate& WithState(const BlackoutSlateState& value) { SetState(value); return *this;}

    /**
     * When set to enabled, causes video, audio and captions to be blanked when
     * indicated by program metadata.
     */
    inline BlackoutSlate& WithState(BlackoutSlateState&& value) { SetState(std::move(value)); return *this;}

  private:

    InputLocation m_blackoutSlateImage;
    bool m_blackoutSlateImageHasBeenSet = false;

    BlackoutSlateNetworkEndBlackout m_networkEndBlackout;
    bool m_networkEndBlackoutHasBeenSet = false;

    InputLocation m_networkEndBlackoutImage;
    bool m_networkEndBlackoutImageHasBeenSet = false;

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    BlackoutSlateState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
