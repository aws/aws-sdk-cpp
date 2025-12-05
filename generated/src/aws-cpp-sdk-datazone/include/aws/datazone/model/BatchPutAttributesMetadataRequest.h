/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AttributeEntityType.h>
#include <aws/datazone/model/AttributeInput.h>

#include <utility>

namespace Aws {
namespace DataZone {
namespace Model {

/**
 */
class BatchPutAttributesMetadataRequest : public DataZoneRequest {
 public:
  AWS_DATAZONE_API BatchPutAttributesMetadataRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchPutAttributesMetadata"; }

  AWS_DATAZONE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The attributes of the metadata.</p>
   */
  inline const Aws::Vector<AttributeInput>& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = Aws::Vector<AttributeInput>>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = Aws::Vector<AttributeInput>>
  BatchPutAttributesMetadataRequest& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  template <typename AttributesT = AttributeInput>
  BatchPutAttributesMetadataRequest& AddAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes.emplace_back(std::forward<AttributesT>(value));
    return *this;
  }
  ///@}

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
  BatchPutAttributesMetadataRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain ID where you want to write the attribute metadata.</p>
   */
  inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
  inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
  template <typename DomainIdentifierT = Aws::String>
  void SetDomainIdentifier(DomainIdentifierT&& value) {
    m_domainIdentifierHasBeenSet = true;
    m_domainIdentifier = std::forward<DomainIdentifierT>(value);
  }
  template <typename DomainIdentifierT = Aws::String>
  BatchPutAttributesMetadataRequest& WithDomainIdentifier(DomainIdentifierT&& value) {
    SetDomainIdentifier(std::forward<DomainIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity ID for which you want to write the attribute metadata.</p>
   */
  inline const Aws::String& GetEntityIdentifier() const { return m_entityIdentifier; }
  inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
  template <typename EntityIdentifierT = Aws::String>
  void SetEntityIdentifier(EntityIdentifierT&& value) {
    m_entityIdentifierHasBeenSet = true;
    m_entityIdentifier = std::forward<EntityIdentifierT>(value);
  }
  template <typename EntityIdentifierT = Aws::String>
  BatchPutAttributesMetadataRequest& WithEntityIdentifier(EntityIdentifierT&& value) {
    SetEntityIdentifier(std::forward<EntityIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity type for which you want to write the attribute metadata.</p>
   */
  inline AttributeEntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(AttributeEntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline BatchPutAttributesMetadataRequest& WithEntityType(AttributeEntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AttributeInput> m_attributes;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_domainIdentifier;

  Aws::String m_entityIdentifier;

  AttributeEntityType m_entityType{AttributeEntityType::NOT_SET};
  bool m_attributesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_domainIdentifierHasBeenSet = false;
  bool m_entityIdentifierHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
