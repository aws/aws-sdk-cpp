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
  class CreateEvaluationRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API CreateEvaluationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEvaluation"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>.</p>
     */
    inline const Aws::String& GetEvaluationId() const { return m_evaluationId; }
    inline bool EvaluationIdHasBeenSet() const { return m_evaluationIdHasBeenSet; }
    template<typename EvaluationIdT = Aws::String>
    void SetEvaluationId(EvaluationIdT&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::forward<EvaluationIdT>(value); }
    template<typename EvaluationIdT = Aws::String>
    CreateEvaluationRequest& WithEvaluationId(EvaluationIdT&& value) { SetEvaluationId(std::forward<EvaluationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>.</p>
     */
    inline const Aws::String& GetEvaluationName() const { return m_evaluationName; }
    inline bool EvaluationNameHasBeenSet() const { return m_evaluationNameHasBeenSet; }
    template<typename EvaluationNameT = Aws::String>
    void SetEvaluationName(EvaluationNameT&& value) { m_evaluationNameHasBeenSet = true; m_evaluationName = std::forward<EvaluationNameT>(value); }
    template<typename EvaluationNameT = Aws::String>
    CreateEvaluationRequest& WithEvaluationName(EvaluationNameT&& value) { SetEvaluationName(std::forward<EvaluationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>MLModel</code> to evaluate.</p> <p>The schema used in
     * creating the <code>MLModel</code> must match the schema of the
     * <code>DataSource</code> used in the <code>Evaluation</code>.</p>
     */
    inline const Aws::String& GetMLModelId() const { return m_mLModelId; }
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }
    template<typename MLModelIdT = Aws::String>
    void SetMLModelId(MLModelIdT&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::forward<MLModelIdT>(value); }
    template<typename MLModelIdT = Aws::String>
    CreateEvaluationRequest& WithMLModelId(MLModelIdT&& value) { SetMLModelId(std::forward<MLModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DataSource</code> for the evaluation. The schema of the
     * <code>DataSource</code> must match the schema used to create the
     * <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetEvaluationDataSourceId() const { return m_evaluationDataSourceId; }
    inline bool EvaluationDataSourceIdHasBeenSet() const { return m_evaluationDataSourceIdHasBeenSet; }
    template<typename EvaluationDataSourceIdT = Aws::String>
    void SetEvaluationDataSourceId(EvaluationDataSourceIdT&& value) { m_evaluationDataSourceIdHasBeenSet = true; m_evaluationDataSourceId = std::forward<EvaluationDataSourceIdT>(value); }
    template<typename EvaluationDataSourceIdT = Aws::String>
    CreateEvaluationRequest& WithEvaluationDataSourceId(EvaluationDataSourceIdT&& value) { SetEvaluationDataSourceId(std::forward<EvaluationDataSourceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_evaluationId;
    bool m_evaluationIdHasBeenSet = false;

    Aws::String m_evaluationName;
    bool m_evaluationNameHasBeenSet = false;

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet = false;

    Aws::String m_evaluationDataSourceId;
    bool m_evaluationDataSourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
