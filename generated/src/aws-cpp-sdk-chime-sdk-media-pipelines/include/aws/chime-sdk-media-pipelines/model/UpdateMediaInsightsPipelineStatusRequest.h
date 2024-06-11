/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipelineStatusUpdate.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   */
  class UpdateMediaInsightsPipelineStatusRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API UpdateMediaInsightsPipelineStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMediaInsightsPipelineStatus"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateMediaInsightsPipelineStatusRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateMediaInsightsPipelineStatusRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateMediaInsightsPipelineStatusRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested status of the media insights pipeline.</p>
     */
    inline const MediaPipelineStatusUpdate& GetUpdateStatus() const{ return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(const MediaPipelineStatusUpdate& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline void SetUpdateStatus(MediaPipelineStatusUpdate&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }
    inline UpdateMediaInsightsPipelineStatusRequest& WithUpdateStatus(const MediaPipelineStatusUpdate& value) { SetUpdateStatus(value); return *this;}
    inline UpdateMediaInsightsPipelineStatusRequest& WithUpdateStatus(MediaPipelineStatusUpdate&& value) { SetUpdateStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    MediaPipelineStatusUpdate m_updateStatus;
    bool m_updateStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
