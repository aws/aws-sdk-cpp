/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_MEDIALIVE_API PipelinePauseStateSettings
  {
  public:
    PipelinePauseStateSettings();
    PipelinePauseStateSettings(Aws::Utils::Json::JsonView jsonValue);
    PipelinePauseStateSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_pipelineIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
