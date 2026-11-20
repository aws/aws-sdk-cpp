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
class UpdateAssetOwnerRequest : public DataZoneRequest {
 public:
  AWS_DATAZONE_API UpdateAssetOwnerRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAssetOwner"; }

  AWS_DATAZONE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon DataZone domain that contains the asset.</p>
   */
  inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
  inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
  template <typename DomainIdentifierT = Aws::String>
  void SetDomainIdentifier(DomainIdentifierT&& value) {
    m_domainIdentifierHasBeenSet = true;
    m_domainIdentifier = std::forward<DomainIdentifierT>(value);
  }
  template <typename DomainIdentifierT = Aws::String>
  UpdateAssetOwnerRequest& WithDomainIdentifier(DomainIdentifierT&& value) {
    SetDomainIdentifier(std::forward<DomainIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the asset whose ownership is transferred.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  UpdateAssetOwnerRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the project that the asset is transferred to. The project must be
   * in the same domain and must be different from the project that currently owns
   * the asset.</p> <p>If the domain's administration project owns the asset, the
   * target can be any project. Otherwise, the target must be the administration
   * project.</p>
   */
  inline const Aws::String& GetTargetProjectIdentifier() const { return m_targetProjectIdentifier; }
  inline bool TargetProjectIdentifierHasBeenSet() const { return m_targetProjectIdentifierHasBeenSet; }
  template <typename TargetProjectIdentifierT = Aws::String>
  void SetTargetProjectIdentifier(TargetProjectIdentifierT&& value) {
    m_targetProjectIdentifierHasBeenSet = true;
    m_targetProjectIdentifier = std::forward<TargetProjectIdentifierT>(value);
  }
  template <typename TargetProjectIdentifierT = Aws::String>
  UpdateAssetOwnerRequest& WithTargetProjectIdentifier(TargetProjectIdentifierT&& value) {
    SetTargetProjectIdentifier(std::forward<TargetProjectIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request while its transfer
   * is in progress, the service returns that transfer and doesn't start a new one.
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
  UpdateAssetOwnerRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainIdentifier;

  Aws::String m_identifier;

  Aws::String m_targetProjectIdentifier;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_domainIdentifierHasBeenSet = false;
  bool m_identifierHasBeenSet = false;
  bool m_targetProjectIdentifierHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
