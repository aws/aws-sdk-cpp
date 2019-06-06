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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/LocalPortDetails.h>
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

  class AWS_GUARDDUTY_API NetworkConnectionAction
  {
  public:
    NetworkConnectionAction();
    NetworkConnectionAction(Aws::Utils::Json::JsonView jsonValue);
    NetworkConnectionAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Network connection blocked information.</p>
     */
    inline bool GetBlocked() const{ return m_blocked; }

    /**
     * <p>Network connection blocked information.</p>
     */
    inline bool BlockedHasBeenSet() const { return m_blockedHasBeenSet; }

    /**
     * <p>Network connection blocked information.</p>
     */
    inline void SetBlocked(bool value) { m_blockedHasBeenSet = true; m_blocked = value; }

    /**
     * <p>Network connection blocked information.</p>
     */
    inline NetworkConnectionAction& WithBlocked(bool value) { SetBlocked(value); return *this;}


    /**
     * <p>Network connection direction.</p>
     */
    inline const Aws::String& GetConnectionDirection() const{ return m_connectionDirection; }

    /**
     * <p>Network connection direction.</p>
     */
    inline bool ConnectionDirectionHasBeenSet() const { return m_connectionDirectionHasBeenSet; }

    /**
     * <p>Network connection direction.</p>
     */
    inline void SetConnectionDirection(const Aws::String& value) { m_connectionDirectionHasBeenSet = true; m_connectionDirection = value; }

    /**
     * <p>Network connection direction.</p>
     */
    inline void SetConnectionDirection(Aws::String&& value) { m_connectionDirectionHasBeenSet = true; m_connectionDirection = std::move(value); }

    /**
     * <p>Network connection direction.</p>
     */
    inline void SetConnectionDirection(const char* value) { m_connectionDirectionHasBeenSet = true; m_connectionDirection.assign(value); }

    /**
     * <p>Network connection direction.</p>
     */
    inline NetworkConnectionAction& WithConnectionDirection(const Aws::String& value) { SetConnectionDirection(value); return *this;}

    /**
     * <p>Network connection direction.</p>
     */
    inline NetworkConnectionAction& WithConnectionDirection(Aws::String&& value) { SetConnectionDirection(std::move(value)); return *this;}

    /**
     * <p>Network connection direction.</p>
     */
    inline NetworkConnectionAction& WithConnectionDirection(const char* value) { SetConnectionDirection(value); return *this;}


    /**
     * <p>Local port information of the connection.</p>
     */
    inline const LocalPortDetails& GetLocalPortDetails() const{ return m_localPortDetails; }

    /**
     * <p>Local port information of the connection.</p>
     */
    inline bool LocalPortDetailsHasBeenSet() const { return m_localPortDetailsHasBeenSet; }

    /**
     * <p>Local port information of the connection.</p>
     */
    inline void SetLocalPortDetails(const LocalPortDetails& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = value; }

    /**
     * <p>Local port information of the connection.</p>
     */
    inline void SetLocalPortDetails(LocalPortDetails&& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = std::move(value); }

    /**
     * <p>Local port information of the connection.</p>
     */
    inline NetworkConnectionAction& WithLocalPortDetails(const LocalPortDetails& value) { SetLocalPortDetails(value); return *this;}

    /**
     * <p>Local port information of the connection.</p>
     */
    inline NetworkConnectionAction& WithLocalPortDetails(LocalPortDetails&& value) { SetLocalPortDetails(std::move(value)); return *this;}


    /**
     * <p>Network connection protocol.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>Network connection protocol.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>Network connection protocol.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>Network connection protocol.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>Network connection protocol.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>Network connection protocol.</p>
     */
    inline NetworkConnectionAction& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>Network connection protocol.</p>
     */
    inline NetworkConnectionAction& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>Network connection protocol.</p>
     */
    inline NetworkConnectionAction& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>Remote IP information of the connection.</p>
     */
    inline const RemoteIpDetails& GetRemoteIpDetails() const{ return m_remoteIpDetails; }

    /**
     * <p>Remote IP information of the connection.</p>
     */
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }

    /**
     * <p>Remote IP information of the connection.</p>
     */
    inline void SetRemoteIpDetails(const RemoteIpDetails& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = value; }

    /**
     * <p>Remote IP information of the connection.</p>
     */
    inline void SetRemoteIpDetails(RemoteIpDetails&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::move(value); }

    /**
     * <p>Remote IP information of the connection.</p>
     */
    inline NetworkConnectionAction& WithRemoteIpDetails(const RemoteIpDetails& value) { SetRemoteIpDetails(value); return *this;}

    /**
     * <p>Remote IP information of the connection.</p>
     */
    inline NetworkConnectionAction& WithRemoteIpDetails(RemoteIpDetails&& value) { SetRemoteIpDetails(std::move(value)); return *this;}


    /**
     * <p>Remote port information of the connection.</p>
     */
    inline const RemotePortDetails& GetRemotePortDetails() const{ return m_remotePortDetails; }

    /**
     * <p>Remote port information of the connection.</p>
     */
    inline bool RemotePortDetailsHasBeenSet() const { return m_remotePortDetailsHasBeenSet; }

    /**
     * <p>Remote port information of the connection.</p>
     */
    inline void SetRemotePortDetails(const RemotePortDetails& value) { m_remotePortDetailsHasBeenSet = true; m_remotePortDetails = value; }

    /**
     * <p>Remote port information of the connection.</p>
     */
    inline void SetRemotePortDetails(RemotePortDetails&& value) { m_remotePortDetailsHasBeenSet = true; m_remotePortDetails = std::move(value); }

    /**
     * <p>Remote port information of the connection.</p>
     */
    inline NetworkConnectionAction& WithRemotePortDetails(const RemotePortDetails& value) { SetRemotePortDetails(value); return *this;}

    /**
     * <p>Remote port information of the connection.</p>
     */
    inline NetworkConnectionAction& WithRemotePortDetails(RemotePortDetails&& value) { SetRemotePortDetails(std::move(value)); return *this;}

  private:

    bool m_blocked;
    bool m_blockedHasBeenSet;

    Aws::String m_connectionDirection;
    bool m_connectionDirectionHasBeenSet;

    LocalPortDetails m_localPortDetails;
    bool m_localPortDetailsHasBeenSet;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet;

    RemoteIpDetails m_remoteIpDetails;
    bool m_remoteIpDetailsHasBeenSet;

    RemotePortDetails m_remotePortDetails;
    bool m_remotePortDetailsHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
