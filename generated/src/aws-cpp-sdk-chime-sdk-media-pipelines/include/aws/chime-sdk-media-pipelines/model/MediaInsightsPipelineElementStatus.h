/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineConfigurationElementType.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipelineElementStatus.h>
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
   * <p>The status of the pipeline element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaInsightsPipelineElementStatus">AWS
   * API Reference</a></p>
   */
  class MediaInsightsPipelineElementStatus
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineElementStatus();
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineElementStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineElementStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of status.</p>
     */
    inline const MediaInsightsPipelineConfigurationElementType& GetType() const{ return m_type; }

    /**
     * <p>The type of status.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of status.</p>
     */
    inline void SetType(const MediaInsightsPipelineConfigurationElementType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of status.</p>
     */
    inline void SetType(MediaInsightsPipelineConfigurationElementType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of status.</p>
     */
    inline MediaInsightsPipelineElementStatus& WithType(const MediaInsightsPipelineConfigurationElementType& value) { SetType(value); return *this;}

    /**
     * <p>The type of status.</p>
     */
    inline MediaInsightsPipelineElementStatus& WithType(MediaInsightsPipelineConfigurationElementType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The element's status.</p>
     */
    inline const MediaPipelineElementStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The element's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The element's status.</p>
     */
    inline void SetStatus(const MediaPipelineElementStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The element's status.</p>
     */
    inline void SetStatus(MediaPipelineElementStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The element's status.</p>
     */
    inline MediaInsightsPipelineElementStatus& WithStatus(const MediaPipelineElementStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The element's status.</p>
     */
    inline MediaInsightsPipelineElementStatus& WithStatus(MediaPipelineElementStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    MediaInsightsPipelineConfigurationElementType m_type;
    bool m_typeHasBeenSet = false;

    MediaPipelineElementStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
