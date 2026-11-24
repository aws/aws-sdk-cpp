/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/agent-discovery/model/DescriptorEntry.h>
#include <aws/agent-discovery/model/Identifier.h>
#include <aws/agent-discovery/model/RecordType.h>
#include <aws/agent-discovery/model/TrustManifest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentDiscovery {
namespace Model {

/**
 * <p>A public record returned by search. Only the record's public descriptors are
 * included.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-discovery-2022-07-26/PublicRecord">AWS
 * API Reference</a></p>
 */
class PublicRecord {
 public:
  AWS_AGENTDISCOVERY_API PublicRecord() = default;
  AWS_AGENTDISCOVERY_API PublicRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API PublicRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Identifier& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Identifier>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Identifier>
  PublicRecord& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The record's display name.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  PublicRecord& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the record.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  PublicRecord& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The kind of resource the record describes, such as an agent, a tool, or a
   * skill.</p>
   */
  inline RecordType GetRecordType() const { return m_recordType; }
  inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }
  inline void SetRecordType(RecordType value) {
    m_recordTypeHasBeenSet = true;
    m_recordType = value;
  }
  inline PublicRecord& WithRecordType(RecordType value) {
    SetRecordType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDomain() const { return m_domain; }
  inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
  template <typename DomainT = Aws::String>
  void SetDomain(DomainT&& value) {
    m_domainHasBeenSet = true;
    m_domain = std::forward<DomainT>(value);
  }
  template <typename DomainT = Aws::String>
  PublicRecord& WithDomain(DomainT&& value) {
    SetDomain(std::forward<DomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Every PUBLIC descriptor slot the record was published with, as published:
   * each slot's <code>source</code>, inline <code>data</code>, <code>version</code>
   * and nested <code>additionalData</code>, the <code>custom</code> slot included.
   * Absent on a record discovered at a partner source; ARD serves the partner's
   * cards.</p>
   */
  inline const Aws::Map<Aws::String, DescriptorEntry>& GetDescriptors() const { return m_descriptors; }
  inline bool DescriptorsHasBeenSet() const { return m_descriptorsHasBeenSet; }
  template <typename DescriptorsT = Aws::Map<Aws::String, DescriptorEntry>>
  void SetDescriptors(DescriptorsT&& value) {
    m_descriptorsHasBeenSet = true;
    m_descriptors = std::forward<DescriptorsT>(value);
  }
  template <typename DescriptorsT = Aws::Map<Aws::String, DescriptorEntry>>
  PublicRecord& WithDescriptors(DescriptorsT&& value) {
    SetDescriptors(std::forward<DescriptorsT>(value));
    return *this;
  }
  template <typename DescriptorsKeyT = Aws::String, typename DescriptorsValueT = DescriptorEntry>
  PublicRecord& AddDescriptors(DescriptorsKeyT&& key, DescriptorsValueT&& value) {
    m_descriptorsHasBeenSet = true;
    m_descriptors.emplace(std::forward<DescriptorsKeyT>(key), std::forward<DescriptorsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Trust Manifests (AI Catalog Trust Manifest Object), today only the registry's
   * own, <code>contributor</code>
   * <code>did:web:agent-registry.global.api.aws</code>. Its one provenance link says
   * how the registry got the record: <code>relation</code> is
   * <code>publishedFrom</code> for a record its owner published and
   * <code>discoveredFrom</code> for one the registry discovered at a partner source,
   * with <code>sourceId</code> as <code>ProvenanceLink.sourceId</code> describes.
   * The <code>provenance</code> filter takes the same values (see
   * <code>ProvenanceRelation</code>). It's left off when the registry can't name the
   * source: a <code>federatedFrom</code> record until the index carries the peer
   * registry, a discovered record with no source, or a missing or unknown origin.
   * The manifest is unsigned, so it attributes the claim to the registry and doesn't
   * authenticate it.</p>
   */
  inline const Aws::Vector<TrustManifest>& GetTrustManifests() const { return m_trustManifests; }
  inline bool TrustManifestsHasBeenSet() const { return m_trustManifestsHasBeenSet; }
  template <typename TrustManifestsT = Aws::Vector<TrustManifest>>
  void SetTrustManifests(TrustManifestsT&& value) {
    m_trustManifestsHasBeenSet = true;
    m_trustManifests = std::forward<TrustManifestsT>(value);
  }
  template <typename TrustManifestsT = Aws::Vector<TrustManifest>>
  PublicRecord& WithTrustManifests(TrustManifestsT&& value) {
    SetTrustManifests(std::forward<TrustManifestsT>(value));
    return *this;
  }
  template <typename TrustManifestsT = TrustManifest>
  PublicRecord& AddTrustManifests(TrustManifestsT&& value) {
    m_trustManifestsHasBeenSet = true;
    m_trustManifests.emplace_back(std::forward<TrustManifestsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The record's version string, set by its publisher. Left off when the record
   * has none, for example a discovered record whose source carries no version.</p>
   */
  inline const Aws::String& GetRecordVersion() const { return m_recordVersion; }
  inline bool RecordVersionHasBeenSet() const { return m_recordVersionHasBeenSet; }
  template <typename RecordVersionT = Aws::String>
  void SetRecordVersion(RecordVersionT&& value) {
    m_recordVersionHasBeenSet = true;
    m_recordVersion = std::forward<RecordVersionT>(value);
  }
  template <typename RecordVersionT = Aws::String>
  PublicRecord& WithRecordVersion(RecordVersionT&& value) {
    SetRecordVersion(std::forward<RecordVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the record was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  PublicRecord& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the record was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  PublicRecord& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Identifier m_identifier;

  Aws::String m_displayName;

  Aws::String m_description;

  RecordType m_recordType{RecordType::NOT_SET};

  Aws::String m_domain;

  Aws::Map<Aws::String, DescriptorEntry> m_descriptors;

  Aws::Vector<TrustManifest> m_trustManifests;

  Aws::String m_recordVersion;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_identifierHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_recordTypeHasBeenSet = false;
  bool m_domainHasBeenSet = false;
  bool m_descriptorsHasBeenSet = false;
  bool m_trustManifestsHasBeenSet = false;
  bool m_recordVersionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
