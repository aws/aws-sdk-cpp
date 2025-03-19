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
    AWS_DATAPIPELINE_API ActivatePipelineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ActivatePipeline"; }

    AWS_DATAPIPELINE_API Aws::String SerializePayload() const override;

    AWS_DATAPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineId() const { return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    template<typename PipelineIdT = Aws::String>
    void SetPipelineId(PipelineIdT&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::forward<PipelineIdT>(value); }
    template<typename PipelineIdT = Aws::String>
    ActivatePipelineRequest& WithPipelineId(PipelineIdT&& value) { SetPipelineId(std::forward<PipelineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parameter values to pass to the pipeline at activation.</p>
     */
    inline const Aws::Vector<ParameterValue>& GetParameterValues() const { return m_parameterValues; }
    inline bool ParameterValuesHasBeenSet() const { return m_parameterValuesHasBeenSet; }
    template<typename ParameterValuesT = Aws::Vector<ParameterValue>>
    void SetParameterValues(ParameterValuesT&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues = std::forward<ParameterValuesT>(value); }
    template<typename ParameterValuesT = Aws::Vector<ParameterValue>>
    ActivatePipelineRequest& WithParameterValues(ParameterValuesT&& value) { SetParameterValues(std::forward<ParameterValuesT>(value)); return *this;}
    template<typename ParameterValuesT = ParameterValue>
    ActivatePipelineRequest& AddParameterValues(ParameterValuesT&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues.emplace_back(std::forward<ParameterValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time to resume the pipeline. By default, the pipeline resumes
     * from the last completed execution.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    ActivatePipelineRequest& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;

    Aws::Vector<ParameterValue> m_parameterValues;
    bool m_parameterValuesHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp{};
    bool m_startTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
