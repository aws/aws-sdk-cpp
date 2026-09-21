/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/AutoTransferBillingGroupCreationPreference.h>
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
namespace BillingConductor {
namespace Model {
class UpdateBillingTransferPreferenceResult {
 public:
  AWS_BILLINGCONDUCTOR_API UpdateBillingTransferPreferenceResult() = default;
  AWS_BILLINGCONDUCTOR_API UpdateBillingTransferPreferenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BILLINGCONDUCTOR_API UpdateBillingTransferPreferenceResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the billing transfer that the preference
   * applies to.</p>
   */
  inline const Aws::String& GetResponsibilityTransferArn() const { return m_responsibilityTransferArn; }
  template <typename ResponsibilityTransferArnT = Aws::String>
  void SetResponsibilityTransferArn(ResponsibilityTransferArnT&& value) {
    m_responsibilityTransferArnHasBeenSet = true;
    m_responsibilityTransferArn = std::forward<ResponsibilityTransferArnT>(value);
  }
  template <typename ResponsibilityTransferArnT = Aws::String>
  UpdateBillingTransferPreferenceResult& WithResponsibilityTransferArn(ResponsibilityTransferArnT&& value) {
    SetResponsibilityTransferArn(std::forward<ResponsibilityTransferArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated auto billing group creation preference for the billing
   * transfer.</p>
   */
  inline const AutoTransferBillingGroupCreationPreference& GetAutoBillingTransferBillingGroupCreation() const {
    return m_autoBillingTransferBillingGroupCreation;
  }
  template <typename AutoBillingTransferBillingGroupCreationT = AutoTransferBillingGroupCreationPreference>
  void SetAutoBillingTransferBillingGroupCreation(AutoBillingTransferBillingGroupCreationT&& value) {
    m_autoBillingTransferBillingGroupCreationHasBeenSet = true;
    m_autoBillingTransferBillingGroupCreation = std::forward<AutoBillingTransferBillingGroupCreationT>(value);
  }
  template <typename AutoBillingTransferBillingGroupCreationT = AutoTransferBillingGroupCreationPreference>
  UpdateBillingTransferPreferenceResult& WithAutoBillingTransferBillingGroupCreation(AutoBillingTransferBillingGroupCreationT&& value) {
    SetAutoBillingTransferBillingGroupCreation(std::forward<AutoBillingTransferBillingGroupCreationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The most recent time when the preference was modified.</p>
   */
  inline long long GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline void SetLastModifiedTime(long long value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = value;
  }
  inline UpdateBillingTransferPreferenceResult& WithLastModifiedTime(long long value) {
    SetLastModifiedTime(value);
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
  UpdateBillingTransferPreferenceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_responsibilityTransferArn;

  AutoTransferBillingGroupCreationPreference m_autoBillingTransferBillingGroupCreation;

  long long m_lastModifiedTime{0};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_responsibilityTransferArnHasBeenSet = false;
  bool m_autoBillingTransferBillingGroupCreationHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
