/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AvailabilityZoneOptInStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AvailabilityZoneState.h>
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
   * <p>Describes Availability Zones, Local Zones, and Wavelength
   * Zones.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AvailabilityZone">AWS
   * API Reference</a></p>
   */
  class AvailabilityZone
  {
  public:
    AWS_EC2_API AvailabilityZone() = default;
    AWS_EC2_API AvailabilityZone(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AvailabilityZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>For Availability Zones, this parameter always has the value of
     * <code>opt-in-not-required</code>.</p> <p>For Local Zones and Wavelength Zones,
     * this parameter is the opt-in status. The possible values are
     * <code>opted-in</code> and <code>not-opted-in</code>.</p>
     */
    inline AvailabilityZoneOptInStatus GetOptInStatus() const { return m_optInStatus; }
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }
    inline void SetOptInStatus(AvailabilityZoneOptInStatus value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }
    inline AvailabilityZone& WithOptInStatus(AvailabilityZoneOptInStatus value) { SetOptInStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any messages about the Availability Zone, Local Zone, or Wavelength Zone.</p>
     */
    inline const Aws::Vector<AvailabilityZoneMessage>& GetMessages() const { return m_messages; }
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
    template<typename MessagesT = Aws::Vector<AvailabilityZoneMessage>>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = Aws::Vector<AvailabilityZoneMessage>>
    AvailabilityZone& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    template<typename MessagesT = AvailabilityZoneMessage>
    AvailabilityZone& AddMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages.emplace_back(std::forward<MessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Region.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    AvailabilityZone& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone, Local Zone, or Wavelength Zone.</p>
     */
    inline const Aws::String& GetZoneName() const { return m_zoneName; }
    inline bool ZoneNameHasBeenSet() const { return m_zoneNameHasBeenSet; }
    template<typename ZoneNameT = Aws::String>
    void SetZoneName(ZoneNameT&& value) { m_zoneNameHasBeenSet = true; m_zoneName = std::forward<ZoneNameT>(value); }
    template<typename ZoneNameT = Aws::String>
    AvailabilityZone& WithZoneName(ZoneNameT&& value) { SetZoneName(std::forward<ZoneNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone, Local Zone, or Wavelength Zone.</p>
     */
    inline const Aws::String& GetZoneId() const { return m_zoneId; }
    inline bool ZoneIdHasBeenSet() const { return m_zoneIdHasBeenSet; }
    template<typename ZoneIdT = Aws::String>
    void SetZoneId(ZoneIdT&& value) { m_zoneIdHasBeenSet = true; m_zoneId = std::forward<ZoneIdT>(value); }
    template<typename ZoneIdT = Aws::String>
    AvailabilityZone& WithZoneId(ZoneIdT&& value) { SetZoneId(std::forward<ZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the zone group. For example:</p> <ul> <li> <p>Availability Zones
     * - <code>us-east-1-zg-1</code> </p> </li> <li> <p>Local Zones -
     * <code>us-west-2-lax-1</code> </p> </li> <li> <p>Wavelength Zones -
     * <code>us-east-1-wl1-bos-wlz-1</code> </p> </li> </ul>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    AvailabilityZone& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the network border group.</p>
     */
    inline const Aws::String& GetNetworkBorderGroup() const { return m_networkBorderGroup; }
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }
    template<typename NetworkBorderGroupT = Aws::String>
    void SetNetworkBorderGroup(NetworkBorderGroupT&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::forward<NetworkBorderGroupT>(value); }
    template<typename NetworkBorderGroupT = Aws::String>
    AvailabilityZone& WithNetworkBorderGroup(NetworkBorderGroupT&& value) { SetNetworkBorderGroup(std::forward<NetworkBorderGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of zone.</p> <p>Valid values: <code>availability-zone</code> |
     * <code>local-zone</code> | <code>wavelength-zone</code> </p>
     */
    inline const Aws::String& GetZoneType() const { return m_zoneType; }
    inline bool ZoneTypeHasBeenSet() const { return m_zoneTypeHasBeenSet; }
    template<typename ZoneTypeT = Aws::String>
    void SetZoneType(ZoneTypeT&& value) { m_zoneTypeHasBeenSet = true; m_zoneType = std::forward<ZoneTypeT>(value); }
    template<typename ZoneTypeT = Aws::String>
    AvailabilityZone& WithZoneType(ZoneTypeT&& value) { SetZoneType(std::forward<ZoneTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the zone that handles some of the Local Zone or Wavelength Zone
     * control plane operations, such as API calls.</p>
     */
    inline const Aws::String& GetParentZoneName() const { return m_parentZoneName; }
    inline bool ParentZoneNameHasBeenSet() const { return m_parentZoneNameHasBeenSet; }
    template<typename ParentZoneNameT = Aws::String>
    void SetParentZoneName(ParentZoneNameT&& value) { m_parentZoneNameHasBeenSet = true; m_parentZoneName = std::forward<ParentZoneNameT>(value); }
    template<typename ParentZoneNameT = Aws::String>
    AvailabilityZone& WithParentZoneName(ParentZoneNameT&& value) { SetParentZoneName(std::forward<ParentZoneNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the zone that handles some of the Local Zone or Wavelength Zone
     * control plane operations, such as API calls.</p>
     */
    inline const Aws::String& GetParentZoneId() const { return m_parentZoneId; }
    inline bool ParentZoneIdHasBeenSet() const { return m_parentZoneIdHasBeenSet; }
    template<typename ParentZoneIdT = Aws::String>
    void SetParentZoneId(ParentZoneIdT&& value) { m_parentZoneIdHasBeenSet = true; m_parentZoneId = std::forward<ParentZoneIdT>(value); }
    template<typename ParentZoneIdT = Aws::String>
    AvailabilityZone& WithParentZoneId(ParentZoneIdT&& value) { SetParentZoneId(std::forward<ParentZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long name of the Availability Zone group, Local Zone group, or Wavelength
     * Zone group.</p>
     */
    inline const Aws::String& GetGroupLongName() const { return m_groupLongName; }
    inline bool GroupLongNameHasBeenSet() const { return m_groupLongNameHasBeenSet; }
    template<typename GroupLongNameT = Aws::String>
    void SetGroupLongName(GroupLongNameT&& value) { m_groupLongNameHasBeenSet = true; m_groupLongName = std::forward<GroupLongNameT>(value); }
    template<typename GroupLongNameT = Aws::String>
    AvailabilityZone& WithGroupLongName(GroupLongNameT&& value) { SetGroupLongName(std::forward<GroupLongNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Availability Zone, Local Zone, or Wavelength Zone. The
     * possible values are <code>available</code>, <code>unavailable</code>, and
     * <code>constrained</code>.</p>
     */
    inline AvailabilityZoneState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AvailabilityZoneState value) { m_stateHasBeenSet = true; m_state = value; }
    inline AvailabilityZone& WithState(AvailabilityZoneState value) { SetState(value); return *this;}
    ///@}
  private:

    AvailabilityZoneOptInStatus m_optInStatus{AvailabilityZoneOptInStatus::NOT_SET};
    bool m_optInStatusHasBeenSet = false;

    Aws::Vector<AvailabilityZoneMessage> m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_zoneName;
    bool m_zoneNameHasBeenSet = false;

    Aws::String m_zoneId;
    bool m_zoneIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;

    Aws::String m_zoneType;
    bool m_zoneTypeHasBeenSet = false;

    Aws::String m_parentZoneName;
    bool m_parentZoneNameHasBeenSet = false;

    Aws::String m_parentZoneId;
    bool m_parentZoneIdHasBeenSet = false;

    Aws::String m_groupLongName;
    bool m_groupLongNameHasBeenSet = false;

    AvailabilityZoneState m_state{AvailabilityZoneState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
