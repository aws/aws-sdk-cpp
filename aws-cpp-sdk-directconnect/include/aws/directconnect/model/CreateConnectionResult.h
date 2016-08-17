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
#include <aws/directconnect/model/ConnectionState.h>
#include <aws/core/utils/DateTime.h>

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
   * <p>A connection represents the physical network connection between the AWS
   * Direct Connect location and the customer.</p>
   */
  class AWS_DIRECTCONNECT_API CreateConnectionResult
  {
  public:
    CreateConnectionResult();
    CreateConnectionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateConnectionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The AWS account that will own the new connection.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The AWS account that will own the new connection.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccount = value; }

    /**
     * <p>The AWS account that will own the new connection.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccount = value; }

    /**
     * <p>The AWS account that will own the new connection.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccount.assign(value); }

    /**
     * <p>The AWS account that will own the new connection.</p>
     */
    inline CreateConnectionResult& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The AWS account that will own the new connection.</p>
     */
    inline CreateConnectionResult& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The AWS account that will own the new connection.</p>
     */
    inline CreateConnectionResult& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}

    
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }

    
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = value; }

    
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }

    
    inline CreateConnectionResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    
    inline CreateConnectionResult& WithConnectionId(Aws::String&& value) { SetConnectionId(value); return *this;}

    
    inline CreateConnectionResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}

    
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    
    inline void SetConnectionName(const Aws::String& value) { m_connectionName = value; }

    
    inline void SetConnectionName(Aws::String&& value) { m_connectionName = value; }

    
    inline void SetConnectionName(const char* value) { m_connectionName.assign(value); }

    
    inline CreateConnectionResult& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    
    inline CreateConnectionResult& WithConnectionName(Aws::String&& value) { SetConnectionName(value); return *this;}

    
    inline CreateConnectionResult& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}

    
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }

    
    inline void SetConnectionState(const ConnectionState& value) { m_connectionState = value; }

    
    inline void SetConnectionState(ConnectionState&& value) { m_connectionState = value; }

    
    inline CreateConnectionResult& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}

    
    inline CreateConnectionResult& WithConnectionState(ConnectionState&& value) { SetConnectionState(value); return *this;}

    
    inline const Aws::String& GetRegion() const{ return m_region; }

    
    inline void SetRegion(const Aws::String& value) { m_region = value; }

    
    inline void SetRegion(Aws::String&& value) { m_region = value; }

    
    inline void SetRegion(const char* value) { m_region.assign(value); }

    
    inline CreateConnectionResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    
    inline CreateConnectionResult& WithRegion(Aws::String&& value) { SetRegion(value); return *this;}

    
    inline CreateConnectionResult& WithRegion(const char* value) { SetRegion(value); return *this;}

    
    inline const Aws::String& GetLocation() const{ return m_location; }

    
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    
    inline void SetLocation(Aws::String&& value) { m_location = value; }

    
    inline void SetLocation(const char* value) { m_location.assign(value); }

    
    inline CreateConnectionResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    
    inline CreateConnectionResult& WithLocation(Aws::String&& value) { SetLocation(value); return *this;}

    
    inline CreateConnectionResult& WithLocation(const char* value) { SetLocation(value); return *this;}

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline const Aws::String& GetBandwidth() const{ return m_bandwidth; }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline void SetBandwidth(const Aws::String& value) { m_bandwidth = value; }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline void SetBandwidth(Aws::String&& value) { m_bandwidth = value; }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline void SetBandwidth(const char* value) { m_bandwidth.assign(value); }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline CreateConnectionResult& WithBandwidth(const Aws::String& value) { SetBandwidth(value); return *this;}

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline CreateConnectionResult& WithBandwidth(Aws::String&& value) { SetBandwidth(value); return *this;}

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline CreateConnectionResult& WithBandwidth(const char* value) { SetBandwidth(value); return *this;}

    
    inline int GetVlan() const{ return m_vlan; }

    
    inline void SetVlan(int value) { m_vlan = value; }

    
    inline CreateConnectionResult& WithVlan(int value) { SetVlan(value); return *this;}

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
    inline void SetPartnerName(Aws::String&& value) { m_partnerName = value; }

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline void SetPartnerName(const char* value) { m_partnerName.assign(value); }

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline CreateConnectionResult& WithPartnerName(const Aws::String& value) { SetPartnerName(value); return *this;}

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline CreateConnectionResult& WithPartnerName(Aws::String&& value) { SetPartnerName(value); return *this;}

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline CreateConnectionResult& WithPartnerName(const char* value) { SetPartnerName(value); return *this;}

    /**
     * <p>The time of the most recent call to DescribeConnectionLoa for this
     * Connection.</p>
     */
    inline const Aws::Utils::DateTime& GetLoaIssueTime() const{ return m_loaIssueTime; }

    /**
     * <p>The time of the most recent call to DescribeConnectionLoa for this
     * Connection.</p>
     */
    inline void SetLoaIssueTime(const Aws::Utils::DateTime& value) { m_loaIssueTime = value; }

    /**
     * <p>The time of the most recent call to DescribeConnectionLoa for this
     * Connection.</p>
     */
    inline void SetLoaIssueTime(Aws::Utils::DateTime&& value) { m_loaIssueTime = value; }

    /**
     * <p>The time of the most recent call to DescribeConnectionLoa for this
     * Connection.</p>
     */
    inline CreateConnectionResult& WithLoaIssueTime(const Aws::Utils::DateTime& value) { SetLoaIssueTime(value); return *this;}

    /**
     * <p>The time of the most recent call to DescribeConnectionLoa for this
     * Connection.</p>
     */
    inline CreateConnectionResult& WithLoaIssueTime(Aws::Utils::DateTime&& value) { SetLoaIssueTime(value); return *this;}

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
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
