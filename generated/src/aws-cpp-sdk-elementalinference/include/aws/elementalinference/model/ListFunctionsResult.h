/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/FunctionSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {
class ListFunctionsResult {
 public:
  AWS_ELEMENTALINFERENCE_API ListFunctionsResult() = default;
  AWS_ELEMENTALINFERENCE_API ListFunctionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ELEMENTALINFERENCE_API ListFunctionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of function summaries.</p>
   */
  inline const Aws::Vector<FunctionSummary>& GetFunctions() const { return m_functions; }
  template <typename FunctionsT = Aws::Vector<FunctionSummary>>
  void SetFunctions(FunctionsT&& value) {
    m_functionsHasBeenSet = true;
    m_functions = std::forward<FunctionsT>(value);
  }
  template <typename FunctionsT = Aws::Vector<FunctionSummary>>
  ListFunctionsResult& WithFunctions(FunctionsT&& value) {
    SetFunctions(std::forward<FunctionsT>(value));
    return *this;
  }
  template <typename FunctionsT = FunctionSummary>
  ListFunctionsResult& AddFunctions(FunctionsT&& value) {
    m_functionsHasBeenSet = true;
    m_functions.emplace_back(std::forward<FunctionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use in a subsequent request to get the next page of results.
   * This field is absent when there are no more results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFunctionsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListFunctionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FunctionSummary> m_functions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_functionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
