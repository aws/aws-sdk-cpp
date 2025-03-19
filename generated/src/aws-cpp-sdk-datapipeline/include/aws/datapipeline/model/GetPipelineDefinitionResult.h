/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datapipeline/model/PipelineObject.h>
#include <aws/datapipeline/model/ParameterObject.h>
#include <aws/datapipeline/model/ParameterValue.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of GetPipelineDefinition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/GetPipelineDefinitionOutput">AWS
   * API Reference</a></p>
   */
  class GetPipelineDefinitionResult
  {
  public:
    AWS_DATAPIPELINE_API GetPipelineDefinitionResult() = default;
    AWS_DATAPIPELINE_API GetPipelineDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API GetPipelineDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The objects defined in the pipeline.</p>
     */
    inline const Aws::Vector<PipelineObject>& GetPipelineObjects() const { return m_pipelineObjects; }
    template<typename PipelineObjectsT = Aws::Vector<PipelineObject>>
    void SetPipelineObjects(PipelineObjectsT&& value) { m_pipelineObjectsHasBeenSet = true; m_pipelineObjects = std::forward<PipelineObjectsT>(value); }
    template<typename PipelineObjectsT = Aws::Vector<PipelineObject>>
    GetPipelineDefinitionResult& WithPipelineObjects(PipelineObjectsT&& value) { SetPipelineObjects(std::forward<PipelineObjectsT>(value)); return *this;}
    template<typename PipelineObjectsT = PipelineObject>
    GetPipelineDefinitionResult& AddPipelineObjects(PipelineObjectsT&& value) { m_pipelineObjectsHasBeenSet = true; m_pipelineObjects.emplace_back(std::forward<PipelineObjectsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameter objects used in the pipeline definition.</p>
     */
    inline const Aws::Vector<ParameterObject>& GetParameterObjects() const { return m_parameterObjects; }
    template<typename ParameterObjectsT = Aws::Vector<ParameterObject>>
    void SetParameterObjects(ParameterObjectsT&& value) { m_parameterObjectsHasBeenSet = true; m_parameterObjects = std::forward<ParameterObjectsT>(value); }
    template<typename ParameterObjectsT = Aws::Vector<ParameterObject>>
    GetPipelineDefinitionResult& WithParameterObjects(ParameterObjectsT&& value) { SetParameterObjects(std::forward<ParameterObjectsT>(value)); return *this;}
    template<typename ParameterObjectsT = ParameterObject>
    GetPipelineDefinitionResult& AddParameterObjects(ParameterObjectsT&& value) { m_parameterObjectsHasBeenSet = true; m_parameterObjects.emplace_back(std::forward<ParameterObjectsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameter values used in the pipeline definition.</p>
     */
    inline const Aws::Vector<ParameterValue>& GetParameterValues() const { return m_parameterValues; }
    template<typename ParameterValuesT = Aws::Vector<ParameterValue>>
    void SetParameterValues(ParameterValuesT&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues = std::forward<ParameterValuesT>(value); }
    template<typename ParameterValuesT = Aws::Vector<ParameterValue>>
    GetPipelineDefinitionResult& WithParameterValues(ParameterValuesT&& value) { SetParameterValues(std::forward<ParameterValuesT>(value)); return *this;}
    template<typename ParameterValuesT = ParameterValue>
    GetPipelineDefinitionResult& AddParameterValues(ParameterValuesT&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues.emplace_back(std::forward<ParameterValuesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPipelineDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PipelineObject> m_pipelineObjects;
    bool m_pipelineObjectsHasBeenSet = false;

    Aws::Vector<ParameterObject> m_parameterObjects;
    bool m_parameterObjectsHasBeenSet = false;

    Aws::Vector<ParameterValue> m_parameterValues;
    bool m_parameterValuesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
