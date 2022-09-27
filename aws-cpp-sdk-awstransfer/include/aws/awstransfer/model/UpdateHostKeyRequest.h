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
  class AWS_TRANSFER_API UpdateHostKeyRequest : public TransferRequest
  {
  public:
    UpdateHostKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateHostKey"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Provide the ID of the server that contains the host key that you are
     * updating.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>Provide the ID of the server that contains the host key that you are
     * updating.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>Provide the ID of the server that contains the host key that you are
     * updating.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>Provide the ID of the server that contains the host key that you are
     * updating.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>Provide the ID of the server that contains the host key that you are
     * updating.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>Provide the ID of the server that contains the host key that you are
     * updating.</p>
     */
    inline UpdateHostKeyRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>Provide the ID of the server that contains the host key that you are
     * updating.</p>
     */
    inline UpdateHostKeyRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>Provide the ID of the server that contains the host key that you are
     * updating.</p>
     */
    inline UpdateHostKeyRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>Provide the ID of the host key that you are updating.</p>
     */
    inline const Aws::String& GetHostKeyId() const{ return m_hostKeyId; }

    /**
     * <p>Provide the ID of the host key that you are updating.</p>
     */
    inline bool HostKeyIdHasBeenSet() const { return m_hostKeyIdHasBeenSet; }

    /**
     * <p>Provide the ID of the host key that you are updating.</p>
     */
    inline void SetHostKeyId(const Aws::String& value) { m_hostKeyIdHasBeenSet = true; m_hostKeyId = value; }

    /**
     * <p>Provide the ID of the host key that you are updating.</p>
     */
    inline void SetHostKeyId(Aws::String&& value) { m_hostKeyIdHasBeenSet = true; m_hostKeyId = std::move(value); }

    /**
     * <p>Provide the ID of the host key that you are updating.</p>
     */
    inline void SetHostKeyId(const char* value) { m_hostKeyIdHasBeenSet = true; m_hostKeyId.assign(value); }

    /**
     * <p>Provide the ID of the host key that you are updating.</p>
     */
    inline UpdateHostKeyRequest& WithHostKeyId(const Aws::String& value) { SetHostKeyId(value); return *this;}

    /**
     * <p>Provide the ID of the host key that you are updating.</p>
     */
    inline UpdateHostKeyRequest& WithHostKeyId(Aws::String&& value) { SetHostKeyId(std::move(value)); return *this;}

    /**
     * <p>Provide the ID of the host key that you are updating.</p>
     */
    inline UpdateHostKeyRequest& WithHostKeyId(const char* value) { SetHostKeyId(value); return *this;}


    /**
     * <p>Provide an updated description for the host key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Provide an updated description for the host key.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Provide an updated description for the host key.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Provide an updated description for the host key.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Provide an updated description for the host key.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Provide an updated description for the host key.</p>
     */
    inline UpdateHostKeyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Provide an updated description for the host key.</p>
     */
    inline UpdateHostKeyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Provide an updated description for the host key.</p>
     */
    inline UpdateHostKeyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::String m_hostKeyId;
    bool m_hostKeyIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
