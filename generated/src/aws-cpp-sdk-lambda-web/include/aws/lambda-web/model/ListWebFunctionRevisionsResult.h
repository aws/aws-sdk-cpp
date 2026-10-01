/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/FunctionRevisionSummary.h>

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
 * <p>Contains the list of web function revisions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/ListWebFunctionRevisionsResponse">AWS
 * API Reference</a></p>
 */
class ListWebFunctionRevisionsResult {
 public:
  AWS_LAMBDAWEB_API ListWebFunctionRevisionsResult() = default;
  AWS_LAMBDAWEB_API ListWebFunctionRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDAWEB_API ListWebFunctionRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of revision summaries for the web function.</p>
   */
  inline const Aws::Vector<FunctionRevisionSummary>& GetRevisions() const { return m_revisions; }
  template <typename RevisionsT = Aws::Vector<FunctionRevisionSummary>>
  void SetRevisions(RevisionsT&& value) {
    m_revisionsHasBeenSet = true;
    m_revisions = std::forward<RevisionsT>(value);
  }
  template <typename RevisionsT = Aws::Vector<FunctionRevisionSummary>>
  ListWebFunctionRevisionsResult& WithRevisions(RevisionsT&& value) {
    SetRevisions(std::forward<RevisionsT>(value));
    return *this;
  }
  template <typename RevisionsT = FunctionRevisionSummary>
  ListWebFunctionRevisionsResult& AddRevisions(RevisionsT&& value) {
    m_revisionsHasBeenSet = true;
    m_revisions.emplace_back(std::forward<RevisionsT>(value));
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
  ListWebFunctionRevisionsResult& WithNextToken(NextTokenT&& value) {
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
  ListWebFunctionRevisionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FunctionRevisionSummary> m_revisions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_revisionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
