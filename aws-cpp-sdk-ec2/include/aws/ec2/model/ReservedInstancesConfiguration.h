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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/Scope.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the configuration settings for the modified Reserved
   * Instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReservedInstancesConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ReservedInstancesConfiguration
  {
  public:
    ReservedInstancesConfiguration();
    ReservedInstancesConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReservedInstancesConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Availability Zone for the modified Reserved Instances.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone for the modified Reserved Instances.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone for the modified Reserved Instances.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone for the modified Reserved Instances.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone for the modified Reserved Instances.</p>
     */
    inline ReservedInstancesConfiguration& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone for the modified Reserved Instances.</p>
     */
    inline ReservedInstancesConfiguration& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone for the modified Reserved Instances.</p>
     */
    inline ReservedInstancesConfiguration& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The number of modified Reserved Instances.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of modified Reserved Instances.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of modified Reserved Instances.</p>
     */
    inline ReservedInstancesConfiguration& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The instance type for the modified Reserved Instances.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type for the modified Reserved Instances.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type for the modified Reserved Instances.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type for the modified Reserved Instances.</p>
     */
    inline ReservedInstancesConfiguration& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type for the modified Reserved Instances.</p>
     */
    inline ReservedInstancesConfiguration& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The network platform of the modified Reserved Instances, which is either
     * EC2-Classic or EC2-VPC.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The network platform of the modified Reserved Instances, which is either
     * EC2-Classic or EC2-VPC.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The network platform of the modified Reserved Instances, which is either
     * EC2-Classic or EC2-VPC.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The network platform of the modified Reserved Instances, which is either
     * EC2-Classic or EC2-VPC.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The network platform of the modified Reserved Instances, which is either
     * EC2-Classic or EC2-VPC.</p>
     */
    inline ReservedInstancesConfiguration& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The network platform of the modified Reserved Instances, which is either
     * EC2-Classic or EC2-VPC.</p>
     */
    inline ReservedInstancesConfiguration& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The network platform of the modified Reserved Instances, which is either
     * EC2-Classic or EC2-VPC.</p>
     */
    inline ReservedInstancesConfiguration& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>Whether the Reserved Instance is applied to instances in a region or
     * instances in a specific Availability Zone.</p>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>Whether the Reserved Instance is applied to instances in a region or
     * instances in a specific Availability Zone.</p>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Whether the Reserved Instance is applied to instances in a region or
     * instances in a specific Availability Zone.</p>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Whether the Reserved Instance is applied to instances in a region or
     * instances in a specific Availability Zone.</p>
     */
    inline ReservedInstancesConfiguration& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Whether the Reserved Instance is applied to instances in a region or
     * instances in a specific Availability Zone.</p>
     */
    inline ReservedInstancesConfiguration& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_platform;
    bool m_platformHasBeenSet;

    Scope m_scope;
    bool m_scopeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
