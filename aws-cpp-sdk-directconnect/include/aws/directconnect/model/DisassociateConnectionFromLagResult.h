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
#include <aws/directconnect/model/ConnectionState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/directconnect/model/HasLogicalRedundancy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Tag.h>
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
   * <p>Information about an AWS Direct Connect connection.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Connection">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DisassociateConnectionFromLagResult
  {
  public:
    DisassociateConnectionFromLagResult();
    DisassociateConnectionFromLagResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DisassociateConnectionFromLagResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the AWS account that owns the connection.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The ID of the AWS account that owns the connection.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccount = value; }

    /**
     * <p>The ID of the AWS account that owns the connection.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccount = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the connection.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccount.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }

    /**
     * <p>The ID of the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The name of the connection.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionName = value; }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionName = std::move(value); }

    /**
     * <p>The name of the connection.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionName.assign(value); }

    /**
     * <p>The name of the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}


    /**
     * <p>The state of the connection. The following are the possible values:</p> <ul>
     * <li> <p> <code>ordering</code>: The initial state of a hosted connection
     * provisioned on an interconnect. The connection stays in the ordering state until
     * the owner of the hosted connection confirms or declines the connection
     * order.</p> </li> <li> <p> <code>requested</code>: The initial state of a
     * standard connection. The connection stays in the requested state until the
     * Letter of Authorization (LOA) is sent to the customer.</p> </li> <li> <p>
     * <code>pending</code>: The connection has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is up
     * and the connection is ready for use.</p> </li> <li> <p> <code>down</code>: The
     * network link is down.</p> </li> <li> <p> <code>deleting</code>: The connection
     * is being deleted.</p> </li> <li> <p> <code>deleted</code>: The connection has
     * been deleted.</p> </li> <li> <p> <code>rejected</code>: A hosted connection in
     * the <code>ordering</code> state enters the <code>rejected</code> state if it is
     * deleted by the customer.</p> </li> <li> <p> <code>unknown</code>: The state of
     * the connection is not available.</p> </li> </ul>
     */
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }

    /**
     * <p>The state of the connection. The following are the possible values:</p> <ul>
     * <li> <p> <code>ordering</code>: The initial state of a hosted connection
     * provisioned on an interconnect. The connection stays in the ordering state until
     * the owner of the hosted connection confirms or declines the connection
     * order.</p> </li> <li> <p> <code>requested</code>: The initial state of a
     * standard connection. The connection stays in the requested state until the
     * Letter of Authorization (LOA) is sent to the customer.</p> </li> <li> <p>
     * <code>pending</code>: The connection has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is up
     * and the connection is ready for use.</p> </li> <li> <p> <code>down</code>: The
     * network link is down.</p> </li> <li> <p> <code>deleting</code>: The connection
     * is being deleted.</p> </li> <li> <p> <code>deleted</code>: The connection has
     * been deleted.</p> </li> <li> <p> <code>rejected</code>: A hosted connection in
     * the <code>ordering</code> state enters the <code>rejected</code> state if it is
     * deleted by the customer.</p> </li> <li> <p> <code>unknown</code>: The state of
     * the connection is not available.</p> </li> </ul>
     */
    inline void SetConnectionState(const ConnectionState& value) { m_connectionState = value; }

    /**
     * <p>The state of the connection. The following are the possible values:</p> <ul>
     * <li> <p> <code>ordering</code>: The initial state of a hosted connection
     * provisioned on an interconnect. The connection stays in the ordering state until
     * the owner of the hosted connection confirms or declines the connection
     * order.</p> </li> <li> <p> <code>requested</code>: The initial state of a
     * standard connection. The connection stays in the requested state until the
     * Letter of Authorization (LOA) is sent to the customer.</p> </li> <li> <p>
     * <code>pending</code>: The connection has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is up
     * and the connection is ready for use.</p> </li> <li> <p> <code>down</code>: The
     * network link is down.</p> </li> <li> <p> <code>deleting</code>: The connection
     * is being deleted.</p> </li> <li> <p> <code>deleted</code>: The connection has
     * been deleted.</p> </li> <li> <p> <code>rejected</code>: A hosted connection in
     * the <code>ordering</code> state enters the <code>rejected</code> state if it is
     * deleted by the customer.</p> </li> <li> <p> <code>unknown</code>: The state of
     * the connection is not available.</p> </li> </ul>
     */
    inline void SetConnectionState(ConnectionState&& value) { m_connectionState = std::move(value); }

    /**
     * <p>The state of the connection. The following are the possible values:</p> <ul>
     * <li> <p> <code>ordering</code>: The initial state of a hosted connection
     * provisioned on an interconnect. The connection stays in the ordering state until
     * the owner of the hosted connection confirms or declines the connection
     * order.</p> </li> <li> <p> <code>requested</code>: The initial state of a
     * standard connection. The connection stays in the requested state until the
     * Letter of Authorization (LOA) is sent to the customer.</p> </li> <li> <p>
     * <code>pending</code>: The connection has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is up
     * and the connection is ready for use.</p> </li> <li> <p> <code>down</code>: The
     * network link is down.</p> </li> <li> <p> <code>deleting</code>: The connection
     * is being deleted.</p> </li> <li> <p> <code>deleted</code>: The connection has
     * been deleted.</p> </li> <li> <p> <code>rejected</code>: A hosted connection in
     * the <code>ordering</code> state enters the <code>rejected</code> state if it is
     * deleted by the customer.</p> </li> <li> <p> <code>unknown</code>: The state of
     * the connection is not available.</p> </li> </ul>
     */
    inline DisassociateConnectionFromLagResult& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}

    /**
     * <p>The state of the connection. The following are the possible values:</p> <ul>
     * <li> <p> <code>ordering</code>: The initial state of a hosted connection
     * provisioned on an interconnect. The connection stays in the ordering state until
     * the owner of the hosted connection confirms or declines the connection
     * order.</p> </li> <li> <p> <code>requested</code>: The initial state of a
     * standard connection. The connection stays in the requested state until the
     * Letter of Authorization (LOA) is sent to the customer.</p> </li> <li> <p>
     * <code>pending</code>: The connection has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is up
     * and the connection is ready for use.</p> </li> <li> <p> <code>down</code>: The
     * network link is down.</p> </li> <li> <p> <code>deleting</code>: The connection
     * is being deleted.</p> </li> <li> <p> <code>deleted</code>: The connection has
     * been deleted.</p> </li> <li> <p> <code>rejected</code>: A hosted connection in
     * the <code>ordering</code> state enters the <code>rejected</code> state if it is
     * deleted by the customer.</p> </li> <li> <p> <code>unknown</code>: The state of
     * the connection is not available.</p> </li> </ul>
     */
    inline DisassociateConnectionFromLagResult& WithConnectionState(ConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}


    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_region = value; }

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline void SetRegion(const char* value) { m_region.assign(value); }

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline DisassociateConnectionFromLagResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline DisassociateConnectionFromLagResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region where the connection is located.</p>
     */
    inline DisassociateConnectionFromLagResult& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The location of the connection.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the connection.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The location of the connection.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The location of the connection.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The location of the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The location of the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline const Aws::String& GetBandwidth() const{ return m_bandwidth; }

    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline void SetBandwidth(const Aws::String& value) { m_bandwidth = value; }

    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline void SetBandwidth(Aws::String&& value) { m_bandwidth = std::move(value); }

    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline void SetBandwidth(const char* value) { m_bandwidth.assign(value); }

    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithBandwidth(const Aws::String& value) { SetBandwidth(value); return *this;}

    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithBandwidth(Aws::String&& value) { SetBandwidth(std::move(value)); return *this;}

    /**
     * <p>The bandwidth of the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithBandwidth(const char* value) { SetBandwidth(value); return *this;}


    /**
     * <p>The ID of the VLAN.</p>
     */
    inline int GetVlan() const{ return m_vlan; }

    /**
     * <p>The ID of the VLAN.</p>
     */
    inline void SetVlan(int value) { m_vlan = value; }

    /**
     * <p>The ID of the VLAN.</p>
     */
    inline DisassociateConnectionFromLagResult& WithVlan(int value) { SetVlan(value); return *this;}


    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline const Aws::String& GetPartnerName() const{ return m_partnerName; }

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline void SetPartnerName(const Aws::String& value) { m_partnerName = value; }

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline void SetPartnerName(Aws::String&& value) { m_partnerName = std::move(value); }

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline void SetPartnerName(const char* value) { m_partnerName.assign(value); }

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithPartnerName(const Aws::String& value) { SetPartnerName(value); return *this;}

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithPartnerName(Aws::String&& value) { SetPartnerName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithPartnerName(const char* value) { SetPartnerName(value); return *this;}


    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline const Aws::Utils::DateTime& GetLoaIssueTime() const{ return m_loaIssueTime; }

    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline void SetLoaIssueTime(const Aws::Utils::DateTime& value) { m_loaIssueTime = value; }

    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline void SetLoaIssueTime(Aws::Utils::DateTime&& value) { m_loaIssueTime = std::move(value); }

    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithLoaIssueTime(const Aws::Utils::DateTime& value) { SetLoaIssueTime(value); return *this;}

    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithLoaIssueTime(Aws::Utils::DateTime&& value) { SetLoaIssueTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the LAG.</p>
     */
    inline const Aws::String& GetLagId() const{ return m_lagId; }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(const Aws::String& value) { m_lagId = value; }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(Aws::String&& value) { m_lagId = std::move(value); }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(const char* value) { m_lagId.assign(value); }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline DisassociateConnectionFromLagResult& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}

    /**
     * <p>The ID of the LAG.</p>
     */
    inline DisassociateConnectionFromLagResult& WithLagId(Aws::String&& value) { SetLagId(std::move(value)); return *this;}

    /**
     * <p>The ID of the LAG.</p>
     */
    inline DisassociateConnectionFromLagResult& WithLagId(const char* value) { SetLagId(value); return *this;}


    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline const Aws::String& GetAwsDevice() const{ return m_awsDevice; }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline void SetAwsDevice(const Aws::String& value) { m_awsDevice = value; }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline void SetAwsDevice(Aws::String&& value) { m_awsDevice = std::move(value); }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline void SetAwsDevice(const char* value) { m_awsDevice.assign(value); }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline DisassociateConnectionFromLagResult& WithAwsDevice(const Aws::String& value) { SetAwsDevice(value); return *this;}

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline DisassociateConnectionFromLagResult& WithAwsDevice(Aws::String&& value) { SetAwsDevice(std::move(value)); return *this;}

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline DisassociateConnectionFromLagResult& WithAwsDevice(const char* value) { SetAwsDevice(value); return *this;}


    /**
     * <p>Indicates whether jumbo frames (9001 MTU) are supported.</p>
     */
    inline bool GetJumboFrameCapable() const{ return m_jumboFrameCapable; }

    /**
     * <p>Indicates whether jumbo frames (9001 MTU) are supported.</p>
     */
    inline void SetJumboFrameCapable(bool value) { m_jumboFrameCapable = value; }

    /**
     * <p>Indicates whether jumbo frames (9001 MTU) are supported.</p>
     */
    inline DisassociateConnectionFromLagResult& WithJumboFrameCapable(bool value) { SetJumboFrameCapable(value); return *this;}


    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const{ return m_awsDeviceV2; }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline void SetAwsDeviceV2(const Aws::String& value) { m_awsDeviceV2 = value; }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline void SetAwsDeviceV2(Aws::String&& value) { m_awsDeviceV2 = std::move(value); }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline void SetAwsDeviceV2(const char* value) { m_awsDeviceV2.assign(value); }

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline DisassociateConnectionFromLagResult& WithAwsDeviceV2(const Aws::String& value) { SetAwsDeviceV2(value); return *this;}

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline DisassociateConnectionFromLagResult& WithAwsDeviceV2(Aws::String&& value) { SetAwsDeviceV2(std::move(value)); return *this;}

    /**
     * <p>The Direct Connect endpoint on which the physical connection terminates.</p>
     */
    inline DisassociateConnectionFromLagResult& WithAwsDeviceV2(const char* value) { SetAwsDeviceV2(value); return *this;}


    /**
     * <p>Indicates whether the connection supports a secondary BGP peer in the same
     * address family (IPv4/IPv6).</p>
     */
    inline const HasLogicalRedundancy& GetHasLogicalRedundancy() const{ return m_hasLogicalRedundancy; }

    /**
     * <p>Indicates whether the connection supports a secondary BGP peer in the same
     * address family (IPv4/IPv6).</p>
     */
    inline void SetHasLogicalRedundancy(const HasLogicalRedundancy& value) { m_hasLogicalRedundancy = value; }

    /**
     * <p>Indicates whether the connection supports a secondary BGP peer in the same
     * address family (IPv4/IPv6).</p>
     */
    inline void SetHasLogicalRedundancy(HasLogicalRedundancy&& value) { m_hasLogicalRedundancy = std::move(value); }

    /**
     * <p>Indicates whether the connection supports a secondary BGP peer in the same
     * address family (IPv4/IPv6).</p>
     */
    inline DisassociateConnectionFromLagResult& WithHasLogicalRedundancy(const HasLogicalRedundancy& value) { SetHasLogicalRedundancy(value); return *this;}

    /**
     * <p>Indicates whether the connection supports a secondary BGP peer in the same
     * address family (IPv4/IPv6).</p>
     */
    inline DisassociateConnectionFromLagResult& WithHasLogicalRedundancy(HasLogicalRedundancy&& value) { SetHasLogicalRedundancy(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the connection.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the connection.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Any tags assigned to the connection.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the connection.</p>
     */
    inline DisassociateConnectionFromLagResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ownerAccount;

    Aws::String m_connectionId;

    Aws::String m_connectionName;

    ConnectionState m_connectionState;

    Aws::String m_region;

    Aws::String m_location;

    Aws::String m_bandwidth;

    int m_vlan;

    Aws::String m_partnerName;

    Aws::Utils::DateTime m_loaIssueTime;

    Aws::String m_lagId;

    Aws::String m_awsDevice;

    bool m_jumboFrameCapable;

    Aws::String m_awsDeviceV2;

    HasLogicalRedundancy m_hasLogicalRedundancy;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
