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

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for EvaluateExpression.</p>
   */
  class AWS_DATAPIPELINE_API EvaluateExpressionRequest : public DataPipelineRequest
  {
  public:
    EvaluateExpressionRequest();
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
    inline EvaluateExpressionRequest& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline EvaluateExpressionRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline EvaluateExpressionRequest& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the object.</p>
     */
    inline const Aws::String& GetObjectId() const{ return m_objectId; }

    /**
     * <p>The ID of the object.</p>
     */
    inline void SetObjectId(const Aws::String& value) { m_objectIdHasBeenSet = true; m_objectId = value; }

    /**
     * <p>The ID of the object.</p>
     */
    inline void SetObjectId(Aws::String&& value) { m_objectIdHasBeenSet = true; m_objectId = value; }

    /**
     * <p>The ID of the object.</p>
     */
    inline void SetObjectId(const char* value) { m_objectIdHasBeenSet = true; m_objectId.assign(value); }

    /**
     * <p>The ID of the object.</p>
     */
    inline EvaluateExpressionRequest& WithObjectId(const Aws::String& value) { SetObjectId(value); return *this;}

    /**
     * <p>The ID of the object.</p>
     */
    inline EvaluateExpressionRequest& WithObjectId(Aws::String&& value) { SetObjectId(value); return *this;}

    /**
     * <p>The ID of the object.</p>
     */
    inline EvaluateExpressionRequest& WithObjectId(const char* value) { SetObjectId(value); return *this;}

    /**
     * <p>The expression to evaluate.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The expression to evaluate.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The expression to evaluate.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The expression to evaluate.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The expression to evaluate.</p>
     */
    inline EvaluateExpressionRequest& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The expression to evaluate.</p>
     */
    inline EvaluateExpressionRequest& WithExpression(Aws::String&& value) { SetExpression(value); return *this;}

    /**
     * <p>The expression to evaluate.</p>
     */
    inline EvaluateExpressionRequest& WithExpression(const char* value) { SetExpression(value); return *this;}

  private:
    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet;
    Aws::String m_objectId;
    bool m_objectIdHasBeenSet;
    Aws::String m_expression;
    bool m_expressionHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
