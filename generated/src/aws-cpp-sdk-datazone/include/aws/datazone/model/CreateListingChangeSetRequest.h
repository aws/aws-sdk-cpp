/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ChangeAction.h>
#include <aws/datazone/model/EntityType.h>

#include <utility>

namespace Aws {
namespace DataZone {
namespace Model {

/**
 */
class CreateListingChangeSetRequest : public DataZoneRequest {
 public:
  AWS_DATAZONE_API CreateListingChangeSetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateListingChangeSet"; }

  AWS_DATAZONE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Specifies whether to publish or unpublish a listing.</p>
   */
  inline ChangeAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(ChangeAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline CreateListingChangeSetRequest& WithAction(ChangeAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that is provided to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateListingChangeSetRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon DataZone domain.</p>
   */
  inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
  inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
  template <typename DomainIdentifierT = Aws::String>
  void SetDomainIdentifier(DomainIdentifierT&& value) {
    m_domainIdentifierHasBeenSet = true;
    m_domainIdentifier = std::forward<DomainIdentifierT>(value);
  }
  template <typename DomainIdentifierT = Aws::String>
  CreateListingChangeSetRequest& WithDomainIdentifier(DomainIdentifierT&& value) {
    SetDomainIdentifier(std::forward<DomainIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the asset.</p>
   */
  inline const Aws::String& GetEntityIdentifier() const { return m_entityIdentifier; }
  inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
  template <typename EntityIdentifierT = Aws::String>
  void SetEntityIdentifier(EntityIdentifierT&& value) {
    m_entityIdentifierHasBeenSet = true;
    m_entityIdentifier = std::forward<EntityIdentifierT>(value);
  }
  template <typename EntityIdentifierT = Aws::String>
  CreateListingChangeSetRequest& WithEntityIdentifier(EntityIdentifierT&& value) {
    SetEntityIdentifier(std::forward<EntityIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of an asset.</p>
   */
  inline const Aws::String& GetEntityRevision() const { return m_entityRevision; }
  inline bool EntityRevisionHasBeenSet() const { return m_entityRevisionHasBeenSet; }
  template <typename EntityRevisionT = Aws::String>
  void SetEntityRevision(EntityRevisionT&& value) {
    m_entityRevisionHasBeenSet = true;
    m_entityRevision = std::forward<EntityRevisionT>(value);
  }
  template <typename EntityRevisionT = Aws::String>
  CreateListingChangeSetRequest& WithEntityRevision(EntityRevisionT&& value) {
    SetEntityRevision(std::forward<EntityRevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of an entity.</p>
   */
  inline EntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(EntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline CreateListingChangeSetRequest& WithEntityType(EntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}
 private:
  ChangeAction m_action{ChangeAction::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_domainIdentifier;

  Aws::String m_entityIdentifier;

  Aws::String m_entityRevision;

  EntityType m_entityType{EntityType::NOT_SET};
  bool m_actionHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_domainIdentifierHasBeenSet = false;
  bool m_entityIdentifierHasBeenSet = false;
  bool m_entityRevisionHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
