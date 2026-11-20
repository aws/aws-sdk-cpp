/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/TrustedAccessProgramSummary.h>
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
 * <p>The visible trusted access programs and their resolved participation
 * statuses.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListTrustedAccessProgramsResponse">AWS
 * API Reference</a></p>
 */
class ListTrustedAccessProgramsResult {
 public:
  AWS_BEDROCK_API ListTrustedAccessProgramsResult() = default;
  AWS_BEDROCK_API ListTrustedAccessProgramsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCK_API ListTrustedAccessProgramsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>All visible programs with resolved participation, ordered by program ID.
   * Always present, including an empty array when no programs are visible.</p>
   */
  inline const Aws::Vector<TrustedAccessProgramSummary>& GetProgramSummaries() const { return m_programSummaries; }
  template <typename ProgramSummariesT = Aws::Vector<TrustedAccessProgramSummary>>
  void SetProgramSummaries(ProgramSummariesT&& value) {
    m_programSummariesHasBeenSet = true;
    m_programSummaries = std::forward<ProgramSummariesT>(value);
  }
  template <typename ProgramSummariesT = Aws::Vector<TrustedAccessProgramSummary>>
  ListTrustedAccessProgramsResult& WithProgramSummaries(ProgramSummariesT&& value) {
    SetProgramSummaries(std::forward<ProgramSummariesT>(value));
    return *this;
  }
  template <typename ProgramSummariesT = TrustedAccessProgramSummary>
  ListTrustedAccessProgramsResult& AddProgramSummaries(ProgramSummariesT&& value) {
    m_programSummariesHasBeenSet = true;
    m_programSummaries.emplace_back(std::forward<ProgramSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reserved for future pagination support. Currently omitted because the
   * response contains the complete list.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListTrustedAccessProgramsResult& WithNextToken(NextTokenT&& value) {
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
  ListTrustedAccessProgramsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<TrustedAccessProgramSummary> m_programSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_programSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
