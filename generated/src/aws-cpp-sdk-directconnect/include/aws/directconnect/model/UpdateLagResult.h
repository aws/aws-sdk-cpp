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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
   * <p>Information about a link aggregation group (LAG).</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Lag">AWS
   * API Reference</a></p>
   */
  class UpdateLagResult
  {
  public:
    AWS_DIRECTCONNECT_API UpdateLagResult() = default;
    AWS_DIRECTCONNECT_API UpdateLagResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API UpdateLagResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG. The
     * possible values are 1Gbps, 10Gbps, 100Gbps, or 400 Gbps.. </p>
     */
    inline const Aws::String& GetConnectionsBandwidth() const { return m_connectionsBandwidth; }
    template<typename ConnectionsBandwidthT = Aws::String>
    void SetConnectionsBandwidth(ConnectionsBandwidthT&& value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth = std::forward<ConnectionsBandwidthT>(value); }
    template<typename ConnectionsBandwidthT = Aws::String>
    UpdateLagResult& WithConnectionsBandwidth(ConnectionsBandwidthT&& value) { SetConnectionsBandwidth(std::forward<ConnectionsBandwidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of physical dedicated connections initially provisioned and
     * bundled by the LAG. You can have a maximum of four connections when the port
     * speed is 1 Gbps or 10 Gbps, or two when the port speed is 100 Gbps or 400
     * Gbps.</p>
     */
    inline int GetNumberOfConnections() const { return m_numberOfConnections; }
    inline void SetNumberOfConnections(int value) { m_numberOfConnectionsHasBeenSet = true; m_numberOfConnections = value; }
    inline UpdateLagResult& WithNumberOfConnections(int value) { SetNumberOfConnections(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the LAG.</p>
     */
    inline const Aws::String& GetLagId() const { return m_lagId; }
    template<typename LagIdT = Aws::String>
    void SetLagId(LagIdT&& value) { m_lagIdHasBeenSet = true; m_lagId = std::forward<LagIdT>(value); }
    template<typename LagIdT = Aws::String>
    UpdateLagResult& WithLagId(LagIdT&& value) { SetLagId(std::forward<LagIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the LAG.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    UpdateLagResult& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the LAG.</p>
     */
    inline const Aws::String& GetLagName() const { return m_lagName; }
    template<typename LagNameT = Aws::String>
    void SetLagName(LagNameT&& value) { m_lagNameHasBeenSet = true; m_lagName = std::forward<LagNameT>(value); }
    template<typename LagNameT = Aws::String>
    UpdateLagResult& WithLagName(LagNameT&& value) { SetLagName(std::forward<LagNameT>(value)); return *this;}
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
    inline LagState GetLagState() const { return m_lagState; }
    inline void SetLagState(LagState value) { m_lagStateHasBeenSet = true; m_lagState = value; }
    inline UpdateLagResult& WithLagState(LagState value) { SetLagState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the LAG.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    UpdateLagResult& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the connection is located.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    UpdateLagResult& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of physical dedicated connections that must be operational
     * for the LAG itself to be operational.</p>
     */
    inline int GetMinimumLinks() const { return m_minimumLinks; }
    inline void SetMinimumLinks(int value) { m_minimumLinksHasBeenSet = true; m_minimumLinks = value; }
    inline UpdateLagResult& WithMinimumLinks(int value) { SetMinimumLinks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that hosts the LAG.</p>
     */
    inline const Aws::String& GetAwsDevice() const { return m_awsDevice; }
    template<typename AwsDeviceT = Aws::String>
    void SetAwsDevice(AwsDeviceT&& value) { m_awsDeviceHasBeenSet = true; m_awsDevice = std::forward<AwsDeviceT>(value); }
    template<typename AwsDeviceT = Aws::String>
    UpdateLagResult& WithAwsDevice(AwsDeviceT&& value) { SetAwsDevice(std::forward<AwsDeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that hosts the LAG.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const { return m_awsDeviceV2; }
    template<typename AwsDeviceV2T = Aws::String>
    void SetAwsDeviceV2(AwsDeviceV2T&& value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2 = std::forward<AwsDeviceV2T>(value); }
    template<typename AwsDeviceV2T = Aws::String>
    UpdateLagResult& WithAwsDeviceV2(AwsDeviceV2T&& value) { SetAwsDeviceV2(std::forward<AwsDeviceV2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that terminates the logical connection. This
     * device might be different than the device that terminates the physical
     * connection.</p>
     */
    inline const Aws::String& GetAwsLogicalDeviceId() const { return m_awsLogicalDeviceId; }
    template<typename AwsLogicalDeviceIdT = Aws::String>
    void SetAwsLogicalDeviceId(AwsLogicalDeviceIdT&& value) { m_awsLogicalDeviceIdHasBeenSet = true; m_awsLogicalDeviceId = std::forward<AwsLogicalDeviceIdT>(value); }
    template<typename AwsLogicalDeviceIdT = Aws::String>
    UpdateLagResult& WithAwsLogicalDeviceId(AwsLogicalDeviceIdT&& value) { SetAwsLogicalDeviceId(std::forward<AwsLogicalDeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connections bundled by the LAG.</p>
     */
    inline const Aws::Vector<Connection>& GetConnections() const { return m_connections; }
    template<typename ConnectionsT = Aws::Vector<Connection>>
    void SetConnections(ConnectionsT&& value) { m_connectionsHasBeenSet = true; m_connections = std::forward<ConnectionsT>(value); }
    template<typename ConnectionsT = Aws::Vector<Connection>>
    UpdateLagResult& WithConnections(ConnectionsT&& value) { SetConnections(std::forward<ConnectionsT>(value)); return *this;}
    template<typename ConnectionsT = Connection>
    UpdateLagResult& AddConnections(ConnectionsT&& value) { m_connectionsHasBeenSet = true; m_connections.emplace_back(std::forward<ConnectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the LAG can host other connections.</p>
     */
    inline bool GetAllowsHostedConnections() const { return m_allowsHostedConnections; }
    inline void SetAllowsHostedConnections(bool value) { m_allowsHostedConnectionsHasBeenSet = true; m_allowsHostedConnections = value; }
    inline UpdateLagResult& WithAllowsHostedConnections(bool value) { SetAllowsHostedConnections(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether jumbo frames are supported.</p>
     */
    inline bool GetJumboFrameCapable() const { return m_jumboFrameCapable; }
    inline void SetJumboFrameCapable(bool value) { m_jumboFrameCapableHasBeenSet = true; m_jumboFrameCapable = value; }
    inline UpdateLagResult& WithJumboFrameCapable(bool value) { SetJumboFrameCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the LAG supports a secondary BGP peer in the same address
     * family (IPv4/IPv6).</p>
     */
    inline HasLogicalRedundancy GetHasLogicalRedundancy() const { return m_hasLogicalRedundancy; }
    inline void SetHasLogicalRedundancy(HasLogicalRedundancy value) { m_hasLogicalRedundancyHasBeenSet = true; m_hasLogicalRedundancy = value; }
    inline UpdateLagResult& WithHasLogicalRedundancy(HasLogicalRedundancy value) { SetHasLogicalRedundancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the LAG.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    UpdateLagResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    UpdateLagResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the service provider associated with the LAG.</p>
     */
    inline const Aws::String& GetProviderName() const { return m_providerName; }
    template<typename ProviderNameT = Aws::String>
    void SetProviderName(ProviderNameT&& value) { m_providerNameHasBeenSet = true; m_providerName = std::forward<ProviderNameT>(value); }
    template<typename ProviderNameT = Aws::String>
    UpdateLagResult& WithProviderName(ProviderNameT&& value) { SetProviderName(std::forward<ProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the LAG supports MAC Security (MACsec).</p>
     */
    inline bool GetMacSecCapable() const { return m_macSecCapable; }
    inline void SetMacSecCapable(bool value) { m_macSecCapableHasBeenSet = true; m_macSecCapable = value; }
    inline UpdateLagResult& WithMacSecCapable(bool value) { SetMacSecCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The LAG MAC Security (MACsec) encryption mode.</p> <p>The valid values are
     * <code>no_encrypt</code>, <code>should_encrypt</code>, and
     * <code>must_encrypt</code>.</p>
     */
    inline const Aws::String& GetEncryptionMode() const { return m_encryptionMode; }
    template<typename EncryptionModeT = Aws::String>
    void SetEncryptionMode(EncryptionModeT&& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = std::forward<EncryptionModeT>(value); }
    template<typename EncryptionModeT = Aws::String>
    UpdateLagResult& WithEncryptionMode(EncryptionModeT&& value) { SetEncryptionMode(std::forward<EncryptionModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC Security (MACsec) security keys associated with the LAG.</p>
     */
    inline const Aws::Vector<MacSecKey>& GetMacSecKeys() const { return m_macSecKeys; }
    template<typename MacSecKeysT = Aws::Vector<MacSecKey>>
    void SetMacSecKeys(MacSecKeysT&& value) { m_macSecKeysHasBeenSet = true; m_macSecKeys = std::forward<MacSecKeysT>(value); }
    template<typename MacSecKeysT = Aws::Vector<MacSecKey>>
    UpdateLagResult& WithMacSecKeys(MacSecKeysT&& value) { SetMacSecKeys(std::forward<MacSecKeysT>(value)); return *this;}
    template<typename MacSecKeysT = MacSecKey>
    UpdateLagResult& AddMacSecKeys(MacSecKeysT&& value) { m_macSecKeysHasBeenSet = true; m_macSecKeys.emplace_back(std::forward<MacSecKeysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateLagResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionsBandwidth;
    bool m_connectionsBandwidthHasBeenSet = false;

    int m_numberOfConnections{0};
    bool m_numberOfConnectionsHasBeenSet = false;

    Aws::String m_lagId;
    bool m_lagIdHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_lagName;
    bool m_lagNameHasBeenSet = false;

    LagState m_lagState{LagState::NOT_SET};
    bool m_lagStateHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    int m_minimumLinks{0};
    bool m_minimumLinksHasBeenSet = false;

    Aws::String m_awsDevice;
    bool m_awsDeviceHasBeenSet = false;

    Aws::String m_awsDeviceV2;
    bool m_awsDeviceV2HasBeenSet = false;

    Aws::String m_awsLogicalDeviceId;
    bool m_awsLogicalDeviceIdHasBeenSet = false;

    Aws::Vector<Connection> m_connections;
    bool m_connectionsHasBeenSet = false;

    bool m_allowsHostedConnections{false};
    bool m_allowsHostedConnectionsHasBeenSet = false;

    bool m_jumboFrameCapable{false};
    bool m_jumboFrameCapableHasBeenSet = false;

    HasLogicalRedundancy m_hasLogicalRedundancy{HasLogicalRedundancy::NOT_SET};
    bool m_hasLogicalRedundancyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    bool m_macSecCapable{false};
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
