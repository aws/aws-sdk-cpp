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
    AWS_GLUE_API BatchGetTableOptimizerResult() = default;
    AWS_GLUE_API BatchGetTableOptimizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetTableOptimizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>BatchTableOptimizer</code> objects.</p>
     */
    inline const Aws::Vector<BatchTableOptimizer>& GetTableOptimizers() const { return m_tableOptimizers; }
    template<typename TableOptimizersT = Aws::Vector<BatchTableOptimizer>>
    void SetTableOptimizers(TableOptimizersT&& value) { m_tableOptimizersHasBeenSet = true; m_tableOptimizers = std::forward<TableOptimizersT>(value); }
    template<typename TableOptimizersT = Aws::Vector<BatchTableOptimizer>>
    BatchGetTableOptimizerResult& WithTableOptimizers(TableOptimizersT&& value) { SetTableOptimizers(std::forward<TableOptimizersT>(value)); return *this;}
    template<typename TableOptimizersT = BatchTableOptimizer>
    BatchGetTableOptimizerResult& AddTableOptimizers(TableOptimizersT&& value) { m_tableOptimizersHasBeenSet = true; m_tableOptimizers.emplace_back(std::forward<TableOptimizersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of errors from the operation.</p>
     */
    inline const Aws::Vector<BatchGetTableOptimizerError>& GetFailures() const { return m_failures; }
    template<typename FailuresT = Aws::Vector<BatchGetTableOptimizerError>>
    void SetFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures = std::forward<FailuresT>(value); }
    template<typename FailuresT = Aws::Vector<BatchGetTableOptimizerError>>
    BatchGetTableOptimizerResult& WithFailures(FailuresT&& value) { SetFailures(std::forward<FailuresT>(value)); return *this;}
    template<typename FailuresT = BatchGetTableOptimizerError>
    BatchGetTableOptimizerResult& AddFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures.emplace_back(std::forward<FailuresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetTableOptimizerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchTableOptimizer> m_tableOptimizers;
    bool m_tableOptimizersHasBeenSet = false;

    Aws::Vector<BatchGetTableOptimizerError> m_failures;
    bool m_failuresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
