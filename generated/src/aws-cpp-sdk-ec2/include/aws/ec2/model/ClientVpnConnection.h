/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ClientVpnConnectionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a client connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientVpnConnection">AWS
   * API Reference</a></p>
   */
  class ClientVpnConnection
  {
  public:
    AWS_EC2_API ClientVpnConnection() = default;
    AWS_EC2_API ClientVpnConnection(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientVpnConnection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const { return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    template<typename ClientVpnEndpointIdT = Aws::String>
    void SetClientVpnEndpointId(ClientVpnEndpointIdT&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::forward<ClientVpnEndpointIdT>(value); }
    template<typename ClientVpnEndpointIdT = Aws::String>
    ClientVpnConnection& WithClientVpnEndpointId(ClientVpnEndpointIdT&& value) { SetClientVpnEndpointId(std::forward<ClientVpnEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current date and time.</p>
     */
    inline const Aws::String& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::String>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::String>
    ClientVpnConnection& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the client connection.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    ClientVpnConnection& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the client who established the client connection. This
     * information is only provided if Active Directory client authentication is
     * used.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    ClientVpnConnection& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the client connection was established.</p>
     */
    inline const Aws::String& GetConnectionEstablishedTime() const { return m_connectionEstablishedTime; }
    inline bool ConnectionEstablishedTimeHasBeenSet() const { return m_connectionEstablishedTimeHasBeenSet; }
    template<typename ConnectionEstablishedTimeT = Aws::String>
    void SetConnectionEstablishedTime(ConnectionEstablishedTimeT&& value) { m_connectionEstablishedTimeHasBeenSet = true; m_connectionEstablishedTime = std::forward<ConnectionEstablishedTimeT>(value); }
    template<typename ConnectionEstablishedTimeT = Aws::String>
    ClientVpnConnection& WithConnectionEstablishedTime(ConnectionEstablishedTimeT&& value) { SetConnectionEstablishedTime(std::forward<ConnectionEstablishedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes sent by the client.</p>
     */
    inline const Aws::String& GetIngressBytes() const { return m_ingressBytes; }
    inline bool IngressBytesHasBeenSet() const { return m_ingressBytesHasBeenSet; }
    template<typename IngressBytesT = Aws::String>
    void SetIngressBytes(IngressBytesT&& value) { m_ingressBytesHasBeenSet = true; m_ingressBytes = std::forward<IngressBytesT>(value); }
    template<typename IngressBytesT = Aws::String>
    ClientVpnConnection& WithIngressBytes(IngressBytesT&& value) { SetIngressBytes(std::forward<IngressBytesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes received by the client.</p>
     */
    inline const Aws::String& GetEgressBytes() const { return m_egressBytes; }
    inline bool EgressBytesHasBeenSet() const { return m_egressBytesHasBeenSet; }
    template<typename EgressBytesT = Aws::String>
    void SetEgressBytes(EgressBytesT&& value) { m_egressBytesHasBeenSet = true; m_egressBytes = std::forward<EgressBytesT>(value); }
    template<typename EgressBytesT = Aws::String>
    ClientVpnConnection& WithEgressBytes(EgressBytesT&& value) { SetEgressBytes(std::forward<EgressBytesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of packets sent by the client.</p>
     */
    inline const Aws::String& GetIngressPackets() const { return m_ingressPackets; }
    inline bool IngressPacketsHasBeenSet() const { return m_ingressPacketsHasBeenSet; }
    template<typename IngressPacketsT = Aws::String>
    void SetIngressPackets(IngressPacketsT&& value) { m_ingressPacketsHasBeenSet = true; m_ingressPackets = std::forward<IngressPacketsT>(value); }
    template<typename IngressPacketsT = Aws::String>
    ClientVpnConnection& WithIngressPackets(IngressPacketsT&& value) { SetIngressPackets(std::forward<IngressPacketsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of packets received by the client.</p>
     */
    inline const Aws::String& GetEgressPackets() const { return m_egressPackets; }
    inline bool EgressPacketsHasBeenSet() const { return m_egressPacketsHasBeenSet; }
    template<typename EgressPacketsT = Aws::String>
    void SetEgressPackets(EgressPacketsT&& value) { m_egressPacketsHasBeenSet = true; m_egressPackets = std::forward<EgressPacketsT>(value); }
    template<typename EgressPacketsT = Aws::String>
    ClientVpnConnection& WithEgressPackets(EgressPacketsT&& value) { SetEgressPackets(std::forward<EgressPacketsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the client.</p>
     */
    inline const Aws::String& GetClientIp() const { return m_clientIp; }
    inline bool ClientIpHasBeenSet() const { return m_clientIpHasBeenSet; }
    template<typename ClientIpT = Aws::String>
    void SetClientIp(ClientIpT&& value) { m_clientIpHasBeenSet = true; m_clientIp = std::forward<ClientIpT>(value); }
    template<typename ClientIpT = Aws::String>
    ClientVpnConnection& WithClientIp(ClientIpT&& value) { SetClientIp(std::forward<ClientIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 address assigned to the client connection when using a dual-stack
     * Client VPN endpoint. This field is only populated when the endpoint is
     * configured for dual-stack addressing, and the client is using IPv6 for
     * connectivity.</p>
     */
    inline const Aws::String& GetClientIpv6Address() const { return m_clientIpv6Address; }
    inline bool ClientIpv6AddressHasBeenSet() const { return m_clientIpv6AddressHasBeenSet; }
    template<typename ClientIpv6AddressT = Aws::String>
    void SetClientIpv6Address(ClientIpv6AddressT&& value) { m_clientIpv6AddressHasBeenSet = true; m_clientIpv6Address = std::forward<ClientIpv6AddressT>(value); }
    template<typename ClientIpv6AddressT = Aws::String>
    ClientVpnConnection& WithClientIpv6Address(ClientIpv6AddressT&& value) { SetClientIpv6Address(std::forward<ClientIpv6AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The common name associated with the client. This is either the name of the
     * client certificate, or the Active Directory user name.</p>
     */
    inline const Aws::String& GetCommonName() const { return m_commonName; }
    inline bool CommonNameHasBeenSet() const { return m_commonNameHasBeenSet; }
    template<typename CommonNameT = Aws::String>
    void SetCommonName(CommonNameT&& value) { m_commonNameHasBeenSet = true; m_commonName = std::forward<CommonNameT>(value); }
    template<typename CommonNameT = Aws::String>
    ClientVpnConnection& WithCommonName(CommonNameT&& value) { SetCommonName(std::forward<CommonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the client connection.</p>
     */
    inline const ClientVpnConnectionStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = ClientVpnConnectionStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = ClientVpnConnectionStatus>
    ClientVpnConnection& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the client connection was terminated.</p>
     */
    inline const Aws::String& GetConnectionEndTime() const { return m_connectionEndTime; }
    inline bool ConnectionEndTimeHasBeenSet() const { return m_connectionEndTimeHasBeenSet; }
    template<typename ConnectionEndTimeT = Aws::String>
    void SetConnectionEndTime(ConnectionEndTimeT&& value) { m_connectionEndTimeHasBeenSet = true; m_connectionEndTime = std::forward<ConnectionEndTimeT>(value); }
    template<typename ConnectionEndTimeT = Aws::String>
    ClientVpnConnection& WithConnectionEndTime(ConnectionEndTimeT&& value) { SetConnectionEndTime(std::forward<ConnectionEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statuses returned by the client connect handler for posture compliance,
     * if applicable.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPostureComplianceStatuses() const { return m_postureComplianceStatuses; }
    inline bool PostureComplianceStatusesHasBeenSet() const { return m_postureComplianceStatusesHasBeenSet; }
    template<typename PostureComplianceStatusesT = Aws::Vector<Aws::String>>
    void SetPostureComplianceStatuses(PostureComplianceStatusesT&& value) { m_postureComplianceStatusesHasBeenSet = true; m_postureComplianceStatuses = std::forward<PostureComplianceStatusesT>(value); }
    template<typename PostureComplianceStatusesT = Aws::Vector<Aws::String>>
    ClientVpnConnection& WithPostureComplianceStatuses(PostureComplianceStatusesT&& value) { SetPostureComplianceStatuses(std::forward<PostureComplianceStatusesT>(value)); return *this;}
    template<typename PostureComplianceStatusesT = Aws::String>
    ClientVpnConnection& AddPostureComplianceStatuses(PostureComplianceStatusesT&& value) { m_postureComplianceStatusesHasBeenSet = true; m_postureComplianceStatuses.emplace_back(std::forward<PostureComplianceStatusesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_connectionEstablishedTime;
    bool m_connectionEstablishedTimeHasBeenSet = false;

    Aws::String m_ingressBytes;
    bool m_ingressBytesHasBeenSet = false;

    Aws::String m_egressBytes;
    bool m_egressBytesHasBeenSet = false;

    Aws::String m_ingressPackets;
    bool m_ingressPacketsHasBeenSet = false;

    Aws::String m_egressPackets;
    bool m_egressPacketsHasBeenSet = false;

    Aws::String m_clientIp;
    bool m_clientIpHasBeenSet = false;

    Aws::String m_clientIpv6Address;
    bool m_clientIpv6AddressHasBeenSet = false;

    Aws::String m_commonName;
    bool m_commonNameHasBeenSet = false;

    ClientVpnConnectionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_connectionEndTime;
    bool m_connectionEndTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_postureComplianceStatuses;
    bool m_postureComplianceStatusesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
