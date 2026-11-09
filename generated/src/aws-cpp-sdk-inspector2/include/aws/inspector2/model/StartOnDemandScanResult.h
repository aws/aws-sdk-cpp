/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {
class StartOnDemandScanResult {
 public:
  AWS_INSPECTOR2_API StartOnDemandScanResult() = default;
  AWS_INSPECTOR2_API StartOnDemandScanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_INSPECTOR2_API StartOnDemandScanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier assigned to the on-demand scan that was started.</p>
   */
  inline const Aws::String& GetScanId() const { return m_scanId; }
  template <typename ScanIdT = Aws::String>
  void SetScanId(ScanIdT&& value) {
    m_scanIdHasBeenSet = true;
    m_scanId = std::forward<ScanIdT>(value);
  }
  template <typename ScanIdT = Aws::String>
  StartOnDemandScanResult& WithScanId(ScanIdT&& value) {
    SetScanId(std::forward<ScanIdT>(value));
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
  StartOnDemandScanResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_scanId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_scanIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
