/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipelineSourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipelineSinkType.h>
#include <aws/chime-sdk-media-pipelines/model/ChimeSdkMeetingConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/SseAwsKeyManagementParams.h>
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
  class CreateMediaCapturePipelineRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaCapturePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMediaCapturePipeline"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Source type from which the media artifacts are captured. A Chime SDK Meeting
     * is the only supported source.</p>
     */
    inline const MediaPipelineSourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const MediaPipelineSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(MediaPipelineSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline CreateMediaCapturePipelineRequest& WithSourceType(const MediaPipelineSourceType& value) { SetSourceType(value); return *this;}
    inline CreateMediaCapturePipelineRequest& WithSourceType(MediaPipelineSourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the source from which the media artifacts are captured.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }
    inline CreateMediaCapturePipelineRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline CreateMediaCapturePipelineRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline CreateMediaCapturePipelineRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * bucket.</p>
     */
    inline const MediaPipelineSinkType& GetSinkType() const{ return m_sinkType; }
    inline bool SinkTypeHasBeenSet() const { return m_sinkTypeHasBeenSet; }
    inline void SetSinkType(const MediaPipelineSinkType& value) { m_sinkTypeHasBeenSet = true; m_sinkType = value; }
    inline void SetSinkType(MediaPipelineSinkType&& value) { m_sinkTypeHasBeenSet = true; m_sinkType = std::move(value); }
    inline CreateMediaCapturePipelineRequest& WithSinkType(const MediaPipelineSinkType& value) { SetSinkType(value); return *this;}
    inline CreateMediaCapturePipelineRequest& WithSinkType(MediaPipelineSinkType&& value) { SetSinkType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the sink type.</p>
     */
    inline const Aws::String& GetSinkArn() const{ return m_sinkArn; }
    inline bool SinkArnHasBeenSet() const { return m_sinkArnHasBeenSet; }
    inline void SetSinkArn(const Aws::String& value) { m_sinkArnHasBeenSet = true; m_sinkArn = value; }
    inline void SetSinkArn(Aws::String&& value) { m_sinkArnHasBeenSet = true; m_sinkArn = std::move(value); }
    inline void SetSinkArn(const char* value) { m_sinkArnHasBeenSet = true; m_sinkArn.assign(value); }
    inline CreateMediaCapturePipelineRequest& WithSinkArn(const Aws::String& value) { SetSinkArn(value); return *this;}
    inline CreateMediaCapturePipelineRequest& WithSinkArn(Aws::String&& value) { SetSinkArn(std::move(value)); return *this;}
    inline CreateMediaCapturePipelineRequest& WithSinkArn(const char* value) { SetSinkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the client request. The token makes the API request
     * idempotent. Use a unique token for each media pipeline request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateMediaCapturePipelineRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateMediaCapturePipelineRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateMediaCapturePipelineRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a specified media pipeline. <code>SourceType</code>
     * must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline const ChimeSdkMeetingConfiguration& GetChimeSdkMeetingConfiguration() const{ return m_chimeSdkMeetingConfiguration; }
    inline bool ChimeSdkMeetingConfigurationHasBeenSet() const { return m_chimeSdkMeetingConfigurationHasBeenSet; }
    inline void SetChimeSdkMeetingConfiguration(const ChimeSdkMeetingConfiguration& value) { m_chimeSdkMeetingConfigurationHasBeenSet = true; m_chimeSdkMeetingConfiguration = value; }
    inline void SetChimeSdkMeetingConfiguration(ChimeSdkMeetingConfiguration&& value) { m_chimeSdkMeetingConfigurationHasBeenSet = true; m_chimeSdkMeetingConfiguration = std::move(value); }
    inline CreateMediaCapturePipelineRequest& WithChimeSdkMeetingConfiguration(const ChimeSdkMeetingConfiguration& value) { SetChimeSdkMeetingConfiguration(value); return *this;}
    inline CreateMediaCapturePipelineRequest& WithChimeSdkMeetingConfiguration(ChimeSdkMeetingConfiguration&& value) { SetChimeSdkMeetingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains server side encryption parameters to be used by media
     * capture pipeline. The parameters can also be used by media concatenation
     * pipeline taking media capture pipeline as a media source.</p>
     */
    inline const SseAwsKeyManagementParams& GetSseAwsKeyManagementParams() const{ return m_sseAwsKeyManagementParams; }
    inline bool SseAwsKeyManagementParamsHasBeenSet() const { return m_sseAwsKeyManagementParamsHasBeenSet; }
    inline void SetSseAwsKeyManagementParams(const SseAwsKeyManagementParams& value) { m_sseAwsKeyManagementParamsHasBeenSet = true; m_sseAwsKeyManagementParams = value; }
    inline void SetSseAwsKeyManagementParams(SseAwsKeyManagementParams&& value) { m_sseAwsKeyManagementParamsHasBeenSet = true; m_sseAwsKeyManagementParams = std::move(value); }
    inline CreateMediaCapturePipelineRequest& WithSseAwsKeyManagementParams(const SseAwsKeyManagementParams& value) { SetSseAwsKeyManagementParams(value); return *this;}
    inline CreateMediaCapturePipelineRequest& WithSseAwsKeyManagementParams(SseAwsKeyManagementParams&& value) { SetSseAwsKeyManagementParams(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the sink role to be used with
     * <code>AwsKmsKeyId</code> in <code>SseAwsKeyManagementParams</code>. Can only
     * interact with <code>S3Bucket</code> sink type. The role must belong to the
     * caller’s account and be able to act on behalf of the caller during the API call.
     * All minimum policy permissions requirements for the caller to perform
     * sink-related actions are the same for <code>SinkIamRoleArn</code>.</p>
     * <p>Additionally, the role must have permission to
     * <code>kms:GenerateDataKey</code> using KMS key supplied as
     * <code>AwsKmsKeyId</code> in <code>SseAwsKeyManagementParams</code>. If media
     * concatenation will be required later, the role must also have permission to
     * <code>kms:Decrypt</code> for the same KMS key.</p>
     */
    inline const Aws::String& GetSinkIamRoleArn() const{ return m_sinkIamRoleArn; }
    inline bool SinkIamRoleArnHasBeenSet() const { return m_sinkIamRoleArnHasBeenSet; }
    inline void SetSinkIamRoleArn(const Aws::String& value) { m_sinkIamRoleArnHasBeenSet = true; m_sinkIamRoleArn = value; }
    inline void SetSinkIamRoleArn(Aws::String&& value) { m_sinkIamRoleArnHasBeenSet = true; m_sinkIamRoleArn = std::move(value); }
    inline void SetSinkIamRoleArn(const char* value) { m_sinkIamRoleArnHasBeenSet = true; m_sinkIamRoleArn.assign(value); }
    inline CreateMediaCapturePipelineRequest& WithSinkIamRoleArn(const Aws::String& value) { SetSinkIamRoleArn(value); return *this;}
    inline CreateMediaCapturePipelineRequest& WithSinkIamRoleArn(Aws::String&& value) { SetSinkIamRoleArn(std::move(value)); return *this;}
    inline CreateMediaCapturePipelineRequest& WithSinkIamRoleArn(const char* value) { SetSinkIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag key-value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateMediaCapturePipelineRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateMediaCapturePipelineRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateMediaCapturePipelineRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateMediaCapturePipelineRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
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

    SseAwsKeyManagementParams m_sseAwsKeyManagementParams;
    bool m_sseAwsKeyManagementParamsHasBeenSet = false;

    Aws::String m_sinkIamRoleArn;
    bool m_sinkIamRoleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
