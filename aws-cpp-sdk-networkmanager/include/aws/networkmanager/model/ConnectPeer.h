/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/ConnectPeerState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmanager/model/ConnectPeerConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a core network Connect peer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ConnectPeer">AWS
   * API Reference</a></p>
   */
  class ConnectPeer
  {
  public:
    AWS_NETWORKMANAGER_API ConnectPeer();
    AWS_NETWORKMANAGER_API ConnectPeer(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ConnectPeer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline ConnectPeer& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline ConnectPeer& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline ConnectPeer& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The ID of the attachment to connect.</p>
     */
    inline const Aws::String& GetConnectAttachmentId() const{ return m_connectAttachmentId; }

    /**
     * <p>The ID of the attachment to connect.</p>
     */
    inline bool ConnectAttachmentIdHasBeenSet() const { return m_connectAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the attachment to connect.</p>
     */
    inline void SetConnectAttachmentId(const Aws::String& value) { m_connectAttachmentIdHasBeenSet = true; m_connectAttachmentId = value; }

    /**
     * <p>The ID of the attachment to connect.</p>
     */
    inline void SetConnectAttachmentId(Aws::String&& value) { m_connectAttachmentIdHasBeenSet = true; m_connectAttachmentId = std::move(value); }

    /**
     * <p>The ID of the attachment to connect.</p>
     */
    inline void SetConnectAttachmentId(const char* value) { m_connectAttachmentIdHasBeenSet = true; m_connectAttachmentId.assign(value); }

    /**
     * <p>The ID of the attachment to connect.</p>
     */
    inline ConnectPeer& WithConnectAttachmentId(const Aws::String& value) { SetConnectAttachmentId(value); return *this;}

    /**
     * <p>The ID of the attachment to connect.</p>
     */
    inline ConnectPeer& WithConnectAttachmentId(Aws::String&& value) { SetConnectAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attachment to connect.</p>
     */
    inline ConnectPeer& WithConnectAttachmentId(const char* value) { SetConnectAttachmentId(value); return *this;}


    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline const Aws::String& GetConnectPeerId() const{ return m_connectPeerId; }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline bool ConnectPeerIdHasBeenSet() const { return m_connectPeerIdHasBeenSet; }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline void SetConnectPeerId(const Aws::String& value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId = value; }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline void SetConnectPeerId(Aws::String&& value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId = std::move(value); }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline void SetConnectPeerId(const char* value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId.assign(value); }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline ConnectPeer& WithConnectPeerId(const Aws::String& value) { SetConnectPeerId(value); return *this;}

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline ConnectPeer& WithConnectPeerId(Aws::String&& value) { SetConnectPeerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline ConnectPeer& WithConnectPeerId(const char* value) { SetConnectPeerId(value); return *this;}


    /**
     * <p>The Connect peer Regions where edges are located.</p>
     */
    inline const Aws::String& GetEdgeLocation() const{ return m_edgeLocation; }

    /**
     * <p>The Connect peer Regions where edges are located.</p>
     */
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }

    /**
     * <p>The Connect peer Regions where edges are located.</p>
     */
    inline void SetEdgeLocation(const Aws::String& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = value; }

    /**
     * <p>The Connect peer Regions where edges are located.</p>
     */
    inline void SetEdgeLocation(Aws::String&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::move(value); }

    /**
     * <p>The Connect peer Regions where edges are located.</p>
     */
    inline void SetEdgeLocation(const char* value) { m_edgeLocationHasBeenSet = true; m_edgeLocation.assign(value); }

    /**
     * <p>The Connect peer Regions where edges are located.</p>
     */
    inline ConnectPeer& WithEdgeLocation(const Aws::String& value) { SetEdgeLocation(value); return *this;}

    /**
     * <p>The Connect peer Regions where edges are located.</p>
     */
    inline ConnectPeer& WithEdgeLocation(Aws::String&& value) { SetEdgeLocation(std::move(value)); return *this;}

    /**
     * <p>The Connect peer Regions where edges are located.</p>
     */
    inline ConnectPeer& WithEdgeLocation(const char* value) { SetEdgeLocation(value); return *this;}


    /**
     * <p>The state of the Connect peer.</p>
     */
    inline const ConnectPeerState& GetState() const{ return m_state; }

    /**
     * <p>The state of the Connect peer.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the Connect peer.</p>
     */
    inline void SetState(const ConnectPeerState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the Connect peer.</p>
     */
    inline void SetState(ConnectPeerState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the Connect peer.</p>
     */
    inline ConnectPeer& WithState(const ConnectPeerState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the Connect peer.</p>
     */
    inline ConnectPeer& WithState(ConnectPeerState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the Connect peer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the Connect peer was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the Connect peer was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the Connect peer was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the Connect peer was created.</p>
     */
    inline ConnectPeer& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the Connect peer was created.</p>
     */
    inline ConnectPeer& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The configuration of the Connect peer.</p>
     */
    inline const ConnectPeerConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration of the Connect peer.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration of the Connect peer.</p>
     */
    inline void SetConfiguration(const ConnectPeerConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration of the Connect peer.</p>
     */
    inline void SetConfiguration(ConnectPeerConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration of the Connect peer.</p>
     */
    inline ConnectPeer& WithConfiguration(const ConnectPeerConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration of the Connect peer.</p>
     */
    inline ConnectPeer& WithConfiguration(ConnectPeerConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The list of key-value tags associated with the Connect peer.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of key-value tags associated with the Connect peer.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of key-value tags associated with the Connect peer.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of key-value tags associated with the Connect peer.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of key-value tags associated with the Connect peer.</p>
     */
    inline ConnectPeer& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value tags associated with the Connect peer.</p>
     */
    inline ConnectPeer& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value tags associated with the Connect peer.</p>
     */
    inline ConnectPeer& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of key-value tags associated with the Connect peer.</p>
     */
    inline ConnectPeer& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_connectAttachmentId;
    bool m_connectAttachmentIdHasBeenSet = false;

    Aws::String m_connectPeerId;
    bool m_connectPeerIdHasBeenSet = false;

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;

    ConnectPeerState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ConnectPeerConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
