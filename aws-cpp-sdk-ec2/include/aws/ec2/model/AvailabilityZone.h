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
#include <aws/ec2/model/AvailabilityZoneState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AvailabilityZoneMessage.h>
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
   * <p>Describes an Availability Zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AvailabilityZone">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AvailabilityZone
  {
  public:
    AvailabilityZone();
    AvailabilityZone(const Aws::Utils::Xml::XmlNode& xmlNode);
    AvailabilityZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline const AvailabilityZoneState& GetState() const{ return m_state; }

    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline void SetState(const AvailabilityZoneState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline void SetState(AvailabilityZoneState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline AvailabilityZone& WithState(const AvailabilityZoneState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the Availability Zone.</p>
     */
    inline AvailabilityZone& WithState(AvailabilityZoneState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Any messages about the Availability Zone.</p>
     */
    inline const Aws::Vector<AvailabilityZoneMessage>& GetMessages() const{ return m_messages; }

    /**
     * <p>Any messages about the Availability Zone.</p>
     */
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }

    /**
     * <p>Any messages about the Availability Zone.</p>
     */
    inline void SetMessages(const Aws::Vector<AvailabilityZoneMessage>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * <p>Any messages about the Availability Zone.</p>
     */
    inline void SetMessages(Aws::Vector<AvailabilityZoneMessage>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * <p>Any messages about the Availability Zone.</p>
     */
    inline AvailabilityZone& WithMessages(const Aws::Vector<AvailabilityZoneMessage>& value) { SetMessages(value); return *this;}

    /**
     * <p>Any messages about the Availability Zone.</p>
     */
    inline AvailabilityZone& WithMessages(Aws::Vector<AvailabilityZoneMessage>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>Any messages about the Availability Zone.</p>
     */
    inline AvailabilityZone& AddMessages(const AvailabilityZoneMessage& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * <p>Any messages about the Availability Zone.</p>
     */
    inline AvailabilityZone& AddMessages(AvailabilityZoneMessage&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the Region.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The name of the Region.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The name of the Region.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The name of the Region.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The name of the Region.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The name of the Region.</p>
     */
    inline AvailabilityZone& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The name of the Region.</p>
     */
    inline AvailabilityZone& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The name of the Region.</p>
     */
    inline AvailabilityZone& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline const Aws::String& GetZoneName() const{ return m_zoneName; }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline bool ZoneNameHasBeenSet() const { return m_zoneNameHasBeenSet; }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline void SetZoneName(const Aws::String& value) { m_zoneNameHasBeenSet = true; m_zoneName = value; }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline void SetZoneName(Aws::String&& value) { m_zoneNameHasBeenSet = true; m_zoneName = std::move(value); }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline void SetZoneName(const char* value) { m_zoneNameHasBeenSet = true; m_zoneName.assign(value); }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline AvailabilityZone& WithZoneName(const Aws::String& value) { SetZoneName(value); return *this;}

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline AvailabilityZone& WithZoneName(Aws::String&& value) { SetZoneName(std::move(value)); return *this;}

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline AvailabilityZone& WithZoneName(const char* value) { SetZoneName(value); return *this;}


    /**
     * <p>The ID of the Availability Zone.</p>
     */
    inline const Aws::String& GetZoneId() const{ return m_zoneId; }

    /**
     * <p>The ID of the Availability Zone.</p>
     */
    inline bool ZoneIdHasBeenSet() const { return m_zoneIdHasBeenSet; }

    /**
     * <p>The ID of the Availability Zone.</p>
     */
    inline void SetZoneId(const Aws::String& value) { m_zoneIdHasBeenSet = true; m_zoneId = value; }

    /**
     * <p>The ID of the Availability Zone.</p>
     */
    inline void SetZoneId(Aws::String&& value) { m_zoneIdHasBeenSet = true; m_zoneId = std::move(value); }

    /**
     * <p>The ID of the Availability Zone.</p>
     */
    inline void SetZoneId(const char* value) { m_zoneIdHasBeenSet = true; m_zoneId.assign(value); }

    /**
     * <p>The ID of the Availability Zone.</p>
     */
    inline AvailabilityZone& WithZoneId(const Aws::String& value) { SetZoneId(value); return *this;}

    /**
     * <p>The ID of the Availability Zone.</p>
     */
    inline AvailabilityZone& WithZoneId(Aws::String&& value) { SetZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Availability Zone.</p>
     */
    inline AvailabilityZone& WithZoneId(const char* value) { SetZoneId(value); return *this;}

  private:

    AvailabilityZoneState m_state;
    bool m_stateHasBeenSet;

    Aws::Vector<AvailabilityZoneMessage> m_messages;
    bool m_messagesHasBeenSet;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet;

    Aws::String m_zoneName;
    bool m_zoneNameHasBeenSet;

    Aws::String m_zoneId;
    bool m_zoneIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
