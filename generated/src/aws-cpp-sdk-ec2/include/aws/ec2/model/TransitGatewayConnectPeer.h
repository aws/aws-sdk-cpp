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
    AWS_EC2_API TransitGatewayConnectPeer();
    AWS_EC2_API TransitGatewayConnectPeer(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayConnectPeer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Connect attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }
    inline TransitGatewayConnectPeer& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}
    inline TransitGatewayConnectPeer& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}
    inline TransitGatewayConnectPeer& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline const Aws::String& GetTransitGatewayConnectPeerId() const{ return m_transitGatewayConnectPeerId; }
    inline bool TransitGatewayConnectPeerIdHasBeenSet() const { return m_transitGatewayConnectPeerIdHasBeenSet; }
    inline void SetTransitGatewayConnectPeerId(const Aws::String& value) { m_transitGatewayConnectPeerIdHasBeenSet = true; m_transitGatewayConnectPeerId = value; }
    inline void SetTransitGatewayConnectPeerId(Aws::String&& value) { m_transitGatewayConnectPeerIdHasBeenSet = true; m_transitGatewayConnectPeerId = std::move(value); }
    inline void SetTransitGatewayConnectPeerId(const char* value) { m_transitGatewayConnectPeerIdHasBeenSet = true; m_transitGatewayConnectPeerId.assign(value); }
    inline TransitGatewayConnectPeer& WithTransitGatewayConnectPeerId(const Aws::String& value) { SetTransitGatewayConnectPeerId(value); return *this;}
    inline TransitGatewayConnectPeer& WithTransitGatewayConnectPeerId(Aws::String&& value) { SetTransitGatewayConnectPeerId(std::move(value)); return *this;}
    inline TransitGatewayConnectPeer& WithTransitGatewayConnectPeerId(const char* value) { SetTransitGatewayConnectPeerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Connect peer.</p>
     */
    inline const TransitGatewayConnectPeerState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const TransitGatewayConnectPeerState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(TransitGatewayConnectPeerState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline TransitGatewayConnectPeer& WithState(const TransitGatewayConnectPeerState& value) { SetState(value); return *this;}
    inline TransitGatewayConnectPeer& WithState(TransitGatewayConnectPeerState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TransitGatewayConnectPeer& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TransitGatewayConnectPeer& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Connect peer details.</p>
     */
    inline const TransitGatewayConnectPeerConfiguration& GetConnectPeerConfiguration() const{ return m_connectPeerConfiguration; }
    inline bool ConnectPeerConfigurationHasBeenSet() const { return m_connectPeerConfigurationHasBeenSet; }
    inline void SetConnectPeerConfiguration(const TransitGatewayConnectPeerConfiguration& value) { m_connectPeerConfigurationHasBeenSet = true; m_connectPeerConfiguration = value; }
    inline void SetConnectPeerConfiguration(TransitGatewayConnectPeerConfiguration&& value) { m_connectPeerConfigurationHasBeenSet = true; m_connectPeerConfiguration = std::move(value); }
    inline TransitGatewayConnectPeer& WithConnectPeerConfiguration(const TransitGatewayConnectPeerConfiguration& value) { SetConnectPeerConfiguration(value); return *this;}
    inline TransitGatewayConnectPeer& WithConnectPeerConfiguration(TransitGatewayConnectPeerConfiguration&& value) { SetConnectPeerConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the Connect peer.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline TransitGatewayConnectPeer& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline TransitGatewayConnectPeer& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline TransitGatewayConnectPeer& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline TransitGatewayConnectPeer& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_transitGatewayConnectPeerId;
    bool m_transitGatewayConnectPeerIdHasBeenSet = false;

    TransitGatewayConnectPeerState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    TransitGatewayConnectPeerConfiguration m_connectPeerConfiguration;
    bool m_connectPeerConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
