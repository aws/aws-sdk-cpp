/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/BatchTableOptimizer.h>
#include <aws/glue/model/BatchGetTableOptimizerError.h>
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
namespace Glue
{
namespace Model
{
  class BatchGetTableOptimizerResult
  {
  public:
    AWS_GLUE_API BatchGetTableOptimizerResult();
    AWS_GLUE_API BatchGetTableOptimizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetTableOptimizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>BatchTableOptimizer</code> objects.</p>
     */
    inline const Aws::Vector<BatchTableOptimizer>& GetTableOptimizers() const{ return m_tableOptimizers; }

    /**
     * <p>A list of <code>BatchTableOptimizer</code> objects.</p>
     */
    inline void SetTableOptimizers(const Aws::Vector<BatchTableOptimizer>& value) { m_tableOptimizers = value; }

    /**
     * <p>A list of <code>BatchTableOptimizer</code> objects.</p>
     */
    inline void SetTableOptimizers(Aws::Vector<BatchTableOptimizer>&& value) { m_tableOptimizers = std::move(value); }

    /**
     * <p>A list of <code>BatchTableOptimizer</code> objects.</p>
     */
    inline BatchGetTableOptimizerResult& WithTableOptimizers(const Aws::Vector<BatchTableOptimizer>& value) { SetTableOptimizers(value); return *this;}

    /**
     * <p>A list of <code>BatchTableOptimizer</code> objects.</p>
     */
    inline BatchGetTableOptimizerResult& WithTableOptimizers(Aws::Vector<BatchTableOptimizer>&& value) { SetTableOptimizers(std::move(value)); return *this;}

    /**
     * <p>A list of <code>BatchTableOptimizer</code> objects.</p>
     */
    inline BatchGetTableOptimizerResult& AddTableOptimizers(const BatchTableOptimizer& value) { m_tableOptimizers.push_back(value); return *this; }

    /**
     * <p>A list of <code>BatchTableOptimizer</code> objects.</p>
     */
    inline BatchGetTableOptimizerResult& AddTableOptimizers(BatchTableOptimizer&& value) { m_tableOptimizers.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of errors from the operation.</p>
     */
    inline const Aws::Vector<BatchGetTableOptimizerError>& GetFailures() const{ return m_failures; }

    /**
     * <p>A list of errors from the operation.</p>
     */
    inline void SetFailures(const Aws::Vector<BatchGetTableOptimizerError>& value) { m_failures = value; }

    /**
     * <p>A list of errors from the operation.</p>
     */
    inline void SetFailures(Aws::Vector<BatchGetTableOptimizerError>&& value) { m_failures = std::move(value); }

    /**
     * <p>A list of errors from the operation.</p>
     */
    inline BatchGetTableOptimizerResult& WithFailures(const Aws::Vector<BatchGetTableOptimizerError>& value) { SetFailures(value); return *this;}

    /**
     * <p>A list of errors from the operation.</p>
     */
    inline BatchGetTableOptimizerResult& WithFailures(Aws::Vector<BatchGetTableOptimizerError>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>A list of errors from the operation.</p>
     */
    inline BatchGetTableOptimizerResult& AddFailures(const BatchGetTableOptimizerError& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>A list of errors from the operation.</p>
     */
    inline BatchGetTableOptimizerResult& AddFailures(BatchGetTableOptimizerError&& value) { m_failures.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetTableOptimizerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetTableOptimizerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetTableOptimizerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchTableOptimizer> m_tableOptimizers;

    Aws::Vector<BatchGetTableOptimizerError> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
