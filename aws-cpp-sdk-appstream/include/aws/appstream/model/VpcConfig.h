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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes VPC configuration information for fleets and image
   * builders.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/VpcConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API VpcConfig
  {
  public:
    VpcConfig();
    VpcConfig(Aws::Utils::Json::JsonView jsonValue);
    VpcConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifiers of the subnets to which a network interface is attached from
     * the fleet instance or image builder instance. Fleet instances use one or more
     * subnets. Image builder instances use one subnet.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The identifiers of the subnets to which a network interface is attached from
     * the fleet instance or image builder instance. Fleet instances use one or more
     * subnets. Image builder instances use one subnet.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The identifiers of the subnets to which a network interface is attached from
     * the fleet instance or image builder instance. Fleet instances use one or more
     * subnets. Image builder instances use one subnet.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The identifiers of the subnets to which a network interface is attached from
     * the fleet instance or image builder instance. Fleet instances use one or more
     * subnets. Image builder instances use one subnet.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The identifiers of the subnets to which a network interface is attached from
     * the fleet instance or image builder instance. Fleet instances use one or more
     * subnets. Image builder instances use one subnet.</p>
     */
    inline VpcConfig& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The identifiers of the subnets to which a network interface is attached from
     * the fleet instance or image builder instance. Fleet instances use one or more
     * subnets. Image builder instances use one subnet.</p>
     */
    inline VpcConfig& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the subnets to which a network interface is attached from
     * the fleet instance or image builder instance. Fleet instances use one or more
     * subnets. Image builder instances use one subnet.</p>
     */
    inline VpcConfig& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the subnets to which a network interface is attached from
     * the fleet instance or image builder instance. Fleet instances use one or more
     * subnets. Image builder instances use one subnet.</p>
     */
    inline VpcConfig& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the subnets to which a network interface is attached from
     * the fleet instance or image builder instance. Fleet instances use one or more
     * subnets. Image builder instances use one subnet.</p>
     */
    inline VpcConfig& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The identifiers of the security groups for the fleet or image builder.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The identifiers of the security groups for the fleet or image builder.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The identifiers of the security groups for the fleet or image builder.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The identifiers of the security groups for the fleet or image builder.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The identifiers of the security groups for the fleet or image builder.</p>
     */
    inline VpcConfig& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The identifiers of the security groups for the fleet or image builder.</p>
     */
    inline VpcConfig& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the security groups for the fleet or image builder.</p>
     */
    inline VpcConfig& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the security groups for the fleet or image builder.</p>
     */
    inline VpcConfig& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the security groups for the fleet or image builder.</p>
     */
    inline VpcConfig& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
