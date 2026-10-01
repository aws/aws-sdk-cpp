/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/FunctionEndpointSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {
/**
 * <p>Contains the list of web function endpoints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/ListWebFunctionEndpointsResponse">AWS
 * API Reference</a></p>
 */
class ListWebFunctionEndpointsResult {
 public:
  AWS_LAMBDAWEB_API ListWebFunctionEndpointsResult() = default;
  AWS_LAMBDAWEB_API ListWebFunctionEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDAWEB_API ListWebFunctionEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of endpoint summaries for the web function.</p>
   */
  inline const Aws::Vector<FunctionEndpointSummary>& GetEndpoints() const { return m_endpoints; }
  template <typename EndpointsT = Aws::Vector<FunctionEndpointSummary>>
  void SetEndpoints(EndpointsT&& value) {
    m_endpointsHasBeenSet = true;
    m_endpoints = std::forward<EndpointsT>(value);
  }
  template <typename EndpointsT = Aws::Vector<FunctionEndpointSummary>>
  ListWebFunctionEndpointsResult& WithEndpoints(EndpointsT&& value) {
    SetEndpoints(std::forward<EndpointsT>(value));
    return *this;
  }
  template <typename EndpointsT = FunctionEndpointSummary>
  ListWebFunctionEndpointsResult& AddEndpoints(EndpointsT&& value) {
    m_endpointsHasBeenSet = true;
    m_endpoints.emplace_back(std::forward<EndpointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token that's included if more results are available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListWebFunctionEndpointsResult& WithNextToken(NextTokenT&& value) {
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
  ListWebFunctionEndpointsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FunctionEndpointSummary> m_endpoints;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_endpointsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
