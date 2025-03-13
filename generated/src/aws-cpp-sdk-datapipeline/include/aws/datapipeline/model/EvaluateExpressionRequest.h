/**
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
  class EvaluateExpressionRequest : public DataPipelineRequest
  {
  public:
    AWS_DATAPIPELINE_API EvaluateExpressionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EvaluateExpression"; }

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
    EvaluateExpressionRequest& WithPipelineId(PipelineIdT&& value) { SetPipelineId(std::forward<PipelineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the object.</p>
     */
    inline const Aws::String& GetObjectId() const { return m_objectId; }
    inline bool ObjectIdHasBeenSet() const { return m_objectIdHasBeenSet; }
    template<typename ObjectIdT = Aws::String>
    void SetObjectId(ObjectIdT&& value) { m_objectIdHasBeenSet = true; m_objectId = std::forward<ObjectIdT>(value); }
    template<typename ObjectIdT = Aws::String>
    EvaluateExpressionRequest& WithObjectId(ObjectIdT&& value) { SetObjectId(std::forward<ObjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expression to evaluate.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    EvaluateExpressionRequest& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;

    Aws::String m_objectId;
    bool m_objectIdHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
