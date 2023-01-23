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
    AWS_TRANSFER_API ImportHostKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportHostKey"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the server that contains the host key that you are
     * importing.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>The identifier of the server that contains the host key that you are
     * importing.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>The identifier of the server that contains the host key that you are
     * importing.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>The identifier of the server that contains the host key that you are
     * importing.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>The identifier of the server that contains the host key that you are
     * importing.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>The identifier of the server that contains the host key that you are
     * importing.</p>
     */
    inline ImportHostKeyRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The identifier of the server that contains the host key that you are
     * importing.</p>
     */
    inline ImportHostKeyRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the server that contains the host key that you are
     * importing.</p>
     */
    inline ImportHostKeyRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>The public key portion of an SSH key pair.</p> <p>Transfer Family accepts
     * RSA, ECDSA, and ED25519 keys.</p>
     */
    inline const Aws::String& GetHostKeyBody() const{ return m_hostKeyBody; }

    /**
     * <p>The public key portion of an SSH key pair.</p> <p>Transfer Family accepts
     * RSA, ECDSA, and ED25519 keys.</p>
     */
    inline bool HostKeyBodyHasBeenSet() const { return m_hostKeyBodyHasBeenSet; }

    /**
     * <p>The public key portion of an SSH key pair.</p> <p>Transfer Family accepts
     * RSA, ECDSA, and ED25519 keys.</p>
     */
    inline void SetHostKeyBody(const Aws::String& value) { m_hostKeyBodyHasBeenSet = true; m_hostKeyBody = value; }

    /**
     * <p>The public key portion of an SSH key pair.</p> <p>Transfer Family accepts
     * RSA, ECDSA, and ED25519 keys.</p>
     */
    inline void SetHostKeyBody(Aws::String&& value) { m_hostKeyBodyHasBeenSet = true; m_hostKeyBody = std::move(value); }

    /**
     * <p>The public key portion of an SSH key pair.</p> <p>Transfer Family accepts
     * RSA, ECDSA, and ED25519 keys.</p>
     */
    inline void SetHostKeyBody(const char* value) { m_hostKeyBodyHasBeenSet = true; m_hostKeyBody.assign(value); }

    /**
     * <p>The public key portion of an SSH key pair.</p> <p>Transfer Family accepts
     * RSA, ECDSA, and ED25519 keys.</p>
     */
    inline ImportHostKeyRequest& WithHostKeyBody(const Aws::String& value) { SetHostKeyBody(value); return *this;}

    /**
     * <p>The public key portion of an SSH key pair.</p> <p>Transfer Family accepts
     * RSA, ECDSA, and ED25519 keys.</p>
     */
    inline ImportHostKeyRequest& WithHostKeyBody(Aws::String&& value) { SetHostKeyBody(std::move(value)); return *this;}

    /**
     * <p>The public key portion of an SSH key pair.</p> <p>Transfer Family accepts
     * RSA, ECDSA, and ED25519 keys.</p>
     */
    inline ImportHostKeyRequest& WithHostKeyBody(const char* value) { SetHostKeyBody(value); return *this;}


    /**
     * <p>The text description that identifies this host key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The text description that identifies this host key.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The text description that identifies this host key.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The text description that identifies this host key.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The text description that identifies this host key.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The text description that identifies this host key.</p>
     */
    inline ImportHostKeyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The text description that identifies this host key.</p>
     */
    inline ImportHostKeyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The text description that identifies this host key.</p>
     */
    inline ImportHostKeyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline ImportHostKeyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline ImportHostKeyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline ImportHostKeyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs that can be used to group and search for host keys.</p>
     */
    inline ImportHostKeyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
