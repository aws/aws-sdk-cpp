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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_DATAPIPELINE_API GetPipelineDefinitionResult
  {
  public:
    GetPipelineDefinitionResult();
    GetPipelineDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPipelineDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The objects defined in the pipeline.</p>
     */
    inline const Aws::Vector<PipelineObject>& GetPipelineObjects() const{ return m_pipelineObjects; }

    /**
     * <p>The objects defined in the pipeline.</p>
     */
    inline void SetPipelineObjects(const Aws::Vector<PipelineObject>& value) { m_pipelineObjects = value; }

    /**
     * <p>The objects defined in the pipeline.</p>
     */
    inline void SetPipelineObjects(Aws::Vector<PipelineObject>&& value) { m_pipelineObjects = std::move(value); }

    /**
     * <p>The objects defined in the pipeline.</p>
     */
    inline GetPipelineDefinitionResult& WithPipelineObjects(const Aws::Vector<PipelineObject>& value) { SetPipelineObjects(value); return *this;}

    /**
     * <p>The objects defined in the pipeline.</p>
     */
    inline GetPipelineDefinitionResult& WithPipelineObjects(Aws::Vector<PipelineObject>&& value) { SetPipelineObjects(std::move(value)); return *this;}

    /**
     * <p>The objects defined in the pipeline.</p>
     */
    inline GetPipelineDefinitionResult& AddPipelineObjects(const PipelineObject& value) { m_pipelineObjects.push_back(value); return *this; }

    /**
     * <p>The objects defined in the pipeline.</p>
     */
    inline GetPipelineDefinitionResult& AddPipelineObjects(PipelineObject&& value) { m_pipelineObjects.push_back(std::move(value)); return *this; }


    /**
     * <p>The parameter objects used in the pipeline definition.</p>
     */
    inline const Aws::Vector<ParameterObject>& GetParameterObjects() const{ return m_parameterObjects; }

    /**
     * <p>The parameter objects used in the pipeline definition.</p>
     */
    inline void SetParameterObjects(const Aws::Vector<ParameterObject>& value) { m_parameterObjects = value; }

    /**
     * <p>The parameter objects used in the pipeline definition.</p>
     */
    inline void SetParameterObjects(Aws::Vector<ParameterObject>&& value) { m_parameterObjects = std::move(value); }

    /**
     * <p>The parameter objects used in the pipeline definition.</p>
     */
    inline GetPipelineDefinitionResult& WithParameterObjects(const Aws::Vector<ParameterObject>& value) { SetParameterObjects(value); return *this;}

    /**
     * <p>The parameter objects used in the pipeline definition.</p>
     */
    inline GetPipelineDefinitionResult& WithParameterObjects(Aws::Vector<ParameterObject>&& value) { SetParameterObjects(std::move(value)); return *this;}

    /**
     * <p>The parameter objects used in the pipeline definition.</p>
     */
    inline GetPipelineDefinitionResult& AddParameterObjects(const ParameterObject& value) { m_parameterObjects.push_back(value); return *this; }

    /**
     * <p>The parameter objects used in the pipeline definition.</p>
     */
    inline GetPipelineDefinitionResult& AddParameterObjects(ParameterObject&& value) { m_parameterObjects.push_back(std::move(value)); return *this; }


    /**
     * <p>The parameter values used in the pipeline definition.</p>
     */
    inline const Aws::Vector<ParameterValue>& GetParameterValues() const{ return m_parameterValues; }

    /**
     * <p>The parameter values used in the pipeline definition.</p>
     */
    inline void SetParameterValues(const Aws::Vector<ParameterValue>& value) { m_parameterValues = value; }

    /**
     * <p>The parameter values used in the pipeline definition.</p>
     */
    inline void SetParameterValues(Aws::Vector<ParameterValue>&& value) { m_parameterValues = std::move(value); }

    /**
     * <p>The parameter values used in the pipeline definition.</p>
     */
    inline GetPipelineDefinitionResult& WithParameterValues(const Aws::Vector<ParameterValue>& value) { SetParameterValues(value); return *this;}

    /**
     * <p>The parameter values used in the pipeline definition.</p>
     */
    inline GetPipelineDefinitionResult& WithParameterValues(Aws::Vector<ParameterValue>&& value) { SetParameterValues(std::move(value)); return *this;}

    /**
     * <p>The parameter values used in the pipeline definition.</p>
     */
    inline GetPipelineDefinitionResult& AddParameterValues(const ParameterValue& value) { m_parameterValues.push_back(value); return *this; }

    /**
     * <p>The parameter values used in the pipeline definition.</p>
     */
    inline GetPipelineDefinitionResult& AddParameterValues(ParameterValue&& value) { m_parameterValues.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PipelineObject> m_pipelineObjects;

    Aws::Vector<ParameterObject> m_parameterObjects;

    Aws::Vector<ParameterValue> m_parameterValues;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
