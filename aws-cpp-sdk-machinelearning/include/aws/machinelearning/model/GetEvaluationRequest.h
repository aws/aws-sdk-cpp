﻿/*
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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class AWS_MACHINELEARNING_API GetEvaluationRequest : public MachineLearningRequest
  {
  public:
    GetEvaluationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the <code>Evaluation</code> to retrieve. The evaluation of each
     * <code>MLModel</code> is recorded and cataloged. The ID provides the means to
     * access the information. </p>
     */
    inline const Aws::String& GetEvaluationId() const{ return m_evaluationId; }

    /**
     * <p>The ID of the <code>Evaluation</code> to retrieve. The evaluation of each
     * <code>MLModel</code> is recorded and cataloged. The ID provides the means to
     * access the information. </p>
     */
    inline void SetEvaluationId(const Aws::String& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = value; }

    /**
     * <p>The ID of the <code>Evaluation</code> to retrieve. The evaluation of each
     * <code>MLModel</code> is recorded and cataloged. The ID provides the means to
     * access the information. </p>
     */
    inline void SetEvaluationId(Aws::String&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = value; }

    /**
     * <p>The ID of the <code>Evaluation</code> to retrieve. The evaluation of each
     * <code>MLModel</code> is recorded and cataloged. The ID provides the means to
     * access the information. </p>
     */
    inline void SetEvaluationId(const char* value) { m_evaluationIdHasBeenSet = true; m_evaluationId.assign(value); }

    /**
     * <p>The ID of the <code>Evaluation</code> to retrieve. The evaluation of each
     * <code>MLModel</code> is recorded and cataloged. The ID provides the means to
     * access the information. </p>
     */
    inline GetEvaluationRequest& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}

    /**
     * <p>The ID of the <code>Evaluation</code> to retrieve. The evaluation of each
     * <code>MLModel</code> is recorded and cataloged. The ID provides the means to
     * access the information. </p>
     */
    inline GetEvaluationRequest& WithEvaluationId(Aws::String&& value) { SetEvaluationId(value); return *this;}

    /**
     * <p>The ID of the <code>Evaluation</code> to retrieve. The evaluation of each
     * <code>MLModel</code> is recorded and cataloged. The ID provides the means to
     * access the information. </p>
     */
    inline GetEvaluationRequest& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}

  private:
    Aws::String m_evaluationId;
    bool m_evaluationIdHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
