/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes an Outpost link aggregation group (LAG).</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/OutpostLag">AWS
   * API Reference</a></p>
   */
  class OutpostLag
  {
  public:
    AWS_EC2_API OutpostLag() = default;
    AWS_EC2_API OutpostLag(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API OutpostLag& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the Outpost LAG.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    OutpostLag& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Outpost LAG owner.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    OutpostLag& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the Outpost LAG.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    OutpostLag& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Outpost LAG.</p>
     */
    inline const Aws::String& GetOutpostLagId() const { return m_outpostLagId; }
    inline bool OutpostLagIdHasBeenSet() const { return m_outpostLagIdHasBeenSet; }
    template<typename OutpostLagIdT = Aws::String>
    void SetOutpostLagId(OutpostLagIdT&& value) { m_outpostLagIdHasBeenSet = true; m_outpostLagId = std::forward<OutpostLagIdT>(value); }
    template<typename OutpostLagIdT = Aws::String>
    OutpostLag& WithOutpostLagId(OutpostLagIdT&& value) { SetOutpostLagId(std::forward<OutpostLagIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the local gateway virtual interfaces associated with the Outpost
     * LAG.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLocalGatewayVirtualInterfaceIds() const { return m_localGatewayVirtualInterfaceIds; }
    inline bool LocalGatewayVirtualInterfaceIdsHasBeenSet() const { return m_localGatewayVirtualInterfaceIdsHasBeenSet; }
    template<typename LocalGatewayVirtualInterfaceIdsT = Aws::Vector<Aws::String>>
    void SetLocalGatewayVirtualInterfaceIds(LocalGatewayVirtualInterfaceIdsT&& value) { m_localGatewayVirtualInterfaceIdsHasBeenSet = true; m_localGatewayVirtualInterfaceIds = std::forward<LocalGatewayVirtualInterfaceIdsT>(value); }
    template<typename LocalGatewayVirtualInterfaceIdsT = Aws::Vector<Aws::String>>
    OutpostLag& WithLocalGatewayVirtualInterfaceIds(LocalGatewayVirtualInterfaceIdsT&& value) { SetLocalGatewayVirtualInterfaceIds(std::forward<LocalGatewayVirtualInterfaceIdsT>(value)); return *this;}
    template<typename LocalGatewayVirtualInterfaceIdsT = Aws::String>
    OutpostLag& AddLocalGatewayVirtualInterfaceIds(LocalGatewayVirtualInterfaceIdsT&& value) { m_localGatewayVirtualInterfaceIdsHasBeenSet = true; m_localGatewayVirtualInterfaceIds.emplace_back(std::forward<LocalGatewayVirtualInterfaceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The service link virtual interface IDs associated with the Outpost LAG.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceLinkVirtualInterfaceIds() const { return m_serviceLinkVirtualInterfaceIds; }
    inline bool ServiceLinkVirtualInterfaceIdsHasBeenSet() const { return m_serviceLinkVirtualInterfaceIdsHasBeenSet; }
    template<typename ServiceLinkVirtualInterfaceIdsT = Aws::Vector<Aws::String>>
    void SetServiceLinkVirtualInterfaceIds(ServiceLinkVirtualInterfaceIdsT&& value) { m_serviceLinkVirtualInterfaceIdsHasBeenSet = true; m_serviceLinkVirtualInterfaceIds = std::forward<ServiceLinkVirtualInterfaceIdsT>(value); }
    template<typename ServiceLinkVirtualInterfaceIdsT = Aws::Vector<Aws::String>>
    OutpostLag& WithServiceLinkVirtualInterfaceIds(ServiceLinkVirtualInterfaceIdsT&& value) { SetServiceLinkVirtualInterfaceIds(std::forward<ServiceLinkVirtualInterfaceIdsT>(value)); return *this;}
    template<typename ServiceLinkVirtualInterfaceIdsT = Aws::String>
    OutpostLag& AddServiceLinkVirtualInterfaceIds(ServiceLinkVirtualInterfaceIdsT&& value) { m_serviceLinkVirtualInterfaceIdsHasBeenSet = true; m_serviceLinkVirtualInterfaceIds.emplace_back(std::forward<ServiceLinkVirtualInterfaceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags associated with the Outpost LAG.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    OutpostLag& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    OutpostLag& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_outpostLagId;
    bool m_outpostLagIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_localGatewayVirtualInterfaceIds;
    bool m_localGatewayVirtualInterfaceIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_serviceLinkVirtualInterfaceIds;
    bool m_serviceLinkVirtualInterfaceIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
