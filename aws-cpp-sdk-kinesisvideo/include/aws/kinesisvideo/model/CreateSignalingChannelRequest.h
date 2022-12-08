/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/ChannelType.h>
#include <aws/kinesisvideo/model/SingleMasterConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisvideo/model/Tag.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class CreateSignalingChannelRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API CreateSignalingChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSignalingChannel"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    /**
     * <p>A name for the signaling channel that you are creating. It must be unique for
     * each Amazon Web Services account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>A name for the signaling channel that you are creating. It must be unique for
     * each Amazon Web Services account and Amazon Web Services Region.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>A name for the signaling channel that you are creating. It must be unique for
     * each Amazon Web Services account and Amazon Web Services Region.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>A name for the signaling channel that you are creating. It must be unique for
     * each Amazon Web Services account and Amazon Web Services Region.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>A name for the signaling channel that you are creating. It must be unique for
     * each Amazon Web Services account and Amazon Web Services Region.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>A name for the signaling channel that you are creating. It must be unique for
     * each Amazon Web Services account and Amazon Web Services Region.</p>
     */
    inline CreateSignalingChannelRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>A name for the signaling channel that you are creating. It must be unique for
     * each Amazon Web Services account and Amazon Web Services Region.</p>
     */
    inline CreateSignalingChannelRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>A name for the signaling channel that you are creating. It must be unique for
     * each Amazon Web Services account and Amazon Web Services Region.</p>
     */
    inline CreateSignalingChannelRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>A type of the signaling channel that you are creating. Currently,
     * <code>SINGLE_MASTER</code> is the only supported channel type. </p>
     */
    inline const ChannelType& GetChannelType() const{ return m_channelType; }

    /**
     * <p>A type of the signaling channel that you are creating. Currently,
     * <code>SINGLE_MASTER</code> is the only supported channel type. </p>
     */
    inline bool ChannelTypeHasBeenSet() const { return m_channelTypeHasBeenSet; }

    /**
     * <p>A type of the signaling channel that you are creating. Currently,
     * <code>SINGLE_MASTER</code> is the only supported channel type. </p>
     */
    inline void SetChannelType(const ChannelType& value) { m_channelTypeHasBeenSet = true; m_channelType = value; }

    /**
     * <p>A type of the signaling channel that you are creating. Currently,
     * <code>SINGLE_MASTER</code> is the only supported channel type. </p>
     */
    inline void SetChannelType(ChannelType&& value) { m_channelTypeHasBeenSet = true; m_channelType = std::move(value); }

    /**
     * <p>A type of the signaling channel that you are creating. Currently,
     * <code>SINGLE_MASTER</code> is the only supported channel type. </p>
     */
    inline CreateSignalingChannelRequest& WithChannelType(const ChannelType& value) { SetChannelType(value); return *this;}

    /**
     * <p>A type of the signaling channel that you are creating. Currently,
     * <code>SINGLE_MASTER</code> is the only supported channel type. </p>
     */
    inline CreateSignalingChannelRequest& WithChannelType(ChannelType&& value) { SetChannelType(std::move(value)); return *this;}


    /**
     * <p>A structure containing the configuration for the <code>SINGLE_MASTER</code>
     * channel type. </p>
     */
    inline const SingleMasterConfiguration& GetSingleMasterConfiguration() const{ return m_singleMasterConfiguration; }

    /**
     * <p>A structure containing the configuration for the <code>SINGLE_MASTER</code>
     * channel type. </p>
     */
    inline bool SingleMasterConfigurationHasBeenSet() const { return m_singleMasterConfigurationHasBeenSet; }

    /**
     * <p>A structure containing the configuration for the <code>SINGLE_MASTER</code>
     * channel type. </p>
     */
    inline void SetSingleMasterConfiguration(const SingleMasterConfiguration& value) { m_singleMasterConfigurationHasBeenSet = true; m_singleMasterConfiguration = value; }

    /**
     * <p>A structure containing the configuration for the <code>SINGLE_MASTER</code>
     * channel type. </p>
     */
    inline void SetSingleMasterConfiguration(SingleMasterConfiguration&& value) { m_singleMasterConfigurationHasBeenSet = true; m_singleMasterConfiguration = std::move(value); }

    /**
     * <p>A structure containing the configuration for the <code>SINGLE_MASTER</code>
     * channel type. </p>
     */
    inline CreateSignalingChannelRequest& WithSingleMasterConfiguration(const SingleMasterConfiguration& value) { SetSingleMasterConfiguration(value); return *this;}

    /**
     * <p>A structure containing the configuration for the <code>SINGLE_MASTER</code>
     * channel type. </p>
     */
    inline CreateSignalingChannelRequest& WithSingleMasterConfiguration(SingleMasterConfiguration&& value) { SetSingleMasterConfiguration(std::move(value)); return *this;}


    /**
     * <p>A set of tags (key-value pairs) that you want to associate with this
     * channel.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A set of tags (key-value pairs) that you want to associate with this
     * channel.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A set of tags (key-value pairs) that you want to associate with this
     * channel.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A set of tags (key-value pairs) that you want to associate with this
     * channel.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A set of tags (key-value pairs) that you want to associate with this
     * channel.</p>
     */
    inline CreateSignalingChannelRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A set of tags (key-value pairs) that you want to associate with this
     * channel.</p>
     */
    inline CreateSignalingChannelRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A set of tags (key-value pairs) that you want to associate with this
     * channel.</p>
     */
    inline CreateSignalingChannelRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A set of tags (key-value pairs) that you want to associate with this
     * channel.</p>
     */
    inline CreateSignalingChannelRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    ChannelType m_channelType;
    bool m_channelTypeHasBeenSet = false;

    SingleMasterConfiguration m_singleMasterConfiguration;
    bool m_singleMasterConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
