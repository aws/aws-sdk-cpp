/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>One or more targets associated with the event window.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceEventWindowAssociationTarget">AWS
   * API Reference</a></p>
   */
  class InstanceEventWindowAssociationTarget
  {
  public:
    AWS_EC2_API InstanceEventWindowAssociationTarget();
    AWS_EC2_API InstanceEventWindowAssociationTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceEventWindowAssociationTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IDs of the instances associated with the event window.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The IDs of the instances associated with the event window.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>The IDs of the instances associated with the event window.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The IDs of the instances associated with the event window.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>The IDs of the instances associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationTarget& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The IDs of the instances associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationTarget& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the instances associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationTarget& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the instances associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationTarget& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the instances associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationTarget& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }


    /**
     * <p>The instance tags associated with the event window. Any instances associated
     * with the tags will be associated with the event window.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The instance tags associated with the event window. Any instances associated
     * with the tags will be associated with the event window.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The instance tags associated with the event window. Any instances associated
     * with the tags will be associated with the event window.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The instance tags associated with the event window. Any instances associated
     * with the tags will be associated with the event window.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The instance tags associated with the event window. Any instances associated
     * with the tags will be associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationTarget& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The instance tags associated with the event window. Any instances associated
     * with the tags will be associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationTarget& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The instance tags associated with the event window. Any instances associated
     * with the tags will be associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationTarget& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The instance tags associated with the event window. Any instances associated
     * with the tags will be associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationTarget& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The IDs of the Dedicated Hosts associated with the event window.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDedicatedHostIds() const{ return m_dedicatedHostIds; }

    /**
     * <p>The IDs of the Dedicated Hosts associated with the event window.</p>
     */
    inline bool DedicatedHostIdsHasBeenSet() const { return m_dedicatedHostIdsHasBeenSet; }

    /**
     * <p>The IDs of the Dedicated Hosts associated with the event window.</p>
     */
    inline void SetDedicatedHostIds(const Aws::Vector<Aws::String>& value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds = value; }

    /**
     * <p>The IDs of the Dedicated Hosts associated with the event window.</p>
     */
    inline void SetDedicatedHostIds(Aws::Vector<Aws::String>&& value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds = std::move(value); }

    /**
     * <p>The IDs of the Dedicated Hosts associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationTarget& WithDedicatedHostIds(const Aws::Vector<Aws::String>& value) { SetDedicatedHostIds(value); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationTarget& WithDedicatedHostIds(Aws::Vector<Aws::String>&& value) { SetDedicatedHostIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationTarget& AddDedicatedHostIds(const Aws::String& value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationTarget& AddDedicatedHostIds(Aws::String&& value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationTarget& AddDedicatedHostIds(const char* value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dedicatedHostIds;
    bool m_dedicatedHostIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
