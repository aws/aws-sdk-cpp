/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/EntitlementSummary.h>
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
namespace AccountAccess {
namespace Model {

/**
 * <p>Contains information about an entitlement in a list result.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/EntitlementsListMember">AWS
 * API Reference</a></p>
 */
class EntitlementsListMember {
 public:
  AWS_ACCOUNTACCESS_API EntitlementsListMember() = default;
  AWS_ACCOUNTACCESS_API EntitlementsListMember(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API EntitlementsListMember& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the entitlement.</p>
   */
  inline const Aws::String& GetEntitlementId() const { return m_entitlementId; }
  inline bool EntitlementIdHasBeenSet() const { return m_entitlementIdHasBeenSet; }
  template <typename EntitlementIdT = Aws::String>
  void SetEntitlementId(EntitlementIdT&& value) {
    m_entitlementIdHasBeenSet = true;
    m_entitlementId = std::forward<EntitlementIdT>(value);
  }
  template <typename EntitlementIdT = Aws::String>
  EntitlementsListMember& WithEntitlementId(EntitlementIdT&& value) {
    SetEntitlementId(std::forward<EntitlementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary information for the entitlement.</p>
   */
  inline const EntitlementSummary& GetEntitlement() const { return m_entitlement; }
  inline bool EntitlementHasBeenSet() const { return m_entitlementHasBeenSet; }
  template <typename EntitlementT = EntitlementSummary>
  void SetEntitlement(EntitlementT&& value) {
    m_entitlementHasBeenSet = true;
    m_entitlement = std::forward<EntitlementT>(value);
  }
  template <typename EntitlementT = EntitlementSummary>
  EntitlementsListMember& WithEntitlement(EntitlementT&& value) {
    SetEntitlement(std::forward<EntitlementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the entitlement was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  EntitlementsListMember& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_entitlementId;

  EntitlementSummary m_entitlement;

  Aws::Utils::DateTime m_createdAt{};
  bool m_entitlementIdHasBeenSet = false;
  bool m_entitlementHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
