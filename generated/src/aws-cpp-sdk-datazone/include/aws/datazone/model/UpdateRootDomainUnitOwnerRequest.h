/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/DataZone_EXPORTS.h>

#include <utility>

namespace Aws {
namespace DataZone {
namespace Model {

/**
 */
class UpdateRootDomainUnitOwnerRequest : public DataZoneRequest {
 public:
  AWS_DATAZONE_API UpdateRootDomainUnitOwnerRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRootDomainUnitOwner"; }

  AWS_DATAZONE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
   * This field is automatically populated if not provided.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateRootDomainUnitOwnerRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current owner of the root domain unit.</p>
   */
  inline const Aws::String& GetCurrentOwner() const { return m_currentOwner; }
  inline bool CurrentOwnerHasBeenSet() const { return m_currentOwnerHasBeenSet; }
  template <typename CurrentOwnerT = Aws::String>
  void SetCurrentOwner(CurrentOwnerT&& value) {
    m_currentOwnerHasBeenSet = true;
    m_currentOwner = std::forward<CurrentOwnerT>(value);
  }
  template <typename CurrentOwnerT = Aws::String>
  UpdateRootDomainUnitOwnerRequest& WithCurrentOwner(CurrentOwnerT&& value) {
    SetCurrentOwner(std::forward<CurrentOwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the domain where the root domain unit owner is to be updated.</p>
   */
  inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
  inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
  template <typename DomainIdentifierT = Aws::String>
  void SetDomainIdentifier(DomainIdentifierT&& value) {
    m_domainIdentifierHasBeenSet = true;
    m_domainIdentifier = std::forward<DomainIdentifierT>(value);
  }
  template <typename DomainIdentifierT = Aws::String>
  UpdateRootDomainUnitOwnerRequest& WithDomainIdentifier(DomainIdentifierT&& value) {
    SetDomainIdentifier(std::forward<DomainIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new owner of the root domain unit.</p>
   */
  inline const Aws::String& GetNewOwner() const { return m_newOwner; }
  inline bool NewOwnerHasBeenSet() const { return m_newOwnerHasBeenSet; }
  template <typename NewOwnerT = Aws::String>
  void SetNewOwner(NewOwnerT&& value) {
    m_newOwnerHasBeenSet = true;
    m_newOwner = std::forward<NewOwnerT>(value);
  }
  template <typename NewOwnerT = Aws::String>
  UpdateRootDomainUnitOwnerRequest& WithNewOwner(NewOwnerT&& value) {
    SetNewOwner(std::forward<NewOwnerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  Aws::String m_currentOwner;
  bool m_currentOwnerHasBeenSet = false;

  Aws::String m_domainIdentifier;
  bool m_domainIdentifierHasBeenSet = false;

  Aws::String m_newOwner;
  bool m_newOwnerHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
