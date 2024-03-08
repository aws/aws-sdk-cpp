/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-media-pipelines/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   */
  class CreateMediaPipelineKinesisVideoStreamPoolRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaPipelineKinesisVideoStreamPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMediaPipelineKinesisVideoStreamPool"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    /**
     * <p>The configuration settings for the video stream.</p>
     */
    inline const KinesisVideoStreamConfiguration& GetStreamConfiguration() const{ return m_streamConfiguration; }

    /**
     * <p>The configuration settings for the video stream.</p>
     */
    inline bool StreamConfigurationHasBeenSet() const { return m_streamConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings for the video stream.</p>
     */
    inline void SetStreamConfiguration(const KinesisVideoStreamConfiguration& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = value; }

    /**
     * <p>The configuration settings for the video stream.</p>
     */
    inline void SetStreamConfiguration(KinesisVideoStreamConfiguration&& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = std::move(value); }

    /**
     * <p>The configuration settings for the video stream.</p>
     */
    inline CreateMediaPipelineKinesisVideoStreamPoolRequest& WithStreamConfiguration(const KinesisVideoStreamConfiguration& value) { SetStreamConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for the video stream.</p>
     */
    inline CreateMediaPipelineKinesisVideoStreamPoolRequest& WithStreamConfiguration(KinesisVideoStreamConfiguration&& value) { SetStreamConfiguration(std::move(value)); return *this;}


    /**
     * <p>The name of the video stream pool.</p>
     */
    inline const Aws::String& GetPoolName() const{ return m_poolName; }

    /**
     * <p>The name of the video stream pool.</p>
     */
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }

    /**
     * <p>The name of the video stream pool.</p>
     */
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }

    /**
     * <p>The name of the video stream pool.</p>
     */
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = std::move(value); }

    /**
     * <p>The name of the video stream pool.</p>
     */
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }

    /**
     * <p>The name of the video stream pool.</p>
     */
    inline CreateMediaPipelineKinesisVideoStreamPoolRequest& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}

    /**
     * <p>The name of the video stream pool.</p>
     */
    inline CreateMediaPipelineKinesisVideoStreamPoolRequest& WithPoolName(Aws::String&& value) { SetPoolName(std::move(value)); return *this;}

    /**
     * <p>The name of the video stream pool.</p>
     */
    inline CreateMediaPipelineKinesisVideoStreamPoolRequest& WithPoolName(const char* value) { SetPoolName(value); return *this;}


    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline CreateMediaPipelineKinesisVideoStreamPoolRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline CreateMediaPipelineKinesisVideoStreamPoolRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The token assigned to the client making the request.</p>
     */
    inline CreateMediaPipelineKinesisVideoStreamPoolRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The tags assigned to the video stream pool.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the video stream pool.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the video stream pool.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the video stream pool.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the video stream pool.</p>
     */
    inline CreateMediaPipelineKinesisVideoStreamPoolRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the video stream pool.</p>
     */
    inline CreateMediaPipelineKinesisVideoStreamPoolRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the video stream pool.</p>
     */
    inline CreateMediaPipelineKinesisVideoStreamPoolRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the video stream pool.</p>
     */
    inline CreateMediaPipelineKinesisVideoStreamPoolRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    KinesisVideoStreamConfiguration m_streamConfiguration;
    bool m_streamConfigurationHasBeenSet = false;

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
