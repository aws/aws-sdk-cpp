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
    AWS_GUARDDUTY_API NetworkConnectionAction() = default;
    AWS_GUARDDUTY_API NetworkConnectionAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API NetworkConnectionAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether EC2 blocked the network connection to your instance.</p>
     */
    inline bool GetBlocked() const { return m_blocked; }
    inline bool BlockedHasBeenSet() const { return m_blockedHasBeenSet; }
    inline void SetBlocked(bool value) { m_blockedHasBeenSet = true; m_blocked = value; }
    inline NetworkConnectionAction& WithBlocked(bool value) { SetBlocked(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network connection direction.</p>
     */
    inline const Aws::String& GetConnectionDirection() const { return m_connectionDirection; }
    inline bool ConnectionDirectionHasBeenSet() const { return m_connectionDirectionHasBeenSet; }
    template<typename ConnectionDirectionT = Aws::String>
    void SetConnectionDirection(ConnectionDirectionT&& value) { m_connectionDirectionHasBeenSet = true; m_connectionDirection = std::forward<ConnectionDirectionT>(value); }
    template<typename ConnectionDirectionT = Aws::String>
    NetworkConnectionAction& WithConnectionDirection(ConnectionDirectionT&& value) { SetConnectionDirection(std::forward<ConnectionDirectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local port information of the connection.</p>
     */
    inline const LocalPortDetails& GetLocalPortDetails() const { return m_localPortDetails; }
    inline bool LocalPortDetailsHasBeenSet() const { return m_localPortDetailsHasBeenSet; }
    template<typename LocalPortDetailsT = LocalPortDetails>
    void SetLocalPortDetails(LocalPortDetailsT&& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = std::forward<LocalPortDetailsT>(value); }
    template<typename LocalPortDetailsT = LocalPortDetails>
    NetworkConnectionAction& WithLocalPortDetails(LocalPortDetailsT&& value) { SetLocalPortDetails(std::forward<LocalPortDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network connection protocol.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    NetworkConnectionAction& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local IP information of the connection.</p>
     */
    inline const LocalIpDetails& GetLocalIpDetails() const { return m_localIpDetails; }
    inline bool LocalIpDetailsHasBeenSet() const { return m_localIpDetailsHasBeenSet; }
    template<typename LocalIpDetailsT = LocalIpDetails>
    void SetLocalIpDetails(LocalIpDetailsT&& value) { m_localIpDetailsHasBeenSet = true; m_localIpDetails = std::forward<LocalIpDetailsT>(value); }
    template<typename LocalIpDetailsT = LocalIpDetails>
    NetworkConnectionAction& WithLocalIpDetails(LocalIpDetailsT&& value) { SetLocalIpDetails(std::forward<LocalIpDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 instance's local elastic network interface utilized for the
     * connection.</p>
     */
    inline const Aws::String& GetLocalNetworkInterface() const { return m_localNetworkInterface; }
    inline bool LocalNetworkInterfaceHasBeenSet() const { return m_localNetworkInterfaceHasBeenSet; }
    template<typename LocalNetworkInterfaceT = Aws::String>
    void SetLocalNetworkInterface(LocalNetworkInterfaceT&& value) { m_localNetworkInterfaceHasBeenSet = true; m_localNetworkInterface = std::forward<LocalNetworkInterfaceT>(value); }
    template<typename LocalNetworkInterfaceT = Aws::String>
    NetworkConnectionAction& WithLocalNetworkInterface(LocalNetworkInterfaceT&& value) { SetLocalNetworkInterface(std::forward<LocalNetworkInterfaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remote IP information of the connection.</p>
     */
    inline const RemoteIpDetails& GetRemoteIpDetails() const { return m_remoteIpDetails; }
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }
    template<typename RemoteIpDetailsT = RemoteIpDetails>
    void SetRemoteIpDetails(RemoteIpDetailsT&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::forward<RemoteIpDetailsT>(value); }
    template<typename RemoteIpDetailsT = RemoteIpDetails>
    NetworkConnectionAction& WithRemoteIpDetails(RemoteIpDetailsT&& value) { SetRemoteIpDetails(std::forward<RemoteIpDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remote port information of the connection.</p>
     */
    inline const RemotePortDetails& GetRemotePortDetails() const { return m_remotePortDetails; }
    inline bool RemotePortDetailsHasBeenSet() const { return m_remotePortDetailsHasBeenSet; }
    template<typename RemotePortDetailsT = RemotePortDetails>
    void SetRemotePortDetails(RemotePortDetailsT&& value) { m_remotePortDetailsHasBeenSet = true; m_remotePortDetails = std::forward<RemotePortDetailsT>(value); }
    template<typename RemotePortDetailsT = RemotePortDetails>
    NetworkConnectionAction& WithRemotePortDetails(RemotePortDetailsT&& value) { SetRemotePortDetails(std::forward<RemotePortDetailsT>(value)); return *this;}
    ///@}
  private:

    bool m_blocked{false};
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
