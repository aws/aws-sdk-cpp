/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/LagState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Connection.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Describes a link aggregation group (LAG). A LAG is a connection that uses the
   * Link Aggregation Control Protocol (LACP) to logically aggregate a bundle of
   * physical connections. Like an interconnect, it can host other connections. All
   * connections in a LAG must terminate on the same physical AWS Direct Connect
   * endpoint, and must be the same bandwidth.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Lag">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API Lag
  {
  public:
    Lag();
    Lag(const Aws::Utils::Json::JsonValue& jsonValue);
    Lag& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG.</p>
     * <p>Available values: 1Gbps, 10Gbps</p>
     */
    inline const Aws::String& GetConnectionsBandwidth() const{ return m_connectionsBandwidth; }

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG.</p>
     * <p>Available values: 1Gbps, 10Gbps</p>
     */
    inline void SetConnectionsBandwidth(const Aws::String& value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth = value; }

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG.</p>
     * <p>Available values: 1Gbps, 10Gbps</p>
     */
    inline void SetConnectionsBandwidth(Aws::String&& value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth = value; }

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG.</p>
     * <p>Available values: 1Gbps, 10Gbps</p>
     */
    inline void SetConnectionsBandwidth(const char* value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth.assign(value); }

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG.</p>
     * <p>Available values: 1Gbps, 10Gbps</p>
     */
    inline Lag& WithConnectionsBandwidth(const Aws::String& value) { SetConnectionsBandwidth(value); return *this;}

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG.</p>
     * <p>Available values: 1Gbps, 10Gbps</p>
     */
    inline Lag& WithConnectionsBandwidth(Aws::String&& value) { SetConnectionsBandwidth(value); return *this;}

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG.</p>
     * <p>Available values: 1Gbps, 10Gbps</p>
     */
    inline Lag& WithConnectionsBandwidth(const char* value) { SetConnectionsBandwidth(value); return *this;}

    /**
     * <p>The number of physical connections bundled by the LAG, up to a maximum of
     * 10.</p>
     */
    inline int GetNumberOfConnections() const{ return m_numberOfConnections; }

    /**
     * <p>The number of physical connections bundled by the LAG, up to a maximum of
     * 10.</p>
     */
    inline void SetNumberOfConnections(int value) { m_numberOfConnectionsHasBeenSet = true; m_numberOfConnections = value; }

    /**
     * <p>The number of physical connections bundled by the LAG, up to a maximum of
     * 10.</p>
     */
    inline Lag& WithNumberOfConnections(int value) { SetNumberOfConnections(value); return *this;}

    
    inline const Aws::String& GetLagId() const{ return m_lagId; }

    
    inline void SetLagId(const Aws::String& value) { m_lagIdHasBeenSet = true; m_lagId = value; }

    
    inline void SetLagId(Aws::String&& value) { m_lagIdHasBeenSet = true; m_lagId = value; }

    
    inline void SetLagId(const char* value) { m_lagIdHasBeenSet = true; m_lagId.assign(value); }

    
    inline Lag& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}

    
    inline Lag& WithLagId(Aws::String&& value) { SetLagId(value); return *this;}

    
    inline Lag& WithLagId(const char* value) { SetLagId(value); return *this;}

    /**
     * <p>The owner of the LAG.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The owner of the LAG.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The owner of the LAG.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The owner of the LAG.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The owner of the LAG.</p>
     */
    inline Lag& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The owner of the LAG.</p>
     */
    inline Lag& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The owner of the LAG.</p>
     */
    inline Lag& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The name of the LAG.</p>
     */
    inline const Aws::String& GetLagName() const{ return m_lagName; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline void SetLagName(const Aws::String& value) { m_lagNameHasBeenSet = true; m_lagName = value; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline void SetLagName(Aws::String&& value) { m_lagNameHasBeenSet = true; m_lagName = value; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline void SetLagName(const char* value) { m_lagNameHasBeenSet = true; m_lagName.assign(value); }

    /**
     * <p>The name of the LAG.</p>
     */
    inline Lag& WithLagName(const Aws::String& value) { SetLagName(value); return *this;}

    /**
     * <p>The name of the LAG.</p>
     */
    inline Lag& WithLagName(Aws::String&& value) { SetLagName(value); return *this;}

    /**
     * <p>The name of the LAG.</p>
     */
    inline Lag& WithLagName(const char* value) { SetLagName(value); return *this;}

    
    inline const LagState& GetLagState() const{ return m_lagState; }

    
    inline void SetLagState(const LagState& value) { m_lagStateHasBeenSet = true; m_lagState = value; }

    
    inline void SetLagState(LagState&& value) { m_lagStateHasBeenSet = true; m_lagState = value; }

    
    inline Lag& WithLagState(const LagState& value) { SetLagState(value); return *this;}

    
    inline Lag& WithLagState(LagState&& value) { SetLagState(value); return *this;}

    
    inline const Aws::String& GetLocation() const{ return m_location; }

    
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = value; }

    
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    
    inline Lag& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    
    inline Lag& WithLocation(Aws::String&& value) { SetLocation(value); return *this;}

    
    inline Lag& WithLocation(const char* value) { SetLocation(value); return *this;}

    
    inline const Aws::String& GetRegion() const{ return m_region; }

    
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = value; }

    
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    
    inline Lag& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    
    inline Lag& WithRegion(Aws::String&& value) { SetRegion(value); return *this;}

    
    inline Lag& WithRegion(const char* value) { SetRegion(value); return *this;}

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational. If the number of operational connections drops
     * below this setting, the LAG state changes to <code>down</code>. This value can
     * help to ensure that a LAG is not overutilized if a significant number of its
     * bundled connections go down.</p>
     */
    inline int GetMinimumLinks() const{ return m_minimumLinks; }

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational. If the number of operational connections drops
     * below this setting, the LAG state changes to <code>down</code>. This value can
     * help to ensure that a LAG is not overutilized if a significant number of its
     * bundled connections go down.</p>
     */
    inline void SetMinimumLinks(int value) { m_minimumLinksHasBeenSet = true; m_minimumLinks = value; }

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational. If the number of operational connections drops
     * below this setting, the LAG state changes to <code>down</code>. This value can
     * help to ensure that a LAG is not overutilized if a significant number of its
     * bundled connections go down.</p>
     */
    inline Lag& WithMinimumLinks(int value) { SetMinimumLinks(value); return *this;}

    /**
     * <p>The AWS Direct Connection endpoint that hosts the LAG.</p>
     */
    inline const Aws::String& GetAwsDevice() const{ return m_awsDevice; }

    /**
     * <p>The AWS Direct Connection endpoint that hosts the LAG.</p>
     */
    inline void SetAwsDevice(const Aws::String& value) { m_awsDeviceHasBeenSet = true; m_awsDevice = value; }

    /**
     * <p>The AWS Direct Connection endpoint that hosts the LAG.</p>
     */
    inline void SetAwsDevice(Aws::String&& value) { m_awsDeviceHasBeenSet = true; m_awsDevice = value; }

    /**
     * <p>The AWS Direct Connection endpoint that hosts the LAG.</p>
     */
    inline void SetAwsDevice(const char* value) { m_awsDeviceHasBeenSet = true; m_awsDevice.assign(value); }

    /**
     * <p>The AWS Direct Connection endpoint that hosts the LAG.</p>
     */
    inline Lag& WithAwsDevice(const Aws::String& value) { SetAwsDevice(value); return *this;}

    /**
     * <p>The AWS Direct Connection endpoint that hosts the LAG.</p>
     */
    inline Lag& WithAwsDevice(Aws::String&& value) { SetAwsDevice(value); return *this;}

    /**
     * <p>The AWS Direct Connection endpoint that hosts the LAG.</p>
     */
    inline Lag& WithAwsDevice(const char* value) { SetAwsDevice(value); return *this;}

    /**
     * <p>A list of connections bundled by this LAG.</p>
     */
    inline const Aws::Vector<Connection>& GetConnections() const{ return m_connections; }

    /**
     * <p>A list of connections bundled by this LAG.</p>
     */
    inline void SetConnections(const Aws::Vector<Connection>& value) { m_connectionsHasBeenSet = true; m_connections = value; }

    /**
     * <p>A list of connections bundled by this LAG.</p>
     */
    inline void SetConnections(Aws::Vector<Connection>&& value) { m_connectionsHasBeenSet = true; m_connections = value; }

    /**
     * <p>A list of connections bundled by this LAG.</p>
     */
    inline Lag& WithConnections(const Aws::Vector<Connection>& value) { SetConnections(value); return *this;}

    /**
     * <p>A list of connections bundled by this LAG.</p>
     */
    inline Lag& WithConnections(Aws::Vector<Connection>&& value) { SetConnections(value); return *this;}

    /**
     * <p>A list of connections bundled by this LAG.</p>
     */
    inline Lag& AddConnections(const Connection& value) { m_connectionsHasBeenSet = true; m_connections.push_back(value); return *this; }

    /**
     * <p>A list of connections bundled by this LAG.</p>
     */
    inline Lag& AddConnections(Connection&& value) { m_connectionsHasBeenSet = true; m_connections.push_back(value); return *this; }

    /**
     * <p>Indicates whether the LAG can host other connections.</p> <note> <p>This is
     * intended for use by AWS Direct Connect partners only.</p> </note>
     */
    inline bool GetAllowsHostedConnections() const{ return m_allowsHostedConnections; }

    /**
     * <p>Indicates whether the LAG can host other connections.</p> <note> <p>This is
     * intended for use by AWS Direct Connect partners only.</p> </note>
     */
    inline void SetAllowsHostedConnections(bool value) { m_allowsHostedConnectionsHasBeenSet = true; m_allowsHostedConnections = value; }

    /**
     * <p>Indicates whether the LAG can host other connections.</p> <note> <p>This is
     * intended for use by AWS Direct Connect partners only.</p> </note>
     */
    inline Lag& WithAllowsHostedConnections(bool value) { SetAllowsHostedConnections(value); return *this;}

  private:
    Aws::String m_connectionsBandwidth;
    bool m_connectionsBandwidthHasBeenSet;
    int m_numberOfConnections;
    bool m_numberOfConnectionsHasBeenSet;
    Aws::String m_lagId;
    bool m_lagIdHasBeenSet;
    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet;
    Aws::String m_lagName;
    bool m_lagNameHasBeenSet;
    LagState m_lagState;
    bool m_lagStateHasBeenSet;
    Aws::String m_location;
    bool m_locationHasBeenSet;
    Aws::String m_region;
    bool m_regionHasBeenSet;
    int m_minimumLinks;
    bool m_minimumLinksHasBeenSet;
    Aws::String m_awsDevice;
    bool m_awsDeviceHasBeenSet;
    Aws::Vector<Connection> m_connections;
    bool m_connectionsHasBeenSet;
    bool m_allowsHostedConnections;
    bool m_allowsHostedConnectionsHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
