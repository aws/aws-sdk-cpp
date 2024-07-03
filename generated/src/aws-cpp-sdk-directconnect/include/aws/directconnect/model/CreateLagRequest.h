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
    AWS_DIRECTCONNECT_API CreateLagRequest();

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
    inline int GetNumberOfConnections() const{ return m_numberOfConnections; }
    inline bool NumberOfConnectionsHasBeenSet() const { return m_numberOfConnectionsHasBeenSet; }
    inline void SetNumberOfConnections(int value) { m_numberOfConnectionsHasBeenSet = true; m_numberOfConnections = value; }
    inline CreateLagRequest& WithNumberOfConnections(int value) { SetNumberOfConnections(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location for the LAG.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline CreateLagRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline CreateLagRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline CreateLagRequest& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bandwidth of the individual physical dedicated connections bundled by the
     * LAG. The possible values are 1Gbps,10Gbps, 100Gbps, and 400Gbps. </p>
     */
    inline const Aws::String& GetConnectionsBandwidth() const{ return m_connectionsBandwidth; }
    inline bool ConnectionsBandwidthHasBeenSet() const { return m_connectionsBandwidthHasBeenSet; }
    inline void SetConnectionsBandwidth(const Aws::String& value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth = value; }
    inline void SetConnectionsBandwidth(Aws::String&& value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth = std::move(value); }
    inline void SetConnectionsBandwidth(const char* value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth.assign(value); }
    inline CreateLagRequest& WithConnectionsBandwidth(const Aws::String& value) { SetConnectionsBandwidth(value); return *this;}
    inline CreateLagRequest& WithConnectionsBandwidth(Aws::String&& value) { SetConnectionsBandwidth(std::move(value)); return *this;}
    inline CreateLagRequest& WithConnectionsBandwidth(const char* value) { SetConnectionsBandwidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the LAG.</p>
     */
    inline const Aws::String& GetLagName() const{ return m_lagName; }
    inline bool LagNameHasBeenSet() const { return m_lagNameHasBeenSet; }
    inline void SetLagName(const Aws::String& value) { m_lagNameHasBeenSet = true; m_lagName = value; }
    inline void SetLagName(Aws::String&& value) { m_lagNameHasBeenSet = true; m_lagName = std::move(value); }
    inline void SetLagName(const char* value) { m_lagNameHasBeenSet = true; m_lagName.assign(value); }
    inline CreateLagRequest& WithLagName(const Aws::String& value) { SetLagName(value); return *this;}
    inline CreateLagRequest& WithLagName(Aws::String&& value) { SetLagName(std::move(value)); return *this;}
    inline CreateLagRequest& WithLagName(const char* value) { SetLagName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an existing dedicated connection to migrate to the LAG.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }
    inline CreateLagRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline CreateLagRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline CreateLagRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the LAG.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateLagRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateLagRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateLagRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateLagRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the automtically created LAGs.</p>
     */
    inline const Aws::Vector<Tag>& GetChildConnectionTags() const{ return m_childConnectionTags; }
    inline bool ChildConnectionTagsHasBeenSet() const { return m_childConnectionTagsHasBeenSet; }
    inline void SetChildConnectionTags(const Aws::Vector<Tag>& value) { m_childConnectionTagsHasBeenSet = true; m_childConnectionTags = value; }
    inline void SetChildConnectionTags(Aws::Vector<Tag>&& value) { m_childConnectionTagsHasBeenSet = true; m_childConnectionTags = std::move(value); }
    inline CreateLagRequest& WithChildConnectionTags(const Aws::Vector<Tag>& value) { SetChildConnectionTags(value); return *this;}
    inline CreateLagRequest& WithChildConnectionTags(Aws::Vector<Tag>&& value) { SetChildConnectionTags(std::move(value)); return *this;}
    inline CreateLagRequest& AddChildConnectionTags(const Tag& value) { m_childConnectionTagsHasBeenSet = true; m_childConnectionTags.push_back(value); return *this; }
    inline CreateLagRequest& AddChildConnectionTags(Tag&& value) { m_childConnectionTagsHasBeenSet = true; m_childConnectionTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the service provider associated with the LAG.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }
    inline CreateLagRequest& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}
    inline CreateLagRequest& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}
    inline CreateLagRequest& WithProviderName(const char* value) { SetProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the connection will support MAC Security (MACsec).</p>
     *  <p>All connections in the LAG must be capable of supporting MAC Security
     * (MACsec). For information about MAC Security (MACsec) prerequisties, see <a
     * href="https://docs.aws.amazon.com/directconnect/latest/UserGuide/direct-connect-mac-sec-getting-started.html#mac-sec-prerequisites">MACsec
     * prerequisties</a> in the <i>Direct Connect User Guide</i>.</p> 
     */
    inline bool GetRequestMACSec() const{ return m_requestMACSec; }
    inline bool RequestMACSecHasBeenSet() const { return m_requestMACSecHasBeenSet; }
    inline void SetRequestMACSec(bool value) { m_requestMACSecHasBeenSet = true; m_requestMACSec = value; }
    inline CreateLagRequest& WithRequestMACSec(bool value) { SetRequestMACSec(value); return *this;}
    ///@}
  private:

    int m_numberOfConnections;
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

    bool m_requestMACSec;
    bool m_requestMACSecHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
