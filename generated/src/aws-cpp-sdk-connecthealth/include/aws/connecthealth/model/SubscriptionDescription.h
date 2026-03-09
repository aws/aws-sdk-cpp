/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/SubscriptionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>Complete subscription resource data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/SubscriptionDescription">AWS
 * API Reference</a></p>
 */
class SubscriptionDescription {
 public:
  AWS_CONNECTHEALTH_API SubscriptionDescription() = default;
  AWS_CONNECTHEALTH_API SubscriptionDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API SubscriptionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  SubscriptionDescription& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetSubscriptionId() const { return m_subscriptionId; }
  inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }
  template <typename SubscriptionIdT = Aws::String>
  void SetSubscriptionId(SubscriptionIdT&& value) {
    m_subscriptionIdHasBeenSet = true;
    m_subscriptionId = std::forward<SubscriptionIdT>(value);
  }
  template <typename SubscriptionIdT = Aws::String>
  SubscriptionDescription& WithSubscriptionId(SubscriptionIdT&& value) {
    SetSubscriptionId(std::forward<SubscriptionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  SubscriptionDescription& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline SubscriptionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SubscriptionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SubscriptionDescription& WithStatus(SubscriptionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  SubscriptionDescription& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  SubscriptionDescription& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::Utils::DateTime& GetActivatedAt() const { return m_activatedAt; }
  inline bool ActivatedAtHasBeenSet() const { return m_activatedAtHasBeenSet; }
  template <typename ActivatedAtT = Aws::Utils::DateTime>
  void SetActivatedAt(ActivatedAtT&& value) {
    m_activatedAtHasBeenSet = true;
    m_activatedAt = std::forward<ActivatedAtT>(value);
  }
  template <typename ActivatedAtT = Aws::Utils::DateTime>
  SubscriptionDescription& WithActivatedAt(ActivatedAtT&& value) {
    SetActivatedAt(std::forward<ActivatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::Utils::DateTime& GetDeactivatedAt() const { return m_deactivatedAt; }
  inline bool DeactivatedAtHasBeenSet() const { return m_deactivatedAtHasBeenSet; }
  template <typename DeactivatedAtT = Aws::Utils::DateTime>
  void SetDeactivatedAt(DeactivatedAtT&& value) {
    m_deactivatedAtHasBeenSet = true;
    m_deactivatedAt = std::forward<DeactivatedAtT>(value);
  }
  template <typename DeactivatedAtT = Aws::Utils::DateTime>
  SubscriptionDescription& WithDeactivatedAt(DeactivatedAtT&& value) {
    SetDeactivatedAt(std::forward<DeactivatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_subscriptionId;

  Aws::String m_arn;

  SubscriptionStatus m_status{SubscriptionStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  Aws::Utils::DateTime m_activatedAt{};

  Aws::Utils::DateTime m_deactivatedAt{};
  bool m_domainIdHasBeenSet = false;
  bool m_subscriptionIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_activatedAtHasBeenSet = false;
  bool m_deactivatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
