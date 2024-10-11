/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/LocalPortDetails.h>
#include <aws/guardduty/model/LocalIpDetails.h>
#include <aws/guardduty/model/RemoteIpDetails.h>
#include <aws/guardduty/model/RemotePortDetails.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the NETWORK_CONNECTION action described in the
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/NetworkConnectionAction">AWS
   * API Reference</a></p>
   */
  class NetworkConnectionAction
  {
  public:
    AWS_GUARDDUTY_API NetworkConnectionAction();
    AWS_GUARDDUTY_API NetworkConnectionAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API NetworkConnectionAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether EC2 blocked the network connection to your instance.</p>
     */
    inline bool GetBlocked() const{ return m_blocked; }
    inline bool BlockedHasBeenSet() const { return m_blockedHasBeenSet; }
    inline void SetBlocked(bool value) { m_blockedHasBeenSet = true; m_blocked = value; }
    inline NetworkConnectionAction& WithBlocked(bool value) { SetBlocked(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network connection direction.</p>
     */
    inline const Aws::String& GetConnectionDirection() const{ return m_connectionDirection; }
    inline bool ConnectionDirectionHasBeenSet() const { return m_connectionDirectionHasBeenSet; }
    inline void SetConnectionDirection(const Aws::String& value) { m_connectionDirectionHasBeenSet = true; m_connectionDirection = value; }
    inline void SetConnectionDirection(Aws::String&& value) { m_connectionDirectionHasBeenSet = true; m_connectionDirection = std::move(value); }
    inline void SetConnectionDirection(const char* value) { m_connectionDirectionHasBeenSet = true; m_connectionDirection.assign(value); }
    inline NetworkConnectionAction& WithConnectionDirection(const Aws::String& value) { SetConnectionDirection(value); return *this;}
    inline NetworkConnectionAction& WithConnectionDirection(Aws::String&& value) { SetConnectionDirection(std::move(value)); return *this;}
    inline NetworkConnectionAction& WithConnectionDirection(const char* value) { SetConnectionDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local port information of the connection.</p>
     */
    inline const LocalPortDetails& GetLocalPortDetails() const{ return m_localPortDetails; }
    inline bool LocalPortDetailsHasBeenSet() const { return m_localPortDetailsHasBeenSet; }
    inline void SetLocalPortDetails(const LocalPortDetails& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = value; }
    inline void SetLocalPortDetails(LocalPortDetails&& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = std::move(value); }
    inline NetworkConnectionAction& WithLocalPortDetails(const LocalPortDetails& value) { SetLocalPortDetails(value); return *this;}
    inline NetworkConnectionAction& WithLocalPortDetails(LocalPortDetails&& value) { SetLocalPortDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network connection protocol.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }
    inline NetworkConnectionAction& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline NetworkConnectionAction& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline NetworkConnectionAction& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local IP information of the connection.</p>
     */
    inline const LocalIpDetails& GetLocalIpDetails() const{ return m_localIpDetails; }
    inline bool LocalIpDetailsHasBeenSet() const { return m_localIpDetailsHasBeenSet; }
    inline void SetLocalIpDetails(const LocalIpDetails& value) { m_localIpDetailsHasBeenSet = true; m_localIpDetails = value; }
    inline void SetLocalIpDetails(LocalIpDetails&& value) { m_localIpDetailsHasBeenSet = true; m_localIpDetails = std::move(value); }
    inline NetworkConnectionAction& WithLocalIpDetails(const LocalIpDetails& value) { SetLocalIpDetails(value); return *this;}
    inline NetworkConnectionAction& WithLocalIpDetails(LocalIpDetails&& value) { SetLocalIpDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 instance's local elastic network interface utilized for the
     * connection.</p>
     */
    inline const Aws::String& GetLocalNetworkInterface() const{ return m_localNetworkInterface; }
    inline bool LocalNetworkInterfaceHasBeenSet() const { return m_localNetworkInterfaceHasBeenSet; }
    inline void SetLocalNetworkInterface(const Aws::String& value) { m_localNetworkInterfaceHasBeenSet = true; m_localNetworkInterface = value; }
    inline void SetLocalNetworkInterface(Aws::String&& value) { m_localNetworkInterfaceHasBeenSet = true; m_localNetworkInterface = std::move(value); }
    inline void SetLocalNetworkInterface(const char* value) { m_localNetworkInterfaceHasBeenSet = true; m_localNetworkInterface.assign(value); }
    inline NetworkConnectionAction& WithLocalNetworkInterface(const Aws::String& value) { SetLocalNetworkInterface(value); return *this;}
    inline NetworkConnectionAction& WithLocalNetworkInterface(Aws::String&& value) { SetLocalNetworkInterface(std::move(value)); return *this;}
    inline NetworkConnectionAction& WithLocalNetworkInterface(const char* value) { SetLocalNetworkInterface(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remote IP information of the connection.</p>
     */
    inline const RemoteIpDetails& GetRemoteIpDetails() const{ return m_remoteIpDetails; }
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }
    inline void SetRemoteIpDetails(const RemoteIpDetails& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = value; }
    inline void SetRemoteIpDetails(RemoteIpDetails&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::move(value); }
    inline NetworkConnectionAction& WithRemoteIpDetails(const RemoteIpDetails& value) { SetRemoteIpDetails(value); return *this;}
    inline NetworkConnectionAction& WithRemoteIpDetails(RemoteIpDetails&& value) { SetRemoteIpDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remote port information of the connection.</p>
     */
    inline const RemotePortDetails& GetRemotePortDetails() const{ return m_remotePortDetails; }
    inline bool RemotePortDetailsHasBeenSet() const { return m_remotePortDetailsHasBeenSet; }
    inline void SetRemotePortDetails(const RemotePortDetails& value) { m_remotePortDetailsHasBeenSet = true; m_remotePortDetails = value; }
    inline void SetRemotePortDetails(RemotePortDetails&& value) { m_remotePortDetailsHasBeenSet = true; m_remotePortDetails = std::move(value); }
    inline NetworkConnectionAction& WithRemotePortDetails(const RemotePortDetails& value) { SetRemotePortDetails(value); return *this;}
    inline NetworkConnectionAction& WithRemotePortDetails(RemotePortDetails&& value) { SetRemotePortDetails(std::move(value)); return *this;}
    ///@}
  private:

    bool m_blocked;
    bool m_blockedHasBeenSet = false;

    Aws::String m_connectionDirection;
    bool m_connectionDirectionHasBeenSet = false;

    LocalPortDetails m_localPortDetails;
    bool m_localPortDetailsHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    LocalIpDetails m_localIpDetails;
    bool m_localIpDetailsHasBeenSet = false;

    Aws::String m_localNetworkInterface;
    bool m_localNetworkInterfaceHasBeenSet = false;

    RemoteIpDetails m_remoteIpDetails;
    bool m_remoteIpDetailsHasBeenSet = false;

    RemotePortDetails m_remotePortDetails;
    bool m_remotePortDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
