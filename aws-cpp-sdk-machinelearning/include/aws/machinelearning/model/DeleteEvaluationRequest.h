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
  class AWS_MACHINELEARNING_API DeleteEvaluationRequest : public MachineLearningRequest
  {
  public:
    DeleteEvaluationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEvaluation"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code> to
     * delete.</p>
     */
    inline const Aws::String& GetEvaluationId() const{ return m_evaluationId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code> to
     * delete.</p>
     */
    inline bool EvaluationIdHasBeenSet() const { return m_evaluationIdHasBeenSet; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code> to
     * delete.</p>
     */
    inline void SetEvaluationId(const Aws::String& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code> to
     * delete.</p>
     */
    inline void SetEvaluationId(Aws::String&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::move(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code> to
     * delete.</p>
     */
    inline void SetEvaluationId(const char* value) { m_evaluationIdHasBeenSet = true; m_evaluationId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code> to
     * delete.</p>
     */
    inline DeleteEvaluationRequest& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code> to
     * delete.</p>
     */
    inline DeleteEvaluationRequest& WithEvaluationId(Aws::String&& value) { SetEvaluationId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code> to
     * delete.</p>
     */
    inline DeleteEvaluationRequest& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}

  private:

    Aws::String m_evaluationId;
    bool m_evaluationIdHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
