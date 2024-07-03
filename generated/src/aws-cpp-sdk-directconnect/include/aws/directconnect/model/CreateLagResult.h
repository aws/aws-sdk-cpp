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
  class CreateLagResult
  {
  public:
    AWS_DIRECTCONNECT_API CreateLagResult();
    AWS_DIRECTCONNECT_API CreateLagResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API CreateLagResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG. The
     * possible values are 1Gbps, 10Gbps, 100Gbps, or 400 Gbps.. </p>
     */
    inline const Aws::String& GetConnectionsBandwidth() const{ return m_connectionsBandwidth; }
    inline void SetConnectionsBandwidth(const Aws::String& value) { m_connectionsBandwidth = value; }
    inline void SetConnectionsBandwidth(Aws::String&& value) { m_connectionsBandwidth = std::move(value); }
    inline void SetConnectionsBandwidth(const char* value) { m_connectionsBandwidth.assign(value); }
    inline CreateLagResult& WithConnectionsBandwidth(const Aws::String& value) { SetConnectionsBandwidth(value); return *this;}
    inline CreateLagResult& WithConnectionsBandwidth(Aws::String&& value) { SetConnectionsBandwidth(std::move(value)); return *this;}
    inline CreateLagResult& WithConnectionsBandwidth(const char* value) { SetConnectionsBandwidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of physical dedicated connections initially provisioned and
     * bundled by the LAG. You can have a maximum of four connections when the port
     * speed is 1 Gbps or 10 Gbps, or two when the port speed is 100 Gbps or 400
     * Gbps.</p>
     */
    inline int GetNumberOfConnections() const{ return m_numberOfConnections; }
    inline void SetNumberOfConnections(int value) { m_numberOfConnections = value; }
    inline CreateLagResult& WithNumberOfConnections(int value) { SetNumberOfConnections(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the LAG.</p>
     */
    inline const Aws::String& GetLagId() const{ return m_lagId; }
    inline void SetLagId(const Aws::String& value) { m_lagId = value; }
    inline void SetLagId(Aws::String&& value) { m_lagId = std::move(value); }
    inline void SetLagId(const char* value) { m_lagId.assign(value); }
    inline CreateLagResult& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}
    inline CreateLagResult& WithLagId(Aws::String&& value) { SetLagId(std::move(value)); return *this;}
    inline CreateLagResult& WithLagId(const char* value) { SetLagId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the LAG.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccount = value; }
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccount = std::move(value); }
    inline void SetOwnerAccount(const char* value) { m_ownerAccount.assign(value); }
    inline CreateLagResult& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}
    inline CreateLagResult& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}
    inline CreateLagResult& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the LAG.</p>
     */
    inline const Aws::String& GetLagName() const{ return m_lagName; }
    inline void SetLagName(const Aws::String& value) { m_lagName = value; }
    inline void SetLagName(Aws::String&& value) { m_lagName = std::move(value); }
    inline void SetLagName(const char* value) { m_lagName.assign(value); }
    inline CreateLagResult& WithLagName(const Aws::String& value) { SetLagName(value); return *this;}
    inline CreateLagResult& WithLagName(Aws::String&& value) { SetLagName(std::move(value)); return *this;}
    inline CreateLagResult& WithLagName(const char* value) { SetLagName(value); return *this;}
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
    inline void SetLagState(const LagState& value) { m_lagState = value; }
    inline void SetLagState(LagState&& value) { m_lagState = std::move(value); }
    inline CreateLagResult& WithLagState(const LagState& value) { SetLagState(value); return *this;}
    inline CreateLagResult& WithLagState(LagState&& value) { SetLagState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the LAG.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline CreateLagResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline CreateLagResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline CreateLagResult& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the connection is located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline void SetRegion(const Aws::String& value) { m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_region.assign(value); }
    inline CreateLagResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline CreateLagResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline CreateLagResult& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of physical dedicated connections that must be operational
     * for the LAG itself to be operational.</p>
     */
    inline int GetMinimumLinks() const{ return m_minimumLinks; }
    inline void SetMinimumLinks(int value) { m_minimumLinks = value; }
    inline CreateLagResult& WithMinimumLinks(int value) { SetMinimumLinks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that hosts the LAG.</p>
     */
    inline const Aws::String& GetAwsDevice() const{ return m_awsDevice; }
    inline void SetAwsDevice(const Aws::String& value) { m_awsDevice = value; }
    inline void SetAwsDevice(Aws::String&& value) { m_awsDevice = std::move(value); }
    inline void SetAwsDevice(const char* value) { m_awsDevice.assign(value); }
    inline CreateLagResult& WithAwsDevice(const Aws::String& value) { SetAwsDevice(value); return *this;}
    inline CreateLagResult& WithAwsDevice(Aws::String&& value) { SetAwsDevice(std::move(value)); return *this;}
    inline CreateLagResult& WithAwsDevice(const char* value) { SetAwsDevice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that hosts the LAG.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const{ return m_awsDeviceV2; }
    inline void SetAwsDeviceV2(const Aws::String& value) { m_awsDeviceV2 = value; }
    inline void SetAwsDeviceV2(Aws::String&& value) { m_awsDeviceV2 = std::move(value); }
    inline void SetAwsDeviceV2(const char* value) { m_awsDeviceV2.assign(value); }
    inline CreateLagResult& WithAwsDeviceV2(const Aws::String& value) { SetAwsDeviceV2(value); return *this;}
    inline CreateLagResult& WithAwsDeviceV2(Aws::String&& value) { SetAwsDeviceV2(std::move(value)); return *this;}
    inline CreateLagResult& WithAwsDeviceV2(const char* value) { SetAwsDeviceV2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Direct Connect endpoint that terminates the logical connection. This
     * device might be different than the device that terminates the physical
     * connection.</p>
     */
    inline const Aws::String& GetAwsLogicalDeviceId() const{ return m_awsLogicalDeviceId; }
    inline void SetAwsLogicalDeviceId(const Aws::String& value) { m_awsLogicalDeviceId = value; }
    inline void SetAwsLogicalDeviceId(Aws::String&& value) { m_awsLogicalDeviceId = std::move(value); }
    inline void SetAwsLogicalDeviceId(const char* value) { m_awsLogicalDeviceId.assign(value); }
    inline CreateLagResult& WithAwsLogicalDeviceId(const Aws::String& value) { SetAwsLogicalDeviceId(value); return *this;}
    inline CreateLagResult& WithAwsLogicalDeviceId(Aws::String&& value) { SetAwsLogicalDeviceId(std::move(value)); return *this;}
    inline CreateLagResult& WithAwsLogicalDeviceId(const char* value) { SetAwsLogicalDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connections bundled by the LAG.</p>
     */
    inline const Aws::Vector<Connection>& GetConnections() const{ return m_connections; }
    inline void SetConnections(const Aws::Vector<Connection>& value) { m_connections = value; }
    inline void SetConnections(Aws::Vector<Connection>&& value) { m_connections = std::move(value); }
    inline CreateLagResult& WithConnections(const Aws::Vector<Connection>& value) { SetConnections(value); return *this;}
    inline CreateLagResult& WithConnections(Aws::Vector<Connection>&& value) { SetConnections(std::move(value)); return *this;}
    inline CreateLagResult& AddConnections(const Connection& value) { m_connections.push_back(value); return *this; }
    inline CreateLagResult& AddConnections(Connection&& value) { m_connections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the LAG can host other connections.</p>
     */
    inline bool GetAllowsHostedConnections() const{ return m_allowsHostedConnections; }
    inline void SetAllowsHostedConnections(bool value) { m_allowsHostedConnections = value; }
    inline CreateLagResult& WithAllowsHostedConnections(bool value) { SetAllowsHostedConnections(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether jumbo frames are supported.</p>
     */
    inline bool GetJumboFrameCapable() const{ return m_jumboFrameCapable; }
    inline void SetJumboFrameCapable(bool value) { m_jumboFrameCapable = value; }
    inline CreateLagResult& WithJumboFrameCapable(bool value) { SetJumboFrameCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the LAG supports a secondary BGP peer in the same address
     * family (IPv4/IPv6).</p>
     */
    inline const HasLogicalRedundancy& GetHasLogicalRedundancy() const{ return m_hasLogicalRedundancy; }
    inline void SetHasLogicalRedundancy(const HasLogicalRedundancy& value) { m_hasLogicalRedundancy = value; }
    inline void SetHasLogicalRedundancy(HasLogicalRedundancy&& value) { m_hasLogicalRedundancy = std::move(value); }
    inline CreateLagResult& WithHasLogicalRedundancy(const HasLogicalRedundancy& value) { SetHasLogicalRedundancy(value); return *this;}
    inline CreateLagResult& WithHasLogicalRedundancy(HasLogicalRedundancy&& value) { SetHasLogicalRedundancy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the LAG.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline CreateLagResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateLagResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateLagResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline CreateLagResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the service provider associated with the LAG.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }
    inline void SetProviderName(const Aws::String& value) { m_providerName = value; }
    inline void SetProviderName(Aws::String&& value) { m_providerName = std::move(value); }
    inline void SetProviderName(const char* value) { m_providerName.assign(value); }
    inline CreateLagResult& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}
    inline CreateLagResult& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}
    inline CreateLagResult& WithProviderName(const char* value) { SetProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the LAG supports MAC Security (MACsec).</p>
     */
    inline bool GetMacSecCapable() const{ return m_macSecCapable; }
    inline void SetMacSecCapable(bool value) { m_macSecCapable = value; }
    inline CreateLagResult& WithMacSecCapable(bool value) { SetMacSecCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The LAG MAC Security (MACsec) encryption mode.</p> <p>The valid values are
     * <code>no_encrypt</code>, <code>should_encrypt</code>, and
     * <code>must_encrypt</code>.</p>
     */
    inline const Aws::String& GetEncryptionMode() const{ return m_encryptionMode; }
    inline void SetEncryptionMode(const Aws::String& value) { m_encryptionMode = value; }
    inline void SetEncryptionMode(Aws::String&& value) { m_encryptionMode = std::move(value); }
    inline void SetEncryptionMode(const char* value) { m_encryptionMode.assign(value); }
    inline CreateLagResult& WithEncryptionMode(const Aws::String& value) { SetEncryptionMode(value); return *this;}
    inline CreateLagResult& WithEncryptionMode(Aws::String&& value) { SetEncryptionMode(std::move(value)); return *this;}
    inline CreateLagResult& WithEncryptionMode(const char* value) { SetEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC Security (MACsec) security keys associated with the LAG.</p>
     */
    inline const Aws::Vector<MacSecKey>& GetMacSecKeys() const{ return m_macSecKeys; }
    inline void SetMacSecKeys(const Aws::Vector<MacSecKey>& value) { m_macSecKeys = value; }
    inline void SetMacSecKeys(Aws::Vector<MacSecKey>&& value) { m_macSecKeys = std::move(value); }
    inline CreateLagResult& WithMacSecKeys(const Aws::Vector<MacSecKey>& value) { SetMacSecKeys(value); return *this;}
    inline CreateLagResult& WithMacSecKeys(Aws::Vector<MacSecKey>&& value) { SetMacSecKeys(std::move(value)); return *this;}
    inline CreateLagResult& AddMacSecKeys(const MacSecKey& value) { m_macSecKeys.push_back(value); return *this; }
    inline CreateLagResult& AddMacSecKeys(MacSecKey&& value) { m_macSecKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateLagResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateLagResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateLagResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionsBandwidth;

    int m_numberOfConnections;

    Aws::String m_lagId;

    Aws::String m_ownerAccount;

    Aws::String m_lagName;

    LagState m_lagState;

    Aws::String m_location;

    Aws::String m_region;

    int m_minimumLinks;

    Aws::String m_awsDevice;

    Aws::String m_awsDeviceV2;

    Aws::String m_awsLogicalDeviceId;

    Aws::Vector<Connection> m_connections;

    bool m_allowsHostedConnections;

    bool m_jumboFrameCapable;

    HasLogicalRedundancy m_hasLogicalRedundancy;

    Aws::Vector<Tag> m_tags;

    Aws::String m_providerName;

    bool m_macSecCapable;

    Aws::String m_encryptionMode;

    Aws::Vector<MacSecKey> m_macSecKeys;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
