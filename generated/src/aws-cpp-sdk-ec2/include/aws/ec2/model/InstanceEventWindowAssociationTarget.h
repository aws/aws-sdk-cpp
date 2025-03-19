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
    AWS_EC2_API InstanceEventWindowAssociationTarget() = default;
    AWS_EC2_API InstanceEventWindowAssociationTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceEventWindowAssociationTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IDs of the instances associated with the event window.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    InstanceEventWindowAssociationTarget& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = Aws::String>
    InstanceEventWindowAssociationTarget& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance tags associated with the event window. Any instances associated
     * with the tags will be associated with the event window.</p> <p>Note that while
     * you can't create tag keys beginning with <code>aws:</code>, you can specify
     * existing Amazon Web Services managed tag keys (with the <code>aws:</code>
     * prefix) when specifying them as targets to associate with the event window.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    InstanceEventWindowAssociationTarget& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    InstanceEventWindowAssociationTarget& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the Dedicated Hosts associated with the event window.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDedicatedHostIds() const { return m_dedicatedHostIds; }
    inline bool DedicatedHostIdsHasBeenSet() const { return m_dedicatedHostIdsHasBeenSet; }
    template<typename DedicatedHostIdsT = Aws::Vector<Aws::String>>
    void SetDedicatedHostIds(DedicatedHostIdsT&& value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds = std::forward<DedicatedHostIdsT>(value); }
    template<typename DedicatedHostIdsT = Aws::Vector<Aws::String>>
    InstanceEventWindowAssociationTarget& WithDedicatedHostIds(DedicatedHostIdsT&& value) { SetDedicatedHostIds(std::forward<DedicatedHostIdsT>(value)); return *this;}
    template<typename DedicatedHostIdsT = Aws::String>
    InstanceEventWindowAssociationTarget& AddDedicatedHostIds(DedicatedHostIdsT&& value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds.emplace_back(std::forward<DedicatedHostIdsT>(value)); return *this; }
    ///@}
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
