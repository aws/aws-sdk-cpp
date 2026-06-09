/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AdvancedPromptOptimizationJobSummary.h>
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
 * <p>List Advanced Prompt Optimization Jobs Response</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListAdvancedPromptOptimizationJobsResponse">AWS
 * API Reference</a></p>
 */
class ListAdvancedPromptOptimizationJobsResult {
 public:
  AWS_BEDROCK_API ListAdvancedPromptOptimizationJobsResult() = default;
  AWS_BEDROCK_API ListAdvancedPromptOptimizationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCK_API ListAdvancedPromptOptimizationJobsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of advanced prompt optimization job summaries.</p>
   */
  inline const Aws::Vector<AdvancedPromptOptimizationJobSummary>& GetJobSummaries() const { return m_jobSummaries; }
  template <typename JobSummariesT = Aws::Vector<AdvancedPromptOptimizationJobSummary>>
  void SetJobSummaries(JobSummariesT&& value) {
    m_jobSummariesHasBeenSet = true;
    m_jobSummaries = std::forward<JobSummariesT>(value);
  }
  template <typename JobSummariesT = Aws::Vector<AdvancedPromptOptimizationJobSummary>>
  ListAdvancedPromptOptimizationJobsResult& WithJobSummaries(JobSummariesT&& value) {
    SetJobSummaries(std::forward<JobSummariesT>(value));
    return *this;
  }
  template <typename JobSummariesT = AdvancedPromptOptimizationJobSummary>
  ListAdvancedPromptOptimizationJobsResult& AddJobSummaries(JobSummariesT&& value) {
    m_jobSummariesHasBeenSet = true;
    m_jobSummaries.emplace_back(std::forward<JobSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the total number of results is greater than the <code>maxResults</code>
   * value provided in the request, use this token in a subsequent request to get the
   * next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAdvancedPromptOptimizationJobsResult& WithNextToken(NextTokenT&& value) {
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
  ListAdvancedPromptOptimizationJobsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AdvancedPromptOptimizationJobSummary> m_jobSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_jobSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
