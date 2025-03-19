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
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineElementStatus() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineElementStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineElementStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of status.</p>
     */
    inline MediaInsightsPipelineConfigurationElementType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MediaInsightsPipelineConfigurationElementType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MediaInsightsPipelineElementStatus& WithType(MediaInsightsPipelineConfigurationElementType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The element's status.</p>
     */
    inline MediaPipelineElementStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MediaPipelineElementStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MediaInsightsPipelineElementStatus& WithStatus(MediaPipelineElementStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    MediaInsightsPipelineConfigurationElementType m_type{MediaInsightsPipelineConfigurationElementType::NOT_SET};
    bool m_typeHasBeenSet = false;

    MediaPipelineElementStatus m_status{MediaPipelineElementStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
