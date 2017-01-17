﻿/*
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
   * <p>Describes Spot instance placement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotPlacement">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API SpotPlacement
  {
  public:
    SpotPlacement();
    SpotPlacement(const Aws::Utils::Xml::XmlNode& xmlNode);
    SpotPlacement& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The Availability Zone.</p> <p>[Spot fleet only] To specify multiple
     * Availability Zones, separate them using commas; for example, "us-west-2a,
     * us-west-2b".</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone.</p> <p>[Spot fleet only] To specify multiple
     * Availability Zones, separate them using commas; for example, "us-west-2a,
     * us-west-2b".</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone.</p> <p>[Spot fleet only] To specify multiple
     * Availability Zones, separate them using commas; for example, "us-west-2a,
     * us-west-2b".</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone.</p> <p>[Spot fleet only] To specify multiple
     * Availability Zones, separate them using commas; for example, "us-west-2a,
     * us-west-2b".</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone.</p> <p>[Spot fleet only] To specify multiple
     * Availability Zones, separate them using commas; for example, "us-west-2a,
     * us-west-2b".</p>
     */
    inline SpotPlacement& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone.</p> <p>[Spot fleet only] To specify multiple
     * Availability Zones, separate them using commas; for example, "us-west-2a,
     * us-west-2b".</p>
     */
    inline SpotPlacement& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone.</p> <p>[Spot fleet only] To specify multiple
     * Availability Zones, separate them using commas; for example, "us-west-2a,
     * us-west-2b".</p>
     */
    inline SpotPlacement& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The name of the placement group (for cluster instances).</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the placement group (for cluster instances).</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the placement group (for cluster instances).</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the placement group (for cluster instances).</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the placement group (for cluster instances).</p>
     */
    inline SpotPlacement& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the placement group (for cluster instances).</p>
     */
    inline SpotPlacement& WithGroupName(Aws::String&& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the placement group (for cluster instances).</p>
     */
    inline SpotPlacement& WithGroupName(const char* value) { SetGroupName(value); return *this;}

  private:
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
