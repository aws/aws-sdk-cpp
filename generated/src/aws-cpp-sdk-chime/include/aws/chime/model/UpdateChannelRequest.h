/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/ChannelMode.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class UpdateChannelRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API UpdateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannel"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;

    AWS_CHIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline UpdateChannelRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline UpdateChannelRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline UpdateChannelRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the channel.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline UpdateChannelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline UpdateChannelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline UpdateChannelRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The mode of the update request.</p>
     */
    inline const ChannelMode& GetMode() const{ return m_mode; }

    /**
     * <p>The mode of the update request.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The mode of the update request.</p>
     */
    inline void SetMode(const ChannelMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The mode of the update request.</p>
     */
    inline void SetMode(ChannelMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The mode of the update request.</p>
     */
    inline UpdateChannelRequest& WithMode(const ChannelMode& value) { SetMode(value); return *this;}

    /**
     * <p>The mode of the update request.</p>
     */
    inline UpdateChannelRequest& WithMode(ChannelMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The metadata for the update request.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata for the update request.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata for the update request.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata for the update request.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata for the update request.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The metadata for the update request.</p>
     */
    inline UpdateChannelRequest& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata for the update request.</p>
     */
    inline UpdateChannelRequest& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata for the update request.</p>
     */
    inline UpdateChannelRequest& WithMetadata(const char* value) { SetMetadata(value); return *this;}


    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const{ return m_chimeBearer; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(const Aws::String& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = value; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(Aws::String&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::move(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(const char* value) { m_chimeBearerHasBeenSet = true; m_chimeBearer.assign(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline UpdateChannelRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline UpdateChannelRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline UpdateChannelRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ChannelMode m_mode;
    bool m_modeHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
