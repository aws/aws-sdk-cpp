/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayConnectPeerState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/TransitGatewayConnectPeerConfiguration.h>
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
   * <p>Describes a transit gateway Connect peer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayConnectPeer">AWS
   * API Reference</a></p>
   */
  class TransitGatewayConnectPeer
  {
  public:
    AWS_EC2_API TransitGatewayConnectPeer() = default;
    AWS_EC2_API TransitGatewayConnectPeer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayConnectPeer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Connect attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value); }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    TransitGatewayConnectPeer& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline const Aws::String& GetTransitGatewayConnectPeerId() const { return m_transitGatewayConnectPeerId; }
    inline bool TransitGatewayConnectPeerIdHasBeenSet() const { return m_transitGatewayConnectPeerIdHasBeenSet; }
    template<typename TransitGatewayConnectPeerIdT = Aws::String>
    void SetTransitGatewayConnectPeerId(TransitGatewayConnectPeerIdT&& value) { m_transitGatewayConnectPeerIdHasBeenSet = true; m_transitGatewayConnectPeerId = std::forward<TransitGatewayConnectPeerIdT>(value); }
    template<typename TransitGatewayConnectPeerIdT = Aws::String>
    TransitGatewayConnectPeer& WithTransitGatewayConnectPeerId(TransitGatewayConnectPeerIdT&& value) { SetTransitGatewayConnectPeerId(std::forward<TransitGatewayConnectPeerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Connect peer.</p>
     */
    inline TransitGatewayConnectPeerState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(TransitGatewayConnectPeerState value) { m_stateHasBeenSet = true; m_state = value; }
    inline TransitGatewayConnectPeer& WithState(TransitGatewayConnectPeerState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TransitGatewayConnectPeer& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Connect peer details.</p>
     */
    inline const TransitGatewayConnectPeerConfiguration& GetConnectPeerConfiguration() const { return m_connectPeerConfiguration; }
    inline bool ConnectPeerConfigurationHasBeenSet() const { return m_connectPeerConfigurationHasBeenSet; }
    template<typename ConnectPeerConfigurationT = TransitGatewayConnectPeerConfiguration>
    void SetConnectPeerConfiguration(ConnectPeerConfigurationT&& value) { m_connectPeerConfigurationHasBeenSet = true; m_connectPeerConfiguration = std::forward<ConnectPeerConfigurationT>(value); }
    template<typename ConnectPeerConfigurationT = TransitGatewayConnectPeerConfiguration>
    TransitGatewayConnectPeer& WithConnectPeerConfiguration(ConnectPeerConfigurationT&& value) { SetConnectPeerConfiguration(std::forward<ConnectPeerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the Connect peer.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TransitGatewayConnectPeer& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TransitGatewayConnectPeer& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_transitGatewayConnectPeerId;
    bool m_transitGatewayConnectPeerIdHasBeenSet = false;

    TransitGatewayConnectPeerState m_state{TransitGatewayConnectPeerState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    TransitGatewayConnectPeerConfiguration m_connectPeerConfiguration;
    bool m_connectPeerConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
