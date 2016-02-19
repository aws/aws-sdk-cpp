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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Tenancy.h>

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
   * <p>Describes the placement for the instance.</p>
   */
  class AWS_EC2_API Placement
  {
  public:
    Placement();
    Placement(const Aws::Utils::Xml::XmlNode& xmlNode);
    Placement& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline Placement& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline Placement& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline Placement& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The name of the placement group the instance is in (for cluster compute
     * instances).</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the placement group the instance is in (for cluster compute
     * instances).</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the placement group the instance is in (for cluster compute
     * instances).</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the placement group the instance is in (for cluster compute
     * instances).</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the placement group the instance is in (for cluster compute
     * instances).</p>
     */
    inline Placement& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the placement group the instance is in (for cluster compute
     * instances).</p>
     */
    inline Placement& WithGroupName(Aws::String&& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the placement group the instance is in (for cluster compute
     * instances).</p>
     */
    inline Placement& WithGroupName(const char* value) { SetGroupName(value); return *this;}

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware.</p>
     */
    inline const Tenancy& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware.</p>
     */
    inline void SetTenancy(const Tenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware.</p>
     */
    inline void SetTenancy(Tenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware.</p>
     */
    inline Placement& WithTenancy(const Tenancy& value) { SetTenancy(value); return *this;}

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware.</p>
     */
    inline Placement& WithTenancy(Tenancy&& value) { SetTenancy(value); return *this;}

  private:
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
    Tenancy m_tenancy;
    bool m_tenancyHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
