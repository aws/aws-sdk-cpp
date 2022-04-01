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
  class AWS_MACHINELEARNING_API CreateEvaluationRequest : public MachineLearningRequest
  {
  public:
    CreateEvaluationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEvaluation"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>.</p>
     */
    inline const Aws::String& GetEvaluationId() const{ return m_evaluationId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>.</p>
     */
    inline bool EvaluationIdHasBeenSet() const { return m_evaluationIdHasBeenSet; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>.</p>
     */
    inline void SetEvaluationId(const Aws::String& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>.</p>
     */
    inline void SetEvaluationId(Aws::String&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::move(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>.</p>
     */
    inline void SetEvaluationId(const char* value) { m_evaluationIdHasBeenSet = true; m_evaluationId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>.</p>
     */
    inline CreateEvaluationRequest& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>.</p>
     */
    inline CreateEvaluationRequest& WithEvaluationId(Aws::String&& value) { SetEvaluationId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>.</p>
     */
    inline CreateEvaluationRequest& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}


    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>.</p>
     */
    inline const Aws::String& GetEvaluationName() const{ return m_evaluationName; }

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>.</p>
     */
    inline bool EvaluationNameHasBeenSet() const { return m_evaluationNameHasBeenSet; }

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>.</p>
     */
    inline void SetEvaluationName(const Aws::String& value) { m_evaluationNameHasBeenSet = true; m_evaluationName = value; }

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>.</p>
     */
    inline void SetEvaluationName(Aws::String&& value) { m_evaluationNameHasBeenSet = true; m_evaluationName = std::move(value); }

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>.</p>
     */
    inline void SetEvaluationName(const char* value) { m_evaluationNameHasBeenSet = true; m_evaluationName.assign(value); }

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>.</p>
     */
    inline CreateEvaluationRequest& WithEvaluationName(const Aws::String& value) { SetEvaluationName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>.</p>
     */
    inline CreateEvaluationRequest& WithEvaluationName(Aws::String&& value) { SetEvaluationName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>.</p>
     */
    inline CreateEvaluationRequest& WithEvaluationName(const char* value) { SetEvaluationName(value); return *this;}


    /**
     * <p>The ID of the <code>MLModel</code> to evaluate.</p> <p>The schema used in
     * creating the <code>MLModel</code> must match the schema of the
     * <code>DataSource</code> used in the <code>Evaluation</code>.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>The ID of the <code>MLModel</code> to evaluate.</p> <p>The schema used in
     * creating the <code>MLModel</code> must match the schema of the
     * <code>DataSource</code> used in the <code>Evaluation</code>.</p>
     */
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }

    /**
     * <p>The ID of the <code>MLModel</code> to evaluate.</p> <p>The schema used in
     * creating the <code>MLModel</code> must match the schema of the
     * <code>DataSource</code> used in the <code>Evaluation</code>.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>The ID of the <code>MLModel</code> to evaluate.</p> <p>The schema used in
     * creating the <code>MLModel</code> must match the schema of the
     * <code>DataSource</code> used in the <code>Evaluation</code>.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::move(value); }

    /**
     * <p>The ID of the <code>MLModel</code> to evaluate.</p> <p>The schema used in
     * creating the <code>MLModel</code> must match the schema of the
     * <code>DataSource</code> used in the <code>Evaluation</code>.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelIdHasBeenSet = true; m_mLModelId.assign(value); }

    /**
     * <p>The ID of the <code>MLModel</code> to evaluate.</p> <p>The schema used in
     * creating the <code>MLModel</code> must match the schema of the
     * <code>DataSource</code> used in the <code>Evaluation</code>.</p>
     */
    inline CreateEvaluationRequest& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>The ID of the <code>MLModel</code> to evaluate.</p> <p>The schema used in
     * creating the <code>MLModel</code> must match the schema of the
     * <code>DataSource</code> used in the <code>Evaluation</code>.</p>
     */
    inline CreateEvaluationRequest& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>MLModel</code> to evaluate.</p> <p>The schema used in
     * creating the <code>MLModel</code> must match the schema of the
     * <code>DataSource</code> used in the <code>Evaluation</code>.</p>
     */
    inline CreateEvaluationRequest& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}


    /**
     * <p>The ID of the <code>DataSource</code> for the evaluation. The schema of the
     * <code>DataSource</code> must match the schema used to create the
     * <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetEvaluationDataSourceId() const{ return m_evaluationDataSourceId; }

    /**
     * <p>The ID of the <code>DataSource</code> for the evaluation. The schema of the
     * <code>DataSource</code> must match the schema used to create the
     * <code>MLModel</code>.</p>
     */
    inline bool EvaluationDataSourceIdHasBeenSet() const { return m_evaluationDataSourceIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DataSource</code> for the evaluation. The schema of the
     * <code>DataSource</code> must match the schema used to create the
     * <code>MLModel</code>.</p>
     */
    inline void SetEvaluationDataSourceId(const Aws::String& value) { m_evaluationDataSourceIdHasBeenSet = true; m_evaluationDataSourceId = value; }

    /**
     * <p>The ID of the <code>DataSource</code> for the evaluation. The schema of the
     * <code>DataSource</code> must match the schema used to create the
     * <code>MLModel</code>.</p>
     */
    inline void SetEvaluationDataSourceId(Aws::String&& value) { m_evaluationDataSourceIdHasBeenSet = true; m_evaluationDataSourceId = std::move(value); }

    /**
     * <p>The ID of the <code>DataSource</code> for the evaluation. The schema of the
     * <code>DataSource</code> must match the schema used to create the
     * <code>MLModel</code>.</p>
     */
    inline void SetEvaluationDataSourceId(const char* value) { m_evaluationDataSourceIdHasBeenSet = true; m_evaluationDataSourceId.assign(value); }

    /**
     * <p>The ID of the <code>DataSource</code> for the evaluation. The schema of the
     * <code>DataSource</code> must match the schema used to create the
     * <code>MLModel</code>.</p>
     */
    inline CreateEvaluationRequest& WithEvaluationDataSourceId(const Aws::String& value) { SetEvaluationDataSourceId(value); return *this;}

    /**
     * <p>The ID of the <code>DataSource</code> for the evaluation. The schema of the
     * <code>DataSource</code> must match the schema used to create the
     * <code>MLModel</code>.</p>
     */
    inline CreateEvaluationRequest& WithEvaluationDataSourceId(Aws::String&& value) { SetEvaluationDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>DataSource</code> for the evaluation. The schema of the
     * <code>DataSource</code> must match the schema used to create the
     * <code>MLModel</code>.</p>
     */
    inline CreateEvaluationRequest& WithEvaluationDataSourceId(const char* value) { SetEvaluationDataSourceId(value); return *this;}

  private:

    Aws::String m_evaluationId;
    bool m_evaluationIdHasBeenSet;

    Aws::String m_evaluationName;
    bool m_evaluationNameHasBeenSet;

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet;

    Aws::String m_evaluationDataSourceId;
    bool m_evaluationDataSourceIdHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
