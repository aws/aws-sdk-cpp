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
    AWS_EC2_API ClientVpnConnection();
    AWS_EC2_API ClientVpnConnection(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientVpnConnection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }
    inline ClientVpnConnection& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}
    inline ClientVpnConnection& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}
    inline ClientVpnConnection& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current date and time.</p>
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::String& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::String&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline void SetTimestamp(const char* value) { m_timestampHasBeenSet = true; m_timestamp.assign(value); }
    inline ClientVpnConnection& WithTimestamp(const Aws::String& value) { SetTimestamp(value); return *this;}
    inline ClientVpnConnection& WithTimestamp(Aws::String&& value) { SetTimestamp(std::move(value)); return *this;}
    inline ClientVpnConnection& WithTimestamp(const char* value) { SetTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the client connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }
    inline ClientVpnConnection& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline ClientVpnConnection& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline ClientVpnConnection& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the client who established the client connection. This
     * information is only provided if Active Directory client authentication is
     * used.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline ClientVpnConnection& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline ClientVpnConnection& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline ClientVpnConnection& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the client connection was established.</p>
     */
    inline const Aws::String& GetConnectionEstablishedTime() const{ return m_connectionEstablishedTime; }
    inline bool ConnectionEstablishedTimeHasBeenSet() const { return m_connectionEstablishedTimeHasBeenSet; }
    inline void SetConnectionEstablishedTime(const Aws::String& value) { m_connectionEstablishedTimeHasBeenSet = true; m_connectionEstablishedTime = value; }
    inline void SetConnectionEstablishedTime(Aws::String&& value) { m_connectionEstablishedTimeHasBeenSet = true; m_connectionEstablishedTime = std::move(value); }
    inline void SetConnectionEstablishedTime(const char* value) { m_connectionEstablishedTimeHasBeenSet = true; m_connectionEstablishedTime.assign(value); }
    inline ClientVpnConnection& WithConnectionEstablishedTime(const Aws::String& value) { SetConnectionEstablishedTime(value); return *this;}
    inline ClientVpnConnection& WithConnectionEstablishedTime(Aws::String&& value) { SetConnectionEstablishedTime(std::move(value)); return *this;}
    inline ClientVpnConnection& WithConnectionEstablishedTime(const char* value) { SetConnectionEstablishedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes sent by the client.</p>
     */
    inline const Aws::String& GetIngressBytes() const{ return m_ingressBytes; }
    inline bool IngressBytesHasBeenSet() const { return m_ingressBytesHasBeenSet; }
    inline void SetIngressBytes(const Aws::String& value) { m_ingressBytesHasBeenSet = true; m_ingressBytes = value; }
    inline void SetIngressBytes(Aws::String&& value) { m_ingressBytesHasBeenSet = true; m_ingressBytes = std::move(value); }
    inline void SetIngressBytes(const char* value) { m_ingressBytesHasBeenSet = true; m_ingressBytes.assign(value); }
    inline ClientVpnConnection& WithIngressBytes(const Aws::String& value) { SetIngressBytes(value); return *this;}
    inline ClientVpnConnection& WithIngressBytes(Aws::String&& value) { SetIngressBytes(std::move(value)); return *this;}
    inline ClientVpnConnection& WithIngressBytes(const char* value) { SetIngressBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes received by the client.</p>
     */
    inline const Aws::String& GetEgressBytes() const{ return m_egressBytes; }
    inline bool EgressBytesHasBeenSet() const { return m_egressBytesHasBeenSet; }
    inline void SetEgressBytes(const Aws::String& value) { m_egressBytesHasBeenSet = true; m_egressBytes = value; }
    inline void SetEgressBytes(Aws::String&& value) { m_egressBytesHasBeenSet = true; m_egressBytes = std::move(value); }
    inline void SetEgressBytes(const char* value) { m_egressBytesHasBeenSet = true; m_egressBytes.assign(value); }
    inline ClientVpnConnection& WithEgressBytes(const Aws::String& value) { SetEgressBytes(value); return *this;}
    inline ClientVpnConnection& WithEgressBytes(Aws::String&& value) { SetEgressBytes(std::move(value)); return *this;}
    inline ClientVpnConnection& WithEgressBytes(const char* value) { SetEgressBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of packets sent by the client.</p>
     */
    inline const Aws::String& GetIngressPackets() const{ return m_ingressPackets; }
    inline bool IngressPacketsHasBeenSet() const { return m_ingressPacketsHasBeenSet; }
    inline void SetIngressPackets(const Aws::String& value) { m_ingressPacketsHasBeenSet = true; m_ingressPackets = value; }
    inline void SetIngressPackets(Aws::String&& value) { m_ingressPacketsHasBeenSet = true; m_ingressPackets = std::move(value); }
    inline void SetIngressPackets(const char* value) { m_ingressPacketsHasBeenSet = true; m_ingressPackets.assign(value); }
    inline ClientVpnConnection& WithIngressPackets(const Aws::String& value) { SetIngressPackets(value); return *this;}
    inline ClientVpnConnection& WithIngressPackets(Aws::String&& value) { SetIngressPackets(std::move(value)); return *this;}
    inline ClientVpnConnection& WithIngressPackets(const char* value) { SetIngressPackets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of packets received by the client.</p>
     */
    inline const Aws::String& GetEgressPackets() const{ return m_egressPackets; }
    inline bool EgressPacketsHasBeenSet() const { return m_egressPacketsHasBeenSet; }
    inline void SetEgressPackets(const Aws::String& value) { m_egressPacketsHasBeenSet = true; m_egressPackets = value; }
    inline void SetEgressPackets(Aws::String&& value) { m_egressPacketsHasBeenSet = true; m_egressPackets = std::move(value); }
    inline void SetEgressPackets(const char* value) { m_egressPacketsHasBeenSet = true; m_egressPackets.assign(value); }
    inline ClientVpnConnection& WithEgressPackets(const Aws::String& value) { SetEgressPackets(value); return *this;}
    inline ClientVpnConnection& WithEgressPackets(Aws::String&& value) { SetEgressPackets(std::move(value)); return *this;}
    inline ClientVpnConnection& WithEgressPackets(const char* value) { SetEgressPackets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the client.</p>
     */
    inline const Aws::String& GetClientIp() const{ return m_clientIp; }
    inline bool ClientIpHasBeenSet() const { return m_clientIpHasBeenSet; }
    inline void SetClientIp(const Aws::String& value) { m_clientIpHasBeenSet = true; m_clientIp = value; }
    inline void SetClientIp(Aws::String&& value) { m_clientIpHasBeenSet = true; m_clientIp = std::move(value); }
    inline void SetClientIp(const char* value) { m_clientIpHasBeenSet = true; m_clientIp.assign(value); }
    inline ClientVpnConnection& WithClientIp(const Aws::String& value) { SetClientIp(value); return *this;}
    inline ClientVpnConnection& WithClientIp(Aws::String&& value) { SetClientIp(std::move(value)); return *this;}
    inline ClientVpnConnection& WithClientIp(const char* value) { SetClientIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The common name associated with the client. This is either the name of the
     * client certificate, or the Active Directory user name.</p>
     */
    inline const Aws::String& GetCommonName() const{ return m_commonName; }
    inline bool CommonNameHasBeenSet() const { return m_commonNameHasBeenSet; }
    inline void SetCommonName(const Aws::String& value) { m_commonNameHasBeenSet = true; m_commonName = value; }
    inline void SetCommonName(Aws::String&& value) { m_commonNameHasBeenSet = true; m_commonName = std::move(value); }
    inline void SetCommonName(const char* value) { m_commonNameHasBeenSet = true; m_commonName.assign(value); }
    inline ClientVpnConnection& WithCommonName(const Aws::String& value) { SetCommonName(value); return *this;}
    inline ClientVpnConnection& WithCommonName(Aws::String&& value) { SetCommonName(std::move(value)); return *this;}
    inline ClientVpnConnection& WithCommonName(const char* value) { SetCommonName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the client connection.</p>
     */
    inline const ClientVpnConnectionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ClientVpnConnectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ClientVpnConnectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ClientVpnConnection& WithStatus(const ClientVpnConnectionStatus& value) { SetStatus(value); return *this;}
    inline ClientVpnConnection& WithStatus(ClientVpnConnectionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the client connection was terminated.</p>
     */
    inline const Aws::String& GetConnectionEndTime() const{ return m_connectionEndTime; }
    inline bool ConnectionEndTimeHasBeenSet() const { return m_connectionEndTimeHasBeenSet; }
    inline void SetConnectionEndTime(const Aws::String& value) { m_connectionEndTimeHasBeenSet = true; m_connectionEndTime = value; }
    inline void SetConnectionEndTime(Aws::String&& value) { m_connectionEndTimeHasBeenSet = true; m_connectionEndTime = std::move(value); }
    inline void SetConnectionEndTime(const char* value) { m_connectionEndTimeHasBeenSet = true; m_connectionEndTime.assign(value); }
    inline ClientVpnConnection& WithConnectionEndTime(const Aws::String& value) { SetConnectionEndTime(value); return *this;}
    inline ClientVpnConnection& WithConnectionEndTime(Aws::String&& value) { SetConnectionEndTime(std::move(value)); return *this;}
    inline ClientVpnConnection& WithConnectionEndTime(const char* value) { SetConnectionEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statuses returned by the client connect handler for posture compliance,
     * if applicable.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPostureComplianceStatuses() const{ return m_postureComplianceStatuses; }
    inline bool PostureComplianceStatusesHasBeenSet() const { return m_postureComplianceStatusesHasBeenSet; }
    inline void SetPostureComplianceStatuses(const Aws::Vector<Aws::String>& value) { m_postureComplianceStatusesHasBeenSet = true; m_postureComplianceStatuses = value; }
    inline void SetPostureComplianceStatuses(Aws::Vector<Aws::String>&& value) { m_postureComplianceStatusesHasBeenSet = true; m_postureComplianceStatuses = std::move(value); }
    inline ClientVpnConnection& WithPostureComplianceStatuses(const Aws::Vector<Aws::String>& value) { SetPostureComplianceStatuses(value); return *this;}
    inline ClientVpnConnection& WithPostureComplianceStatuses(Aws::Vector<Aws::String>&& value) { SetPostureComplianceStatuses(std::move(value)); return *this;}
    inline ClientVpnConnection& AddPostureComplianceStatuses(const Aws::String& value) { m_postureComplianceStatusesHasBeenSet = true; m_postureComplianceStatuses.push_back(value); return *this; }
    inline ClientVpnConnection& AddPostureComplianceStatuses(Aws::String&& value) { m_postureComplianceStatusesHasBeenSet = true; m_postureComplianceStatuses.push_back(std::move(value)); return *this; }
    inline ClientVpnConnection& AddPostureComplianceStatuses(const char* value) { m_postureComplianceStatusesHasBeenSet = true; m_postureComplianceStatuses.push_back(value); return *this; }
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
