/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datapipeline/model/ParameterValue.h>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for ActivatePipeline.</p>
   */
  class AWS_DATAPIPELINE_API ActivatePipelineRequest : public DataPipelineRequest
  {
  public:
    ActivatePipelineRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline ActivatePipelineRequest& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline ActivatePipelineRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline ActivatePipelineRequest& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}

    /**
     * <p>A list of parameter values to pass to the pipeline at activation.</p>
     */
    inline const Aws::Vector<ParameterValue>& GetParameterValues() const{ return m_parameterValues; }

    /**
     * <p>A list of parameter values to pass to the pipeline at activation.</p>
     */
    inline void SetParameterValues(const Aws::Vector<ParameterValue>& value) { m_parameterValuesHasBeenSet = true; m_parameterValues = value; }

    /**
     * <p>A list of parameter values to pass to the pipeline at activation.</p>
     */
    inline void SetParameterValues(Aws::Vector<ParameterValue>&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues = value; }

    /**
     * <p>A list of parameter values to pass to the pipeline at activation.</p>
     */
    inline ActivatePipelineRequest& WithParameterValues(const Aws::Vector<ParameterValue>& value) { SetParameterValues(value); return *this;}

    /**
     * <p>A list of parameter values to pass to the pipeline at activation.</p>
     */
    inline ActivatePipelineRequest& WithParameterValues(Aws::Vector<ParameterValue>&& value) { SetParameterValues(value); return *this;}

    /**
     * <p>A list of parameter values to pass to the pipeline at activation.</p>
     */
    inline ActivatePipelineRequest& AddParameterValues(const ParameterValue& value) { m_parameterValuesHasBeenSet = true; m_parameterValues.push_back(value); return *this; }

    /**
     * <p>A list of parameter values to pass to the pipeline at activation.</p>
     */
    inline ActivatePipelineRequest& AddParameterValues(ParameterValue&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues.push_back(value); return *this; }

    /**
     * <p>The date and time to resume the pipeline. By default, the pipeline resumes
     * from the last completed execution.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }

    /**
     * <p>The date and time to resume the pipeline. By default, the pipeline resumes
     * from the last completed execution.</p>
     */
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }

    /**
     * <p>The date and time to resume the pipeline. By default, the pipeline resumes
     * from the last completed execution.</p>
     */
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }

    /**
     * <p>The date and time to resume the pipeline. By default, the pipeline resumes
     * from the last completed execution.</p>
     */
    inline ActivatePipelineRequest& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}

    /**
     * <p>The date and time to resume the pipeline. By default, the pipeline resumes
     * from the last completed execution.</p>
     */
    inline ActivatePipelineRequest& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(value); return *this;}

  private:
    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet;
    Aws::Vector<ParameterValue> m_parameterValues;
    bool m_parameterValuesHasBeenSet;
    Aws::Utils::DateTime m_startTimestamp;
    bool m_startTimestampHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
