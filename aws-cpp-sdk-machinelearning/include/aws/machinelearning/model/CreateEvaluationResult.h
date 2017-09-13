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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MachineLearning
{
namespace Model
{
  /**
   * <p> Represents the output of a <code>CreateEvaluation</code> operation, and is
   * an acknowledgement that Amazon ML received the request.</p>
   * <p><code>CreateEvaluation</code> operation is asynchronous. You can poll for
   * status updates by using the <code>GetEvcaluation</code> operation and checking
   * the <code>Status</code> parameter. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateEvaluationOutput">AWS
   * API Reference</a></p>
   */
  class AWS_MACHINELEARNING_API CreateEvaluationResult
  {
  public:
    CreateEvaluationResult();
    CreateEvaluationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateEvaluationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user-supplied ID that uniquely identifies the <code>Evaluation</code>.
     * This value should be identical to the value of the <code>EvaluationId</code> in
     * the request.</p>
     */
    inline const Aws::String& GetEvaluationId() const{ return m_evaluationId; }

    /**
     * <p>The user-supplied ID that uniquely identifies the <code>Evaluation</code>.
     * This value should be identical to the value of the <code>EvaluationId</code> in
     * the request.</p>
     */
    inline void SetEvaluationId(const Aws::String& value) { m_evaluationId = value; }

    /**
     * <p>The user-supplied ID that uniquely identifies the <code>Evaluation</code>.
     * This value should be identical to the value of the <code>EvaluationId</code> in
     * the request.</p>
     */
    inline void SetEvaluationId(Aws::String&& value) { m_evaluationId = std::move(value); }

    /**
     * <p>The user-supplied ID that uniquely identifies the <code>Evaluation</code>.
     * This value should be identical to the value of the <code>EvaluationId</code> in
     * the request.</p>
     */
    inline void SetEvaluationId(const char* value) { m_evaluationId.assign(value); }

    /**
     * <p>The user-supplied ID that uniquely identifies the <code>Evaluation</code>.
     * This value should be identical to the value of the <code>EvaluationId</code> in
     * the request.</p>
     */
    inline CreateEvaluationResult& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}

    /**
     * <p>The user-supplied ID that uniquely identifies the <code>Evaluation</code>.
     * This value should be identical to the value of the <code>EvaluationId</code> in
     * the request.</p>
     */
    inline CreateEvaluationResult& WithEvaluationId(Aws::String&& value) { SetEvaluationId(std::move(value)); return *this;}

    /**
     * <p>The user-supplied ID that uniquely identifies the <code>Evaluation</code>.
     * This value should be identical to the value of the <code>EvaluationId</code> in
     * the request.</p>
     */
    inline CreateEvaluationResult& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}

  private:

    Aws::String m_evaluationId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
