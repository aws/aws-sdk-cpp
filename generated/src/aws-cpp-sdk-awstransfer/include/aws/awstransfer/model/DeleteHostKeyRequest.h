/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class DeleteHostKeyRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API DeleteHostKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteHostKey"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the server that contains the host key that you are
     * deleting.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>The identifier of the server that contains the host key that you are
     * deleting.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>The identifier of the server that contains the host key that you are
     * deleting.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>The identifier of the server that contains the host key that you are
     * deleting.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>The identifier of the server that contains the host key that you are
     * deleting.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>The identifier of the server that contains the host key that you are
     * deleting.</p>
     */
    inline DeleteHostKeyRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The identifier of the server that contains the host key that you are
     * deleting.</p>
     */
    inline DeleteHostKeyRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the server that contains the host key that you are
     * deleting.</p>
     */
    inline DeleteHostKeyRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>The identifier of the host key that you are deleting.</p>
     */
    inline const Aws::String& GetHostKeyId() const{ return m_hostKeyId; }

    /**
     * <p>The identifier of the host key that you are deleting.</p>
     */
    inline bool HostKeyIdHasBeenSet() const { return m_hostKeyIdHasBeenSet; }

    /**
     * <p>The identifier of the host key that you are deleting.</p>
     */
    inline void SetHostKeyId(const Aws::String& value) { m_hostKeyIdHasBeenSet = true; m_hostKeyId = value; }

    /**
     * <p>The identifier of the host key that you are deleting.</p>
     */
    inline void SetHostKeyId(Aws::String&& value) { m_hostKeyIdHasBeenSet = true; m_hostKeyId = std::move(value); }

    /**
     * <p>The identifier of the host key that you are deleting.</p>
     */
    inline void SetHostKeyId(const char* value) { m_hostKeyIdHasBeenSet = true; m_hostKeyId.assign(value); }

    /**
     * <p>The identifier of the host key that you are deleting.</p>
     */
    inline DeleteHostKeyRequest& WithHostKeyId(const Aws::String& value) { SetHostKeyId(value); return *this;}

    /**
     * <p>The identifier of the host key that you are deleting.</p>
     */
    inline DeleteHostKeyRequest& WithHostKeyId(Aws::String&& value) { SetHostKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the host key that you are deleting.</p>
     */
    inline DeleteHostKeyRequest& WithHostKeyId(const char* value) { SetHostKeyId(value); return *this;}

  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::String m_hostKeyId;
    bool m_hostKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
