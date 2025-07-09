/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about the instance topology.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceTopology">AWS
   * API Reference</a></p>
   */
  class InstanceTopology
  {
  public:
    AWS_EC2_API InstanceTopology() = default;
    AWS_EC2_API InstanceTopology(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceTopology& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    InstanceTopology& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    InstanceTopology& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the placement group that the instance is in.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    InstanceTopology& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network nodes. The nodes are hashed based on your account. Instances from
     * different accounts running under the same server will return a different hashed
     * list of strings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkNodes() const { return m_networkNodes; }
    inline bool NetworkNodesHasBeenSet() const { return m_networkNodesHasBeenSet; }
    template<typename NetworkNodesT = Aws::Vector<Aws::String>>
    void SetNetworkNodes(NetworkNodesT&& value) { m_networkNodesHasBeenSet = true; m_networkNodes = std::forward<NetworkNodesT>(value); }
    template<typename NetworkNodesT = Aws::Vector<Aws::String>>
    InstanceTopology& WithNetworkNodes(NetworkNodesT&& value) { SetNetworkNodes(std::forward<NetworkNodesT>(value)); return *this;}
    template<typename NetworkNodesT = Aws::String>
    InstanceTopology& AddNetworkNodes(NetworkNodesT&& value) { m_networkNodesHasBeenSet = true; m_networkNodes.emplace_back(std::forward<NetworkNodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    InstanceTopology& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline const Aws::String& GetZoneId() const { return m_zoneId; }
    inline bool ZoneIdHasBeenSet() const { return m_zoneIdHasBeenSet; }
    template<typename ZoneIdT = Aws::String>
    void SetZoneId(ZoneIdT&& value) { m_zoneIdHasBeenSet = true; m_zoneId = std::forward<ZoneIdT>(value); }
    template<typename ZoneIdT = Aws::String>
    InstanceTopology& WithZoneId(ZoneIdT&& value) { SetZoneId(std::forward<ZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Block. This parameter is only supported for
     * Ultraserver instances and identifies instances within the Ultraserver
     * domain.</p>
     */
    inline const Aws::String& GetCapacityBlockId() const { return m_capacityBlockId; }
    inline bool CapacityBlockIdHasBeenSet() const { return m_capacityBlockIdHasBeenSet; }
    template<typename CapacityBlockIdT = Aws::String>
    void SetCapacityBlockId(CapacityBlockIdT&& value) { m_capacityBlockIdHasBeenSet = true; m_capacityBlockId = std::forward<CapacityBlockIdT>(value); }
    template<typename CapacityBlockIdT = Aws::String>
    InstanceTopology& WithCapacityBlockId(CapacityBlockIdT&& value) { SetCapacityBlockId(std::forward<CapacityBlockIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkNodes;
    bool m_networkNodesHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_zoneId;
    bool m_zoneIdHasBeenSet = false;

    Aws::String m_capacityBlockId;
    bool m_capacityBlockIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
