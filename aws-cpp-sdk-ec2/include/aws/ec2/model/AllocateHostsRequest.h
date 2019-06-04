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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/AutoPlacement.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/HostRecovery.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API AllocateHostsRequest : public EC2Request
  {
  public:
    AllocateHostsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AllocateHosts"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Indicates whether the host accepts any untargeted instance launches that
     * match its instance type configuration, or if it only accepts Host tenancy
     * instance launches that specify its unique host ID. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/how-dedicated-hosts-work.html#dedicated-hosts-understanding">
     * Understanding Instance Placement and Host Affinity</a> in the <i>Amazon EC2 User
     * Guide for Linux Instances</i>.</p> <p>Default: <code>on</code> </p>
     */
    inline const AutoPlacement& GetAutoPlacement() const{ return m_autoPlacement; }

    /**
     * <p>Indicates whether the host accepts any untargeted instance launches that
     * match its instance type configuration, or if it only accepts Host tenancy
     * instance launches that specify its unique host ID. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/how-dedicated-hosts-work.html#dedicated-hosts-understanding">
     * Understanding Instance Placement and Host Affinity</a> in the <i>Amazon EC2 User
     * Guide for Linux Instances</i>.</p> <p>Default: <code>on</code> </p>
     */
    inline bool AutoPlacementHasBeenSet() const { return m_autoPlacementHasBeenSet; }

    /**
     * <p>Indicates whether the host accepts any untargeted instance launches that
     * match its instance type configuration, or if it only accepts Host tenancy
     * instance launches that specify its unique host ID. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/how-dedicated-hosts-work.html#dedicated-hosts-understanding">
     * Understanding Instance Placement and Host Affinity</a> in the <i>Amazon EC2 User
     * Guide for Linux Instances</i>.</p> <p>Default: <code>on</code> </p>
     */
    inline void SetAutoPlacement(const AutoPlacement& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = value; }

    /**
     * <p>Indicates whether the host accepts any untargeted instance launches that
     * match its instance type configuration, or if it only accepts Host tenancy
     * instance launches that specify its unique host ID. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/how-dedicated-hosts-work.html#dedicated-hosts-understanding">
     * Understanding Instance Placement and Host Affinity</a> in the <i>Amazon EC2 User
     * Guide for Linux Instances</i>.</p> <p>Default: <code>on</code> </p>
     */
    inline void SetAutoPlacement(AutoPlacement&& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = std::move(value); }

    /**
     * <p>Indicates whether the host accepts any untargeted instance launches that
     * match its instance type configuration, or if it only accepts Host tenancy
     * instance launches that specify its unique host ID. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/how-dedicated-hosts-work.html#dedicated-hosts-understanding">
     * Understanding Instance Placement and Host Affinity</a> in the <i>Amazon EC2 User
     * Guide for Linux Instances</i>.</p> <p>Default: <code>on</code> </p>
     */
    inline AllocateHostsRequest& WithAutoPlacement(const AutoPlacement& value) { SetAutoPlacement(value); return *this;}

    /**
     * <p>Indicates whether the host accepts any untargeted instance launches that
     * match its instance type configuration, or if it only accepts Host tenancy
     * instance launches that specify its unique host ID. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/how-dedicated-hosts-work.html#dedicated-hosts-understanding">
     * Understanding Instance Placement and Host Affinity</a> in the <i>Amazon EC2 User
     * Guide for Linux Instances</i>.</p> <p>Default: <code>on</code> </p>
     */
    inline AllocateHostsRequest& WithAutoPlacement(AutoPlacement&& value) { SetAutoPlacement(std::move(value)); return *this;}


    /**
     * <p>The Availability Zone in which to allocate the Dedicated Host.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which to allocate the Dedicated Host.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which to allocate the Dedicated Host.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which to allocate the Dedicated Host.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which to allocate the Dedicated Host.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which to allocate the Dedicated Host.</p>
     */
    inline AllocateHostsRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which to allocate the Dedicated Host.</p>
     */
    inline AllocateHostsRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which to allocate the Dedicated Host.</p>
     */
    inline AllocateHostsRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline AllocateHostsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline AllocateHostsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline AllocateHostsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Specifies the instance type for which to configure your Dedicated Hosts. When
     * you specify the instance type, that is the only instance type that you can
     * launch onto that host.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>Specifies the instance type for which to configure your Dedicated Hosts. When
     * you specify the instance type, that is the only instance type that you can
     * launch onto that host.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>Specifies the instance type for which to configure your Dedicated Hosts. When
     * you specify the instance type, that is the only instance type that you can
     * launch onto that host.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>Specifies the instance type for which to configure your Dedicated Hosts. When
     * you specify the instance type, that is the only instance type that you can
     * launch onto that host.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>Specifies the instance type for which to configure your Dedicated Hosts. When
     * you specify the instance type, that is the only instance type that you can
     * launch onto that host.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>Specifies the instance type for which to configure your Dedicated Hosts. When
     * you specify the instance type, that is the only instance type that you can
     * launch onto that host.</p>
     */
    inline AllocateHostsRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>Specifies the instance type for which to configure your Dedicated Hosts. When
     * you specify the instance type, that is the only instance type that you can
     * launch onto that host.</p>
     */
    inline AllocateHostsRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>Specifies the instance type for which to configure your Dedicated Hosts. When
     * you specify the instance type, that is the only instance type that you can
     * launch onto that host.</p>
     */
    inline AllocateHostsRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The number of Dedicated Hosts to allocate to your account with these
     * parameters.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of Dedicated Hosts to allocate to your account with these
     * parameters.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of Dedicated Hosts to allocate to your account with these
     * parameters.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of Dedicated Hosts to allocate to your account with these
     * parameters.</p>
     */
    inline AllocateHostsRequest& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The tags to apply to the Dedicated Host during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the Dedicated Host during creation.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the Dedicated Host during creation.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the Dedicated Host during creation.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the Dedicated Host during creation.</p>
     */
    inline AllocateHostsRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the Dedicated Host during creation.</p>
     */
    inline AllocateHostsRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the Dedicated Host during creation.</p>
     */
    inline AllocateHostsRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the Dedicated Host during creation.</p>
     */
    inline AllocateHostsRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * Host recovery is disabled by default. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host Recovery</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: <code>off</code> </p>
     */
    inline const HostRecovery& GetHostRecovery() const{ return m_hostRecovery; }

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * Host recovery is disabled by default. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host Recovery</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: <code>off</code> </p>
     */
    inline bool HostRecoveryHasBeenSet() const { return m_hostRecoveryHasBeenSet; }

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * Host recovery is disabled by default. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host Recovery</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: <code>off</code> </p>
     */
    inline void SetHostRecovery(const HostRecovery& value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = value; }

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * Host recovery is disabled by default. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host Recovery</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: <code>off</code> </p>
     */
    inline void SetHostRecovery(HostRecovery&& value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = std::move(value); }

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * Host recovery is disabled by default. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host Recovery</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: <code>off</code> </p>
     */
    inline AllocateHostsRequest& WithHostRecovery(const HostRecovery& value) { SetHostRecovery(value); return *this;}

    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * Host recovery is disabled by default. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host Recovery</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * <p>Default: <code>off</code> </p>
     */
    inline AllocateHostsRequest& WithHostRecovery(HostRecovery&& value) { SetHostRecovery(std::move(value)); return *this;}

  private:

    AutoPlacement m_autoPlacement;
    bool m_autoPlacementHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    int m_quantity;
    bool m_quantityHasBeenSet;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;

    HostRecovery m_hostRecovery;
    bool m_hostRecoveryHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
