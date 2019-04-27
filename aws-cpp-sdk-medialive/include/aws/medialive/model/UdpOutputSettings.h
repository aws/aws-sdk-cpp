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
#include <aws/medialive/model/UdpContainerSettings.h>
#include <aws/medialive/model/OutputLocationRef.h>
#include <aws/medialive/model/FecOutputSettings.h>
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
   * Udp Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UdpOutputSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API UdpOutputSettings
  {
  public:
    UdpOutputSettings();
    UdpOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    UdpOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * UDP output buffering in milliseconds. Larger values increase latency through the
     * transcoder but simultaneously assist the transcoder in maintaining a constant,
     * low-jitter UDP/RTP output while accommodating clock recovery, input switching,
     * input disruptions, picture reordering, etc.
     */
    inline int GetBufferMsec() const{ return m_bufferMsec; }

    /**
     * UDP output buffering in milliseconds. Larger values increase latency through the
     * transcoder but simultaneously assist the transcoder in maintaining a constant,
     * low-jitter UDP/RTP output while accommodating clock recovery, input switching,
     * input disruptions, picture reordering, etc.
     */
    inline bool BufferMsecHasBeenSet() const { return m_bufferMsecHasBeenSet; }

    /**
     * UDP output buffering in milliseconds. Larger values increase latency through the
     * transcoder but simultaneously assist the transcoder in maintaining a constant,
     * low-jitter UDP/RTP output while accommodating clock recovery, input switching,
     * input disruptions, picture reordering, etc.
     */
    inline void SetBufferMsec(int value) { m_bufferMsecHasBeenSet = true; m_bufferMsec = value; }

    /**
     * UDP output buffering in milliseconds. Larger values increase latency through the
     * transcoder but simultaneously assist the transcoder in maintaining a constant,
     * low-jitter UDP/RTP output while accommodating clock recovery, input switching,
     * input disruptions, picture reordering, etc.
     */
    inline UdpOutputSettings& WithBufferMsec(int value) { SetBufferMsec(value); return *this;}


    
    inline const UdpContainerSettings& GetContainerSettings() const{ return m_containerSettings; }

    
    inline bool ContainerSettingsHasBeenSet() const { return m_containerSettingsHasBeenSet; }

    
    inline void SetContainerSettings(const UdpContainerSettings& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = value; }

    
    inline void SetContainerSettings(UdpContainerSettings&& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = std::move(value); }

    
    inline UdpOutputSettings& WithContainerSettings(const UdpContainerSettings& value) { SetContainerSettings(value); return *this;}

    
    inline UdpOutputSettings& WithContainerSettings(UdpContainerSettings&& value) { SetContainerSettings(std::move(value)); return *this;}


    /**
     * Destination address and port number for RTP or UDP packets. Can be unicast or
     * multicast RTP or UDP (eg. rtp://239.10.10.10:5001 or udp://10.100.100.100:5002).
     */
    inline const OutputLocationRef& GetDestination() const{ return m_destination; }

    /**
     * Destination address and port number for RTP or UDP packets. Can be unicast or
     * multicast RTP or UDP (eg. rtp://239.10.10.10:5001 or udp://10.100.100.100:5002).
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * Destination address and port number for RTP or UDP packets. Can be unicast or
     * multicast RTP or UDP (eg. rtp://239.10.10.10:5001 or udp://10.100.100.100:5002).
     */
    inline void SetDestination(const OutputLocationRef& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * Destination address and port number for RTP or UDP packets. Can be unicast or
     * multicast RTP or UDP (eg. rtp://239.10.10.10:5001 or udp://10.100.100.100:5002).
     */
    inline void SetDestination(OutputLocationRef&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * Destination address and port number for RTP or UDP packets. Can be unicast or
     * multicast RTP or UDP (eg. rtp://239.10.10.10:5001 or udp://10.100.100.100:5002).
     */
    inline UdpOutputSettings& WithDestination(const OutputLocationRef& value) { SetDestination(value); return *this;}

    /**
     * Destination address and port number for RTP or UDP packets. Can be unicast or
     * multicast RTP or UDP (eg. rtp://239.10.10.10:5001 or udp://10.100.100.100:5002).
     */
    inline UdpOutputSettings& WithDestination(OutputLocationRef&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * Settings for enabling and adjusting Forward Error Correction on UDP outputs.
     */
    inline const FecOutputSettings& GetFecOutputSettings() const{ return m_fecOutputSettings; }

    /**
     * Settings for enabling and adjusting Forward Error Correction on UDP outputs.
     */
    inline bool FecOutputSettingsHasBeenSet() const { return m_fecOutputSettingsHasBeenSet; }

    /**
     * Settings for enabling and adjusting Forward Error Correction on UDP outputs.
     */
    inline void SetFecOutputSettings(const FecOutputSettings& value) { m_fecOutputSettingsHasBeenSet = true; m_fecOutputSettings = value; }

    /**
     * Settings for enabling and adjusting Forward Error Correction on UDP outputs.
     */
    inline void SetFecOutputSettings(FecOutputSettings&& value) { m_fecOutputSettingsHasBeenSet = true; m_fecOutputSettings = std::move(value); }

    /**
     * Settings for enabling and adjusting Forward Error Correction on UDP outputs.
     */
    inline UdpOutputSettings& WithFecOutputSettings(const FecOutputSettings& value) { SetFecOutputSettings(value); return *this;}

    /**
     * Settings for enabling and adjusting Forward Error Correction on UDP outputs.
     */
    inline UdpOutputSettings& WithFecOutputSettings(FecOutputSettings&& value) { SetFecOutputSettings(std::move(value)); return *this;}

  private:

    int m_bufferMsec;
    bool m_bufferMsecHasBeenSet;

    UdpContainerSettings m_containerSettings;
    bool m_containerSettingsHasBeenSet;

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet;

    FecOutputSettings m_fecOutputSettings;
    bool m_fecOutputSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
