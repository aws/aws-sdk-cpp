/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/OmniDashboard.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {
class UpdateOmniDashboardResult {
 public:
  AWS_CLOUDWATCHOMNI_API UpdateOmniDashboardResult() = default;
  AWS_CLOUDWATCHOMNI_API UpdateOmniDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCHOMNI_API UpdateOmniDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The dashboard.</p>
   */
  inline const OmniDashboard& GetOmniDashboard() const { return m_omniDashboard; }
  template <typename OmniDashboardT = OmniDashboard>
  void SetOmniDashboard(OmniDashboardT&& value) {
    m_omniDashboardHasBeenSet = true;
    m_omniDashboard = std::forward<OmniDashboardT>(value);
  }
  template <typename OmniDashboardT = OmniDashboard>
  UpdateOmniDashboardResult& WithOmniDashboard(OmniDashboardT&& value) {
    SetOmniDashboard(std::forward<OmniDashboardT>(value));
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
  UpdateOmniDashboardResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  OmniDashboard m_omniDashboard;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_omniDashboardHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
