/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/ManagedThingAssociationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTManagedIntegrations {
namespace Model {

/**
 * <p>Structure representing an association between a managed thing and an account
 * association, which connects a device to a third-party account.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ManagedThingAssociation">AWS
 * API Reference</a></p>
 */
class ManagedThingAssociation {
 public:
  AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingAssociation() = default;
  AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingAssociation(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the managed thing in the association.</p>
   */
  inline const Aws::String& GetManagedThingId() const { return m_managedThingId; }
  inline bool ManagedThingIdHasBeenSet() const { return m_managedThingIdHasBeenSet; }
  template <typename ManagedThingIdT = Aws::String>
  void SetManagedThingId(ManagedThingIdT&& value) {
    m_managedThingIdHasBeenSet = true;
    m_managedThingId = std::forward<ManagedThingIdT>(value);
  }
  template <typename ManagedThingIdT = Aws::String>
  ManagedThingAssociation& WithManagedThingId(ManagedThingIdT&& value) {
    SetManagedThingId(std::forward<ManagedThingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the account association in the association.</p>
   */
  inline const Aws::String& GetAccountAssociationId() const { return m_accountAssociationId; }
  inline bool AccountAssociationIdHasBeenSet() const { return m_accountAssociationIdHasBeenSet; }
  template <typename AccountAssociationIdT = Aws::String>
  void SetAccountAssociationId(AccountAssociationIdT&& value) {
    m_accountAssociationIdHasBeenSet = true;
    m_accountAssociationId = std::forward<AccountAssociationIdT>(value);
  }
  template <typename AccountAssociationIdT = Aws::String>
  ManagedThingAssociation& WithAccountAssociationId(AccountAssociationIdT&& value) {
    SetAccountAssociationId(std::forward<AccountAssociationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the registration between the managed thing and the account
   * association. Indicates whether the device is pre-associated or fully associated
   * with the account association.</p>
   */
  inline ManagedThingAssociationStatus GetManagedThingAssociationStatus() const { return m_managedThingAssociationStatus; }
  inline bool ManagedThingAssociationStatusHasBeenSet() const { return m_managedThingAssociationStatusHasBeenSet; }
  inline void SetManagedThingAssociationStatus(ManagedThingAssociationStatus value) {
    m_managedThingAssociationStatusHasBeenSet = true;
    m_managedThingAssociationStatus = value;
  }
  inline ManagedThingAssociation& WithManagedThingAssociationStatus(ManagedThingAssociationStatus value) {
    SetManagedThingAssociationStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_managedThingId;

  Aws::String m_accountAssociationId;

  ManagedThingAssociationStatus m_managedThingAssociationStatus{ManagedThingAssociationStatus::NOT_SET};
  bool m_managedThingIdHasBeenSet = false;
  bool m_accountAssociationIdHasBeenSet = false;
  bool m_managedThingAssociationStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
