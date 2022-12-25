/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/Protocol.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * Attributes related to the transport stream that are used in a source or
   * output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Transport">AWS
   * API Reference</a></p>
   */
  class Transport
  {
  public:
    AWS_MEDIACONNECT_API Transport();
    AWS_MEDIACONNECT_API Transport(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Transport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline const Aws::Vector<Aws::String>& GetCidrAllowList() const{ return m_cidrAllowList; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline bool CidrAllowListHasBeenSet() const { return m_cidrAllowListHasBeenSet; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetCidrAllowList(const Aws::Vector<Aws::String>& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList = value; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetCidrAllowList(Aws::Vector<Aws::String>&& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList = std::move(value); }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline Transport& WithCidrAllowList(const Aws::Vector<Aws::String>& value) { SetCidrAllowList(value); return *this;}

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline Transport& WithCidrAllowList(Aws::Vector<Aws::String>&& value) { SetCidrAllowList(std::move(value)); return *this;}

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline Transport& AddCidrAllowList(const Aws::String& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList.push_back(value); return *this; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline Transport& AddCidrAllowList(Aws::String&& value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList.push_back(std::move(value)); return *this; }

    /**
     * The range of IP addresses that should be allowed to initiate output requests to
     * this flow. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline Transport& AddCidrAllowList(const char* value) { m_cidrAllowListHasBeenSet = true; m_cidrAllowList.push_back(value); return *this; }


    /**
     * The smoothing max bitrate for RIST, RTP, and RTP-FEC streams.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * The smoothing max bitrate for RIST, RTP, and RTP-FEC streams.
     */
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }

    /**
     * The smoothing max bitrate for RIST, RTP, and RTP-FEC streams.
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * The smoothing max bitrate for RIST, RTP, and RTP-FEC streams.
     */
    inline Transport& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}


    /**
     * The maximum latency in milliseconds. This parameter applies only to RIST-based,
     * Zixi-based, and Fujitsu-based streams.
     */
    inline int GetMaxLatency() const{ return m_maxLatency; }

    /**
     * The maximum latency in milliseconds. This parameter applies only to RIST-based,
     * Zixi-based, and Fujitsu-based streams.
     */
    inline bool MaxLatencyHasBeenSet() const { return m_maxLatencyHasBeenSet; }

    /**
     * The maximum latency in milliseconds. This parameter applies only to RIST-based,
     * Zixi-based, and Fujitsu-based streams.
     */
    inline void SetMaxLatency(int value) { m_maxLatencyHasBeenSet = true; m_maxLatency = value; }

    /**
     * The maximum latency in milliseconds. This parameter applies only to RIST-based,
     * Zixi-based, and Fujitsu-based streams.
     */
    inline Transport& WithMaxLatency(int value) { SetMaxLatency(value); return *this;}


    /**
     * The size of the buffer (in milliseconds) to use to sync incoming source data.
     */
    inline int GetMaxSyncBuffer() const{ return m_maxSyncBuffer; }

    /**
     * The size of the buffer (in milliseconds) to use to sync incoming source data.
     */
    inline bool MaxSyncBufferHasBeenSet() const { return m_maxSyncBufferHasBeenSet; }

    /**
     * The size of the buffer (in milliseconds) to use to sync incoming source data.
     */
    inline void SetMaxSyncBuffer(int value) { m_maxSyncBufferHasBeenSet = true; m_maxSyncBuffer = value; }

    /**
     * The size of the buffer (in milliseconds) to use to sync incoming source data.
     */
    inline Transport& WithMaxSyncBuffer(int value) { SetMaxSyncBuffer(value); return *this;}


    /**
     * The minimum latency in milliseconds for SRT-based streams. In streams that use
     * the SRT protocol, this value that you set on your MediaConnect source or output
     * represents the minimal potential latency of that connection. The latency of the
     * stream is set to the highest number between the sender’s minimum latency and the
     * receiver’s minimum latency.
     */
    inline int GetMinLatency() const{ return m_minLatency; }

    /**
     * The minimum latency in milliseconds for SRT-based streams. In streams that use
     * the SRT protocol, this value that you set on your MediaConnect source or output
     * represents the minimal potential latency of that connection. The latency of the
     * stream is set to the highest number between the sender’s minimum latency and the
     * receiver’s minimum latency.
     */
    inline bool MinLatencyHasBeenSet() const { return m_minLatencyHasBeenSet; }

    /**
     * The minimum latency in milliseconds for SRT-based streams. In streams that use
     * the SRT protocol, this value that you set on your MediaConnect source or output
     * represents the minimal potential latency of that connection. The latency of the
     * stream is set to the highest number between the sender’s minimum latency and the
     * receiver’s minimum latency.
     */
    inline void SetMinLatency(int value) { m_minLatencyHasBeenSet = true; m_minLatency = value; }

    /**
     * The minimum latency in milliseconds for SRT-based streams. In streams that use
     * the SRT protocol, this value that you set on your MediaConnect source or output
     * represents the minimal potential latency of that connection. The latency of the
     * stream is set to the highest number between the sender’s minimum latency and the
     * receiver’s minimum latency.
     */
    inline Transport& WithMinLatency(int value) { SetMinLatency(value); return *this;}


    /**
     * The protocol that is used by the source or output.
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * The protocol that is used by the source or output.
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * The protocol that is used by the source or output.
     */
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * The protocol that is used by the source or output.
     */
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * The protocol that is used by the source or output.
     */
    inline Transport& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * The protocol that is used by the source or output.
     */
    inline Transport& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * The remote ID for the Zixi-pull stream.
     */
    inline const Aws::String& GetRemoteId() const{ return m_remoteId; }

    /**
     * The remote ID for the Zixi-pull stream.
     */
    inline bool RemoteIdHasBeenSet() const { return m_remoteIdHasBeenSet; }

    /**
     * The remote ID for the Zixi-pull stream.
     */
    inline void SetRemoteId(const Aws::String& value) { m_remoteIdHasBeenSet = true; m_remoteId = value; }

    /**
     * The remote ID for the Zixi-pull stream.
     */
    inline void SetRemoteId(Aws::String&& value) { m_remoteIdHasBeenSet = true; m_remoteId = std::move(value); }

    /**
     * The remote ID for the Zixi-pull stream.
     */
    inline void SetRemoteId(const char* value) { m_remoteIdHasBeenSet = true; m_remoteId.assign(value); }

    /**
     * The remote ID for the Zixi-pull stream.
     */
    inline Transport& WithRemoteId(const Aws::String& value) { SetRemoteId(value); return *this;}

    /**
     * The remote ID for the Zixi-pull stream.
     */
    inline Transport& WithRemoteId(Aws::String&& value) { SetRemoteId(std::move(value)); return *this;}

    /**
     * The remote ID for the Zixi-pull stream.
     */
    inline Transport& WithRemoteId(const char* value) { SetRemoteId(value); return *this;}


    /**
     * The port that the flow uses to send outbound requests to initiate connection
     * with the sender.
     */
    inline int GetSenderControlPort() const{ return m_senderControlPort; }

    /**
     * The port that the flow uses to send outbound requests to initiate connection
     * with the sender.
     */
    inline bool SenderControlPortHasBeenSet() const { return m_senderControlPortHasBeenSet; }

    /**
     * The port that the flow uses to send outbound requests to initiate connection
     * with the sender.
     */
    inline void SetSenderControlPort(int value) { m_senderControlPortHasBeenSet = true; m_senderControlPort = value; }

    /**
     * The port that the flow uses to send outbound requests to initiate connection
     * with the sender.
     */
    inline Transport& WithSenderControlPort(int value) { SetSenderControlPort(value); return *this;}


    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline const Aws::String& GetSenderIpAddress() const{ return m_senderIpAddress; }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline bool SenderIpAddressHasBeenSet() const { return m_senderIpAddressHasBeenSet; }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline void SetSenderIpAddress(const Aws::String& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = value; }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline void SetSenderIpAddress(Aws::String&& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = std::move(value); }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline void SetSenderIpAddress(const char* value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress.assign(value); }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline Transport& WithSenderIpAddress(const Aws::String& value) { SetSenderIpAddress(value); return *this;}

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline Transport& WithSenderIpAddress(Aws::String&& value) { SetSenderIpAddress(std::move(value)); return *this;}

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline Transport& WithSenderIpAddress(const char* value) { SetSenderIpAddress(value); return *this;}


    /**
     * The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC streams.
     */
    inline int GetSmoothingLatency() const{ return m_smoothingLatency; }

    /**
     * The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC streams.
     */
    inline bool SmoothingLatencyHasBeenSet() const { return m_smoothingLatencyHasBeenSet; }

    /**
     * The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC streams.
     */
    inline void SetSmoothingLatency(int value) { m_smoothingLatencyHasBeenSet = true; m_smoothingLatency = value; }

    /**
     * The smoothing latency in milliseconds for RIST, RTP, and RTP-FEC streams.
     */
    inline Transport& WithSmoothingLatency(int value) { SetSmoothingLatency(value); return *this;}


    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline const Aws::String& GetSourceListenerAddress() const{ return m_sourceListenerAddress; }

    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline bool SourceListenerAddressHasBeenSet() const { return m_sourceListenerAddressHasBeenSet; }

    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline void SetSourceListenerAddress(const Aws::String& value) { m_sourceListenerAddressHasBeenSet = true; m_sourceListenerAddress = value; }

    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline void SetSourceListenerAddress(Aws::String&& value) { m_sourceListenerAddressHasBeenSet = true; m_sourceListenerAddress = std::move(value); }

    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline void SetSourceListenerAddress(const char* value) { m_sourceListenerAddressHasBeenSet = true; m_sourceListenerAddress.assign(value); }

    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline Transport& WithSourceListenerAddress(const Aws::String& value) { SetSourceListenerAddress(value); return *this;}

    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline Transport& WithSourceListenerAddress(Aws::String&& value) { SetSourceListenerAddress(std::move(value)); return *this;}

    /**
     * Source IP or domain name for SRT-caller protocol.
     */
    inline Transport& WithSourceListenerAddress(const char* value) { SetSourceListenerAddress(value); return *this;}


    /**
     * Source port for SRT-caller protocol.
     */
    inline int GetSourceListenerPort() const{ return m_sourceListenerPort; }

    /**
     * Source port for SRT-caller protocol.
     */
    inline bool SourceListenerPortHasBeenSet() const { return m_sourceListenerPortHasBeenSet; }

    /**
     * Source port for SRT-caller protocol.
     */
    inline void SetSourceListenerPort(int value) { m_sourceListenerPortHasBeenSet = true; m_sourceListenerPort = value; }

    /**
     * Source port for SRT-caller protocol.
     */
    inline Transport& WithSourceListenerPort(int value) { SetSourceListenerPort(value); return *this;}


    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline Transport& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline Transport& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * The stream ID that you want to use for this transport. This parameter applies
     * only to Zixi-based streams.
     */
    inline Transport& WithStreamId(const char* value) { SetStreamId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_cidrAllowList;
    bool m_cidrAllowListHasBeenSet = false;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet = false;

    int m_maxLatency;
    bool m_maxLatencyHasBeenSet = false;

    int m_maxSyncBuffer;
    bool m_maxSyncBufferHasBeenSet = false;

    int m_minLatency;
    bool m_minLatencyHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_remoteId;
    bool m_remoteIdHasBeenSet = false;

    int m_senderControlPort;
    bool m_senderControlPortHasBeenSet = false;

    Aws::String m_senderIpAddress;
    bool m_senderIpAddressHasBeenSet = false;

    int m_smoothingLatency;
    bool m_smoothingLatencyHasBeenSet = false;

    Aws::String m_sourceListenerAddress;
    bool m_sourceListenerAddressHasBeenSet = false;

    int m_sourceListenerPort;
    bool m_sourceListenerPortHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
