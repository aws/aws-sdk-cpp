/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/DynamicInstrumentationDeletionStatus.h>
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
namespace ApplicationSignals {
namespace Model {
class DeleteInstrumentationConfigurationResult {
 public:
  AWS_APPLICATIONSIGNALS_API DeleteInstrumentationConfigurationResult() = default;
  AWS_APPLICATIONSIGNALS_API DeleteInstrumentationConfigurationResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APPLICATIONSIGNALS_API DeleteInstrumentationConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The result of the delete request. The value is <code>DELETED</code> when the
   * configuration has been removed.</p>
   */
  inline DynamicInstrumentationDeletionStatus GetDeletionStatus() const { return m_deletionStatus; }
  inline void SetDeletionStatus(DynamicInstrumentationDeletionStatus value) {
    m_deletionStatusHasBeenSet = true;
    m_deletionStatus = value;
  }
  inline DeleteInstrumentationConfigurationResult& WithDeletionStatus(DynamicInstrumentationDeletionStatus value) {
    SetDeletionStatus(value);
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
  DeleteInstrumentationConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  DynamicInstrumentationDeletionStatus m_deletionStatus{DynamicInstrumentationDeletionStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_deletionStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
