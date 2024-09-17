/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/LagState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/HasLogicalRedundancy.h>
#include <aws/directconnect/model/Connection.h>
#include <aws/directconnect/model/Tag.h>
#include <aws/directconnect/model/MacSecKey.h>
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
  class Lag
  {
  public:
    AWS_DIRECTCONNECT_API Lag();
    AWS_DIRECTCONNECT_API Lag(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Lag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG. The
     * possible values are 1Gbps, 10Gbps, 100Gbps, or 400 Gbps.. </p>
     */
    inline const Aws::String& GetConnectionsBandwidth() const{ return m_connectionsBandwidth; }
    inline bool ConnectionsBandwidthHasBeenSet() const { return m_connectionsBandwidthHasBeenSet; }
    inline void SetConnectionsBandwidth(const Aws::String& value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth = value; }
    inline void SetConnectionsBandwidth(Aws::String&& value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth = std::move(value); }
    inline void SetConnectionsBandwidth(const char* value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth.assign(value); }
    inline Lag& WithConnectionsBandwidth(const Aws::String& value) { SetConnectionsBandwidth(value); return *this;}
    inline Lag& WithConnectionsBandwidth(Aws::String&& value) { SetConnectionsBandwidth(std::move(value)); return *this;}
    inline Lag& WithConnectionsBandwidth(const char* value) { SetConnectionsBandwidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of physical dedicated connections initially provisioned and
     * bundled by the LAG. You can have a maximum of four connections when the port
     * speed is 1 Gbps or 10 Gbps, or two when the port speed is 100 Gbps or 400
     * Gbps.</p>
     */
    inline int GetNumberOfConnections() const{ return m_numberOfConnections; }
    inline bool NumberOfConnectionsHasBeenSet() const { return m_numberOfConnectionsHasBeenSet; }
    inline void SetNumberOfConnections(int value) { m_numberOfConnectionsHasBeenSet = true; m_numberOfConnections = value; }
    inline Lag& WithNumberOfConnections(int value) { SetNumberOfConnections(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the LAG.</p>
     */
    inline const Aws::String& GetLagId() const{ return m_lagId; }
    inline bool LagIdHasBeenSet() const { return m_lagIdHasBeenSet; }
    inline void SetLagId(const Aws::String& value) { m_lagIdHasBeenSet = true; m_lagId = value; }
    inline void SetLagId(Aws::String&& value) { m_lagIdHasBeenSet = true; m_lagId = std::move(value); }
    inline void SetLagId(const char* value) { m_lagIdHasBeenSet = true; m_lagId.assign(value); }
    inline Lag& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}
    inline Lag& WithLagId(Aws::String&& value) { SetLagId(std::move(value)); return *this;}
    inline Lag& WithLagId(const char* value) { SetLagId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the LAG.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }
    inline Lag& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}
    inline Lag& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}
    inline Lag& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the LAG.</p>
     */
    inline const Aws::String& GetLagName() const{ return m_lagName; }
    inline bool LagNameHasBeenSet() const { return m_lagNameHasBeenSet; }
    inline void SetLagName(const Aws::String& value) { m_lagNameHasBeenSet = true; m_lagName = value; }
    inline void SetLagName(Aws::String&& value) { m_lagNameHasBeenSet = true; m_lagName = std::move(value); }
    inline void SetLagName(const char* value) { m_lagNameHasBeenSet = true; m_lagName.assign(value); }
    inline Lag& WithLagName(const Aws::String& value) { SetLagName(value); return *this;}
    inline Lag& WithLagName(Aws::String&& value) { SetLagName(std::move(value)); return *this;}
    inline Lag& WithLagName(const char* value) { SetLagName(value); return *this;}
    ///@}

    ///@{
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
    inline bool LagStateHasBeenSet() const { return m_lagStateHasBeenSet; }
    inline void SetLagState(const LagState& value) { m_lagStateHasBeenSet = true; m_lagState = value; }
    inline void SetLagState(LagState&& value) { m_lagStateHasBeenSet = true; m_lagState = std::move(value); }
    inline Lag& WithLagState(const LagState& value) { SetLagState(value); return *this;}
    inline Lag& WithLagState(LagState&& value) { SetLagState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the LAG.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline Lag& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline Lag& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline Lag& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the connection is located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline Lag& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline Lag& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline Lag& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of physical dedicated connections that must be operational
     * for the LAG itself to be operational.</p>
     */
    inline int GetMinimumLinks() const{ return m_minimumLinks; }
    inline bool MinimumLinksHasBeenSet() const { return m_minimumLinksHasBeenSet; }
    inline void SetMinimumLinks(int value) { m_minimumLinksHasBeenSet = true; m_minimumLinks = value; }
    inline Lag& WithMinimumLinks(int value) { SetMinimumLinks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that hosts the LAG.</p>
     */
    inline const Aws::String& GetAwsDevice() const{ return m_awsDevice; }
    inline bool AwsDeviceHasBeenSet() const { return m_awsDeviceHasBeenSet; }
    inline void SetAwsDevice(const Aws::String& value) { m_awsDeviceHasBeenSet = true; m_awsDevice = value; }
    inline void SetAwsDevice(Aws::String&& value) { m_awsDeviceHasBeenSet = true; m_awsDevice = std::move(value); }
    inline void SetAwsDevice(const char* value) { m_awsDeviceHasBeenSet = true; m_awsDevice.assign(value); }
    inline Lag& WithAwsDevice(const Aws::String& value) { SetAwsDevice(value); return *this;}
    inline Lag& WithAwsDevice(Aws::String&& value) { SetAwsDevice(std::move(value)); return *this;}
    inline Lag& WithAwsDevice(const char* value) { SetAwsDevice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that hosts the LAG.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const{ return m_awsDeviceV2; }
    inline bool AwsDeviceV2HasBeenSet() const { return m_awsDeviceV2HasBeenSet; }
    inline void SetAwsDeviceV2(const Aws::String& value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2 = value; }
    inline void SetAwsDeviceV2(Aws::String&& value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2 = std::move(value); }
    inline void SetAwsDeviceV2(const char* value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2.assign(value); }
    inline Lag& WithAwsDeviceV2(const Aws::String& value) { SetAwsDeviceV2(value); return *this;}
    inline Lag& WithAwsDeviceV2(Aws::String&& value) { SetAwsDeviceV2(std::move(value)); return *this;}
    inline Lag& WithAwsDeviceV2(const char* value) { SetAwsDeviceV2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that terminates the logical connection. This
     * device might be different than the device that terminates the physical
     * connection.</p>
     */
    inline const Aws::String& GetAwsLogicalDeviceId() const{ return m_awsLogicalDeviceId; }
    inline bool AwsLogicalDeviceIdHasBeenSet() const { return m_awsLogicalDeviceIdHasBeenSet; }
    inline void SetAwsLogicalDeviceId(const Aws::String& value) { m_awsLogicalDeviceIdHasBeenSet = true; m_awsLogicalDeviceId = value; }
    inline void SetAwsLogicalDeviceId(Aws::String&& value) { m_awsLogicalDeviceIdHasBeenSet = true; m_awsLogicalDeviceId = std::move(value); }
    inline void SetAwsLogicalDeviceId(const char* value) { m_awsLogicalDeviceIdHasBeenSet = true; m_awsLogicalDeviceId.assign(value); }
    inline Lag& WithAwsLogicalDeviceId(const Aws::String& value) { SetAwsLogicalDeviceId(value); return *this;}
    inline Lag& WithAwsLogicalDeviceId(Aws::String&& value) { SetAwsLogicalDeviceId(std::move(value)); return *this;}
    inline Lag& WithAwsLogicalDeviceId(const char* value) { SetAwsLogicalDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connections bundled by the LAG.</p>
     */
    inline const Aws::Vector<Connection>& GetConnections() const{ return m_connections; }
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }
    inline void SetConnections(const Aws::Vector<Connection>& value) { m_connectionsHasBeenSet = true; m_connections = value; }
    inline void SetConnections(Aws::Vector<Connection>&& value) { m_connectionsHasBeenSet = true; m_connections = std::move(value); }
    inline Lag& WithConnections(const Aws::Vector<Connection>& value) { SetConnections(value); return *this;}
    inline Lag& WithConnections(Aws::Vector<Connection>&& value) { SetConnections(std::move(value)); return *this;}
    inline Lag& AddConnections(const Connection& value) { m_connectionsHasBeenSet = true; m_connections.push_back(value); return *this; }
    inline Lag& AddConnections(Connection&& value) { m_connectionsHasBeenSet = true; m_connections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the LAG can host other connections.</p>
     */
    inline bool GetAllowsHostedConnections() const{ return m_allowsHostedConnections; }
    inline bool AllowsHostedConnectionsHasBeenSet() const { return m_allowsHostedConnectionsHasBeenSet; }
    inline void SetAllowsHostedConnections(bool value) { m_allowsHostedConnectionsHasBeenSet = true; m_allowsHostedConnections = value; }
    inline Lag& WithAllowsHostedConnections(bool value) { SetAllowsHostedConnections(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether jumbo frames are supported.</p>
     */
    inline bool GetJumboFrameCapable() const{ return m_jumboFrameCapable; }
    inline bool JumboFrameCapableHasBeenSet() const { return m_jumboFrameCapableHasBeenSet; }
    inline void SetJumboFrameCapable(bool value) { m_jumboFrameCapableHasBeenSet = true; m_jumboFrameCapable = value; }
    inline Lag& WithJumboFrameCapable(bool value) { SetJumboFrameCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the LAG supports a secondary BGP peer in the same address
     * family (IPv4/IPv6).</p>
     */
    inline const HasLogicalRedundancy& GetHasLogicalRedundancy() const{ return m_hasLogicalRedundancy; }
    inline bool HasLogicalRedundancyHasBeenSet() const { return m_hasLogicalRedundancyHasBeenSet; }
    inline void SetHasLogicalRedundancy(const HasLogicalRedundancy& value) { m_hasLogicalRedundancyHasBeenSet = true; m_hasLogicalRedundancy = value; }
    inline void SetHasLogicalRedundancy(HasLogicalRedundancy&& value) { m_hasLogicalRedundancyHasBeenSet = true; m_hasLogicalRedundancy = std::move(value); }
    inline Lag& WithHasLogicalRedundancy(const HasLogicalRedundancy& value) { SetHasLogicalRedundancy(value); return *this;}
    inline Lag& WithHasLogicalRedundancy(HasLogicalRedundancy&& value) { SetHasLogicalRedundancy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the LAG.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Lag& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Lag& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Lag& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Lag& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the service provider associated with the LAG.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }
    inline Lag& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}
    inline Lag& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}
    inline Lag& WithProviderName(const char* value) { SetProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the LAG supports MAC Security (MACsec).</p>
     */
    inline bool GetMacSecCapable() const{ return m_macSecCapable; }
    inline bool MacSecCapableHasBeenSet() const { return m_macSecCapableHasBeenSet; }
    inline void SetMacSecCapable(bool value) { m_macSecCapableHasBeenSet = true; m_macSecCapable = value; }
    inline Lag& WithMacSecCapable(bool value) { SetMacSecCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The LAG MAC Security (MACsec) encryption mode.</p> <p>The valid values are
     * <code>no_encrypt</code>, <code>should_encrypt</code>, and
     * <code>must_encrypt</code>.</p>
     */
    inline const Aws::String& GetEncryptionMode() const{ return m_encryptionMode; }
    inline bool EncryptionModeHasBeenSet() const { return m_encryptionModeHasBeenSet; }
    inline void SetEncryptionMode(const Aws::String& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = value; }
    inline void SetEncryptionMode(Aws::String&& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = std::move(value); }
    inline void SetEncryptionMode(const char* value) { m_encryptionModeHasBeenSet = true; m_encryptionMode.assign(value); }
    inline Lag& WithEncryptionMode(const Aws::String& value) { SetEncryptionMode(value); return *this;}
    inline Lag& WithEncryptionMode(Aws::String&& value) { SetEncryptionMode(std::move(value)); return *this;}
    inline Lag& WithEncryptionMode(const char* value) { SetEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC Security (MACsec) security keys associated with the LAG.</p>
     */
    inline const Aws::Vector<MacSecKey>& GetMacSecKeys() const{ return m_macSecKeys; }
    inline bool MacSecKeysHasBeenSet() const { return m_macSecKeysHasBeenSet; }
    inline void SetMacSecKeys(const Aws::Vector<MacSecKey>& value) { m_macSecKeysHasBeenSet = true; m_macSecKeys = value; }
    inline void SetMacSecKeys(Aws::Vector<MacSecKey>&& value) { m_macSecKeysHasBeenSet = true; m_macSecKeys = std::move(value); }
    inline Lag& WithMacSecKeys(const Aws::Vector<MacSecKey>& value) { SetMacSecKeys(value); return *this;}
    inline Lag& WithMacSecKeys(Aws::Vector<MacSecKey>&& value) { SetMacSecKeys(std::move(value)); return *this;}
    inline Lag& AddMacSecKeys(const MacSecKey& value) { m_macSecKeysHasBeenSet = true; m_macSecKeys.push_back(value); return *this; }
    inline Lag& AddMacSecKeys(MacSecKey&& value) { m_macSecKeysHasBeenSet = true; m_macSecKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline Lag& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline Lag& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline Lag& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionsBandwidth;
    bool m_connectionsBandwidthHasBeenSet = false;

    int m_numberOfConnections;
    bool m_numberOfConnectionsHasBeenSet = false;

    Aws::String m_lagId;
    bool m_lagIdHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_lagName;
    bool m_lagNameHasBeenSet = false;

    LagState m_lagState;
    bool m_lagStateHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    int m_minimumLinks;
    bool m_minimumLinksHasBeenSet = false;

    Aws::String m_awsDevice;
    bool m_awsDeviceHasBeenSet = false;

    Aws::String m_awsDeviceV2;
    bool m_awsDeviceV2HasBeenSet = false;

    Aws::String m_awsLogicalDeviceId;
    bool m_awsLogicalDeviceIdHasBeenSet = false;

    Aws::Vector<Connection> m_connections;
    bool m_connectionsHasBeenSet = false;

    bool m_allowsHostedConnections;
    bool m_allowsHostedConnectionsHasBeenSet = false;

    bool m_jumboFrameCapable;
    bool m_jumboFrameCapableHasBeenSet = false;

    HasLogicalRedundancy m_hasLogicalRedundancy;
    bool m_hasLogicalRedundancyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    bool m_macSecCapable;
    bool m_macSecCapableHasBeenSet = false;

    Aws::String m_encryptionMode;
    bool m_encryptionModeHasBeenSet = false;

    Aws::Vector<MacSecKey> m_macSecKeys;
    bool m_macSecKeysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
