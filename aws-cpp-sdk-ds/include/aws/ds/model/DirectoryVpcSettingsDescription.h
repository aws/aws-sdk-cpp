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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains information about the directory.</p>
   */
  class AWS_DIRECTORYSERVICE_API DirectoryVpcSettingsDescription
  {
  public:
    DirectoryVpcSettingsDescription();
    DirectoryVpcSettingsDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    DirectoryVpcSettingsDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The identifier of the VPC that the directory is in.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The identifier of the VPC that the directory is in.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the VPC that the directory is in.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the VPC that the directory is in.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The identifier of the VPC that the directory is in.</p>
     */
    inline DirectoryVpcSettingsDescription& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the VPC that the directory is in.</p>
     */
    inline DirectoryVpcSettingsDescription& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the VPC that the directory is in.</p>
     */
    inline DirectoryVpcSettingsDescription& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifiers of the subnets for the directory servers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The identifiers of the subnets for the directory servers.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The identifiers of the subnets for the directory servers.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The identifiers of the subnets for the directory servers.</p>
     */
    inline DirectoryVpcSettingsDescription& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The identifiers of the subnets for the directory servers.</p>
     */
    inline DirectoryVpcSettingsDescription& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The identifiers of the subnets for the directory servers.</p>
     */
    inline DirectoryVpcSettingsDescription& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the subnets for the directory servers.</p>
     */
    inline DirectoryVpcSettingsDescription& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the subnets for the directory servers.</p>
     */
    inline DirectoryVpcSettingsDescription& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The security group identifier for the directory. If the directory was created
     * before 8/1/2014, this is the identifier of the directory members security group
     * that was created when the directory was created. If the directory was created
     * after this date, this value is null.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const{ return m_securityGroupId; }

    /**
     * <p>The security group identifier for the directory. If the directory was created
     * before 8/1/2014, this is the identifier of the directory members security group
     * that was created when the directory was created. If the directory was created
     * after this date, this value is null.</p>
     */
    inline void SetSecurityGroupId(const Aws::String& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = value; }

    /**
     * <p>The security group identifier for the directory. If the directory was created
     * before 8/1/2014, this is the identifier of the directory members security group
     * that was created when the directory was created. If the directory was created
     * after this date, this value is null.</p>
     */
    inline void SetSecurityGroupId(Aws::String&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = value; }

    /**
     * <p>The security group identifier for the directory. If the directory was created
     * before 8/1/2014, this is the identifier of the directory members security group
     * that was created when the directory was created. If the directory was created
     * after this date, this value is null.</p>
     */
    inline void SetSecurityGroupId(const char* value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId.assign(value); }

    /**
     * <p>The security group identifier for the directory. If the directory was created
     * before 8/1/2014, this is the identifier of the directory members security group
     * that was created when the directory was created. If the directory was created
     * after this date, this value is null.</p>
     */
    inline DirectoryVpcSettingsDescription& WithSecurityGroupId(const Aws::String& value) { SetSecurityGroupId(value); return *this;}

    /**
     * <p>The security group identifier for the directory. If the directory was created
     * before 8/1/2014, this is the identifier of the directory members security group
     * that was created when the directory was created. If the directory was created
     * after this date, this value is null.</p>
     */
    inline DirectoryVpcSettingsDescription& WithSecurityGroupId(Aws::String&& value) { SetSecurityGroupId(value); return *this;}

    /**
     * <p>The security group identifier for the directory. If the directory was created
     * before 8/1/2014, this is the identifier of the directory members security group
     * that was created when the directory was created. If the directory was created
     * after this date, this value is null.</p>
     */
    inline DirectoryVpcSettingsDescription& WithSecurityGroupId(const char* value) { SetSecurityGroupId(value); return *this;}

    /**
     * <p>The list of Availability Zones that the directory is in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The list of Availability Zones that the directory is in.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The list of Availability Zones that the directory is in.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The list of Availability Zones that the directory is in.</p>
     */
    inline DirectoryVpcSettingsDescription& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The list of Availability Zones that the directory is in.</p>
     */
    inline DirectoryVpcSettingsDescription& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The list of Availability Zones that the directory is in.</p>
     */
    inline DirectoryVpcSettingsDescription& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The list of Availability Zones that the directory is in.</p>
     */
    inline DirectoryVpcSettingsDescription& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The list of Availability Zones that the directory is in.</p>
     */
    inline DirectoryVpcSettingsDescription& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

  private:
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;
    Aws::String m_securityGroupId;
    bool m_securityGroupIdHasBeenSet;
    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
