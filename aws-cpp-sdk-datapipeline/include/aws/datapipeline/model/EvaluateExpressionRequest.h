﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for EvaluateExpression.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/EvaluateExpressionInput">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API EvaluateExpressionRequest : public DataPipelineRequest
  {
  public:
    EvaluateExpressionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EvaluateExpression"; }

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
    inline EvaluateExpressionRequest& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline EvaluateExpressionRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}

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
    inline bool ObjectIdHasBeenSet() const { return m_objectIdHasBeenSet; }

    /**
     * <p>The ID of the object.</p>
     */
    inline void SetObjectId(const Aws::String& value) { m_objectIdHasBeenSet = true; m_objectId = value; }

    /**
     * <p>The ID of the object.</p>
     */
    inline void SetObjectId(Aws::String&& value) { m_objectIdHasBeenSet = true; m_objectId = std::move(value); }

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
    inline EvaluateExpressionRequest& WithObjectId(Aws::String&& value) { SetObjectId(std::move(value)); return *this;}

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
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The expression to evaluate.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The expression to evaluate.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

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
    inline EvaluateExpressionRequest& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

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
