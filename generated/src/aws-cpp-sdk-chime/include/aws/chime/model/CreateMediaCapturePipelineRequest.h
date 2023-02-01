/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/chime/model/MediaPipelineSourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/MediaPipelineSinkType.h>
#include <aws/chime/model/ChimeSdkMeetingConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class CreateMediaCapturePipelineRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API CreateMediaCapturePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMediaCapturePipeline"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>Source type from which the media artifacts will be captured. A Chime SDK
     * Meeting is the only supported source.</p>
     */
    inline const MediaPipelineSourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>Source type from which the media artifacts will be captured. A Chime SDK
     * Meeting is the only supported source.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>Source type from which the media artifacts will be captured. A Chime SDK
     * Meeting is the only supported source.</p>
     */
    inline void SetSourceType(const MediaPipelineSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>Source type from which the media artifacts will be captured. A Chime SDK
     * Meeting is the only supported source.</p>
     */
    inline void SetSourceType(MediaPipelineSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>Source type from which the media artifacts will be captured. A Chime SDK
     * Meeting is the only supported source.</p>
     */
    inline CreateMediaCapturePipelineRequest& WithSourceType(const MediaPipelineSourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>Source type from which the media artifacts will be captured. A Chime SDK
     * Meeting is the only supported source.</p>
     */
    inline CreateMediaCapturePipelineRequest& WithSourceType(MediaPipelineSourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p>ARN of the source from which the media artifacts are captured.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>ARN of the source from which the media artifacts are captured.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>ARN of the source from which the media artifacts are captured.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>ARN of the source from which the media artifacts are captured.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>ARN of the source from which the media artifacts are captured.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>ARN of the source from which the media artifacts are captured.</p>
     */
    inline CreateMediaCapturePipelineRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>ARN of the source from which the media artifacts are captured.</p>
     */
    inline CreateMediaCapturePipelineRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the source from which the media artifacts are captured.</p>
     */
    inline CreateMediaCapturePipelineRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * bucket. </p>
     */
    inline const MediaPipelineSinkType& GetSinkType() const{ return m_sinkType; }

    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * bucket. </p>
     */
    inline bool SinkTypeHasBeenSet() const { return m_sinkTypeHasBeenSet; }

    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * bucket. </p>
     */
    inline void SetSinkType(const MediaPipelineSinkType& value) { m_sinkTypeHasBeenSet = true; m_sinkType = value; }

    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * bucket. </p>
     */
    inline void SetSinkType(MediaPipelineSinkType&& value) { m_sinkTypeHasBeenSet = true; m_sinkType = std::move(value); }

    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * bucket. </p>
     */
    inline CreateMediaCapturePipelineRequest& WithSinkType(const MediaPipelineSinkType& value) { SetSinkType(value); return *this;}

    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * bucket. </p>
     */
    inline CreateMediaCapturePipelineRequest& WithSinkType(MediaPipelineSinkType&& value) { SetSinkType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the sink type.</p>
     */
    inline const Aws::String& GetSinkArn() const{ return m_sinkArn; }

    /**
     * <p>The ARN of the sink type.</p>
     */
    inline bool SinkArnHasBeenSet() const { return m_sinkArnHasBeenSet; }

    /**
     * <p>The ARN of the sink type.</p>
     */
    inline void SetSinkArn(const Aws::String& value) { m_sinkArnHasBeenSet = true; m_sinkArn = value; }

    /**
     * <p>The ARN of the sink type.</p>
     */
    inline void SetSinkArn(Aws::String&& value) { m_sinkArnHasBeenSet = true; m_sinkArn = std::move(value); }

    /**
     * <p>The ARN of the sink type.</p>
     */
    inline void SetSinkArn(const char* value) { m_sinkArnHasBeenSet = true; m_sinkArn.assign(value); }

    /**
     * <p>The ARN of the sink type.</p>
     */
    inline CreateMediaCapturePipelineRequest& WithSinkArn(const Aws::String& value) { SetSinkArn(value); return *this;}

    /**
     * <p>The ARN of the sink type.</p>
     */
    inline CreateMediaCapturePipelineRequest& WithSinkArn(Aws::String&& value) { SetSinkArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the sink type.</p>
     */
    inline CreateMediaCapturePipelineRequest& WithSinkArn(const char* value) { SetSinkArn(value); return *this;}


    /**
     * <p>The token assigned to the client making the pipeline request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The token assigned to the client making the pipeline request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The token assigned to the client making the pipeline request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The token assigned to the client making the pipeline request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The token assigned to the client making the pipeline request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The token assigned to the client making the pipeline request.</p>
     */
    inline CreateMediaCapturePipelineRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The token assigned to the client making the pipeline request.</p>
     */
    inline CreateMediaCapturePipelineRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The token assigned to the client making the pipeline request.</p>
     */
    inline CreateMediaCapturePipelineRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The configuration for a specified media capture pipeline.
     * <code>SourceType</code> must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline const ChimeSdkMeetingConfiguration& GetChimeSdkMeetingConfiguration() const{ return m_chimeSdkMeetingConfiguration; }

    /**
     * <p>The configuration for a specified media capture pipeline.
     * <code>SourceType</code> must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline bool ChimeSdkMeetingConfigurationHasBeenSet() const { return m_chimeSdkMeetingConfigurationHasBeenSet; }

    /**
     * <p>The configuration for a specified media capture pipeline.
     * <code>SourceType</code> must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline void SetChimeSdkMeetingConfiguration(const ChimeSdkMeetingConfiguration& value) { m_chimeSdkMeetingConfigurationHasBeenSet = true; m_chimeSdkMeetingConfiguration = value; }

    /**
     * <p>The configuration for a specified media capture pipeline.
     * <code>SourceType</code> must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline void SetChimeSdkMeetingConfiguration(ChimeSdkMeetingConfiguration&& value) { m_chimeSdkMeetingConfigurationHasBeenSet = true; m_chimeSdkMeetingConfiguration = std::move(value); }

    /**
     * <p>The configuration for a specified media capture pipeline.
     * <code>SourceType</code> must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline CreateMediaCapturePipelineRequest& WithChimeSdkMeetingConfiguration(const ChimeSdkMeetingConfiguration& value) { SetChimeSdkMeetingConfiguration(value); return *this;}

    /**
     * <p>The configuration for a specified media capture pipeline.
     * <code>SourceType</code> must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline CreateMediaCapturePipelineRequest& WithChimeSdkMeetingConfiguration(ChimeSdkMeetingConfiguration&& value) { SetChimeSdkMeetingConfiguration(std::move(value)); return *this;}

  private:

    MediaPipelineSourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    MediaPipelineSinkType m_sinkType;
    bool m_sinkTypeHasBeenSet = false;

    Aws::String m_sinkArn;
    bool m_sinkArnHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    ChimeSdkMeetingConfiguration m_chimeSdkMeetingConfiguration;
    bool m_chimeSdkMeetingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
