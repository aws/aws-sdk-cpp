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
   * <p>One or more targets associated with the specified event window. Only one
   * <i>type</i> of target (instance ID, instance tag, or Dedicated Host ID) can be
   * associated with an event window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceEventWindowAssociationRequest">AWS
   * API Reference</a></p>
   */
  class InstanceEventWindowAssociationRequest
  {
  public:
    AWS_EC2_API InstanceEventWindowAssociationRequest();
    AWS_EC2_API InstanceEventWindowAssociationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceEventWindowAssociationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IDs of the instances to associate with the event window. If the instance
     * is on a Dedicated Host, you can't specify the Instance ID parameter; you must
     * use the Dedicated Host ID parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The IDs of the instances to associate with the event window. If the instance
     * is on a Dedicated Host, you can't specify the Instance ID parameter; you must
     * use the Dedicated Host ID parameter.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>The IDs of the instances to associate with the event window. If the instance
     * is on a Dedicated Host, you can't specify the Instance ID parameter; you must
     * use the Dedicated Host ID parameter.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The IDs of the instances to associate with the event window. If the instance
     * is on a Dedicated Host, you can't specify the Instance ID parameter; you must
     * use the Dedicated Host ID parameter.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>The IDs of the instances to associate with the event window. If the instance
     * is on a Dedicated Host, you can't specify the Instance ID parameter; you must
     * use the Dedicated Host ID parameter.</p>
     */
    inline InstanceEventWindowAssociationRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The IDs of the instances to associate with the event window. If the instance
     * is on a Dedicated Host, you can't specify the Instance ID parameter; you must
     * use the Dedicated Host ID parameter.</p>
     */
    inline InstanceEventWindowAssociationRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the instances to associate with the event window. If the instance
     * is on a Dedicated Host, you can't specify the Instance ID parameter; you must
     * use the Dedicated Host ID parameter.</p>
     */
    inline InstanceEventWindowAssociationRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the instances to associate with the event window. If the instance
     * is on a Dedicated Host, you can't specify the Instance ID parameter; you must
     * use the Dedicated Host ID parameter.</p>
     */
    inline InstanceEventWindowAssociationRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the instances to associate with the event window. If the instance
     * is on a Dedicated Host, you can't specify the Instance ID parameter; you must
     * use the Dedicated Host ID parameter.</p>
     */
    inline InstanceEventWindowAssociationRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }


    /**
     * <p>The instance tags to associate with the event window. Any instances
     * associated with the tags will be associated with the event window.</p>
     */
    inline const Aws::Vector<Tag>& GetInstanceTags() const{ return m_instanceTags; }

    /**
     * <p>The instance tags to associate with the event window. Any instances
     * associated with the tags will be associated with the event window.</p>
     */
    inline bool InstanceTagsHasBeenSet() const { return m_instanceTagsHasBeenSet; }

    /**
     * <p>The instance tags to associate with the event window. Any instances
     * associated with the tags will be associated with the event window.</p>
     */
    inline void SetInstanceTags(const Aws::Vector<Tag>& value) { m_instanceTagsHasBeenSet = true; m_instanceTags = value; }

    /**
     * <p>The instance tags to associate with the event window. Any instances
     * associated with the tags will be associated with the event window.</p>
     */
    inline void SetInstanceTags(Aws::Vector<Tag>&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags = std::move(value); }

    /**
     * <p>The instance tags to associate with the event window. Any instances
     * associated with the tags will be associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationRequest& WithInstanceTags(const Aws::Vector<Tag>& value) { SetInstanceTags(value); return *this;}

    /**
     * <p>The instance tags to associate with the event window. Any instances
     * associated with the tags will be associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationRequest& WithInstanceTags(Aws::Vector<Tag>&& value) { SetInstanceTags(std::move(value)); return *this;}

    /**
     * <p>The instance tags to associate with the event window. Any instances
     * associated with the tags will be associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationRequest& AddInstanceTags(const Tag& value) { m_instanceTagsHasBeenSet = true; m_instanceTags.push_back(value); return *this; }

    /**
     * <p>The instance tags to associate with the event window. Any instances
     * associated with the tags will be associated with the event window.</p>
     */
    inline InstanceEventWindowAssociationRequest& AddInstanceTags(Tag&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The IDs of the Dedicated Hosts to associate with the event window.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDedicatedHostIds() const{ return m_dedicatedHostIds; }

    /**
     * <p>The IDs of the Dedicated Hosts to associate with the event window.</p>
     */
    inline bool DedicatedHostIdsHasBeenSet() const { return m_dedicatedHostIdsHasBeenSet; }

    /**
     * <p>The IDs of the Dedicated Hosts to associate with the event window.</p>
     */
    inline void SetDedicatedHostIds(const Aws::Vector<Aws::String>& value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds = value; }

    /**
     * <p>The IDs of the Dedicated Hosts to associate with the event window.</p>
     */
    inline void SetDedicatedHostIds(Aws::Vector<Aws::String>&& value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds = std::move(value); }

    /**
     * <p>The IDs of the Dedicated Hosts to associate with the event window.</p>
     */
    inline InstanceEventWindowAssociationRequest& WithDedicatedHostIds(const Aws::Vector<Aws::String>& value) { SetDedicatedHostIds(value); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts to associate with the event window.</p>
     */
    inline InstanceEventWindowAssociationRequest& WithDedicatedHostIds(Aws::Vector<Aws::String>&& value) { SetDedicatedHostIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts to associate with the event window.</p>
     */
    inline InstanceEventWindowAssociationRequest& AddDedicatedHostIds(const Aws::String& value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts to associate with the event window.</p>
     */
    inline InstanceEventWindowAssociationRequest& AddDedicatedHostIds(Aws::String&& value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts to associate with the event window.</p>
     */
    inline InstanceEventWindowAssociationRequest& AddDedicatedHostIds(const char* value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    Aws::Vector<Tag> m_instanceTags;
    bool m_instanceTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dedicatedHostIds;
    bool m_dedicatedHostIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
