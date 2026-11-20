/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/agent-discovery/model/ProvenanceLink.h>
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
 * <p>One contributor's trust metadata about a record (AI Catalog Trust Manifest
 * Object), with only the members the registry sets. AI Catalog's other members
 * (<code>subject</code>, <code>signature</code>, <code>trustSchema</code>,
 * <code>attestations</code>, <code>extensions</code>) are optional, so each can be
 * added when something sets it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-discovery-2022-07-26/TrustManifest">AWS
 * API Reference</a></p>
 */
class TrustManifest {
 public:
  AWS_AGENTDISCOVERY_API TrustManifest() = default;
  AWS_AGENTDISCOVERY_API TrustManifest(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API TrustManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Absolute URI of the contributor these claims are attributed to.</p>
   */
  inline const Aws::String& GetContributor() const { return m_contributor; }
  inline bool ContributorHasBeenSet() const { return m_contributorHasBeenSet; }
  template <typename ContributorT = Aws::String>
  void SetContributor(ContributorT&& value) {
    m_contributorHasBeenSet = true;
    m_contributor = std::forward<ContributorT>(value);
  }
  template <typename ContributorT = Aws::String>
  TrustManifest& WithContributor(ContributorT&& value) {
    SetContributor(std::forward<ContributorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The record's lineage as the contributor states it: how the contributor got
   * the record, and from which source.</p>
   */
  inline const Aws::Vector<ProvenanceLink>& GetProvenance() const { return m_provenance; }
  inline bool ProvenanceHasBeenSet() const { return m_provenanceHasBeenSet; }
  template <typename ProvenanceT = Aws::Vector<ProvenanceLink>>
  void SetProvenance(ProvenanceT&& value) {
    m_provenanceHasBeenSet = true;
    m_provenance = std::forward<ProvenanceT>(value);
  }
  template <typename ProvenanceT = Aws::Vector<ProvenanceLink>>
  TrustManifest& WithProvenance(ProvenanceT&& value) {
    SetProvenance(std::forward<ProvenanceT>(value));
    return *this;
  }
  template <typename ProvenanceT = ProvenanceLink>
  TrustManifest& AddProvenance(ProvenanceT&& value) {
    m_provenanceHasBeenSet = true;
    m_provenance.emplace_back(std::forward<ProvenanceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contributor;

  Aws::Vector<ProvenanceLink> m_provenance;
  bool m_contributorHasBeenSet = false;
  bool m_provenanceHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
