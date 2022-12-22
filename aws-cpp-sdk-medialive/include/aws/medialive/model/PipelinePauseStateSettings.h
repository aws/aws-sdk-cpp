/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/PipelineId.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings for pausing a pipeline.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PipelinePauseStateSettings">AWS
   * API Reference</a></p>
   */
  class PipelinePauseStateSettings
  {
  public:
    AWS_MEDIALIVE_API PipelinePauseStateSettings();
    AWS_MEDIALIVE_API PipelinePauseStateSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API PipelinePauseStateSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Pipeline ID to pause ("PIPELINE_0" or "PIPELINE_1").
     */
    inline const PipelineId& GetPipelineId() const{ return m_pipelineId; }

    /**
     * Pipeline ID to pause ("PIPELINE_0" or "PIPELINE_1").
     */
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }

    /**
     * Pipeline ID to pause ("PIPELINE_0" or "PIPELINE_1").
     */
    inline void SetPipelineId(const PipelineId& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * Pipeline ID to pause ("PIPELINE_0" or "PIPELINE_1").
     */
    inline void SetPipelineId(PipelineId&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }

    /**
     * Pipeline ID to pause ("PIPELINE_0" or "PIPELINE_1").
     */
    inline PipelinePauseStateSettings& WithPipelineId(const PipelineId& value) { SetPipelineId(value); return *this;}

    /**
     * Pipeline ID to pause ("PIPELINE_0" or "PIPELINE_1").
     */
    inline PipelinePauseStateSettings& WithPipelineId(PipelineId&& value) { SetPipelineId(std::move(value)); return *this;}

  private:

    PipelineId m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
