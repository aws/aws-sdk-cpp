/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DataAutomationLibrary.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Get DataAutomationLibrary Response</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/GetDataAutomationLibraryResponse">AWS
 * API Reference</a></p>
 */
class GetDataAutomationLibraryResult {
 public:
  AWS_BEDROCKDATAAUTOMATION_API GetDataAutomationLibraryResult() = default;
  AWS_BEDROCKDATAAUTOMATION_API GetDataAutomationLibraryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKDATAAUTOMATION_API GetDataAutomationLibraryResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const DataAutomationLibrary& GetLibrary() const { return m_library; }
  template <typename LibraryT = DataAutomationLibrary>
  void SetLibrary(LibraryT&& value) {
    m_libraryHasBeenSet = true;
    m_library = std::forward<LibraryT>(value);
  }
  template <typename LibraryT = DataAutomationLibrary>
  GetDataAutomationLibraryResult& WithLibrary(LibraryT&& value) {
    SetLibrary(std::forward<LibraryT>(value));
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
  GetDataAutomationLibraryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  DataAutomationLibrary m_library;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_libraryHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
