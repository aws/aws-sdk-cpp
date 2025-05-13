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
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaCapturePipelineRequest() = default;

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
    inline MediaPipelineSourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(MediaPipelineSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline CreateMediaCapturePipelineRequest& WithSourceType(MediaPipelineSourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the source from which the media artifacts are captured.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    CreateMediaCapturePipelineRequest& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Destination type to which the media artifacts are saved. You must use an S3
     * bucket.</p>
     */
    inline MediaPipelineSinkType GetSinkType() const { return m_sinkType; }
    inline bool SinkTypeHasBeenSet() const { return m_sinkTypeHasBeenSet; }
    inline void SetSinkType(MediaPipelineSinkType value) { m_sinkTypeHasBeenSet = true; m_sinkType = value; }
    inline CreateMediaCapturePipelineRequest& WithSinkType(MediaPipelineSinkType value) { SetSinkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the sink type.</p>
     */
    inline const Aws::String& GetSinkArn() const { return m_sinkArn; }
    inline bool SinkArnHasBeenSet() const { return m_sinkArnHasBeenSet; }
    template<typename SinkArnT = Aws::String>
    void SetSinkArn(SinkArnT&& value) { m_sinkArnHasBeenSet = true; m_sinkArn = std::forward<SinkArnT>(value); }
    template<typename SinkArnT = Aws::String>
    CreateMediaCapturePipelineRequest& WithSinkArn(SinkArnT&& value) { SetSinkArn(std::forward<SinkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the client request. The token makes the API request
     * idempotent. Use a unique token for each media pipeline request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateMediaCapturePipelineRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a specified media pipeline. <code>SourceType</code>
     * must be <code>ChimeSdkMeeting</code>.</p>
     */
    inline const ChimeSdkMeetingConfiguration& GetChimeSdkMeetingConfiguration() const { return m_chimeSdkMeetingConfiguration; }
    inline bool ChimeSdkMeetingConfigurationHasBeenSet() const { return m_chimeSdkMeetingConfigurationHasBeenSet; }
    template<typename ChimeSdkMeetingConfigurationT = ChimeSdkMeetingConfiguration>
    void SetChimeSdkMeetingConfiguration(ChimeSdkMeetingConfigurationT&& value) { m_chimeSdkMeetingConfigurationHasBeenSet = true; m_chimeSdkMeetingConfiguration = std::forward<ChimeSdkMeetingConfigurationT>(value); }
    template<typename ChimeSdkMeetingConfigurationT = ChimeSdkMeetingConfiguration>
    CreateMediaCapturePipelineRequest& WithChimeSdkMeetingConfiguration(ChimeSdkMeetingConfigurationT&& value) { SetChimeSdkMeetingConfiguration(std::forward<ChimeSdkMeetingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains server side encryption parameters to be used by media
     * capture pipeline. The parameters can also be used by media concatenation
     * pipeline taking media capture pipeline as a media source.</p>
     */
    inline const SseAwsKeyManagementParams& GetSseAwsKeyManagementParams() const { return m_sseAwsKeyManagementParams; }
    inline bool SseAwsKeyManagementParamsHasBeenSet() const { return m_sseAwsKeyManagementParamsHasBeenSet; }
    template<typename SseAwsKeyManagementParamsT = SseAwsKeyManagementParams>
    void SetSseAwsKeyManagementParams(SseAwsKeyManagementParamsT&& value) { m_sseAwsKeyManagementParamsHasBeenSet = true; m_sseAwsKeyManagementParams = std::forward<SseAwsKeyManagementParamsT>(value); }
    template<typename SseAwsKeyManagementParamsT = SseAwsKeyManagementParams>
    CreateMediaCapturePipelineRequest& WithSseAwsKeyManagementParams(SseAwsKeyManagementParamsT&& value) { SetSseAwsKeyManagementParams(std::forward<SseAwsKeyManagementParamsT>(value)); return *this;}
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
    inline const Aws::String& GetSinkIamRoleArn() const { return m_sinkIamRoleArn; }
    inline bool SinkIamRoleArnHasBeenSet() const { return m_sinkIamRoleArnHasBeenSet; }
    template<typename SinkIamRoleArnT = Aws::String>
    void SetSinkIamRoleArn(SinkIamRoleArnT&& value) { m_sinkIamRoleArnHasBeenSet = true; m_sinkIamRoleArn = std::forward<SinkIamRoleArnT>(value); }
    template<typename SinkIamRoleArnT = Aws::String>
    CreateMediaCapturePipelineRequest& WithSinkIamRoleArn(SinkIamRoleArnT&& value) { SetSinkIamRoleArn(std::forward<SinkIamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag key-value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateMediaCapturePipelineRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateMediaCapturePipelineRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    MediaPipelineSourceType m_sourceType{MediaPipelineSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    MediaPipelineSinkType m_sinkType{MediaPipelineSinkType::NOT_SET};
    bool m_sinkTypeHasBeenSet = false;

    Aws::String m_sinkArn;
    bool m_sinkArnHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

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
