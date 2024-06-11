﻿/**
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
    AWS_MACHINELEARNING_API CreateEvaluationRequest();

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
    inline const Aws::String& GetEvaluationId() const{ return m_evaluationId; }
    inline bool EvaluationIdHasBeenSet() const { return m_evaluationIdHasBeenSet; }
    inline void SetEvaluationId(const Aws::String& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = value; }
    inline void SetEvaluationId(Aws::String&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::move(value); }
    inline void SetEvaluationId(const char* value) { m_evaluationIdHasBeenSet = true; m_evaluationId.assign(value); }
    inline CreateEvaluationRequest& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}
    inline CreateEvaluationRequest& WithEvaluationId(Aws::String&& value) { SetEvaluationId(std::move(value)); return *this;}
    inline CreateEvaluationRequest& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>.</p>
     */
    inline const Aws::String& GetEvaluationName() const{ return m_evaluationName; }
    inline bool EvaluationNameHasBeenSet() const { return m_evaluationNameHasBeenSet; }
    inline void SetEvaluationName(const Aws::String& value) { m_evaluationNameHasBeenSet = true; m_evaluationName = value; }
    inline void SetEvaluationName(Aws::String&& value) { m_evaluationNameHasBeenSet = true; m_evaluationName = std::move(value); }
    inline void SetEvaluationName(const char* value) { m_evaluationNameHasBeenSet = true; m_evaluationName.assign(value); }
    inline CreateEvaluationRequest& WithEvaluationName(const Aws::String& value) { SetEvaluationName(value); return *this;}
    inline CreateEvaluationRequest& WithEvaluationName(Aws::String&& value) { SetEvaluationName(std::move(value)); return *this;}
    inline CreateEvaluationRequest& WithEvaluationName(const char* value) { SetEvaluationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>MLModel</code> to evaluate.</p> <p>The schema used in
     * creating the <code>MLModel</code> must match the schema of the
     * <code>DataSource</code> used in the <code>Evaluation</code>.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }
    inline void SetMLModelId(const Aws::String& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }
    inline void SetMLModelId(Aws::String&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::move(value); }
    inline void SetMLModelId(const char* value) { m_mLModelIdHasBeenSet = true; m_mLModelId.assign(value); }
    inline CreateEvaluationRequest& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}
    inline CreateEvaluationRequest& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}
    inline CreateEvaluationRequest& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DataSource</code> for the evaluation. The schema of the
     * <code>DataSource</code> must match the schema used to create the
     * <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetEvaluationDataSourceId() const{ return m_evaluationDataSourceId; }
    inline bool EvaluationDataSourceIdHasBeenSet() const { return m_evaluationDataSourceIdHasBeenSet; }
    inline void SetEvaluationDataSourceId(const Aws::String& value) { m_evaluationDataSourceIdHasBeenSet = true; m_evaluationDataSourceId = value; }
    inline void SetEvaluationDataSourceId(Aws::String&& value) { m_evaluationDataSourceIdHasBeenSet = true; m_evaluationDataSourceId = std::move(value); }
    inline void SetEvaluationDataSourceId(const char* value) { m_evaluationDataSourceIdHasBeenSet = true; m_evaluationDataSourceId.assign(value); }
    inline CreateEvaluationRequest& WithEvaluationDataSourceId(const Aws::String& value) { SetEvaluationDataSourceId(value); return *this;}
    inline CreateEvaluationRequest& WithEvaluationDataSourceId(Aws::String&& value) { SetEvaluationDataSourceId(std::move(value)); return *this;}
    inline CreateEvaluationRequest& WithEvaluationDataSourceId(const char* value) { SetEvaluationDataSourceId(value); return *this;}
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
