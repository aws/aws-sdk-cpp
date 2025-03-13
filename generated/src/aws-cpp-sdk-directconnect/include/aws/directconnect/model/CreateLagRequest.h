/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class CreateLagRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API CreateLagRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLag"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The number of physical dedicated connections initially provisioned and
     * bundled by the LAG. You can have a maximum of four connections when the port
     * speed is 1Gbps or 10Gbps, or two when the port speed is 100Gbps or 400Gbps.</p>
     */
    inline int GetNumberOfConnections() const { return m_numberOfConnections; }
    inline bool NumberOfConnectionsHasBeenSet() const { return m_numberOfConnectionsHasBeenSet; }
    inline void SetNumberOfConnections(int value) { m_numberOfConnectionsHasBeenSet = true; m_numberOfConnections = value; }
    inline CreateLagRequest& WithNumberOfConnections(int value) { SetNumberOfConnections(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location for the LAG.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    CreateLagRequest& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bandwidth of the individual physical dedicated connections bundled by the
     * LAG. The possible values are 1Gbps,10Gbps, 100Gbps, and 400Gbps. </p>
     */
    inline const Aws::String& GetConnectionsBandwidth() const { return m_connectionsBandwidth; }
    inline bool ConnectionsBandwidthHasBeenSet() const { return m_connectionsBandwidthHasBeenSet; }
    template<typename ConnectionsBandwidthT = Aws::String>
    void SetConnectionsBandwidth(ConnectionsBandwidthT&& value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth = std::forward<ConnectionsBandwidthT>(value); }
    template<typename ConnectionsBandwidthT = Aws::String>
    CreateLagRequest& WithConnectionsBandwidth(ConnectionsBandwidthT&& value) { SetConnectionsBandwidth(std::forward<ConnectionsBandwidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the LAG.</p>
     */
    inline const Aws::String& GetLagName() const { return m_lagName; }
    inline bool LagNameHasBeenSet() const { return m_lagNameHasBeenSet; }
    template<typename LagNameT = Aws::String>
    void SetLagName(LagNameT&& value) { m_lagNameHasBeenSet = true; m_lagName = std::forward<LagNameT>(value); }
    template<typename LagNameT = Aws::String>
    CreateLagRequest& WithLagName(LagNameT&& value) { SetLagName(std::forward<LagNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an existing dedicated connection to migrate to the LAG.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    CreateLagRequest& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the LAG.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateLagRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateLagRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the automtically created LAGs.</p>
     */
    inline const Aws::Vector<Tag>& GetChildConnectionTags() const { return m_childConnectionTags; }
    inline bool ChildConnectionTagsHasBeenSet() const { return m_childConnectionTagsHasBeenSet; }
    template<typename ChildConnectionTagsT = Aws::Vector<Tag>>
    void SetChildConnectionTags(ChildConnectionTagsT&& value) { m_childConnectionTagsHasBeenSet = true; m_childConnectionTags = std::forward<ChildConnectionTagsT>(value); }
    template<typename ChildConnectionTagsT = Aws::Vector<Tag>>
    CreateLagRequest& WithChildConnectionTags(ChildConnectionTagsT&& value) { SetChildConnectionTags(std::forward<ChildConnectionTagsT>(value)); return *this;}
    template<typename ChildConnectionTagsT = Tag>
    CreateLagRequest& AddChildConnectionTags(ChildConnectionTagsT&& value) { m_childConnectionTagsHasBeenSet = true; m_childConnectionTags.emplace_back(std::forward<ChildConnectionTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the service provider associated with the LAG.</p>
     */
    inline const Aws::String& GetProviderName() const { return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    template<typename ProviderNameT = Aws::String>
    void SetProviderName(ProviderNameT&& value) { m_providerNameHasBeenSet = true; m_providerName = std::forward<ProviderNameT>(value); }
    template<typename ProviderNameT = Aws::String>
    CreateLagRequest& WithProviderName(ProviderNameT&& value) { SetProviderName(std::forward<ProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the connection will support MAC Security (MACsec).</p>
     *  <p>All connections in the LAG must be capable of supporting MAC Security
     * (MACsec). For information about MAC Security (MACsec) prerequisties, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/direct-connect-mac-sec-getting-started.html#mac-sec-prerequisites">MACsec
     * prerequisties</a> in the <i>Direct Connect User Guide</i>.</p> 
     */
    inline bool GetRequestMACSec() const { return m_requestMACSec; }
    inline bool RequestMACSecHasBeenSet() const { return m_requestMACSecHasBeenSet; }
    inline void SetRequestMACSec(bool value) { m_requestMACSecHasBeenSet = true; m_requestMACSec = value; }
    inline CreateLagRequest& WithRequestMACSec(bool value) { SetRequestMACSec(value); return *this;}
    ///@}
  private:

    int m_numberOfConnections{0};
    bool m_numberOfConnectionsHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_connectionsBandwidth;
    bool m_connectionsBandwidthHasBeenSet = false;

    Aws::String m_lagName;
    bool m_lagNameHasBeenSet = false;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Tag> m_childConnectionTags;
    bool m_childConnectionTagsHasBeenSet = false;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    bool m_requestMACSec{false};
    bool m_requestMACSecHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
