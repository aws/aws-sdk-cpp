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
  class AWS_DATAPIPELINE_API ValidatePipelineDefinitionRequest : public DataPipelineRequest
  {
  public:
    ValidatePipelineDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidatePipelineDefinition"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline ValidatePipelineDefinitionRequest& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline ValidatePipelineDefinitionRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline ValidatePipelineDefinitionRequest& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}


    /**
     * <p>The objects that define the pipeline changes to validate against the
     * pipeline.</p>
     */
    inline const Aws::Vector<PipelineObject>& GetPipelineObjects() const{ return m_pipelineObjects; }

    /**
     * <p>The objects that define the pipeline changes to validate against the
     * pipeline.</p>
     */
    inline bool PipelineObjectsHasBeenSet() const { return m_pipelineObjectsHasBeenSet; }

    /**
     * <p>The objects that define the pipeline changes to validate against the
     * pipeline.</p>
     */
    inline void SetPipelineObjects(const Aws::Vector<PipelineObject>& value) { m_pipelineObjectsHasBeenSet = true; m_pipelineObjects = value; }

    /**
     * <p>The objects that define the pipeline changes to validate against the
     * pipeline.</p>
     */
    inline void SetPipelineObjects(Aws::Vector<PipelineObject>&& value) { m_pipelineObjectsHasBeenSet = true; m_pipelineObjects = std::move(value); }

    /**
     * <p>The objects that define the pipeline changes to validate against the
     * pipeline.</p>
     */
    inline ValidatePipelineDefinitionRequest& WithPipelineObjects(const Aws::Vector<PipelineObject>& value) { SetPipelineObjects(value); return *this;}

    /**
     * <p>The objects that define the pipeline changes to validate against the
     * pipeline.</p>
     */
    inline ValidatePipelineDefinitionRequest& WithPipelineObjects(Aws::Vector<PipelineObject>&& value) { SetPipelineObjects(std::move(value)); return *this;}

    /**
     * <p>The objects that define the pipeline changes to validate against the
     * pipeline.</p>
     */
    inline ValidatePipelineDefinitionRequest& AddPipelineObjects(const PipelineObject& value) { m_pipelineObjectsHasBeenSet = true; m_pipelineObjects.push_back(value); return *this; }

    /**
     * <p>The objects that define the pipeline changes to validate against the
     * pipeline.</p>
     */
    inline ValidatePipelineDefinitionRequest& AddPipelineObjects(PipelineObject&& value) { m_pipelineObjectsHasBeenSet = true; m_pipelineObjects.push_back(std::move(value)); return *this; }


    /**
     * <p>The parameter objects used with the pipeline.</p>
     */
    inline const Aws::Vector<ParameterObject>& GetParameterObjects() const{ return m_parameterObjects; }

    /**
     * <p>The parameter objects used with the pipeline.</p>
     */
    inline bool ParameterObjectsHasBeenSet() const { return m_parameterObjectsHasBeenSet; }

    /**
     * <p>The parameter objects used with the pipeline.</p>
     */
    inline void SetParameterObjects(const Aws::Vector<ParameterObject>& value) { m_parameterObjectsHasBeenSet = true; m_parameterObjects = value; }

    /**
     * <p>The parameter objects used with the pipeline.</p>
     */
    inline void SetParameterObjects(Aws::Vector<ParameterObject>&& value) { m_parameterObjectsHasBeenSet = true; m_parameterObjects = std::move(value); }

    /**
     * <p>The parameter objects used with the pipeline.</p>
     */
    inline ValidatePipelineDefinitionRequest& WithParameterObjects(const Aws::Vector<ParameterObject>& value) { SetParameterObjects(value); return *this;}

    /**
     * <p>The parameter objects used with the pipeline.</p>
     */
    inline ValidatePipelineDefinitionRequest& WithParameterObjects(Aws::Vector<ParameterObject>&& value) { SetParameterObjects(std::move(value)); return *this;}

    /**
     * <p>The parameter objects used with the pipeline.</p>
     */
    inline ValidatePipelineDefinitionRequest& AddParameterObjects(const ParameterObject& value) { m_parameterObjectsHasBeenSet = true; m_parameterObjects.push_back(value); return *this; }

    /**
     * <p>The parameter objects used with the pipeline.</p>
     */
    inline ValidatePipelineDefinitionRequest& AddParameterObjects(ParameterObject&& value) { m_parameterObjectsHasBeenSet = true; m_parameterObjects.push_back(std::move(value)); return *this; }


    /**
     * <p>The parameter values used with the pipeline.</p>
     */
    inline const Aws::Vector<ParameterValue>& GetParameterValues() const{ return m_parameterValues; }

    /**
     * <p>The parameter values used with the pipeline.</p>
     */
    inline bool ParameterValuesHasBeenSet() const { return m_parameterValuesHasBeenSet; }

    /**
     * <p>The parameter values used with the pipeline.</p>
     */
    inline void SetParameterValues(const Aws::Vector<ParameterValue>& value) { m_parameterValuesHasBeenSet = true; m_parameterValues = value; }

    /**
     * <p>The parameter values used with the pipeline.</p>
     */
    inline void SetParameterValues(Aws::Vector<ParameterValue>&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues = std::move(value); }

    /**
     * <p>The parameter values used with the pipeline.</p>
     */
    inline ValidatePipelineDefinitionRequest& WithParameterValues(const Aws::Vector<ParameterValue>& value) { SetParameterValues(value); return *this;}

    /**
     * <p>The parameter values used with the pipeline.</p>
     */
    inline ValidatePipelineDefinitionRequest& WithParameterValues(Aws::Vector<ParameterValue>&& value) { SetParameterValues(std::move(value)); return *this;}

    /**
     * <p>The parameter values used with the pipeline.</p>
     */
    inline ValidatePipelineDefinitionRequest& AddParameterValues(const ParameterValue& value) { m_parameterValuesHasBeenSet = true; m_parameterValues.push_back(value); return *this; }

    /**
     * <p>The parameter values used with the pipeline.</p>
     */
    inline ValidatePipelineDefinitionRequest& AddParameterValues(ParameterValue&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet;

    Aws::Vector<PipelineObject> m_pipelineObjects;
    bool m_pipelineObjectsHasBeenSet;

    Aws::Vector<ParameterObject> m_parameterObjects;
    bool m_parameterObjectsHasBeenSet;

    Aws::Vector<ParameterValue> m_parameterValues;
    bool m_parameterValuesHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
