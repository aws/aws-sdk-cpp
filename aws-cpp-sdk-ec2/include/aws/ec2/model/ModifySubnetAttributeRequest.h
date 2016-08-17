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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AttributeBooleanValue.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ModifySubnetAttribute.</p>
   */
  class AWS_EC2_API ModifySubnetAttributeRequest : public EC2Request
  {
  public:
    ModifySubnetAttributeRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline ModifySubnetAttributeRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline ModifySubnetAttributeRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline ModifySubnetAttributeRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

    /**
     * <p>Specify <code>true</code> to indicate that instances launched into the
     * specified subnet should be assigned public IP address.</p>
     */
    inline const AttributeBooleanValue& GetMapPublicIpOnLaunch() const{ return m_mapPublicIpOnLaunch; }

    /**
     * <p>Specify <code>true</code> to indicate that instances launched into the
     * specified subnet should be assigned public IP address.</p>
     */
    inline void SetMapPublicIpOnLaunch(const AttributeBooleanValue& value) { m_mapPublicIpOnLaunchHasBeenSet = true; m_mapPublicIpOnLaunch = value; }

    /**
     * <p>Specify <code>true</code> to indicate that instances launched into the
     * specified subnet should be assigned public IP address.</p>
     */
    inline void SetMapPublicIpOnLaunch(AttributeBooleanValue&& value) { m_mapPublicIpOnLaunchHasBeenSet = true; m_mapPublicIpOnLaunch = value; }

    /**
     * <p>Specify <code>true</code> to indicate that instances launched into the
     * specified subnet should be assigned public IP address.</p>
     */
    inline ModifySubnetAttributeRequest& WithMapPublicIpOnLaunch(const AttributeBooleanValue& value) { SetMapPublicIpOnLaunch(value); return *this;}

    /**
     * <p>Specify <code>true</code> to indicate that instances launched into the
     * specified subnet should be assigned public IP address.</p>
     */
    inline ModifySubnetAttributeRequest& WithMapPublicIpOnLaunch(AttributeBooleanValue&& value) { SetMapPublicIpOnLaunch(value); return *this;}

  private:
    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
    AttributeBooleanValue m_mapPublicIpOnLaunch;
    bool m_mapPublicIpOnLaunchHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
