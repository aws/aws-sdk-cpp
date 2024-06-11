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
   * <p>A summary of the media insights pipeline configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaInsightsPipelineConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class MediaInsightsPipelineConfigurationSummary
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfigurationSummary();
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the media insights pipeline configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationName() const{ return m_mediaInsightsPipelineConfigurationName; }
    inline bool MediaInsightsPipelineConfigurationNameHasBeenSet() const { return m_mediaInsightsPipelineConfigurationNameHasBeenSet; }
    inline void SetMediaInsightsPipelineConfigurationName(const Aws::String& value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName = value; }
    inline void SetMediaInsightsPipelineConfigurationName(Aws::String&& value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName = std::move(value); }
    inline void SetMediaInsightsPipelineConfigurationName(const char* value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName.assign(value); }
    inline MediaInsightsPipelineConfigurationSummary& WithMediaInsightsPipelineConfigurationName(const Aws::String& value) { SetMediaInsightsPipelineConfigurationName(value); return *this;}
    inline MediaInsightsPipelineConfigurationSummary& WithMediaInsightsPipelineConfigurationName(Aws::String&& value) { SetMediaInsightsPipelineConfigurationName(std::move(value)); return *this;}
    inline MediaInsightsPipelineConfigurationSummary& WithMediaInsightsPipelineConfigurationName(const char* value) { SetMediaInsightsPipelineConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the media insights pipeline configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationId() const{ return m_mediaInsightsPipelineConfigurationId; }
    inline bool MediaInsightsPipelineConfigurationIdHasBeenSet() const { return m_mediaInsightsPipelineConfigurationIdHasBeenSet; }
    inline void SetMediaInsightsPipelineConfigurationId(const Aws::String& value) { m_mediaInsightsPipelineConfigurationIdHasBeenSet = true; m_mediaInsightsPipelineConfigurationId = value; }
    inline void SetMediaInsightsPipelineConfigurationId(Aws::String&& value) { m_mediaInsightsPipelineConfigurationIdHasBeenSet = true; m_mediaInsightsPipelineConfigurationId = std::move(value); }
    inline void SetMediaInsightsPipelineConfigurationId(const char* value) { m_mediaInsightsPipelineConfigurationIdHasBeenSet = true; m_mediaInsightsPipelineConfigurationId.assign(value); }
    inline MediaInsightsPipelineConfigurationSummary& WithMediaInsightsPipelineConfigurationId(const Aws::String& value) { SetMediaInsightsPipelineConfigurationId(value); return *this;}
    inline MediaInsightsPipelineConfigurationSummary& WithMediaInsightsPipelineConfigurationId(Aws::String&& value) { SetMediaInsightsPipelineConfigurationId(std::move(value)); return *this;}
    inline MediaInsightsPipelineConfigurationSummary& WithMediaInsightsPipelineConfigurationId(const char* value) { SetMediaInsightsPipelineConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the media insights pipeline configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationArn() const{ return m_mediaInsightsPipelineConfigurationArn; }
    inline bool MediaInsightsPipelineConfigurationArnHasBeenSet() const { return m_mediaInsightsPipelineConfigurationArnHasBeenSet; }
    inline void SetMediaInsightsPipelineConfigurationArn(const Aws::String& value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn = value; }
    inline void SetMediaInsightsPipelineConfigurationArn(Aws::String&& value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn = std::move(value); }
    inline void SetMediaInsightsPipelineConfigurationArn(const char* value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn.assign(value); }
    inline MediaInsightsPipelineConfigurationSummary& WithMediaInsightsPipelineConfigurationArn(const Aws::String& value) { SetMediaInsightsPipelineConfigurationArn(value); return *this;}
    inline MediaInsightsPipelineConfigurationSummary& WithMediaInsightsPipelineConfigurationArn(Aws::String&& value) { SetMediaInsightsPipelineConfigurationArn(std::move(value)); return *this;}
    inline MediaInsightsPipelineConfigurationSummary& WithMediaInsightsPipelineConfigurationArn(const char* value) { SetMediaInsightsPipelineConfigurationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_mediaInsightsPipelineConfigurationName;
    bool m_mediaInsightsPipelineConfigurationNameHasBeenSet = false;

    Aws::String m_mediaInsightsPipelineConfigurationId;
    bool m_mediaInsightsPipelineConfigurationIdHasBeenSet = false;

    Aws::String m_mediaInsightsPipelineConfigurationArn;
    bool m_mediaInsightsPipelineConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
