/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IVS
{
namespace Model
{

  /**
   */
  class StartViewerSessionRevocationRequest : public IVSRequest
  {
  public:
    AWS_IVS_API StartViewerSessionRevocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartViewerSessionRevocation"; }

    AWS_IVS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the channel associated with the viewer session to revoke.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel associated with the viewer session to revoke.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The ARN of the channel associated with the viewer session to revoke.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The ARN of the channel associated with the viewer session to revoke.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel associated with the viewer session to revoke.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel associated with the viewer session to revoke.</p>
     */
    inline StartViewerSessionRevocationRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel associated with the viewer session to revoke.</p>
     */
    inline StartViewerSessionRevocationRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel associated with the viewer session to revoke.</p>
     */
    inline StartViewerSessionRevocationRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The ID of the viewer associated with the viewer session to revoke. Do not use
     * this field for personally identifying, confidential, or sensitive
     * information.</p>
     */
    inline const Aws::String& GetViewerId() const{ return m_viewerId; }

    /**
     * <p>The ID of the viewer associated with the viewer session to revoke. Do not use
     * this field for personally identifying, confidential, or sensitive
     * information.</p>
     */
    inline bool ViewerIdHasBeenSet() const { return m_viewerIdHasBeenSet; }

    /**
     * <p>The ID of the viewer associated with the viewer session to revoke. Do not use
     * this field for personally identifying, confidential, or sensitive
     * information.</p>
     */
    inline void SetViewerId(const Aws::String& value) { m_viewerIdHasBeenSet = true; m_viewerId = value; }

    /**
     * <p>The ID of the viewer associated with the viewer session to revoke. Do not use
     * this field for personally identifying, confidential, or sensitive
     * information.</p>
     */
    inline void SetViewerId(Aws::String&& value) { m_viewerIdHasBeenSet = true; m_viewerId = std::move(value); }

    /**
     * <p>The ID of the viewer associated with the viewer session to revoke. Do not use
     * this field for personally identifying, confidential, or sensitive
     * information.</p>
     */
    inline void SetViewerId(const char* value) { m_viewerIdHasBeenSet = true; m_viewerId.assign(value); }

    /**
     * <p>The ID of the viewer associated with the viewer session to revoke. Do not use
     * this field for personally identifying, confidential, or sensitive
     * information.</p>
     */
    inline StartViewerSessionRevocationRequest& WithViewerId(const Aws::String& value) { SetViewerId(value); return *this;}

    /**
     * <p>The ID of the viewer associated with the viewer session to revoke. Do not use
     * this field for personally identifying, confidential, or sensitive
     * information.</p>
     */
    inline StartViewerSessionRevocationRequest& WithViewerId(Aws::String&& value) { SetViewerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the viewer associated with the viewer session to revoke. Do not use
     * this field for personally identifying, confidential, or sensitive
     * information.</p>
     */
    inline StartViewerSessionRevocationRequest& WithViewerId(const char* value) { SetViewerId(value); return *this;}


    /**
     * <p>An optional filter on which versions of the viewer session to revoke. All
     * versions less than or equal to the specified version will be revoked. Default:
     * 0.</p>
     */
    inline int GetViewerSessionVersionsLessThanOrEqualTo() const{ return m_viewerSessionVersionsLessThanOrEqualTo; }

    /**
     * <p>An optional filter on which versions of the viewer session to revoke. All
     * versions less than or equal to the specified version will be revoked. Default:
     * 0.</p>
     */
    inline bool ViewerSessionVersionsLessThanOrEqualToHasBeenSet() const { return m_viewerSessionVersionsLessThanOrEqualToHasBeenSet; }

    /**
     * <p>An optional filter on which versions of the viewer session to revoke. All
     * versions less than or equal to the specified version will be revoked. Default:
     * 0.</p>
     */
    inline void SetViewerSessionVersionsLessThanOrEqualTo(int value) { m_viewerSessionVersionsLessThanOrEqualToHasBeenSet = true; m_viewerSessionVersionsLessThanOrEqualTo = value; }

    /**
     * <p>An optional filter on which versions of the viewer session to revoke. All
     * versions less than or equal to the specified version will be revoked. Default:
     * 0.</p>
     */
    inline StartViewerSessionRevocationRequest& WithViewerSessionVersionsLessThanOrEqualTo(int value) { SetViewerSessionVersionsLessThanOrEqualTo(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_viewerId;
    bool m_viewerIdHasBeenSet = false;

    int m_viewerSessionVersionsLessThanOrEqualTo;
    bool m_viewerSessionVersionsLessThanOrEqualToHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
