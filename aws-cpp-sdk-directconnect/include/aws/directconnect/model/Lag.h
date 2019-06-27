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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/LagState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/HasLogicalRedundancy.h>
#include <aws/directconnect/model/Connection.h>
#include <aws/directconnect/model/Tag.h>
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
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Information about a link aggregation group (LAG).</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Lag">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API Lag
  {
  public:
    Lag();
    Lag(Aws::Utils::Json::JsonView jsonValue);
    Lag& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG. The
     * possible values are 1Gbps and 10Gbps. </p>
     */
    inline const Aws::String& GetConnectionsBandwidth() const{ return m_connectionsBandwidth; }

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG. The
     * possible values are 1Gbps and 10Gbps. </p>
     */
    inline bool ConnectionsBandwidthHasBeenSet() const { return m_connectionsBandwidthHasBeenSet; }

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG. The
     * possible values are 1Gbps and 10Gbps. </p>
     */
    inline void SetConnectionsBandwidth(const Aws::String& value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth = value; }

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG. The
     * possible values are 1Gbps and 10Gbps. </p>
     */
    inline void SetConnectionsBandwidth(Aws::String&& value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth = std::move(value); }

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG. The
     * possible values are 1Gbps and 10Gbps. </p>
     */
    inline void SetConnectionsBandwidth(const char* value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth.assign(value); }

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG. The
     * possible values are 1Gbps and 10Gbps. </p>
     */
    inline Lag& WithConnectionsBandwidth(const Aws::String& value) { SetConnectionsBandwidth(value); return *this;}

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG. The
     * possible values are 1Gbps and 10Gbps. </p>
     */
    inline Lag& WithConnectionsBandwidth(Aws::String&& value) { SetConnectionsBandwidth(std::move(value)); return *this;}

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG. The
     * possible values are 1Gbps and 10Gbps. </p>
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
    inline bool NumberOfConnectionsHasBeenSet() const { return m_numberOfConnectionsHasBeenSet; }

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


    /**
     * <p>The ID of the LAG.</p>
     */
    inline const Aws::String& GetLagId() const{ return m_lagId; }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline bool LagIdHasBeenSet() const { return m_lagIdHasBeenSet; }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(const Aws::String& value) { m_lagIdHasBeenSet = true; m_lagId = value; }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(Aws::String&& value) { m_lagIdHasBeenSet = true; m_lagId = std::move(value); }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(const char* value) { m_lagIdHasBeenSet = true; m_lagId.assign(value); }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline Lag& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}

    /**
     * <p>The ID of the LAG.</p>
     */
    inline Lag& WithLagId(Aws::String&& value) { SetLagId(std::move(value)); return *this;}

    /**
     * <p>The ID of the LAG.</p>
     */
    inline Lag& WithLagId(const char* value) { SetLagId(value); return *this;}


    /**
     * <p>The ID of the AWS account that owns the LAG.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The ID of the AWS account that owns the LAG.</p>
     */
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

    /**
     * <p>The ID of the AWS account that owns the LAG.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The ID of the AWS account that owns the LAG.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the LAG.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the LAG.</p>
     */
    inline Lag& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the LAG.</p>
     */
    inline Lag& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the LAG.</p>
     */
    inline Lag& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>The name of the LAG.</p>
     */
    inline const Aws::String& GetLagName() const{ return m_lagName; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline bool LagNameHasBeenSet() const { return m_lagNameHasBeenSet; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline void SetLagName(const Aws::String& value) { m_lagNameHasBeenSet = true; m_lagName = value; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline void SetLagName(Aws::String&& value) { m_lagNameHasBeenSet = true; m_lagName = std::move(value); }

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
    inline Lag& WithLagName(Aws::String&& value) { SetLagName(std::move(value)); return *this;}

    /**
     * <p>The name of the LAG.</p>
     */
    inline Lag& WithLagName(const char* value) { SetLagName(value); return *this;}


    /**
     * <p>The state of the LAG. The following are the possible values:</p> <ul> <li>
     * <p> <code>requested</code>: The initial state of a LAG. The LAG stays in the
     * requested state until the Letter of Authorization (LOA) is available.</p> </li>
     * <li> <p> <code>pending</code>: The LAG has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is
     * established and the LAG is ready for use.</p> </li> <li> <p> <code>down</code>:
     * The network link is down.</p> </li> <li> <p> <code>deleting</code>: The LAG is
     * being deleted.</p> </li> <li> <p> <code>deleted</code>: The LAG is deleted.</p>
     * </li> <li> <p> <code>unknown</code>: The state of the LAG is not available.</p>
     * </li> </ul>
     */
    inline const LagState& GetLagState() const{ return m_lagState; }

    /**
     * <p>The state of the LAG. The following are the possible values:</p> <ul> <li>
     * <p> <code>requested</code>: The initial state of a LAG. The LAG stays in the
     * requested state until the Letter of Authorization (LOA) is available.</p> </li>
     * <li> <p> <code>pending</code>: The LAG has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is
     * established and the LAG is ready for use.</p> </li> <li> <p> <code>down</code>:
     * The network link is down.</p> </li> <li> <p> <code>deleting</code>: The LAG is
     * being deleted.</p> </li> <li> <p> <code>deleted</code>: The LAG is deleted.</p>
     * </li> <li> <p> <code>unknown</code>: The state of the LAG is not available.</p>
     * </li> </ul>
     */
    inline bool LagStateHasBeenSet() const { return m_lagStateHasBeenSet; }

    /**
     * <p>The state of the LAG. The following are the possible values:</p> <ul> <li>
     * <p> <code>requested</code>: The initial state of a LAG. The LAG stays in the
     * requested state until the Letter of Authorization (LOA) is available.</p> </li>
     * <li> <p> <code>pending</code>: The LAG has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is
     * established and the LAG is ready for use.</p> </li> <li> <p> <code>down</code>:
     * The network link is down.</p> </li> <li> <p> <code>deleting</code>: The LAG is
     * being deleted.</p> </li> <li> <p> <code>deleted</code>: The LAG is deleted.</p>
     * </li> <li> <p> <code>unknown</code>: The state of the LAG is not available.</p>
     * </li> </ul>
     */
    inline void SetLagState(const LagState& value) { m_lagStateHasBeenSet = true; m_lagState = value; }

    /**
     * <p>The state of the LAG. The following are the possible values:</p> <ul> <li>
     * <p> <code>requested</code>: The initial state of a LAG. The LAG stays in the
     * requested state until the Letter of Authorization (LOA) is available.</p> </li>
     * <li> <p> <code>pending</code>: The LAG has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is
     * established and the LAG is ready for use.</p> </li> <li> <p> <code>down</code>:
     * The network link is down.</p> </li> <li> <p> <code>deleting</code>: The LAG is
     * being deleted.</p> </li> <li> <p> <code>deleted</code>: The LAG is deleted.</p>
     * </li> <li> <p> <code>unknown</code>: The state of the LAG is not available.</p>
     * </li> </ul>
     */
    inline void SetLagState(LagState&& value) { m_lagStateHasBeenSet = true; m_lagState = std::move(value); }

    /**
     * <p>The state of the LAG. The following are the possible values:</p> <ul> <li>
     * <p> <code>requested</code>: The initial state of a LAG. The LAG stays in the
     * requested state until the Letter of Authorization (LOA) is available.</p> </li>
     * <li> <p> <code>pending</code>: The LAG has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is
     * established and the LAG is ready for use.</p> </li> <li> <p> <code>down</code>:
     * The network link is down.</p> </li> <li> <p> <code>deleting</code>: The LAG is
     * being deleted.</p> </li> <li> <p> <code>deleted</code>: The LAG is deleted.</p>
     * </li> <li> <p> <code>unknown</code>: The state of the LAG is not available.</p>
     * </li> </ul>
     */
    inline Lag& WithLagState(const LagState& value) { SetLagState(value); return *this;}

    /**
     * <p>The state of the LAG. The following are the possible values:</p> <ul> <li>
     * <p> <code>requested</code>: The initial state of a LAG. The LAG stays in the
     * requested state until the Letter of Authorization (LOA) is available.</p> </li>
     * <li> <p> <code>pending</code>: The LAG has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is
     * established and the LAG is ready for use.</p> </li> <li> <p> <code>down</code>:
     * The network link is down.</p> </li> <li> <p> <code>deleting</code>: The LAG is
     * being deleted.</p> </li> <li> <p> <code>deleted</code>: The LAG is deleted.</p>
     * </li> <li> <p> <code>unknown</code>: The state of the LAG is not available.</p>
     * </li> </ul>
     */
    inline Lag& WithLagState(LagState&& value) { SetLagState(std::move(value)); return *this;}


    /**
     * <p>The location of the LAG.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the LAG.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The location of the LAG.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The location of the LAG.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The location of the LAG.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The location of the LAG.</p>
     */
    inline Lag& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the LAG.</p>
     */
    inline Lag& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The location of the LAG.</p>
     */
    inline Lag& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline Lag& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline Lag& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline Lag& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational.</p>
     */
    inline int GetMinimumLinks() const{ return m_minimumLinks; }

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational.</p>
     */
    inline bool MinimumLinksHasBeenSet() const { return m_minimumLinksHasBeenSet; }

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational.</p>
     */
    inline void SetMinimumLinks(int value) { m_minimumLinksHasBeenSet = true; m_minimumLinks = value; }

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational.</p>
     */
    inline Lag& WithMinimumLinks(int value) { SetMinimumLinks(value); return *this;}


    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline const Aws::String& GetAwsDevice() const{ return m_awsDevice; }

    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline bool AwsDeviceHasBeenSet() const { return m_awsDeviceHasBeenSet; }

    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline void SetAwsDevice(const Aws::String& value) { m_awsDeviceHasBeenSet = true; m_awsDevice = value; }

    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline void SetAwsDevice(Aws::String&& value) { m_awsDeviceHasBeenSet = true; m_awsDevice = std::move(value); }

    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline void SetAwsDevice(const char* value) { m_awsDeviceHasBeenSet = true; m_awsDevice.assign(value); }

    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline Lag& WithAwsDevice(const Aws::String& value) { SetAwsDevice(value); return *this;}

    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline Lag& WithAwsDevice(Aws::String&& value) { SetAwsDevice(std::move(value)); return *this;}

    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline Lag& WithAwsDevice(const char* value) { SetAwsDevice(value); return *this;}


    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const{ return m_awsDeviceV2; }

    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline bool AwsDeviceV2HasBeenSet() const { return m_awsDeviceV2HasBeenSet; }

    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline void SetAwsDeviceV2(const Aws::String& value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2 = value; }

    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline void SetAwsDeviceV2(Aws::String&& value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2 = std::move(value); }

    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline void SetAwsDeviceV2(const char* value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2.assign(value); }

    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline Lag& WithAwsDeviceV2(const Aws::String& value) { SetAwsDeviceV2(value); return *this;}

    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline Lag& WithAwsDeviceV2(Aws::String&& value) { SetAwsDeviceV2(std::move(value)); return *this;}

    /**
     * <p>The AWS Direct Connect endpoint that hosts the LAG.</p>
     */
    inline Lag& WithAwsDeviceV2(const char* value) { SetAwsDeviceV2(value); return *this;}


    /**
     * <p>The connections bundled by the LAG.</p>
     */
    inline const Aws::Vector<Connection>& GetConnections() const{ return m_connections; }

    /**
     * <p>The connections bundled by the LAG.</p>
     */
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }

    /**
     * <p>The connections bundled by the LAG.</p>
     */
    inline void SetConnections(const Aws::Vector<Connection>& value) { m_connectionsHasBeenSet = true; m_connections = value; }

    /**
     * <p>The connections bundled by the LAG.</p>
     */
    inline void SetConnections(Aws::Vector<Connection>&& value) { m_connectionsHasBeenSet = true; m_connections = std::move(value); }

    /**
     * <p>The connections bundled by the LAG.</p>
     */
    inline Lag& WithConnections(const Aws::Vector<Connection>& value) { SetConnections(value); return *this;}

    /**
     * <p>The connections bundled by the LAG.</p>
     */
    inline Lag& WithConnections(Aws::Vector<Connection>&& value) { SetConnections(std::move(value)); return *this;}

    /**
     * <p>The connections bundled by the LAG.</p>
     */
    inline Lag& AddConnections(const Connection& value) { m_connectionsHasBeenSet = true; m_connections.push_back(value); return *this; }

    /**
     * <p>The connections bundled by the LAG.</p>
     */
    inline Lag& AddConnections(Connection&& value) { m_connectionsHasBeenSet = true; m_connections.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the LAG can host other connections.</p>
     */
    inline bool GetAllowsHostedConnections() const{ return m_allowsHostedConnections; }

    /**
     * <p>Indicates whether the LAG can host other connections.</p>
     */
    inline bool AllowsHostedConnectionsHasBeenSet() const { return m_allowsHostedConnectionsHasBeenSet; }

    /**
     * <p>Indicates whether the LAG can host other connections.</p>
     */
    inline void SetAllowsHostedConnections(bool value) { m_allowsHostedConnectionsHasBeenSet = true; m_allowsHostedConnections = value; }

    /**
     * <p>Indicates whether the LAG can host other connections.</p>
     */
    inline Lag& WithAllowsHostedConnections(bool value) { SetAllowsHostedConnections(value); return *this;}


    /**
     * <p>Indicates whether jumbo frames (9001 MTU) are supported.</p>
     */
    inline bool GetJumboFrameCapable() const{ return m_jumboFrameCapable; }

    /**
     * <p>Indicates whether jumbo frames (9001 MTU) are supported.</p>
     */
    inline bool JumboFrameCapableHasBeenSet() const { return m_jumboFrameCapableHasBeenSet; }

    /**
     * <p>Indicates whether jumbo frames (9001 MTU) are supported.</p>
     */
    inline void SetJumboFrameCapable(bool value) { m_jumboFrameCapableHasBeenSet = true; m_jumboFrameCapable = value; }

    /**
     * <p>Indicates whether jumbo frames (9001 MTU) are supported.</p>
     */
    inline Lag& WithJumboFrameCapable(bool value) { SetJumboFrameCapable(value); return *this;}


    /**
     * <p>Indicates whether the LAG supports a secondary BGP peer in the same address
     * family (IPv4/IPv6).</p>
     */
    inline const HasLogicalRedundancy& GetHasLogicalRedundancy() const{ return m_hasLogicalRedundancy; }

    /**
     * <p>Indicates whether the LAG supports a secondary BGP peer in the same address
     * family (IPv4/IPv6).</p>
     */
    inline bool HasLogicalRedundancyHasBeenSet() const { return m_hasLogicalRedundancyHasBeenSet; }

    /**
     * <p>Indicates whether the LAG supports a secondary BGP peer in the same address
     * family (IPv4/IPv6).</p>
     */
    inline void SetHasLogicalRedundancy(const HasLogicalRedundancy& value) { m_hasLogicalRedundancyHasBeenSet = true; m_hasLogicalRedundancy = value; }

    /**
     * <p>Indicates whether the LAG supports a secondary BGP peer in the same address
     * family (IPv4/IPv6).</p>
     */
    inline void SetHasLogicalRedundancy(HasLogicalRedundancy&& value) { m_hasLogicalRedundancyHasBeenSet = true; m_hasLogicalRedundancy = std::move(value); }

    /**
     * <p>Indicates whether the LAG supports a secondary BGP peer in the same address
     * family (IPv4/IPv6).</p>
     */
    inline Lag& WithHasLogicalRedundancy(const HasLogicalRedundancy& value) { SetHasLogicalRedundancy(value); return *this;}

    /**
     * <p>Indicates whether the LAG supports a secondary BGP peer in the same address
     * family (IPv4/IPv6).</p>
     */
    inline Lag& WithHasLogicalRedundancy(HasLogicalRedundancy&& value) { SetHasLogicalRedundancy(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to link aggregation group (LAG).</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to link aggregation group (LAG).</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to link aggregation group (LAG).</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to link aggregation group (LAG).</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to link aggregation group (LAG).</p>
     */
    inline Lag& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to link aggregation group (LAG).</p>
     */
    inline Lag& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to link aggregation group (LAG).</p>
     */
    inline Lag& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to link aggregation group (LAG).</p>
     */
    inline Lag& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    Aws::String m_awsDeviceV2;
    bool m_awsDeviceV2HasBeenSet;

    Aws::Vector<Connection> m_connections;
    bool m_connectionsHasBeenSet;

    bool m_allowsHostedConnections;
    bool m_allowsHostedConnectionsHasBeenSet;

    bool m_jumboFrameCapable;
    bool m_jumboFrameCapableHasBeenSet;

    HasLogicalRedundancy m_hasLogicalRedundancy;
    bool m_hasLogicalRedundancyHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
