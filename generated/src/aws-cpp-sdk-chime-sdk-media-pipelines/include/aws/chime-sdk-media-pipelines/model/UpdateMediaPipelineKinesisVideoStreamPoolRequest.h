/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamConfigurationUpdate.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   */
  class UpdateMediaPipelineKinesisVideoStreamPoolRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API UpdateMediaPipelineKinesisVideoStreamPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMediaPipelineKinesisVideoStreamPool"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline UpdateMediaPipelineKinesisVideoStreamPoolRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline UpdateMediaPipelineKinesisVideoStreamPoolRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline UpdateMediaPipelineKinesisVideoStreamPoolRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The configuration settings for the video stream.</p>
     */
    inline const KinesisVideoStreamConfigurationUpdate& GetStreamConfiguration() const{ return m_streamConfiguration; }

    /**
     * <p>The configuration settings for the video stream.</p>
     */
    inline bool StreamConfigurationHasBeenSet() const { return m_streamConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings for the video stream.</p>
     */
    inline void SetStreamConfiguration(const KinesisVideoStreamConfigurationUpdate& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = value; }

    /**
     * <p>The configuration settings for the video stream.</p>
     */
    inline void SetStreamConfiguration(KinesisVideoStreamConfigurationUpdate&& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = std::move(value); }

    /**
     * <p>The configuration settings for the video stream.</p>
     */
    inline UpdateMediaPipelineKinesisVideoStreamPoolRequest& WithStreamConfiguration(const KinesisVideoStreamConfigurationUpdate& value) { SetStreamConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for the video stream.</p>
     */
    inline UpdateMediaPipelineKinesisVideoStreamPoolRequest& WithStreamConfiguration(KinesisVideoStreamConfigurationUpdate&& value) { SetStreamConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    KinesisVideoStreamConfigurationUpdate m_streamConfiguration;
    bool m_streamConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
