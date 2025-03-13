/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datapipeline/model/PipelineObject.h>
#include <aws/datapipeline/model/ParameterObject.h>
#include <aws/datapipeline/model/ParameterValue.h>
#include <utility>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for ValidatePipelineDefinition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ValidatePipelineDefinitionInput">AWS
   * API Reference</a></p>
   */
  class ValidatePipelineDefinitionRequest : public DataPipelineRequest
  {
  public:
    AWS_DATAPIPELINE_API ValidatePipelineDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidatePipelineDefinition"; }

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
    ValidatePipelineDefinitionRequest& WithPipelineId(PipelineIdT&& value) { SetPipelineId(std::forward<PipelineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The objects that define the pipeline changes to validate against the
     * pipeline.</p>
     */
    inline const Aws::Vector<PipelineObject>& GetPipelineObjects() const { return m_pipelineObjects; }
    inline bool PipelineObjectsHasBeenSet() const { return m_pipelineObjectsHasBeenSet; }
    template<typename PipelineObjectsT = Aws::Vector<PipelineObject>>
    void SetPipelineObjects(PipelineObjectsT&& value) { m_pipelineObjectsHasBeenSet = true; m_pipelineObjects = std::forward<PipelineObjectsT>(value); }
    template<typename PipelineObjectsT = Aws::Vector<PipelineObject>>
    ValidatePipelineDefinitionRequest& WithPipelineObjects(PipelineObjectsT&& value) { SetPipelineObjects(std::forward<PipelineObjectsT>(value)); return *this;}
    template<typename PipelineObjectsT = PipelineObject>
    ValidatePipelineDefinitionRequest& AddPipelineObjects(PipelineObjectsT&& value) { m_pipelineObjectsHasBeenSet = true; m_pipelineObjects.emplace_back(std::forward<PipelineObjectsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameter objects used with the pipeline.</p>
     */
    inline const Aws::Vector<ParameterObject>& GetParameterObjects() const { return m_parameterObjects; }
    inline bool ParameterObjectsHasBeenSet() const { return m_parameterObjectsHasBeenSet; }
    template<typename ParameterObjectsT = Aws::Vector<ParameterObject>>
    void SetParameterObjects(ParameterObjectsT&& value) { m_parameterObjectsHasBeenSet = true; m_parameterObjects = std::forward<ParameterObjectsT>(value); }
    template<typename ParameterObjectsT = Aws::Vector<ParameterObject>>
    ValidatePipelineDefinitionRequest& WithParameterObjects(ParameterObjectsT&& value) { SetParameterObjects(std::forward<ParameterObjectsT>(value)); return *this;}
    template<typename ParameterObjectsT = ParameterObject>
    ValidatePipelineDefinitionRequest& AddParameterObjects(ParameterObjectsT&& value) { m_parameterObjectsHasBeenSet = true; m_parameterObjects.emplace_back(std::forward<ParameterObjectsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameter values used with the pipeline.</p>
     */
    inline const Aws::Vector<ParameterValue>& GetParameterValues() const { return m_parameterValues; }
    inline bool ParameterValuesHasBeenSet() const { return m_parameterValuesHasBeenSet; }
    template<typename ParameterValuesT = Aws::Vector<ParameterValue>>
    void SetParameterValues(ParameterValuesT&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues = std::forward<ParameterValuesT>(value); }
    template<typename ParameterValuesT = Aws::Vector<ParameterValue>>
    ValidatePipelineDefinitionRequest& WithParameterValues(ParameterValuesT&& value) { SetParameterValues(std::forward<ParameterValuesT>(value)); return *this;}
    template<typename ParameterValuesT = ParameterValue>
    ValidatePipelineDefinitionRequest& AddParameterValues(ParameterValuesT&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues.emplace_back(std::forward<ParameterValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;

    Aws::Vector<PipelineObject> m_pipelineObjects;
    bool m_pipelineObjectsHasBeenSet = false;

    Aws::Vector<ParameterObject> m_parameterObjects;
    bool m_parameterObjectsHasBeenSet = false;

    Aws::Vector<ParameterValue> m_parameterValues;
    bool m_parameterValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
