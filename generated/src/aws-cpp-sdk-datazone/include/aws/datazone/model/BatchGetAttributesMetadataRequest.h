/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AttributeEntityType.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace DataZone {
namespace Model {

/**
 */
class BatchGetAttributesMetadataRequest : public DataZoneRequest {
 public:
  AWS_DATAZONE_API BatchGetAttributesMetadataRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetAttributesMetadata"; }

  AWS_DATAZONE_API Aws::String SerializePayload() const override;

  AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The domain ID where you want to get the attribute metadata.</p>
   */
  inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
  inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
  template <typename DomainIdentifierT = Aws::String>
  void SetDomainIdentifier(DomainIdentifierT&& value) {
    m_domainIdentifierHasBeenSet = true;
    m_domainIdentifier = std::forward<DomainIdentifierT>(value);
  }
  template <typename DomainIdentifierT = Aws::String>
  BatchGetAttributesMetadataRequest& WithDomainIdentifier(DomainIdentifierT&& value) {
    SetDomainIdentifier(std::forward<DomainIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity type for which you want to get attribute metadata.</p>
   */
  inline AttributeEntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(AttributeEntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline BatchGetAttributesMetadataRequest& WithEntityType(AttributeEntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity ID for which you want to get attribute metadata.</p>
   */
  inline const Aws::String& GetEntityIdentifier() const { return m_entityIdentifier; }
  inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
  template <typename EntityIdentifierT = Aws::String>
  void SetEntityIdentifier(EntityIdentifierT&& value) {
    m_entityIdentifierHasBeenSet = true;
    m_entityIdentifier = std::forward<EntityIdentifierT>(value);
  }
  template <typename EntityIdentifierT = Aws::String>
  BatchGetAttributesMetadataRequest& WithEntityIdentifier(EntityIdentifierT&& value) {
    SetEntityIdentifier(std::forward<EntityIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity revision for which you want to get attribute metadata.</p>
   */
  inline const Aws::String& GetEntityRevision() const { return m_entityRevision; }
  inline bool EntityRevisionHasBeenSet() const { return m_entityRevisionHasBeenSet; }
  template <typename EntityRevisionT = Aws::String>
  void SetEntityRevision(EntityRevisionT&& value) {
    m_entityRevisionHasBeenSet = true;
    m_entityRevision = std::forward<EntityRevisionT>(value);
  }
  template <typename EntityRevisionT = Aws::String>
  BatchGetAttributesMetadataRequest& WithEntityRevision(EntityRevisionT&& value) {
    SetEntityRevision(std::forward<EntityRevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attribute identifier.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAttributeIdentifiers() const { return m_attributeIdentifiers; }
  inline bool AttributeIdentifiersHasBeenSet() const { return m_attributeIdentifiersHasBeenSet; }
  template <typename AttributeIdentifiersT = Aws::Vector<Aws::String>>
  void SetAttributeIdentifiers(AttributeIdentifiersT&& value) {
    m_attributeIdentifiersHasBeenSet = true;
    m_attributeIdentifiers = std::forward<AttributeIdentifiersT>(value);
  }
  template <typename AttributeIdentifiersT = Aws::Vector<Aws::String>>
  BatchGetAttributesMetadataRequest& WithAttributeIdentifiers(AttributeIdentifiersT&& value) {
    SetAttributeIdentifiers(std::forward<AttributeIdentifiersT>(value));
    return *this;
  }
  template <typename AttributeIdentifiersT = Aws::String>
  BatchGetAttributesMetadataRequest& AddAttributeIdentifiers(AttributeIdentifiersT&& value) {
    m_attributeIdentifiersHasBeenSet = true;
    m_attributeIdentifiers.emplace_back(std::forward<AttributeIdentifiersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainIdentifier;

  AttributeEntityType m_entityType{AttributeEntityType::NOT_SET};

  Aws::String m_entityIdentifier;

  Aws::String m_entityRevision;

  Aws::Vector<Aws::String> m_attributeIdentifiers;
  bool m_domainIdentifierHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_entityIdentifierHasBeenSet = false;
  bool m_entityRevisionHasBeenSet = false;
  bool m_attributeIdentifiersHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
