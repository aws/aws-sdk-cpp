/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/ProjectSummary.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {
/**
 * <p>A page of projects and a continuation token when more results are
 * available.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListProjectsResponse">AWS
 * API Reference</a></p>
 */
class ListProjectsResult {
 public:
  AWS_BEDROCK_API ListProjectsResult() = default;
  AWS_BEDROCK_API ListProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCK_API ListProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The projects returned for this page, including their details and data
   * retention settings.</p>
   */
  inline const Aws::Vector<ProjectSummary>& GetProjectSummaries() const { return m_projectSummaries; }
  template <typename ProjectSummariesT = Aws::Vector<ProjectSummary>>
  void SetProjectSummaries(ProjectSummariesT&& value) {
    m_projectSummariesHasBeenSet = true;
    m_projectSummaries = std::forward<ProjectSummariesT>(value);
  }
  template <typename ProjectSummariesT = Aws::Vector<ProjectSummary>>
  ListProjectsResult& WithProjectSummaries(ProjectSummariesT&& value) {
    SetProjectSummaries(std::forward<ProjectSummariesT>(value));
    return *this;
  }
  template <typename ProjectSummariesT = ProjectSummary>
  ListProjectsResult& AddProjectSummaries(ProjectSummariesT&& value) {
    m_projectSummariesHasBeenSet = true;
    m_projectSummaries.emplace_back(std::forward<ProjectSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Continuation token; present only when more results exist. Pass it in the next
   * request to fetch the following page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListProjectsResult& WithNextToken(NextTokenT&& value) {
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
  ListProjectsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ProjectSummary> m_projectSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_projectSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
