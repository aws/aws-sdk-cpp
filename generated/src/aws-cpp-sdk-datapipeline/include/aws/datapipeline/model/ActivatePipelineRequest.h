/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datapipeline/model/ParameterValue.h>
#include <utility>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for ActivatePipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ActivatePipelineInput">AWS
   * API Reference</a></p>
   */
  class ActivatePipelineRequest : public DataPipelineRequest
  {
  public:
    AWS_DATAPIPELINE_API ActivatePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ActivatePipeline"; }

    AWS_DATAPIPELINE_API Aws::String SerializePayload() const override;

    AWS_DATAPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }

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
    inline ActivatePipelineRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}

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
    inline bool ParameterValuesHasBeenSet() const { return m_parameterValuesHasBeenSet; }

    /**
     * <p>A list of parameter values to pass to the pipeline at activation.</p>
     */
    inline void SetParameterValues(const Aws::Vector<ParameterValue>& value) { m_parameterValuesHasBeenSet = true; m_parameterValues = value; }

    /**
     * <p>A list of parameter values to pass to the pipeline at activation.</p>
     */
    inline void SetParameterValues(Aws::Vector<ParameterValue>&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues = std::move(value); }

    /**
     * <p>A list of parameter values to pass to the pipeline at activation.</p>
     */
    inline ActivatePipelineRequest& WithParameterValues(const Aws::Vector<ParameterValue>& value) { SetParameterValues(value); return *this;}

    /**
     * <p>A list of parameter values to pass to the pipeline at activation.</p>
     */
    inline ActivatePipelineRequest& WithParameterValues(Aws::Vector<ParameterValue>&& value) { SetParameterValues(std::move(value)); return *this;}

    /**
     * <p>A list of parameter values to pass to the pipeline at activation.</p>
     */
    inline ActivatePipelineRequest& AddParameterValues(const ParameterValue& value) { m_parameterValuesHasBeenSet = true; m_parameterValues.push_back(value); return *this; }

    /**
     * <p>A list of parameter values to pass to the pipeline at activation.</p>
     */
    inline ActivatePipelineRequest& AddParameterValues(ParameterValue&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The date and time to resume the pipeline. By default, the pipeline resumes
     * from the last completed execution.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }

    /**
     * <p>The date and time to resume the pipeline. By default, the pipeline resumes
     * from the last completed execution.</p>
     */
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }

    /**
     * <p>The date and time to resume the pipeline. By default, the pipeline resumes
     * from the last completed execution.</p>
     */
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }

    /**
     * <p>The date and time to resume the pipeline. By default, the pipeline resumes
     * from the last completed execution.</p>
     */
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }

    /**
     * <p>The date and time to resume the pipeline. By default, the pipeline resumes
     * from the last completed execution.</p>
     */
    inline ActivatePipelineRequest& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}

    /**
     * <p>The date and time to resume the pipeline. By default, the pipeline resumes
     * from the last completed execution.</p>
     */
    inline ActivatePipelineRequest& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;

    Aws::Vector<ParameterValue> m_parameterValues;
    bool m_parameterValuesHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp;
    bool m_startTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
