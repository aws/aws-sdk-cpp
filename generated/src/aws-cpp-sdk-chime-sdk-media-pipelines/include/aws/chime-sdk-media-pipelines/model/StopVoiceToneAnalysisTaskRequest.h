/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   */
  class StopVoiceToneAnalysisTaskRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API StopVoiceToneAnalysisTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopVoiceToneAnalysisTask"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline StopVoiceToneAnalysisTaskRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline StopVoiceToneAnalysisTaskRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline StopVoiceToneAnalysisTaskRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline const Aws::String& GetVoiceToneAnalysisTaskId() const{ return m_voiceToneAnalysisTaskId; }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline bool VoiceToneAnalysisTaskIdHasBeenSet() const { return m_voiceToneAnalysisTaskIdHasBeenSet; }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTaskId(const Aws::String& value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId = value; }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTaskId(Aws::String&& value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId = std::move(value); }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTaskId(const char* value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId.assign(value); }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline StopVoiceToneAnalysisTaskRequest& WithVoiceToneAnalysisTaskId(const Aws::String& value) { SetVoiceToneAnalysisTaskId(value); return *this;}

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline StopVoiceToneAnalysisTaskRequest& WithVoiceToneAnalysisTaskId(Aws::String&& value) { SetVoiceToneAnalysisTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline StopVoiceToneAnalysisTaskRequest& WithVoiceToneAnalysisTaskId(const char* value) { SetVoiceToneAnalysisTaskId(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_voiceToneAnalysisTaskId;
    bool m_voiceToneAnalysisTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
