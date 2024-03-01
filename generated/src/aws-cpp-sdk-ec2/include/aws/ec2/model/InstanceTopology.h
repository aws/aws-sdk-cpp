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
    AWS_EC2_API InstanceTopology();
    AWS_EC2_API InstanceTopology(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceTopology& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline InstanceTopology& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline InstanceTopology& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline InstanceTopology& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type.</p>
     */
    inline InstanceTopology& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline InstanceTopology& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline InstanceTopology& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The name of the placement group that the instance is in.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the placement group that the instance is in.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the placement group that the instance is in.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the placement group that the instance is in.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the placement group that the instance is in.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the placement group that the instance is in.</p>
     */
    inline InstanceTopology& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the placement group that the instance is in.</p>
     */
    inline InstanceTopology& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the placement group that the instance is in.</p>
     */
    inline InstanceTopology& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The network nodes. The nodes are hashed based on your account. Instances from
     * different accounts running under the same server will return a different hashed
     * list of strings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkNodes() const{ return m_networkNodes; }

    /**
     * <p>The network nodes. The nodes are hashed based on your account. Instances from
     * different accounts running under the same server will return a different hashed
     * list of strings.</p>
     */
    inline bool NetworkNodesHasBeenSet() const { return m_networkNodesHasBeenSet; }

    /**
     * <p>The network nodes. The nodes are hashed based on your account. Instances from
     * different accounts running under the same server will return a different hashed
     * list of strings.</p>
     */
    inline void SetNetworkNodes(const Aws::Vector<Aws::String>& value) { m_networkNodesHasBeenSet = true; m_networkNodes = value; }

    /**
     * <p>The network nodes. The nodes are hashed based on your account. Instances from
     * different accounts running under the same server will return a different hashed
     * list of strings.</p>
     */
    inline void SetNetworkNodes(Aws::Vector<Aws::String>&& value) { m_networkNodesHasBeenSet = true; m_networkNodes = std::move(value); }

    /**
     * <p>The network nodes. The nodes are hashed based on your account. Instances from
     * different accounts running under the same server will return a different hashed
     * list of strings.</p>
     */
    inline InstanceTopology& WithNetworkNodes(const Aws::Vector<Aws::String>& value) { SetNetworkNodes(value); return *this;}

    /**
     * <p>The network nodes. The nodes are hashed based on your account. Instances from
     * different accounts running under the same server will return a different hashed
     * list of strings.</p>
     */
    inline InstanceTopology& WithNetworkNodes(Aws::Vector<Aws::String>&& value) { SetNetworkNodes(std::move(value)); return *this;}

    /**
     * <p>The network nodes. The nodes are hashed based on your account. Instances from
     * different accounts running under the same server will return a different hashed
     * list of strings.</p>
     */
    inline InstanceTopology& AddNetworkNodes(const Aws::String& value) { m_networkNodesHasBeenSet = true; m_networkNodes.push_back(value); return *this; }

    /**
     * <p>The network nodes. The nodes are hashed based on your account. Instances from
     * different accounts running under the same server will return a different hashed
     * list of strings.</p>
     */
    inline InstanceTopology& AddNetworkNodes(Aws::String&& value) { m_networkNodesHasBeenSet = true; m_networkNodes.push_back(std::move(value)); return *this; }

    /**
     * <p>The network nodes. The nodes are hashed based on your account. Instances from
     * different accounts running under the same server will return a different hashed
     * list of strings.</p>
     */
    inline InstanceTopology& AddNetworkNodes(const char* value) { m_networkNodesHasBeenSet = true; m_networkNodes.push_back(value); return *this; }


    /**
     * <p>The name of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The name of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The name of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The name of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The name of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The name of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline InstanceTopology& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The name of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline InstanceTopology& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The name of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline InstanceTopology& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The ID of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline const Aws::String& GetZoneId() const{ return m_zoneId; }

    /**
     * <p>The ID of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline bool ZoneIdHasBeenSet() const { return m_zoneIdHasBeenSet; }

    /**
     * <p>The ID of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline void SetZoneId(const Aws::String& value) { m_zoneIdHasBeenSet = true; m_zoneId = value; }

    /**
     * <p>The ID of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline void SetZoneId(Aws::String&& value) { m_zoneIdHasBeenSet = true; m_zoneId = std::move(value); }

    /**
     * <p>The ID of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline void SetZoneId(const char* value) { m_zoneIdHasBeenSet = true; m_zoneId.assign(value); }

    /**
     * <p>The ID of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline InstanceTopology& WithZoneId(const Aws::String& value) { SetZoneId(value); return *this;}

    /**
     * <p>The ID of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline InstanceTopology& WithZoneId(Aws::String&& value) { SetZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Availability Zone or Local Zone that the instance is in.</p>
     */
    inline InstanceTopology& WithZoneId(const char* value) { SetZoneId(value); return *this;}

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
