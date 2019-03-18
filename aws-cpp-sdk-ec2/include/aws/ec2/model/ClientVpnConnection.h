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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ClientVpnConnectionStatus.h>
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
  class AWS_EC2_API ClientVpnConnection
  {
  public:
    ClientVpnConnection();
    ClientVpnConnection(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClientVpnConnection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline ClientVpnConnection& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline ClientVpnConnection& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint to which the client is connected.</p>
     */
    inline ClientVpnConnection& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}


    /**
     * <p>The current date and time.</p>
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The current date and time.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The current date and time.</p>
     */
    inline void SetTimestamp(const Aws::String& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The current date and time.</p>
     */
    inline void SetTimestamp(Aws::String&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The current date and time.</p>
     */
    inline void SetTimestamp(const char* value) { m_timestampHasBeenSet = true; m_timestamp.assign(value); }

    /**
     * <p>The current date and time.</p>
     */
    inline ClientVpnConnection& WithTimestamp(const Aws::String& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The current date and time.</p>
     */
    inline ClientVpnConnection& WithTimestamp(Aws::String&& value) { SetTimestamp(std::move(value)); return *this;}

    /**
     * <p>The current date and time.</p>
     */
    inline ClientVpnConnection& WithTimestamp(const char* value) { SetTimestamp(value); return *this;}


    /**
     * <p>The ID of the client connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the client connection.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of the client connection.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the client connection.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of the client connection.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the client connection.</p>
     */
    inline ClientVpnConnection& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the client connection.</p>
     */
    inline ClientVpnConnection& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the client connection.</p>
     */
    inline ClientVpnConnection& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The username of the client who established the client connection. This
     * information is only provided if Active Directory client authentication is
     * used.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The username of the client who established the client connection. This
     * information is only provided if Active Directory client authentication is
     * used.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The username of the client who established the client connection. This
     * information is only provided if Active Directory client authentication is
     * used.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The username of the client who established the client connection. This
     * information is only provided if Active Directory client authentication is
     * used.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The username of the client who established the client connection. This
     * information is only provided if Active Directory client authentication is
     * used.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The username of the client who established the client connection. This
     * information is only provided if Active Directory client authentication is
     * used.</p>
     */
    inline ClientVpnConnection& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The username of the client who established the client connection. This
     * information is only provided if Active Directory client authentication is
     * used.</p>
     */
    inline ClientVpnConnection& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The username of the client who established the client connection. This
     * information is only provided if Active Directory client authentication is
     * used.</p>
     */
    inline ClientVpnConnection& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The date and time the client connection was established.</p>
     */
    inline const Aws::String& GetConnectionEstablishedTime() const{ return m_connectionEstablishedTime; }

    /**
     * <p>The date and time the client connection was established.</p>
     */
    inline bool ConnectionEstablishedTimeHasBeenSet() const { return m_connectionEstablishedTimeHasBeenSet; }

    /**
     * <p>The date and time the client connection was established.</p>
     */
    inline void SetConnectionEstablishedTime(const Aws::String& value) { m_connectionEstablishedTimeHasBeenSet = true; m_connectionEstablishedTime = value; }

    /**
     * <p>The date and time the client connection was established.</p>
     */
    inline void SetConnectionEstablishedTime(Aws::String&& value) { m_connectionEstablishedTimeHasBeenSet = true; m_connectionEstablishedTime = std::move(value); }

    /**
     * <p>The date and time the client connection was established.</p>
     */
    inline void SetConnectionEstablishedTime(const char* value) { m_connectionEstablishedTimeHasBeenSet = true; m_connectionEstablishedTime.assign(value); }

    /**
     * <p>The date and time the client connection was established.</p>
     */
    inline ClientVpnConnection& WithConnectionEstablishedTime(const Aws::String& value) { SetConnectionEstablishedTime(value); return *this;}

    /**
     * <p>The date and time the client connection was established.</p>
     */
    inline ClientVpnConnection& WithConnectionEstablishedTime(Aws::String&& value) { SetConnectionEstablishedTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the client connection was established.</p>
     */
    inline ClientVpnConnection& WithConnectionEstablishedTime(const char* value) { SetConnectionEstablishedTime(value); return *this;}


    /**
     * <p>The number of bytes sent by the client.</p>
     */
    inline const Aws::String& GetIngressBytes() const{ return m_ingressBytes; }

    /**
     * <p>The number of bytes sent by the client.</p>
     */
    inline bool IngressBytesHasBeenSet() const { return m_ingressBytesHasBeenSet; }

    /**
     * <p>The number of bytes sent by the client.</p>
     */
    inline void SetIngressBytes(const Aws::String& value) { m_ingressBytesHasBeenSet = true; m_ingressBytes = value; }

    /**
     * <p>The number of bytes sent by the client.</p>
     */
    inline void SetIngressBytes(Aws::String&& value) { m_ingressBytesHasBeenSet = true; m_ingressBytes = std::move(value); }

    /**
     * <p>The number of bytes sent by the client.</p>
     */
    inline void SetIngressBytes(const char* value) { m_ingressBytesHasBeenSet = true; m_ingressBytes.assign(value); }

    /**
     * <p>The number of bytes sent by the client.</p>
     */
    inline ClientVpnConnection& WithIngressBytes(const Aws::String& value) { SetIngressBytes(value); return *this;}

    /**
     * <p>The number of bytes sent by the client.</p>
     */
    inline ClientVpnConnection& WithIngressBytes(Aws::String&& value) { SetIngressBytes(std::move(value)); return *this;}

    /**
     * <p>The number of bytes sent by the client.</p>
     */
    inline ClientVpnConnection& WithIngressBytes(const char* value) { SetIngressBytes(value); return *this;}


    /**
     * <p>The number of bytes received by the client.</p>
     */
    inline const Aws::String& GetEgressBytes() const{ return m_egressBytes; }

    /**
     * <p>The number of bytes received by the client.</p>
     */
    inline bool EgressBytesHasBeenSet() const { return m_egressBytesHasBeenSet; }

    /**
     * <p>The number of bytes received by the client.</p>
     */
    inline void SetEgressBytes(const Aws::String& value) { m_egressBytesHasBeenSet = true; m_egressBytes = value; }

    /**
     * <p>The number of bytes received by the client.</p>
     */
    inline void SetEgressBytes(Aws::String&& value) { m_egressBytesHasBeenSet = true; m_egressBytes = std::move(value); }

    /**
     * <p>The number of bytes received by the client.</p>
     */
    inline void SetEgressBytes(const char* value) { m_egressBytesHasBeenSet = true; m_egressBytes.assign(value); }

    /**
     * <p>The number of bytes received by the client.</p>
     */
    inline ClientVpnConnection& WithEgressBytes(const Aws::String& value) { SetEgressBytes(value); return *this;}

    /**
     * <p>The number of bytes received by the client.</p>
     */
    inline ClientVpnConnection& WithEgressBytes(Aws::String&& value) { SetEgressBytes(std::move(value)); return *this;}

    /**
     * <p>The number of bytes received by the client.</p>
     */
    inline ClientVpnConnection& WithEgressBytes(const char* value) { SetEgressBytes(value); return *this;}


    /**
     * <p>The number of packets sent by the client.</p>
     */
    inline const Aws::String& GetIngressPackets() const{ return m_ingressPackets; }

    /**
     * <p>The number of packets sent by the client.</p>
     */
    inline bool IngressPacketsHasBeenSet() const { return m_ingressPacketsHasBeenSet; }

    /**
     * <p>The number of packets sent by the client.</p>
     */
    inline void SetIngressPackets(const Aws::String& value) { m_ingressPacketsHasBeenSet = true; m_ingressPackets = value; }

    /**
     * <p>The number of packets sent by the client.</p>
     */
    inline void SetIngressPackets(Aws::String&& value) { m_ingressPacketsHasBeenSet = true; m_ingressPackets = std::move(value); }

    /**
     * <p>The number of packets sent by the client.</p>
     */
    inline void SetIngressPackets(const char* value) { m_ingressPacketsHasBeenSet = true; m_ingressPackets.assign(value); }

    /**
     * <p>The number of packets sent by the client.</p>
     */
    inline ClientVpnConnection& WithIngressPackets(const Aws::String& value) { SetIngressPackets(value); return *this;}

    /**
     * <p>The number of packets sent by the client.</p>
     */
    inline ClientVpnConnection& WithIngressPackets(Aws::String&& value) { SetIngressPackets(std::move(value)); return *this;}

    /**
     * <p>The number of packets sent by the client.</p>
     */
    inline ClientVpnConnection& WithIngressPackets(const char* value) { SetIngressPackets(value); return *this;}


    /**
     * <p>The number of packets received by the client.</p>
     */
    inline const Aws::String& GetEgressPackets() const{ return m_egressPackets; }

    /**
     * <p>The number of packets received by the client.</p>
     */
    inline bool EgressPacketsHasBeenSet() const { return m_egressPacketsHasBeenSet; }

    /**
     * <p>The number of packets received by the client.</p>
     */
    inline void SetEgressPackets(const Aws::String& value) { m_egressPacketsHasBeenSet = true; m_egressPackets = value; }

    /**
     * <p>The number of packets received by the client.</p>
     */
    inline void SetEgressPackets(Aws::String&& value) { m_egressPacketsHasBeenSet = true; m_egressPackets = std::move(value); }

    /**
     * <p>The number of packets received by the client.</p>
     */
    inline void SetEgressPackets(const char* value) { m_egressPacketsHasBeenSet = true; m_egressPackets.assign(value); }

    /**
     * <p>The number of packets received by the client.</p>
     */
    inline ClientVpnConnection& WithEgressPackets(const Aws::String& value) { SetEgressPackets(value); return *this;}

    /**
     * <p>The number of packets received by the client.</p>
     */
    inline ClientVpnConnection& WithEgressPackets(Aws::String&& value) { SetEgressPackets(std::move(value)); return *this;}

    /**
     * <p>The number of packets received by the client.</p>
     */
    inline ClientVpnConnection& WithEgressPackets(const char* value) { SetEgressPackets(value); return *this;}


    /**
     * <p>The IP address of the client.</p>
     */
    inline const Aws::String& GetClientIp() const{ return m_clientIp; }

    /**
     * <p>The IP address of the client.</p>
     */
    inline bool ClientIpHasBeenSet() const { return m_clientIpHasBeenSet; }

    /**
     * <p>The IP address of the client.</p>
     */
    inline void SetClientIp(const Aws::String& value) { m_clientIpHasBeenSet = true; m_clientIp = value; }

    /**
     * <p>The IP address of the client.</p>
     */
    inline void SetClientIp(Aws::String&& value) { m_clientIpHasBeenSet = true; m_clientIp = std::move(value); }

    /**
     * <p>The IP address of the client.</p>
     */
    inline void SetClientIp(const char* value) { m_clientIpHasBeenSet = true; m_clientIp.assign(value); }

    /**
     * <p>The IP address of the client.</p>
     */
    inline ClientVpnConnection& WithClientIp(const Aws::String& value) { SetClientIp(value); return *this;}

    /**
     * <p>The IP address of the client.</p>
     */
    inline ClientVpnConnection& WithClientIp(Aws::String&& value) { SetClientIp(std::move(value)); return *this;}

    /**
     * <p>The IP address of the client.</p>
     */
    inline ClientVpnConnection& WithClientIp(const char* value) { SetClientIp(value); return *this;}


    /**
     * <p>The common name associated with the client. This is either the name of the
     * client certificate, or the Active Directory user name.</p>
     */
    inline const Aws::String& GetCommonName() const{ return m_commonName; }

    /**
     * <p>The common name associated with the client. This is either the name of the
     * client certificate, or the Active Directory user name.</p>
     */
    inline bool CommonNameHasBeenSet() const { return m_commonNameHasBeenSet; }

    /**
     * <p>The common name associated with the client. This is either the name of the
     * client certificate, or the Active Directory user name.</p>
     */
    inline void SetCommonName(const Aws::String& value) { m_commonNameHasBeenSet = true; m_commonName = value; }

    /**
     * <p>The common name associated with the client. This is either the name of the
     * client certificate, or the Active Directory user name.</p>
     */
    inline void SetCommonName(Aws::String&& value) { m_commonNameHasBeenSet = true; m_commonName = std::move(value); }

    /**
     * <p>The common name associated with the client. This is either the name of the
     * client certificate, or the Active Directory user name.</p>
     */
    inline void SetCommonName(const char* value) { m_commonNameHasBeenSet = true; m_commonName.assign(value); }

    /**
     * <p>The common name associated with the client. This is either the name of the
     * client certificate, or the Active Directory user name.</p>
     */
    inline ClientVpnConnection& WithCommonName(const Aws::String& value) { SetCommonName(value); return *this;}

    /**
     * <p>The common name associated with the client. This is either the name of the
     * client certificate, or the Active Directory user name.</p>
     */
    inline ClientVpnConnection& WithCommonName(Aws::String&& value) { SetCommonName(std::move(value)); return *this;}

    /**
     * <p>The common name associated with the client. This is either the name of the
     * client certificate, or the Active Directory user name.</p>
     */
    inline ClientVpnConnection& WithCommonName(const char* value) { SetCommonName(value); return *this;}


    /**
     * <p>The current state of the client connection.</p>
     */
    inline const ClientVpnConnectionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the client connection.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the client connection.</p>
     */
    inline void SetStatus(const ClientVpnConnectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the client connection.</p>
     */
    inline void SetStatus(ClientVpnConnectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the client connection.</p>
     */
    inline ClientVpnConnection& WithStatus(const ClientVpnConnectionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the client connection.</p>
     */
    inline ClientVpnConnection& WithStatus(ClientVpnConnectionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time the client connection was terminated.</p>
     */
    inline const Aws::String& GetConnectionEndTime() const{ return m_connectionEndTime; }

    /**
     * <p>The date and time the client connection was terminated.</p>
     */
    inline bool ConnectionEndTimeHasBeenSet() const { return m_connectionEndTimeHasBeenSet; }

    /**
     * <p>The date and time the client connection was terminated.</p>
     */
    inline void SetConnectionEndTime(const Aws::String& value) { m_connectionEndTimeHasBeenSet = true; m_connectionEndTime = value; }

    /**
     * <p>The date and time the client connection was terminated.</p>
     */
    inline void SetConnectionEndTime(Aws::String&& value) { m_connectionEndTimeHasBeenSet = true; m_connectionEndTime = std::move(value); }

    /**
     * <p>The date and time the client connection was terminated.</p>
     */
    inline void SetConnectionEndTime(const char* value) { m_connectionEndTimeHasBeenSet = true; m_connectionEndTime.assign(value); }

    /**
     * <p>The date and time the client connection was terminated.</p>
     */
    inline ClientVpnConnection& WithConnectionEndTime(const Aws::String& value) { SetConnectionEndTime(value); return *this;}

    /**
     * <p>The date and time the client connection was terminated.</p>
     */
    inline ClientVpnConnection& WithConnectionEndTime(Aws::String&& value) { SetConnectionEndTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the client connection was terminated.</p>
     */
    inline ClientVpnConnection& WithConnectionEndTime(const char* value) { SetConnectionEndTime(value); return *this;}

  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet;

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::String m_connectionEstablishedTime;
    bool m_connectionEstablishedTimeHasBeenSet;

    Aws::String m_ingressBytes;
    bool m_ingressBytesHasBeenSet;

    Aws::String m_egressBytes;
    bool m_egressBytesHasBeenSet;

    Aws::String m_ingressPackets;
    bool m_ingressPacketsHasBeenSet;

    Aws::String m_egressPackets;
    bool m_egressPacketsHasBeenSet;

    Aws::String m_clientIp;
    bool m_clientIpHasBeenSet;

    Aws::String m_commonName;
    bool m_commonNameHasBeenSet;

    ClientVpnConnectionStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_connectionEndTime;
    bool m_connectionEndTimeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
