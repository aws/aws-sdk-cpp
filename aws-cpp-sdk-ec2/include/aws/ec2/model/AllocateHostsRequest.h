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
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for AllocateHosts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateHostsRequest">AWS
   * API Reference</a></p>
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
     * <p>This is enabled by default. This property allows instances to be
     * automatically placed onto available Dedicated Hosts, when you are launching
     * instances without specifying a host ID.</p> <p>Default: Enabled</p>
     */
    inline const AutoPlacement& GetAutoPlacement() const{ return m_autoPlacement; }

    /**
     * <p>This is enabled by default. This property allows instances to be
     * automatically placed onto available Dedicated Hosts, when you are launching
     * instances without specifying a host ID.</p> <p>Default: Enabled</p>
     */
    inline void SetAutoPlacement(const AutoPlacement& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = value; }

    /**
     * <p>This is enabled by default. This property allows instances to be
     * automatically placed onto available Dedicated Hosts, when you are launching
     * instances without specifying a host ID.</p> <p>Default: Enabled</p>
     */
    inline void SetAutoPlacement(AutoPlacement&& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = std::move(value); }

    /**
     * <p>This is enabled by default. This property allows instances to be
     * automatically placed onto available Dedicated Hosts, when you are launching
     * instances without specifying a host ID.</p> <p>Default: Enabled</p>
     */
    inline AllocateHostsRequest& WithAutoPlacement(const AutoPlacement& value) { SetAutoPlacement(value); return *this;}

    /**
     * <p>This is enabled by default. This property allows instances to be
     * automatically placed onto available Dedicated Hosts, when you are launching
     * instances without specifying a host ID.</p> <p>Default: Enabled</p>
     */
    inline AllocateHostsRequest& WithAutoPlacement(AutoPlacement&& value) { SetAutoPlacement(std::move(value)); return *this;}


    /**
     * <p>The Availability Zone for the Dedicated Hosts.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone for the Dedicated Hosts.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone for the Dedicated Hosts.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone for the Dedicated Hosts.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone for the Dedicated Hosts.</p>
     */
    inline AllocateHostsRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone for the Dedicated Hosts.</p>
     */
    inline AllocateHostsRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone for the Dedicated Hosts.</p>
     */
    inline AllocateHostsRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
     * </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
     * </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
     * </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
     * </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
     * </p>
     */
    inline AllocateHostsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
     * </p>
     */
    inline AllocateHostsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
     * </p>
     */
    inline AllocateHostsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Specify the instance type that you want your Dedicated Hosts to be configured
     * for. When you specify the instance type, that is the only instance type that you
     * can launch onto that host.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>Specify the instance type that you want your Dedicated Hosts to be configured
     * for. When you specify the instance type, that is the only instance type that you
     * can launch onto that host.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>Specify the instance type that you want your Dedicated Hosts to be configured
     * for. When you specify the instance type, that is the only instance type that you
     * can launch onto that host.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>Specify the instance type that you want your Dedicated Hosts to be configured
     * for. When you specify the instance type, that is the only instance type that you
     * can launch onto that host.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>Specify the instance type that you want your Dedicated Hosts to be configured
     * for. When you specify the instance type, that is the only instance type that you
     * can launch onto that host.</p>
     */
    inline AllocateHostsRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>Specify the instance type that you want your Dedicated Hosts to be configured
     * for. When you specify the instance type, that is the only instance type that you
     * can launch onto that host.</p>
     */
    inline AllocateHostsRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>Specify the instance type that you want your Dedicated Hosts to be configured
     * for. When you specify the instance type, that is the only instance type that you
     * can launch onto that host.</p>
     */
    inline AllocateHostsRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The number of Dedicated Hosts you want to allocate to your account with these
     * parameters.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of Dedicated Hosts you want to allocate to your account with these
     * parameters.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of Dedicated Hosts you want to allocate to your account with these
     * parameters.</p>
     */
    inline AllocateHostsRequest& WithQuantity(int value) { SetQuantity(value); return *this;}

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
