/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisLogExport.h>
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
namespace CleanRooms {
namespace Model {
class GetAnalysisLogExportResult {
 public:
  AWS_CLEANROOMS_API GetAnalysisLogExportResult() = default;
  AWS_CLEANROOMS_API GetAnalysisLogExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLEANROOMS_API GetAnalysisLogExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The analysis log export processing metadata.</p>
   */
  inline const AnalysisLogExport& GetAnalysisLogExport() const { return m_analysisLogExport; }
  template <typename AnalysisLogExportT = AnalysisLogExport>
  void SetAnalysisLogExport(AnalysisLogExportT&& value) {
    m_analysisLogExportHasBeenSet = true;
    m_analysisLogExport = std::forward<AnalysisLogExportT>(value);
  }
  template <typename AnalysisLogExportT = AnalysisLogExport>
  GetAnalysisLogExportResult& WithAnalysisLogExport(AnalysisLogExportT&& value) {
    SetAnalysisLogExport(std::forward<AnalysisLogExportT>(value));
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
  GetAnalysisLogExportResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AnalysisLogExport m_analysisLogExport;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_analysisLogExportHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
