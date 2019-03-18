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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies the physical requirements for a connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PhysicalConnectionRequirements">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API PhysicalConnectionRequirements
  {
  public:
    PhysicalConnectionRequirements();
    PhysicalConnectionRequirements(Aws::Utils::Json::JsonView jsonValue);
    PhysicalConnectionRequirements& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The subnet ID used by the connection.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The subnet ID used by the connection.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The subnet ID used by the connection.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet ID used by the connection.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The subnet ID used by the connection.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The subnet ID used by the connection.</p>
     */
    inline PhysicalConnectionRequirements& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet ID used by the connection.</p>
     */
    inline PhysicalConnectionRequirements& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet ID used by the connection.</p>
     */
    inline PhysicalConnectionRequirements& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The security group ID list used by the connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIdList() const{ return m_securityGroupIdList; }

    /**
     * <p>The security group ID list used by the connection.</p>
     */
    inline bool SecurityGroupIdListHasBeenSet() const { return m_securityGroupIdListHasBeenSet; }

    /**
     * <p>The security group ID list used by the connection.</p>
     */
    inline void SetSecurityGroupIdList(const Aws::Vector<Aws::String>& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList = value; }

    /**
     * <p>The security group ID list used by the connection.</p>
     */
    inline void SetSecurityGroupIdList(Aws::Vector<Aws::String>&& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList = std::move(value); }

    /**
     * <p>The security group ID list used by the connection.</p>
     */
    inline PhysicalConnectionRequirements& WithSecurityGroupIdList(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIdList(value); return *this;}

    /**
     * <p>The security group ID list used by the connection.</p>
     */
    inline PhysicalConnectionRequirements& WithSecurityGroupIdList(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIdList(std::move(value)); return *this;}

    /**
     * <p>The security group ID list used by the connection.</p>
     */
    inline PhysicalConnectionRequirements& AddSecurityGroupIdList(const Aws::String& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList.push_back(value); return *this; }

    /**
     * <p>The security group ID list used by the connection.</p>
     */
    inline PhysicalConnectionRequirements& AddSecurityGroupIdList(Aws::String&& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList.push_back(std::move(value)); return *this; }

    /**
     * <p>The security group ID list used by the connection.</p>
     */
    inline PhysicalConnectionRequirements& AddSecurityGroupIdList(const char* value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList.push_back(value); return *this; }


    /**
     * <p>The connection's Availability Zone. This field is redundant because the
     * specified subnet implies the Availability Zone to be used. Currently the field
     * must be populated, but it will be deprecated in the future.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The connection's Availability Zone. This field is redundant because the
     * specified subnet implies the Availability Zone to be used. Currently the field
     * must be populated, but it will be deprecated in the future.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The connection's Availability Zone. This field is redundant because the
     * specified subnet implies the Availability Zone to be used. Currently the field
     * must be populated, but it will be deprecated in the future.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The connection's Availability Zone. This field is redundant because the
     * specified subnet implies the Availability Zone to be used. Currently the field
     * must be populated, but it will be deprecated in the future.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The connection's Availability Zone. This field is redundant because the
     * specified subnet implies the Availability Zone to be used. Currently the field
     * must be populated, but it will be deprecated in the future.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The connection's Availability Zone. This field is redundant because the
     * specified subnet implies the Availability Zone to be used. Currently the field
     * must be populated, but it will be deprecated in the future.</p>
     */
    inline PhysicalConnectionRequirements& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The connection's Availability Zone. This field is redundant because the
     * specified subnet implies the Availability Zone to be used. Currently the field
     * must be populated, but it will be deprecated in the future.</p>
     */
    inline PhysicalConnectionRequirements& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The connection's Availability Zone. This field is redundant because the
     * specified subnet implies the Availability Zone to be used. Currently the field
     * must be populated, but it will be deprecated in the future.</p>
     */
    inline PhysicalConnectionRequirements& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIdList;
    bool m_securityGroupIdListHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
