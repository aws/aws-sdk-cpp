/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/ProcurementPortalPreference.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Invoicing {
namespace Model {
class GetProcurementPortalPreferenceResult {
 public:
  AWS_INVOICING_API GetProcurementPortalPreferenceResult() = default;
  AWS_INVOICING_API GetProcurementPortalPreferenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_INVOICING_API GetProcurementPortalPreferenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The detailed configuration of the requested procurement portal
   * preference.</p>
   */
  inline const ProcurementPortalPreference& GetProcurementPortalPreference() const { return m_procurementPortalPreference; }
  template <typename ProcurementPortalPreferenceT = ProcurementPortalPreference>
  void SetProcurementPortalPreference(ProcurementPortalPreferenceT&& value) {
    m_procurementPortalPreferenceHasBeenSet = true;
    m_procurementPortalPreference = std::forward<ProcurementPortalPreferenceT>(value);
  }
  template <typename ProcurementPortalPreferenceT = ProcurementPortalPreference>
  GetProcurementPortalPreferenceResult& WithProcurementPortalPreference(ProcurementPortalPreferenceT&& value) {
    SetProcurementPortalPreference(std::forward<ProcurementPortalPreferenceT>(value));
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
  GetProcurementPortalPreferenceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  ProcurementPortalPreference m_procurementPortalPreference;

  Aws::String m_requestId;
  bool m_procurementPortalPreferenceHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
