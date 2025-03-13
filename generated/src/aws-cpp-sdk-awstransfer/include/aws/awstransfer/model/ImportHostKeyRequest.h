/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class ImportHostKeyRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API ImportHostKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportHostKey"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the server that contains the host key that you are
     * importing.</p>
     */
    inline const Aws::String& GetServerId() const { return m_serverId; }
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }
    template<typename ServerIdT = Aws::String>
    void SetServerId(ServerIdT&& value) { m_serverIdHasBeenSet = true; m_serverId = std::forward<ServerIdT>(value); }
    template<typename ServerIdT = Aws::String>
    ImportHostKeyRequest& WithServerId(ServerIdT&& value) { SetServerId(std::forward<ServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private key portion of an SSH key pair.</p> <p>Transfer Family accepts
     * RSA, ECDSA, and ED25519 keys.</p>
     */
    inline const Aws::String& GetHostKeyBody() const { return m_hostKeyBody; }
    inline bool HostKeyBodyHasBeenSet() const { return m_hostKeyBodyHasBeenSet; }
    template<typename HostKeyBodyT = Aws::String>
    void SetHostKeyBody(HostKeyBodyT&& value) { m_hostKeyBodyHasBeenSet = true; m_hostKeyBody = std::forward<HostKeyBodyT>(value); }
    template<typename HostKeyBodyT = Aws::String>
    ImportHostKeyRequest& WithHostKeyBody(HostKeyBodyT&& value) { SetHostKeyBody(std::forward<HostKeyBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text description that identifies this host key.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImportHostKeyRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ImportHostKeyRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ImportHostKeyRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::String m_hostKeyBody;
    bool m_hostKeyBodyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
