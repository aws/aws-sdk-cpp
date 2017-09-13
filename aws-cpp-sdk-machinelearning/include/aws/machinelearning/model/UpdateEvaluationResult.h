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
   * <p>Represents the output of an <code>UpdateEvaluation</code> operation.</p>
   * <p>You can see the updated content by using the <code>GetEvaluation</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/UpdateEvaluationOutput">AWS
   * API Reference</a></p>
   */
  class AWS_MACHINELEARNING_API UpdateEvaluationResult
  {
  public:
    UpdateEvaluationResult();
    UpdateEvaluationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateEvaluationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation. This value
     * should be identical to the value of the <code>Evaluation</code> in the
     * request.</p>
     */
    inline const Aws::String& GetEvaluationId() const{ return m_evaluationId; }

    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation. This value
     * should be identical to the value of the <code>Evaluation</code> in the
     * request.</p>
     */
    inline void SetEvaluationId(const Aws::String& value) { m_evaluationId = value; }

    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation. This value
     * should be identical to the value of the <code>Evaluation</code> in the
     * request.</p>
     */
    inline void SetEvaluationId(Aws::String&& value) { m_evaluationId = std::move(value); }

    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation. This value
     * should be identical to the value of the <code>Evaluation</code> in the
     * request.</p>
     */
    inline void SetEvaluationId(const char* value) { m_evaluationId.assign(value); }

    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation. This value
     * should be identical to the value of the <code>Evaluation</code> in the
     * request.</p>
     */
    inline UpdateEvaluationResult& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}

    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation. This value
     * should be identical to the value of the <code>Evaluation</code> in the
     * request.</p>
     */
    inline UpdateEvaluationResult& WithEvaluationId(Aws::String&& value) { SetEvaluationId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the <code>Evaluation</code> during creation. This value
     * should be identical to the value of the <code>Evaluation</code> in the
     * request.</p>
     */
    inline UpdateEvaluationResult& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}

  private:

    Aws::String m_evaluationId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
