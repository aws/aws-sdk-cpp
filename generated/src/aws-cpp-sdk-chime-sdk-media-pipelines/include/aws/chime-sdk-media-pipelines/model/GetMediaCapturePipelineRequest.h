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
  class GetMediaCapturePipelineRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API GetMediaCapturePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMediaCapturePipeline"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the pipeline that you want to get.</p>
     */
    inline const Aws::String& GetMediaPipelineId() const{ return m_mediaPipelineId; }

    /**
     * <p>The ID of the pipeline that you want to get.</p>
     */
    inline bool MediaPipelineIdHasBeenSet() const { return m_mediaPipelineIdHasBeenSet; }

    /**
     * <p>The ID of the pipeline that you want to get.</p>
     */
    inline void SetMediaPipelineId(const Aws::String& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = value; }

    /**
     * <p>The ID of the pipeline that you want to get.</p>
     */
    inline void SetMediaPipelineId(Aws::String&& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = std::move(value); }

    /**
     * <p>The ID of the pipeline that you want to get.</p>
     */
    inline void SetMediaPipelineId(const char* value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId.assign(value); }

    /**
     * <p>The ID of the pipeline that you want to get.</p>
     */
    inline GetMediaCapturePipelineRequest& WithMediaPipelineId(const Aws::String& value) { SetMediaPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline that you want to get.</p>
     */
    inline GetMediaCapturePipelineRequest& WithMediaPipelineId(Aws::String&& value) { SetMediaPipelineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pipeline that you want to get.</p>
     */
    inline GetMediaCapturePipelineRequest& WithMediaPipelineId(const char* value) { SetMediaPipelineId(value); return *this;}

  private:

    Aws::String m_mediaPipelineId;
    bool m_mediaPipelineIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
