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
    AWS_EC2_API InstanceEventWindowAssociationRequest() = default;
    AWS_EC2_API InstanceEventWindowAssociationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceEventWindowAssociationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IDs of the instances to associate with the event window. If the instance
     * is on a Dedicated Host, you can't specify the Instance ID parameter; you must
     * use the Dedicated Host ID parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    InstanceEventWindowAssociationRequest& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = Aws::String>
    InstanceEventWindowAssociationRequest& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance tags to associate with the event window. Any instances
     * associated with the tags will be associated with the event window.</p> <p>Note
     * that while you can't create tag keys beginning with <code>aws:</code>, you can
     * specify existing Amazon Web Services managed tag keys (with the
     * <code>aws:</code> prefix) when specifying them as targets to associate with the
     * event window.</p>
     */
    inline const Aws::Vector<Tag>& GetInstanceTags() const { return m_instanceTags; }
    inline bool InstanceTagsHasBeenSet() const { return m_instanceTagsHasBeenSet; }
    template<typename InstanceTagsT = Aws::Vector<Tag>>
    void SetInstanceTags(InstanceTagsT&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags = std::forward<InstanceTagsT>(value); }
    template<typename InstanceTagsT = Aws::Vector<Tag>>
    InstanceEventWindowAssociationRequest& WithInstanceTags(InstanceTagsT&& value) { SetInstanceTags(std::forward<InstanceTagsT>(value)); return *this;}
    template<typename InstanceTagsT = Tag>
    InstanceEventWindowAssociationRequest& AddInstanceTags(InstanceTagsT&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags.emplace_back(std::forward<InstanceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the Dedicated Hosts to associate with the event window.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDedicatedHostIds() const { return m_dedicatedHostIds; }
    inline bool DedicatedHostIdsHasBeenSet() const { return m_dedicatedHostIdsHasBeenSet; }
    template<typename DedicatedHostIdsT = Aws::Vector<Aws::String>>
    void SetDedicatedHostIds(DedicatedHostIdsT&& value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds = std::forward<DedicatedHostIdsT>(value); }
    template<typename DedicatedHostIdsT = Aws::Vector<Aws::String>>
    InstanceEventWindowAssociationRequest& WithDedicatedHostIds(DedicatedHostIdsT&& value) { SetDedicatedHostIds(std::forward<DedicatedHostIdsT>(value)); return *this;}
    template<typename DedicatedHostIdsT = Aws::String>
    InstanceEventWindowAssociationRequest& AddDedicatedHostIds(DedicatedHostIdsT&& value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds.emplace_back(std::forward<DedicatedHostIdsT>(value)); return *this; }
    ///@}
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
