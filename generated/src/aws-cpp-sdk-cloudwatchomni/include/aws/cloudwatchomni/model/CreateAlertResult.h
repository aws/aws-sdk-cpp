/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/Alert.h>
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
class CreateAlertResult {
 public:
  AWS_CLOUDWATCHOMNI_API CreateAlertResult() = default;
  AWS_CLOUDWATCHOMNI_API CreateAlertResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCHOMNI_API CreateAlertResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>Deprecated. Use <code>alert.alertArn</code>, which carries the same value.
   * Kept so an existing caller keeps working while it moves to
   * <code>alert</code>.</p>
   */
  inline const Aws::String& GetAlertArn() const { return m_alertArn; }
  template <typename AlertArnT = Aws::String>
  void SetAlertArn(AlertArnT&& value) {
    m_alertArnHasBeenSet = true;
    m_alertArn = std::forward<AlertArnT>(value);
  }
  template <typename AlertArnT = Aws::String>
  CreateAlertResult& WithAlertArn(AlertArnT&& value) {
    SetAlertArn(std::forward<AlertArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alert that was created. The same <code>Alert</code> shape GetAlert
   * returns, so a caller need not read the alert back to learn its timestamps or its
   * minted alert id.</p> <p>{@code alert.state} is absent here — see the
   * <code>state</code> member of <code>Alert</code>. Every other member is populated
   * exactly as GetAlert populates it.</p>
   */
  inline const Alert& GetAlert() const { return m_alert; }
  template <typename AlertT = Alert>
  void SetAlert(AlertT&& value) {
    m_alertHasBeenSet = true;
    m_alert = std::forward<AlertT>(value);
  }
  template <typename AlertT = Alert>
  CreateAlertResult& WithAlert(AlertT&& value) {
    SetAlert(std::forward<AlertT>(value));
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
  CreateAlertResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_alertArn;

  Alert m_alert;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_alertArnHasBeenSet = false;
  bool m_alertHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
