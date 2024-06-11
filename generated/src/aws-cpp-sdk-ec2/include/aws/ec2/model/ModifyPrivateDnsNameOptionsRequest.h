/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/HostnameType.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyPrivateDnsNameOptionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyPrivateDnsNameOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyPrivateDnsNameOptions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyPrivateDnsNameOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline ModifyPrivateDnsNameOptionsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ModifyPrivateDnsNameOptionsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ModifyPrivateDnsNameOptionsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hostname for EC2 instances. For IPv4 only subnets, an instance
     * DNS name must be based on the instance IPv4 address. For IPv6 only subnets, an
     * instance DNS name must be based on the instance ID. For dual-stack subnets, you
     * can specify whether DNS names use the instance IPv4 address or the instance
     * ID.</p>
     */
    inline const HostnameType& GetPrivateDnsHostnameType() const{ return m_privateDnsHostnameType; }
    inline bool PrivateDnsHostnameTypeHasBeenSet() const { return m_privateDnsHostnameTypeHasBeenSet; }
    inline void SetPrivateDnsHostnameType(const HostnameType& value) { m_privateDnsHostnameTypeHasBeenSet = true; m_privateDnsHostnameType = value; }
    inline void SetPrivateDnsHostnameType(HostnameType&& value) { m_privateDnsHostnameTypeHasBeenSet = true; m_privateDnsHostnameType = std::move(value); }
    inline ModifyPrivateDnsNameOptionsRequest& WithPrivateDnsHostnameType(const HostnameType& value) { SetPrivateDnsHostnameType(value); return *this;}
    inline ModifyPrivateDnsNameOptionsRequest& WithPrivateDnsHostnameType(HostnameType&& value) { SetPrivateDnsHostnameType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p>
     */
    inline bool GetEnableResourceNameDnsARecord() const{ return m_enableResourceNameDnsARecord; }
    inline bool EnableResourceNameDnsARecordHasBeenSet() const { return m_enableResourceNameDnsARecordHasBeenSet; }
    inline void SetEnableResourceNameDnsARecord(bool value) { m_enableResourceNameDnsARecordHasBeenSet = true; m_enableResourceNameDnsARecord = value; }
    inline ModifyPrivateDnsNameOptionsRequest& WithEnableResourceNameDnsARecord(bool value) { SetEnableResourceNameDnsARecord(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p>
     */
    inline bool GetEnableResourceNameDnsAAAARecord() const{ return m_enableResourceNameDnsAAAARecord; }
    inline bool EnableResourceNameDnsAAAARecordHasBeenSet() const { return m_enableResourceNameDnsAAAARecordHasBeenSet; }
    inline void SetEnableResourceNameDnsAAAARecord(bool value) { m_enableResourceNameDnsAAAARecordHasBeenSet = true; m_enableResourceNameDnsAAAARecord = value; }
    inline ModifyPrivateDnsNameOptionsRequest& WithEnableResourceNameDnsAAAARecord(bool value) { SetEnableResourceNameDnsAAAARecord(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    HostnameType m_privateDnsHostnameType;
    bool m_privateDnsHostnameTypeHasBeenSet = false;

    bool m_enableResourceNameDnsARecord;
    bool m_enableResourceNameDnsARecordHasBeenSet = false;

    bool m_enableResourceNameDnsAAAARecord;
    bool m_enableResourceNameDnsAAAARecordHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
