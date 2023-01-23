/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of EvaluateExpression.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/EvaluateExpressionOutput">AWS
   * API Reference</a></p>
   */
  class EvaluateExpressionResult
  {
  public:
    AWS_DATAPIPELINE_API EvaluateExpressionResult();
    AWS_DATAPIPELINE_API EvaluateExpressionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API EvaluateExpressionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The evaluated expression.</p>
     */
    inline const Aws::String& GetEvaluatedExpression() const{ return m_evaluatedExpression; }

    /**
     * <p>The evaluated expression.</p>
     */
    inline void SetEvaluatedExpression(const Aws::String& value) { m_evaluatedExpression = value; }

    /**
     * <p>The evaluated expression.</p>
     */
    inline void SetEvaluatedExpression(Aws::String&& value) { m_evaluatedExpression = std::move(value); }

    /**
     * <p>The evaluated expression.</p>
     */
    inline void SetEvaluatedExpression(const char* value) { m_evaluatedExpression.assign(value); }

    /**
     * <p>The evaluated expression.</p>
     */
    inline EvaluateExpressionResult& WithEvaluatedExpression(const Aws::String& value) { SetEvaluatedExpression(value); return *this;}

    /**
     * <p>The evaluated expression.</p>
     */
    inline EvaluateExpressionResult& WithEvaluatedExpression(Aws::String&& value) { SetEvaluatedExpression(std::move(value)); return *this;}

    /**
     * <p>The evaluated expression.</p>
     */
    inline EvaluateExpressionResult& WithEvaluatedExpression(const char* value) { SetEvaluatedExpression(value); return *this;}

  private:

    Aws::String m_evaluatedExpression;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
