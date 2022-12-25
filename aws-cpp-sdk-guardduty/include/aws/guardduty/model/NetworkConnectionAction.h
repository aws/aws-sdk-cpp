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


    /**
     * <p>Indicates whether EC2 blocked the network connection to your instance.</p>
     */
    inline bool GetBlocked() const{ return m_blocked; }

    /**
     * <p>Indicates whether EC2 blocked the network connection to your instance.</p>
     */
    inline bool BlockedHasBeenSet() const { return m_blockedHasBeenSet; }

    /**
     * <p>Indicates whether EC2 blocked the network connection to your instance.</p>
     */
    inline void SetBlocked(bool value) { m_blockedHasBeenSet = true; m_blocked = value; }

    /**
     * <p>Indicates whether EC2 blocked the network connection to your instance.</p>
     */
    inline NetworkConnectionAction& WithBlocked(bool value) { SetBlocked(value); return *this;}


    /**
     * <p>The network connection direction.</p>
     */
    inline const Aws::String& GetConnectionDirection() const{ return m_connectionDirection; }

    /**
     * <p>The network connection direction.</p>
     */
    inline bool ConnectionDirectionHasBeenSet() const { return m_connectionDirectionHasBeenSet; }

    /**
     * <p>The network connection direction.</p>
     */
    inline void SetConnectionDirection(const Aws::String& value) { m_connectionDirectionHasBeenSet = true; m_connectionDirection = value; }

    /**
     * <p>The network connection direction.</p>
     */
    inline void SetConnectionDirection(Aws::String&& value) { m_connectionDirectionHasBeenSet = true; m_connectionDirection = std::move(value); }

    /**
     * <p>The network connection direction.</p>
     */
    inline void SetConnectionDirection(const char* value) { m_connectionDirectionHasBeenSet = true; m_connectionDirection.assign(value); }

    /**
     * <p>The network connection direction.</p>
     */
    inline NetworkConnectionAction& WithConnectionDirection(const Aws::String& value) { SetConnectionDirection(value); return *this;}

    /**
     * <p>The network connection direction.</p>
     */
    inline NetworkConnectionAction& WithConnectionDirection(Aws::String&& value) { SetConnectionDirection(std::move(value)); return *this;}

    /**
     * <p>The network connection direction.</p>
     */
    inline NetworkConnectionAction& WithConnectionDirection(const char* value) { SetConnectionDirection(value); return *this;}


    /**
     * <p>The local port information of the connection.</p>
     */
    inline const LocalPortDetails& GetLocalPortDetails() const{ return m_localPortDetails; }

    /**
     * <p>The local port information of the connection.</p>
     */
    inline bool LocalPortDetailsHasBeenSet() const { return m_localPortDetailsHasBeenSet; }

    /**
     * <p>The local port information of the connection.</p>
     */
    inline void SetLocalPortDetails(const LocalPortDetails& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = value; }

    /**
     * <p>The local port information of the connection.</p>
     */
    inline void SetLocalPortDetails(LocalPortDetails&& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = std::move(value); }

    /**
     * <p>The local port information of the connection.</p>
     */
    inline NetworkConnectionAction& WithLocalPortDetails(const LocalPortDetails& value) { SetLocalPortDetails(value); return *this;}

    /**
     * <p>The local port information of the connection.</p>
     */
    inline NetworkConnectionAction& WithLocalPortDetails(LocalPortDetails&& value) { SetLocalPortDetails(std::move(value)); return *this;}


    /**
     * <p>The network connection protocol.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The network connection protocol.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The network connection protocol.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The network connection protocol.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The network connection protocol.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The network connection protocol.</p>
     */
    inline NetworkConnectionAction& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The network connection protocol.</p>
     */
    inline NetworkConnectionAction& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The network connection protocol.</p>
     */
    inline NetworkConnectionAction& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>The local IP information of the connection.</p>
     */
    inline const LocalIpDetails& GetLocalIpDetails() const{ return m_localIpDetails; }

    /**
     * <p>The local IP information of the connection.</p>
     */
    inline bool LocalIpDetailsHasBeenSet() const { return m_localIpDetailsHasBeenSet; }

    /**
     * <p>The local IP information of the connection.</p>
     */
    inline void SetLocalIpDetails(const LocalIpDetails& value) { m_localIpDetailsHasBeenSet = true; m_localIpDetails = value; }

    /**
     * <p>The local IP information of the connection.</p>
     */
    inline void SetLocalIpDetails(LocalIpDetails&& value) { m_localIpDetailsHasBeenSet = true; m_localIpDetails = std::move(value); }

    /**
     * <p>The local IP information of the connection.</p>
     */
    inline NetworkConnectionAction& WithLocalIpDetails(const LocalIpDetails& value) { SetLocalIpDetails(value); return *this;}

    /**
     * <p>The local IP information of the connection.</p>
     */
    inline NetworkConnectionAction& WithLocalIpDetails(LocalIpDetails&& value) { SetLocalIpDetails(std::move(value)); return *this;}


    /**
     * <p>The remote IP information of the connection.</p>
     */
    inline const RemoteIpDetails& GetRemoteIpDetails() const{ return m_remoteIpDetails; }

    /**
     * <p>The remote IP information of the connection.</p>
     */
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }

    /**
     * <p>The remote IP information of the connection.</p>
     */
    inline void SetRemoteIpDetails(const RemoteIpDetails& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = value; }

    /**
     * <p>The remote IP information of the connection.</p>
     */
    inline void SetRemoteIpDetails(RemoteIpDetails&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::move(value); }

    /**
     * <p>The remote IP information of the connection.</p>
     */
    inline NetworkConnectionAction& WithRemoteIpDetails(const RemoteIpDetails& value) { SetRemoteIpDetails(value); return *this;}

    /**
     * <p>The remote IP information of the connection.</p>
     */
    inline NetworkConnectionAction& WithRemoteIpDetails(RemoteIpDetails&& value) { SetRemoteIpDetails(std::move(value)); return *this;}


    /**
     * <p>The remote port information of the connection.</p>
     */
    inline const RemotePortDetails& GetRemotePortDetails() const{ return m_remotePortDetails; }

    /**
     * <p>The remote port information of the connection.</p>
     */
    inline bool RemotePortDetailsHasBeenSet() const { return m_remotePortDetailsHasBeenSet; }

    /**
     * <p>The remote port information of the connection.</p>
     */
    inline void SetRemotePortDetails(const RemotePortDetails& value) { m_remotePortDetailsHasBeenSet = true; m_remotePortDetails = value; }

    /**
     * <p>The remote port information of the connection.</p>
     */
    inline void SetRemotePortDetails(RemotePortDetails&& value) { m_remotePortDetailsHasBeenSet = true; m_remotePortDetails = std::move(value); }

    /**
     * <p>The remote port information of the connection.</p>
     */
    inline NetworkConnectionAction& WithRemotePortDetails(const RemotePortDetails& value) { SetRemotePortDetails(value); return *this;}

    /**
     * <p>The remote port information of the connection.</p>
     */
    inline NetworkConnectionAction& WithRemotePortDetails(RemotePortDetails&& value) { SetRemotePortDetails(std::move(value)); return *this;}

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

    RemoteIpDetails m_remoteIpDetails;
    bool m_remoteIpDetailsHasBeenSet = false;

    RemotePortDetails m_remotePortDetails;
    bool m_remotePortDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
