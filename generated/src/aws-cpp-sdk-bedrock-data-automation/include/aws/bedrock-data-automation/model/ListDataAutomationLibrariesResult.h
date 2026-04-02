/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DataAutomationLibrarySummary.h>
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
namespace BedrockDataAutomation {
namespace Model {
/**
 * <p>List DataAutomationLibraries Response</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/ListDataAutomationLibrariesResponse">AWS
 * API Reference</a></p>
 */
class ListDataAutomationLibrariesResult {
 public:
  AWS_BEDROCKDATAAUTOMATION_API ListDataAutomationLibrariesResult() = default;
  AWS_BEDROCKDATAAUTOMATION_API ListDataAutomationLibrariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKDATAAUTOMATION_API ListDataAutomationLibrariesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::Vector<DataAutomationLibrarySummary>& GetLibraries() const { return m_libraries; }
  template <typename LibrariesT = Aws::Vector<DataAutomationLibrarySummary>>
  void SetLibraries(LibrariesT&& value) {
    m_librariesHasBeenSet = true;
    m_libraries = std::forward<LibrariesT>(value);
  }
  template <typename LibrariesT = Aws::Vector<DataAutomationLibrarySummary>>
  ListDataAutomationLibrariesResult& WithLibraries(LibrariesT&& value) {
    SetLibraries(std::forward<LibrariesT>(value));
    return *this;
  }
  template <typename LibrariesT = DataAutomationLibrarySummary>
  ListDataAutomationLibrariesResult& AddLibraries(LibrariesT&& value) {
    m_librariesHasBeenSet = true;
    m_libraries.emplace_back(std::forward<LibrariesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDataAutomationLibrariesResult& WithNextToken(NextTokenT&& value) {
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
  ListDataAutomationLibrariesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DataAutomationLibrarySummary> m_libraries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_librariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
