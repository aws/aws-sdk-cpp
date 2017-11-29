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
#include <aws/ec2/model/Tenancy.h>
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
   * <p>Describes the placement of an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplatePlacement">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LaunchTemplatePlacement
  {
  public:
    LaunchTemplatePlacement();
    LaunchTemplatePlacement(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplatePlacement& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline LaunchTemplatePlacement& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline LaunchTemplatePlacement& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline LaunchTemplatePlacement& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p>
     */
    inline const Aws::String& GetAffinity() const{ return m_affinity; }

    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p>
     */
    inline void SetAffinity(const Aws::String& value) { m_affinityHasBeenSet = true; m_affinity = value; }

    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p>
     */
    inline void SetAffinity(Aws::String&& value) { m_affinityHasBeenSet = true; m_affinity = std::move(value); }

    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p>
     */
    inline void SetAffinity(const char* value) { m_affinityHasBeenSet = true; m_affinity.assign(value); }

    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p>
     */
    inline LaunchTemplatePlacement& WithAffinity(const Aws::String& value) { SetAffinity(value); return *this;}

    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p>
     */
    inline LaunchTemplatePlacement& WithAffinity(Aws::String&& value) { SetAffinity(std::move(value)); return *this;}

    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p>
     */
    inline LaunchTemplatePlacement& WithAffinity(const char* value) { SetAffinity(value); return *this;}


    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline LaunchTemplatePlacement& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline LaunchTemplatePlacement& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline LaunchTemplatePlacement& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }

    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline void SetHostId(const Aws::String& value) { m_hostIdHasBeenSet = true; m_hostId = value; }

    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline void SetHostId(Aws::String&& value) { m_hostIdHasBeenSet = true; m_hostId = std::move(value); }

    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline void SetHostId(const char* value) { m_hostIdHasBeenSet = true; m_hostId.assign(value); }

    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline LaunchTemplatePlacement& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}

    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline LaunchTemplatePlacement& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline LaunchTemplatePlacement& WithHostId(const char* value) { SetHostId(value); return *this;}


    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware. </p>
     */
    inline const Tenancy& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware. </p>
     */
    inline void SetTenancy(const Tenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware. </p>
     */
    inline void SetTenancy(Tenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware. </p>
     */
    inline LaunchTemplatePlacement& WithTenancy(const Tenancy& value) { SetTenancy(value); return *this;}

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware. </p>
     */
    inline LaunchTemplatePlacement& WithTenancy(Tenancy&& value) { SetTenancy(std::move(value)); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetSpreadDomain() const{ return m_spreadDomain; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetSpreadDomain(const Aws::String& value) { m_spreadDomainHasBeenSet = true; m_spreadDomain = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetSpreadDomain(Aws::String&& value) { m_spreadDomainHasBeenSet = true; m_spreadDomain = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetSpreadDomain(const char* value) { m_spreadDomainHasBeenSet = true; m_spreadDomain.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline LaunchTemplatePlacement& WithSpreadDomain(const Aws::String& value) { SetSpreadDomain(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline LaunchTemplatePlacement& WithSpreadDomain(Aws::String&& value) { SetSpreadDomain(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline LaunchTemplatePlacement& WithSpreadDomain(const char* value) { SetSpreadDomain(value); return *this;}

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_affinity;
    bool m_affinityHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet;

    Tenancy m_tenancy;
    bool m_tenancyHasBeenSet;

    Aws::String m_spreadDomain;
    bool m_spreadDomainHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
