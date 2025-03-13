/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayMulticastDomainOptions.h>
#include <aws/ec2/model/TransitGatewayMulticastDomainState.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes the transit gateway multicast domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayMulticastDomain">AWS
   * API Reference</a></p>
   */
  class TransitGatewayMulticastDomain
  {
  public:
    AWS_EC2_API TransitGatewayMulticastDomain() = default;
    AWS_EC2_API TransitGatewayMulticastDomain(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayMulticastDomain& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainId() const { return m_transitGatewayMulticastDomainId; }
    inline bool TransitGatewayMulticastDomainIdHasBeenSet() const { return m_transitGatewayMulticastDomainIdHasBeenSet; }
    template<typename TransitGatewayMulticastDomainIdT = Aws::String>
    void SetTransitGatewayMulticastDomainId(TransitGatewayMulticastDomainIdT&& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = std::forward<TransitGatewayMulticastDomainIdT>(value); }
    template<typename TransitGatewayMulticastDomainIdT = Aws::String>
    TransitGatewayMulticastDomain& WithTransitGatewayMulticastDomainId(TransitGatewayMulticastDomainIdT&& value) { SetTransitGatewayMulticastDomainId(std::forward<TransitGatewayMulticastDomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    template<typename TransitGatewayIdT = Aws::String>
    void SetTransitGatewayId(TransitGatewayIdT&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::forward<TransitGatewayIdT>(value); }
    template<typename TransitGatewayIdT = Aws::String>
    TransitGatewayMulticastDomain& WithTransitGatewayId(TransitGatewayIdT&& value) { SetTransitGatewayId(std::forward<TransitGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway multicast domain.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainArn() const { return m_transitGatewayMulticastDomainArn; }
    inline bool TransitGatewayMulticastDomainArnHasBeenSet() const { return m_transitGatewayMulticastDomainArnHasBeenSet; }
    template<typename TransitGatewayMulticastDomainArnT = Aws::String>
    void SetTransitGatewayMulticastDomainArn(TransitGatewayMulticastDomainArnT&& value) { m_transitGatewayMulticastDomainArnHasBeenSet = true; m_transitGatewayMulticastDomainArn = std::forward<TransitGatewayMulticastDomainArnT>(value); }
    template<typename TransitGatewayMulticastDomainArnT = Aws::String>
    TransitGatewayMulticastDomain& WithTransitGatewayMulticastDomainArn(TransitGatewayMulticastDomainArnT&& value) { SetTransitGatewayMulticastDomainArn(std::forward<TransitGatewayMulticastDomainArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Amazon Web Services account that owns the transit gateway
     * multicast domain.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    TransitGatewayMulticastDomain& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for the transit gateway multicast domain.</p>
     */
    inline const TransitGatewayMulticastDomainOptions& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = TransitGatewayMulticastDomainOptions>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = TransitGatewayMulticastDomainOptions>
    TransitGatewayMulticastDomain& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastDomainState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(TransitGatewayMulticastDomainState value) { m_stateHasBeenSet = true; m_state = value; }
    inline TransitGatewayMulticastDomain& WithState(TransitGatewayMulticastDomainState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the transit gateway multicast domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TransitGatewayMulticastDomain& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the transit gateway multicast domain.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TransitGatewayMulticastDomain& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TransitGatewayMulticastDomain& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_transitGatewayMulticastDomainId;
    bool m_transitGatewayMulticastDomainIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_transitGatewayMulticastDomainArn;
    bool m_transitGatewayMulticastDomainArnHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    TransitGatewayMulticastDomainOptions m_options;
    bool m_optionsHasBeenSet = false;

    TransitGatewayMulticastDomainState m_state{TransitGatewayMulticastDomainState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
