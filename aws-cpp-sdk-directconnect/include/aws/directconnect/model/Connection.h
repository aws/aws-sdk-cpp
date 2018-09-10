﻿/*
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
   * <p>A connection represents the physical network connection between the AWS
   * Direct Connect location and the customer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Connection">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API Connection
  {
  public:
    Connection();
    Connection(Aws::Utils::Json::JsonView jsonValue);
    Connection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account that will own the new connection.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The AWS account that will own the new connection.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The AWS account that will own the new connection.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>The AWS account that will own the new connection.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The AWS account that will own the new connection.</p>
     */
    inline Connection& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The AWS account that will own the new connection.</p>
     */
    inline Connection& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The AWS account that will own the new connection.</p>
     */
    inline Connection& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    
    inline Connection& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    
    inline Connection& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    
    inline Connection& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    
    inline Connection& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    
    inline Connection& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    
    inline Connection& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}


    
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }

    
    inline void SetConnectionState(const ConnectionState& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }

    
    inline void SetConnectionState(ConnectionState&& value) { m_connectionStateHasBeenSet = true; m_connectionState = std::move(value); }

    
    inline Connection& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}

    
    inline Connection& WithConnectionState(ConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}


    
    inline const Aws::String& GetRegion() const{ return m_region; }

    
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    
    inline Connection& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    
    inline Connection& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    
    inline Connection& WithRegion(const char* value) { SetRegion(value); return *this;}


    
    inline const Aws::String& GetLocation() const{ return m_location; }

    
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    
    inline Connection& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    
    inline Connection& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    
    inline Connection& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline const Aws::String& GetBandwidth() const{ return m_bandwidth; }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline void SetBandwidth(const Aws::String& value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline void SetBandwidth(Aws::String&& value) { m_bandwidthHasBeenSet = true; m_bandwidth = std::move(value); }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline void SetBandwidth(const char* value) { m_bandwidthHasBeenSet = true; m_bandwidth.assign(value); }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline Connection& WithBandwidth(const Aws::String& value) { SetBandwidth(value); return *this;}

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline Connection& WithBandwidth(Aws::String&& value) { SetBandwidth(std::move(value)); return *this;}

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline Connection& WithBandwidth(const char* value) { SetBandwidth(value); return *this;}


    
    inline int GetVlan() const{ return m_vlan; }

    
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }

    
    inline Connection& WithVlan(int value) { SetVlan(value); return *this;}


    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline const Aws::String& GetPartnerName() const{ return m_partnerName; }

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline void SetPartnerName(const Aws::String& value) { m_partnerNameHasBeenSet = true; m_partnerName = value; }

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline void SetPartnerName(Aws::String&& value) { m_partnerNameHasBeenSet = true; m_partnerName = std::move(value); }

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline void SetPartnerName(const char* value) { m_partnerNameHasBeenSet = true; m_partnerName.assign(value); }

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline Connection& WithPartnerName(const Aws::String& value) { SetPartnerName(value); return *this;}

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline Connection& WithPartnerName(Aws::String&& value) { SetPartnerName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Direct Connect service provider associated with the
     * connection.</p>
     */
    inline Connection& WithPartnerName(const char* value) { SetPartnerName(value); return *this;}


    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline const Aws::Utils::DateTime& GetLoaIssueTime() const{ return m_loaIssueTime; }

    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline void SetLoaIssueTime(const Aws::Utils::DateTime& value) { m_loaIssueTimeHasBeenSet = true; m_loaIssueTime = value; }

    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline void SetLoaIssueTime(Aws::Utils::DateTime&& value) { m_loaIssueTimeHasBeenSet = true; m_loaIssueTime = std::move(value); }

    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline Connection& WithLoaIssueTime(const Aws::Utils::DateTime& value) { SetLoaIssueTime(value); return *this;}

    /**
     * <p>The time of the most recent call to <a>DescribeLoa</a> for this
     * connection.</p>
     */
    inline Connection& WithLoaIssueTime(Aws::Utils::DateTime&& value) { SetLoaIssueTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetLagId() const{ return m_lagId; }

    
    inline void SetLagId(const Aws::String& value) { m_lagIdHasBeenSet = true; m_lagId = value; }

    
    inline void SetLagId(Aws::String&& value) { m_lagIdHasBeenSet = true; m_lagId = std::move(value); }

    
    inline void SetLagId(const char* value) { m_lagIdHasBeenSet = true; m_lagId.assign(value); }

    
    inline Connection& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}

    
    inline Connection& WithLagId(Aws::String&& value) { SetLagId(std::move(value)); return *this;}

    
    inline Connection& WithLagId(const char* value) { SetLagId(value); return *this;}


    /**
     * <p>Deprecated in favor of awsDeviceV2.</p> <p>The Direct Connection endpoint
     * which the physical connection terminates on.</p>
     */
    inline const Aws::String& GetAwsDevice() const{ return m_awsDevice; }

    /**
     * <p>Deprecated in favor of awsDeviceV2.</p> <p>The Direct Connection endpoint
     * which the physical connection terminates on.</p>
     */
    inline void SetAwsDevice(const Aws::String& value) { m_awsDeviceHasBeenSet = true; m_awsDevice = value; }

    /**
     * <p>Deprecated in favor of awsDeviceV2.</p> <p>The Direct Connection endpoint
     * which the physical connection terminates on.</p>
     */
    inline void SetAwsDevice(Aws::String&& value) { m_awsDeviceHasBeenSet = true; m_awsDevice = std::move(value); }

    /**
     * <p>Deprecated in favor of awsDeviceV2.</p> <p>The Direct Connection endpoint
     * which the physical connection terminates on.</p>
     */
    inline void SetAwsDevice(const char* value) { m_awsDeviceHasBeenSet = true; m_awsDevice.assign(value); }

    /**
     * <p>Deprecated in favor of awsDeviceV2.</p> <p>The Direct Connection endpoint
     * which the physical connection terminates on.</p>
     */
    inline Connection& WithAwsDevice(const Aws::String& value) { SetAwsDevice(value); return *this;}

    /**
     * <p>Deprecated in favor of awsDeviceV2.</p> <p>The Direct Connection endpoint
     * which the physical connection terminates on.</p>
     */
    inline Connection& WithAwsDevice(Aws::String&& value) { SetAwsDevice(std::move(value)); return *this;}

    /**
     * <p>Deprecated in favor of awsDeviceV2.</p> <p>The Direct Connection endpoint
     * which the physical connection terminates on.</p>
     */
    inline Connection& WithAwsDevice(const char* value) { SetAwsDevice(value); return *this;}


    /**
     * <p>The Direct Connection endpoint which the physical connection terminates
     * on.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const{ return m_awsDeviceV2; }

    /**
     * <p>The Direct Connection endpoint which the physical connection terminates
     * on.</p>
     */
    inline void SetAwsDeviceV2(const Aws::String& value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2 = value; }

    /**
     * <p>The Direct Connection endpoint which the physical connection terminates
     * on.</p>
     */
    inline void SetAwsDeviceV2(Aws::String&& value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2 = std::move(value); }

    /**
     * <p>The Direct Connection endpoint which the physical connection terminates
     * on.</p>
     */
    inline void SetAwsDeviceV2(const char* value) { m_awsDeviceV2HasBeenSet = true; m_awsDeviceV2.assign(value); }

    /**
     * <p>The Direct Connection endpoint which the physical connection terminates
     * on.</p>
     */
    inline Connection& WithAwsDeviceV2(const Aws::String& value) { SetAwsDeviceV2(value); return *this;}

    /**
     * <p>The Direct Connection endpoint which the physical connection terminates
     * on.</p>
     */
    inline Connection& WithAwsDeviceV2(Aws::String&& value) { SetAwsDeviceV2(std::move(value)); return *this;}

    /**
     * <p>The Direct Connection endpoint which the physical connection terminates
     * on.</p>
     */
    inline Connection& WithAwsDeviceV2(const char* value) { SetAwsDeviceV2(value); return *this;}

  private:

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet;

    ConnectionState m_connectionState;
    bool m_connectionStateHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_location;
    bool m_locationHasBeenSet;

    Aws::String m_bandwidth;
    bool m_bandwidthHasBeenSet;

    int m_vlan;
    bool m_vlanHasBeenSet;

    Aws::String m_partnerName;
    bool m_partnerNameHasBeenSet;

    Aws::Utils::DateTime m_loaIssueTime;
    bool m_loaIssueTimeHasBeenSet;

    Aws::String m_lagId;
    bool m_lagIdHasBeenSet;

    Aws::String m_awsDevice;
    bool m_awsDeviceHasBeenSet;

    Aws::String m_awsDeviceV2;
    bool m_awsDeviceV2HasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
