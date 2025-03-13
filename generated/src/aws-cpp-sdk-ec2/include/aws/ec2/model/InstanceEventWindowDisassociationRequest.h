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
   * <p>The targets to disassociate from the specified event window.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceEventWindowDisassociationRequest">AWS
   * API Reference</a></p>
   */
  class InstanceEventWindowDisassociationRequest
  {
  public:
    AWS_EC2_API InstanceEventWindowDisassociationRequest() = default;
    AWS_EC2_API InstanceEventWindowDisassociationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceEventWindowDisassociationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IDs of the instances to disassociate from the event window.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    InstanceEventWindowDisassociationRequest& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = Aws::String>
    InstanceEventWindowDisassociationRequest& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance tags to disassociate from the event window. Any instances
     * associated with the tags will be disassociated from the event window.</p>
     */
    inline const Aws::Vector<Tag>& GetInstanceTags() const { return m_instanceTags; }
    inline bool InstanceTagsHasBeenSet() const { return m_instanceTagsHasBeenSet; }
    template<typename InstanceTagsT = Aws::Vector<Tag>>
    void SetInstanceTags(InstanceTagsT&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags = std::forward<InstanceTagsT>(value); }
    template<typename InstanceTagsT = Aws::Vector<Tag>>
    InstanceEventWindowDisassociationRequest& WithInstanceTags(InstanceTagsT&& value) { SetInstanceTags(std::forward<InstanceTagsT>(value)); return *this;}
    template<typename InstanceTagsT = Tag>
    InstanceEventWindowDisassociationRequest& AddInstanceTags(InstanceTagsT&& value) { m_instanceTagsHasBeenSet = true; m_instanceTags.emplace_back(std::forward<InstanceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the Dedicated Hosts to disassociate from the event window.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDedicatedHostIds() const { return m_dedicatedHostIds; }
    inline bool DedicatedHostIdsHasBeenSet() const { return m_dedicatedHostIdsHasBeenSet; }
    template<typename DedicatedHostIdsT = Aws::Vector<Aws::String>>
    void SetDedicatedHostIds(DedicatedHostIdsT&& value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds = std::forward<DedicatedHostIdsT>(value); }
    template<typename DedicatedHostIdsT = Aws::Vector<Aws::String>>
    InstanceEventWindowDisassociationRequest& WithDedicatedHostIds(DedicatedHostIdsT&& value) { SetDedicatedHostIds(std::forward<DedicatedHostIdsT>(value)); return *this;}
    template<typename DedicatedHostIdsT = Aws::String>
    InstanceEventWindowDisassociationRequest& AddDedicatedHostIds(DedicatedHostIdsT&& value) { m_dedicatedHostIdsHasBeenSet = true; m_dedicatedHostIds.emplace_back(std::forward<DedicatedHostIdsT>(value)); return *this; }
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
