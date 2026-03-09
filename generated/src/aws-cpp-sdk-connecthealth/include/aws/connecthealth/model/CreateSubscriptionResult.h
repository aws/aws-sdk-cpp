/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/SubscriptionStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
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
namespace ConnectHealth {
namespace Model {
class CreateSubscriptionResult {
 public:
  AWS_CONNECTHEALTH_API CreateSubscriptionResult() = default;
  AWS_CONNECTHEALTH_API CreateSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECTHEALTH_API CreateSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  CreateSubscriptionResult& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetSubscriptionId() const { return m_subscriptionId; }
  template <typename SubscriptionIdT = Aws::String>
  void SetSubscriptionId(SubscriptionIdT&& value) {
    m_subscriptionIdHasBeenSet = true;
    m_subscriptionId = std::forward<SubscriptionIdT>(value);
  }
  template <typename SubscriptionIdT = Aws::String>
  CreateSubscriptionResult& WithSubscriptionId(SubscriptionIdT&& value) {
    SetSubscriptionId(std::forward<SubscriptionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateSubscriptionResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline SubscriptionStatus GetStatus() const { return m_status; }
  inline void SetStatus(SubscriptionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateSubscriptionResult& WithStatus(SubscriptionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateSubscriptionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  CreateSubscriptionResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::Utils::DateTime& GetActivatedAt() const { return m_activatedAt; }
  template <typename ActivatedAtT = Aws::Utils::DateTime>
  void SetActivatedAt(ActivatedAtT&& value) {
    m_activatedAtHasBeenSet = true;
    m_activatedAt = std::forward<ActivatedAtT>(value);
  }
  template <typename ActivatedAtT = Aws::Utils::DateTime>
  CreateSubscriptionResult& WithActivatedAt(ActivatedAtT&& value) {
    SetActivatedAt(std::forward<ActivatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::Utils::DateTime& GetDeactivatedAt() const { return m_deactivatedAt; }
  template <typename DeactivatedAtT = Aws::Utils::DateTime>
  void SetDeactivatedAt(DeactivatedAtT&& value) {
    m_deactivatedAtHasBeenSet = true;
    m_deactivatedAt = std::forward<DeactivatedAtT>(value);
  }
  template <typename DeactivatedAtT = Aws::Utils::DateTime>
  CreateSubscriptionResult& WithDeactivatedAt(DeactivatedAtT&& value) {
    SetDeactivatedAt(std::forward<DeactivatedAtT>(value));
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
  CreateSubscriptionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_domainId;

  Aws::String m_subscriptionId;

  Aws::String m_arn;

  SubscriptionStatus m_status{SubscriptionStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  Aws::Utils::DateTime m_activatedAt{};

  Aws::Utils::DateTime m_deactivatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_domainIdHasBeenSet = false;
  bool m_subscriptionIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_activatedAtHasBeenSet = false;
  bool m_deactivatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
