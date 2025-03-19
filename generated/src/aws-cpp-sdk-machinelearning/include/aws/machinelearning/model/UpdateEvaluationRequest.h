/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class UpdateEvaluationRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API UpdateEvaluationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEvaluation"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation.</p>
     */
    inline const Aws::String& GetEvaluationId() const { return m_evaluationId; }
    inline bool EvaluationIdHasBeenSet() const { return m_evaluationIdHasBeenSet; }
    template<typename EvaluationIdT = Aws::String>
    void SetEvaluationId(EvaluationIdT&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::forward<EvaluationIdT>(value); }
    template<typename EvaluationIdT = Aws::String>
    UpdateEvaluationRequest& WithEvaluationId(EvaluationIdT&& value) { SetEvaluationId(std::forward<EvaluationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new user-supplied name or description of the <code>Evaluation</code> that
     * will replace the current content. </p>
     */
    inline const Aws::String& GetEvaluationName() const { return m_evaluationName; }
    inline bool EvaluationNameHasBeenSet() const { return m_evaluationNameHasBeenSet; }
    template<typename EvaluationNameT = Aws::String>
    void SetEvaluationName(EvaluationNameT&& value) { m_evaluationNameHasBeenSet = true; m_evaluationName = std::forward<EvaluationNameT>(value); }
    template<typename EvaluationNameT = Aws::String>
    UpdateEvaluationRequest& WithEvaluationName(EvaluationNameT&& value) { SetEvaluationName(std::forward<EvaluationNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_evaluationId;
    bool m_evaluationIdHasBeenSet = false;

    Aws::String m_evaluationName;
    bool m_evaluationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
