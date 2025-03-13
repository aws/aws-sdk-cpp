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
    AWS_KINESISVIDEO_API CreateSignalingChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSignalingChannel"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A name for the signaling channel that you are creating. It must be unique for
     * each Amazon Web Services account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    CreateSignalingChannelRequest& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A type of the signaling channel that you are creating. Currently,
     * <code>SINGLE_MASTER</code> is the only supported channel type. </p>
     */
    inline ChannelType GetChannelType() const { return m_channelType; }
    inline bool ChannelTypeHasBeenSet() const { return m_channelTypeHasBeenSet; }
    inline void SetChannelType(ChannelType value) { m_channelTypeHasBeenSet = true; m_channelType = value; }
    inline CreateSignalingChannelRequest& WithChannelType(ChannelType value) { SetChannelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure containing the configuration for the <code>SINGLE_MASTER</code>
     * channel type. </p>
     */
    inline const SingleMasterConfiguration& GetSingleMasterConfiguration() const { return m_singleMasterConfiguration; }
    inline bool SingleMasterConfigurationHasBeenSet() const { return m_singleMasterConfigurationHasBeenSet; }
    template<typename SingleMasterConfigurationT = SingleMasterConfiguration>
    void SetSingleMasterConfiguration(SingleMasterConfigurationT&& value) { m_singleMasterConfigurationHasBeenSet = true; m_singleMasterConfiguration = std::forward<SingleMasterConfigurationT>(value); }
    template<typename SingleMasterConfigurationT = SingleMasterConfiguration>
    CreateSignalingChannelRequest& WithSingleMasterConfiguration(SingleMasterConfigurationT&& value) { SetSingleMasterConfiguration(std::forward<SingleMasterConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of tags (key-value pairs) that you want to associate with this
     * channel.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateSignalingChannelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateSignalingChannelRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    ChannelType m_channelType{ChannelType::NOT_SET};
    bool m_channelTypeHasBeenSet = false;

    SingleMasterConfiguration m_singleMasterConfiguration;
    bool m_singleMasterConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
