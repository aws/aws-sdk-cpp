﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>A summary of a media capture pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaCapturePipelineSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CHIMESDKMEDIAPIPELINES_API MediaCapturePipelineSummary
  {
  public:
    MediaCapturePipelineSummary();
    MediaCapturePipelineSummary(Aws::Utils::Json::JsonView jsonValue);
    MediaCapturePipelineSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline const Aws::String& GetMediaPipelineId() const{ return m_mediaPipelineId; }

    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline bool MediaPipelineIdHasBeenSet() const { return m_mediaPipelineIdHasBeenSet; }

    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline void SetMediaPipelineId(const Aws::String& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = value; }

    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline void SetMediaPipelineId(Aws::String&& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = std::move(value); }

    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline void SetMediaPipelineId(const char* value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId.assign(value); }

    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline MediaCapturePipelineSummary& WithMediaPipelineId(const Aws::String& value) { SetMediaPipelineId(value); return *this;}

    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline MediaCapturePipelineSummary& WithMediaPipelineId(Aws::String&& value) { SetMediaPipelineId(std::move(value)); return *this;}

    /**
     * <p>The ID of a media capture pipeline.</p>
     */
    inline MediaCapturePipelineSummary& WithMediaPipelineId(const char* value) { SetMediaPipelineId(value); return *this;}


    /**
     * <p>The ARN of a media capture pipeline.</p>
     */
    inline const Aws::String& GetMediaPipelineArn() const{ return m_mediaPipelineArn; }

    /**
     * <p>The ARN of a media capture pipeline.</p>
     */
    inline bool MediaPipelineArnHasBeenSet() const { return m_mediaPipelineArnHasBeenSet; }

    /**
     * <p>The ARN of a media capture pipeline.</p>
     */
    inline void SetMediaPipelineArn(const Aws::String& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = value; }

    /**
     * <p>The ARN of a media capture pipeline.</p>
     */
    inline void SetMediaPipelineArn(Aws::String&& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = std::move(value); }

    /**
     * <p>The ARN of a media capture pipeline.</p>
     */
    inline void SetMediaPipelineArn(const char* value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn.assign(value); }

    /**
     * <p>The ARN of a media capture pipeline.</p>
     */
    inline MediaCapturePipelineSummary& WithMediaPipelineArn(const Aws::String& value) { SetMediaPipelineArn(value); return *this;}

    /**
     * <p>The ARN of a media capture pipeline.</p>
     */
    inline MediaCapturePipelineSummary& WithMediaPipelineArn(Aws::String&& value) { SetMediaPipelineArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a media capture pipeline.</p>
     */
    inline MediaCapturePipelineSummary& WithMediaPipelineArn(const char* value) { SetMediaPipelineArn(value); return *this;}

  private:

    Aws::String m_mediaPipelineId;
    bool m_mediaPipelineIdHasBeenSet;

    Aws::String m_mediaPipelineArn;
    bool m_mediaPipelineArnHasBeenSet;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
