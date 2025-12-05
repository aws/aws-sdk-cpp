/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/Execution.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {
/**
 * <p>The response from the ListDurableExecutionsByFunction operation, containing a
 * list of durable executions and pagination information.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListDurableExecutionsByFunctionResponse">AWS
 * API Reference</a></p>
 */
class ListDurableExecutionsByFunctionResult {
 public:
  AWS_LAMBDA_API ListDurableExecutionsByFunctionResult() = default;
  AWS_LAMBDA_API ListDurableExecutionsByFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDA_API ListDurableExecutionsByFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of durable execution summaries matching the filter criteria.</p>
   */
  inline const Aws::Vector<Execution>& GetDurableExecutions() const { return m_durableExecutions; }
  template <typename DurableExecutionsT = Aws::Vector<Execution>>
  void SetDurableExecutions(DurableExecutionsT&& value) {
    m_durableExecutionsHasBeenSet = true;
    m_durableExecutions = std::forward<DurableExecutionsT>(value);
  }
  template <typename DurableExecutionsT = Aws::Vector<Execution>>
  ListDurableExecutionsByFunctionResult& WithDurableExecutions(DurableExecutionsT&& value) {
    SetDurableExecutions(std::forward<DurableExecutionsT>(value));
    return *this;
  }
  template <typename DurableExecutionsT = Execution>
  ListDurableExecutionsByFunctionResult& AddDurableExecutions(DurableExecutionsT&& value) {
    m_durableExecutionsHasBeenSet = true;
    m_durableExecutions.emplace_back(std::forward<DurableExecutionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token for retrieving additional results. Present only if there are
   * more results available.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  ListDurableExecutionsByFunctionResult& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListDurableExecutionsByFunctionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Execution> m_durableExecutions;

  Aws::String m_nextMarker;

  Aws::String m_requestId;
  bool m_durableExecutionsHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
