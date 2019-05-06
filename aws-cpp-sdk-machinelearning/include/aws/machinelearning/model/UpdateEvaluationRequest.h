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
  class AWS_MACHINELEARNING_API UpdateEvaluationRequest : public MachineLearningRequest
  {
  public:
    UpdateEvaluationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEvaluation"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation.</p>
     */
    inline const Aws::String& GetEvaluationId() const{ return m_evaluationId; }

    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation.</p>
     */
    inline bool EvaluationIdHasBeenSet() const { return m_evaluationIdHasBeenSet; }

    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation.</p>
     */
    inline void SetEvaluationId(const Aws::String& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = value; }

    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation.</p>
     */
    inline void SetEvaluationId(Aws::String&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::move(value); }

    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation.</p>
     */
    inline void SetEvaluationId(const char* value) { m_evaluationIdHasBeenSet = true; m_evaluationId.assign(value); }

    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation.</p>
     */
    inline UpdateEvaluationRequest& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}

    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation.</p>
     */
    inline UpdateEvaluationRequest& WithEvaluationId(Aws::String&& value) { SetEvaluationId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation.</p>
     */
    inline UpdateEvaluationRequest& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}


    /**
     * <p>A new user-supplied name or description of the <code>Evaluation</code> that
     * will replace the current content. </p>
     */
    inline const Aws::String& GetEvaluationName() const{ return m_evaluationName; }

    /**
     * <p>A new user-supplied name or description of the <code>Evaluation</code> that
     * will replace the current content. </p>
     */
    inline bool EvaluationNameHasBeenSet() const { return m_evaluationNameHasBeenSet; }

    /**
     * <p>A new user-supplied name or description of the <code>Evaluation</code> that
     * will replace the current content. </p>
     */
    inline void SetEvaluationName(const Aws::String& value) { m_evaluationNameHasBeenSet = true; m_evaluationName = value; }

    /**
     * <p>A new user-supplied name or description of the <code>Evaluation</code> that
     * will replace the current content. </p>
     */
    inline void SetEvaluationName(Aws::String&& value) { m_evaluationNameHasBeenSet = true; m_evaluationName = std::move(value); }

    /**
     * <p>A new user-supplied name or description of the <code>Evaluation</code> that
     * will replace the current content. </p>
     */
    inline void SetEvaluationName(const char* value) { m_evaluationNameHasBeenSet = true; m_evaluationName.assign(value); }

    /**
     * <p>A new user-supplied name or description of the <code>Evaluation</code> that
     * will replace the current content. </p>
     */
    inline UpdateEvaluationRequest& WithEvaluationName(const Aws::String& value) { SetEvaluationName(value); return *this;}

    /**
     * <p>A new user-supplied name or description of the <code>Evaluation</code> that
     * will replace the current content. </p>
     */
    inline UpdateEvaluationRequest& WithEvaluationName(Aws::String&& value) { SetEvaluationName(std::move(value)); return *this;}

    /**
     * <p>A new user-supplied name or description of the <code>Evaluation</code> that
     * will replace the current content. </p>
     */
    inline UpdateEvaluationRequest& WithEvaluationName(const char* value) { SetEvaluationName(value); return *this;}

  private:

    Aws::String m_evaluationId;
    bool m_evaluationIdHasBeenSet;

    Aws::String m_evaluationName;
    bool m_evaluationNameHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
