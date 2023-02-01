/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/AutoPlacement.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/HostRecovery.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyHostsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyHostsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyHosts"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Specify whether to enable or disable auto-placement.</p>
     */
    inline const AutoPlacement& GetAutoPlacement() const{ return m_autoPlacement; }

    /**
     * <p>Specify whether to enable or disable auto-placement.</p>
     */
    inline bool AutoPlacementHasBeenSet() const { return m_autoPlacementHasBeenSet; }

    /**
     * <p>Specify whether to enable or disable auto-placement.</p>
     */
    inline void SetAutoPlacement(const AutoPlacement& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = value; }

    /**
     * <p>Specify whether to enable or disable auto-placement.</p>
     */
    inline void SetAutoPlacement(AutoPlacement&& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = std::move(value); }

    /**
     * <p>Specify whether to enable or disable auto-placement.</p>
     */
    inline ModifyHostsRequest& WithAutoPlacement(const AutoPlacement& value) { SetAutoPlacement(value); return *this;}

    /**
     * <p>Specify whether to enable or disable auto-placement.</p>
     */
    inline ModifyHostsRequest& WithAutoPlacement(AutoPlacement&& value) { SetAutoPlacement(std::move(value)); return *this;}


    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIds() const{ return m_hostIds; }

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline bool HostIdsHasBeenSet() const { return m_hostIdsHasBeenSet; }

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline void SetHostIds(const Aws::Vector<Aws::String>& value) { m_hostIdsHasBeenSet = true; m_hostIds = value; }

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline void SetHostIds(Aws::Vector<Aws::String>&& value) { m_hostIdsHasBeenSet = true; m_hostIds = std::move(value); }

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline ModifyHostsRequest& WithHostIds(const Aws::Vector<Aws::String>& value) { SetHostIds(value); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline ModifyHostsRequest& WithHostIds(Aws::Vector<Aws::String>&& value) { SetHostIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline ModifyHostsRequest& AddHostIds(const Aws::String& value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline ModifyHostsRequest& AddHostIds(Aws::String&& value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline ModifyHostsRequest& AddHostIds(const char* value) { m_hostIdsHasBeenSet = true; m_hostIds.push_back(value); return *this; }


    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host recovery</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const HostRecovery& GetHostRecovery() const{ return m_hostRecovery; }

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host recovery</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool HostRecoveryHasBeenSet() const { return m_hostRecoveryHasBeenSet; }

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host recovery</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetHostRecovery(const HostRecovery& value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = value; }

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host recovery</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetHostRecovery(HostRecovery&& value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = std::move(value); }

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host recovery</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline ModifyHostsRequest& WithHostRecovery(const HostRecovery& value) { SetHostRecovery(value); return *this;}

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host recovery</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline ModifyHostsRequest& WithHostRecovery(HostRecovery&& value) { SetHostRecovery(std::move(value)); return *this;}


    /**
     * <p>Specifies the instance type to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support only a specific instance
     * type.</p> <p>If you want to modify a Dedicated Host to support multiple instance
     * types in its current instance family, omit this parameter and specify
     * <b>InstanceFamily</b> instead. You cannot specify <b>InstanceType</b> and
     * <b>InstanceFamily</b> in the same request.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>Specifies the instance type to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support only a specific instance
     * type.</p> <p>If you want to modify a Dedicated Host to support multiple instance
     * types in its current instance family, omit this parameter and specify
     * <b>InstanceFamily</b> instead. You cannot specify <b>InstanceType</b> and
     * <b>InstanceFamily</b> in the same request.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>Specifies the instance type to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support only a specific instance
     * type.</p> <p>If you want to modify a Dedicated Host to support multiple instance
     * types in its current instance family, omit this parameter and specify
     * <b>InstanceFamily</b> instead. You cannot specify <b>InstanceType</b> and
     * <b>InstanceFamily</b> in the same request.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>Specifies the instance type to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support only a specific instance
     * type.</p> <p>If you want to modify a Dedicated Host to support multiple instance
     * types in its current instance family, omit this parameter and specify
     * <b>InstanceFamily</b> instead. You cannot specify <b>InstanceType</b> and
     * <b>InstanceFamily</b> in the same request.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>Specifies the instance type to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support only a specific instance
     * type.</p> <p>If you want to modify a Dedicated Host to support multiple instance
     * types in its current instance family, omit this parameter and specify
     * <b>InstanceFamily</b> instead. You cannot specify <b>InstanceType</b> and
     * <b>InstanceFamily</b> in the same request.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>Specifies the instance type to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support only a specific instance
     * type.</p> <p>If you want to modify a Dedicated Host to support multiple instance
     * types in its current instance family, omit this parameter and specify
     * <b>InstanceFamily</b> instead. You cannot specify <b>InstanceType</b> and
     * <b>InstanceFamily</b> in the same request.</p>
     */
    inline ModifyHostsRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>Specifies the instance type to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support only a specific instance
     * type.</p> <p>If you want to modify a Dedicated Host to support multiple instance
     * types in its current instance family, omit this parameter and specify
     * <b>InstanceFamily</b> instead. You cannot specify <b>InstanceType</b> and
     * <b>InstanceFamily</b> in the same request.</p>
     */
    inline ModifyHostsRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>Specifies the instance type to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support only a specific instance
     * type.</p> <p>If you want to modify a Dedicated Host to support multiple instance
     * types in its current instance family, omit this parameter and specify
     * <b>InstanceFamily</b> instead. You cannot specify <b>InstanceType</b> and
     * <b>InstanceFamily</b> in the same request.</p>
     */
    inline ModifyHostsRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>Specifies the instance family to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support multiple instance types
     * within its current instance family.</p> <p>If you want to modify a Dedicated
     * Host to support a specific instance type only, omit this parameter and specify
     * <b>InstanceType</b> instead. You cannot specify <b>InstanceFamily</b> and
     * <b>InstanceType</b> in the same request.</p>
     */
    inline const Aws::String& GetInstanceFamily() const{ return m_instanceFamily; }

    /**
     * <p>Specifies the instance family to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support multiple instance types
     * within its current instance family.</p> <p>If you want to modify a Dedicated
     * Host to support a specific instance type only, omit this parameter and specify
     * <b>InstanceType</b> instead. You cannot specify <b>InstanceFamily</b> and
     * <b>InstanceType</b> in the same request.</p>
     */
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }

    /**
     * <p>Specifies the instance family to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support multiple instance types
     * within its current instance family.</p> <p>If you want to modify a Dedicated
     * Host to support a specific instance type only, omit this parameter and specify
     * <b>InstanceType</b> instead. You cannot specify <b>InstanceFamily</b> and
     * <b>InstanceType</b> in the same request.</p>
     */
    inline void SetInstanceFamily(const Aws::String& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }

    /**
     * <p>Specifies the instance family to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support multiple instance types
     * within its current instance family.</p> <p>If you want to modify a Dedicated
     * Host to support a specific instance type only, omit this parameter and specify
     * <b>InstanceType</b> instead. You cannot specify <b>InstanceFamily</b> and
     * <b>InstanceType</b> in the same request.</p>
     */
    inline void SetInstanceFamily(Aws::String&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }

    /**
     * <p>Specifies the instance family to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support multiple instance types
     * within its current instance family.</p> <p>If you want to modify a Dedicated
     * Host to support a specific instance type only, omit this parameter and specify
     * <b>InstanceType</b> instead. You cannot specify <b>InstanceFamily</b> and
     * <b>InstanceType</b> in the same request.</p>
     */
    inline void SetInstanceFamily(const char* value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily.assign(value); }

    /**
     * <p>Specifies the instance family to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support multiple instance types
     * within its current instance family.</p> <p>If you want to modify a Dedicated
     * Host to support a specific instance type only, omit this parameter and specify
     * <b>InstanceType</b> instead. You cannot specify <b>InstanceFamily</b> and
     * <b>InstanceType</b> in the same request.</p>
     */
    inline ModifyHostsRequest& WithInstanceFamily(const Aws::String& value) { SetInstanceFamily(value); return *this;}

    /**
     * <p>Specifies the instance family to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support multiple instance types
     * within its current instance family.</p> <p>If you want to modify a Dedicated
     * Host to support a specific instance type only, omit this parameter and specify
     * <b>InstanceType</b> instead. You cannot specify <b>InstanceFamily</b> and
     * <b>InstanceType</b> in the same request.</p>
     */
    inline ModifyHostsRequest& WithInstanceFamily(Aws::String&& value) { SetInstanceFamily(std::move(value)); return *this;}

    /**
     * <p>Specifies the instance family to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support multiple instance types
     * within its current instance family.</p> <p>If you want to modify a Dedicated
     * Host to support a specific instance type only, omit this parameter and specify
     * <b>InstanceType</b> instead. You cannot specify <b>InstanceFamily</b> and
     * <b>InstanceType</b> in the same request.</p>
     */
    inline ModifyHostsRequest& WithInstanceFamily(const char* value) { SetInstanceFamily(value); return *this;}

  private:

    AutoPlacement m_autoPlacement;
    bool m_autoPlacementHasBeenSet = false;

    Aws::Vector<Aws::String> m_hostIds;
    bool m_hostIdsHasBeenSet = false;

    HostRecovery m_hostRecovery;
    bool m_hostRecoveryHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
