/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/agent-discovery/model/ProvenanceRelation.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Lineage of a record (AI Catalog Provenance Link Object), with only its
 * required members.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-discovery-2022-07-26/ProvenanceLink">AWS
 * API Reference</a></p>
 */
class ProvenanceLink {
 public:
  AWS_AGENTDISCOVERY_API ProvenanceLink() = default;
  AWS_AGENTDISCOVERY_API ProvenanceLink(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API ProvenanceLink& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>How the contributor got the record.</p>
   */
  inline ProvenanceRelation GetRelation() const { return m_relation; }
  inline bool RelationHasBeenSet() const { return m_relationHasBeenSet; }
  inline void SetRelation(ProvenanceRelation value) {
    m_relationHasBeenSet = true;
    m_relation = value;
  }
  inline ProvenanceLink& WithRelation(ProvenanceRelation value) {
    SetRelation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the record. Not always a URI. On <code>publishedFrom</code>
   * it's the value of the record's <code>identifier</code> union member,
   * <code>identifier.uri</code> or <code>identifier.domain</code>, unchanged. On
   * <code>discoveredFrom</code> it's the name the registry gave the partner source
   * when it was configured for crawling, not a URL.</p>
   */
  inline const Aws::String& GetSourceId() const { return m_sourceId; }
  inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
  template <typename SourceIdT = Aws::String>
  void SetSourceId(SourceIdT&& value) {
    m_sourceIdHasBeenSet = true;
    m_sourceId = std::forward<SourceIdT>(value);
  }
  template <typename SourceIdT = Aws::String>
  ProvenanceLink& WithSourceId(SourceIdT&& value) {
    SetSourceId(std::forward<SourceIdT>(value));
    return *this;
  }
  ///@}
 private:
  ProvenanceRelation m_relation{ProvenanceRelation::NOT_SET};

  Aws::String m_sourceId;
  bool m_relationHasBeenSet = false;
  bool m_sourceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
