/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/ProvenanceRelation.h>
#include <aws/agent-registry-control/model/SourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>Condensed provenance entry for list results — the key triple only (no
 * sourceDetails union). Enough to display and client-side-filter lineage without
 * the full-read config payload.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/ProvenanceSummary">AWS
 * API Reference</a></p>
 */
class ProvenanceSummary {
 public:
  AWS_AGENTREGISTRYCONTROL_API ProvenanceSummary() = default;
  AWS_AGENTREGISTRYCONTROL_API ProvenanceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API ProvenanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline ProvenanceRelation GetRelation() const { return m_relation; }
  inline bool RelationHasBeenSet() const { return m_relationHasBeenSet; }
  inline void SetRelation(ProvenanceRelation value) {
    m_relationHasBeenSet = true;
    m_relation = value;
  }
  inline ProvenanceSummary& WithRelation(ProvenanceRelation value) {
    SetRelation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the upstream source that the registry record was detected
   * from.</p>
   */
  inline const Aws::String& GetSourceId() const { return m_sourceId; }
  inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
  template <typename SourceIdT = Aws::String>
  void SetSourceId(SourceIdT&& value) {
    m_sourceIdHasBeenSet = true;
    m_sourceId = std::forward<SourceIdT>(value);
  }
  template <typename SourceIdT = Aws::String>
  ProvenanceSummary& WithSourceId(SourceIdT&& value) {
    SetSourceId(std::forward<SourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the upstream source that the registry record was detected
   * from.</p>
   */
  inline SourceType GetSourceType() const { return m_sourceType; }
  inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
  inline void SetSourceType(SourceType value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = value;
  }
  inline ProvenanceSummary& WithSourceType(SourceType value) {
    SetSourceType(value);
    return *this;
  }
  ///@}
 private:
  ProvenanceRelation m_relation{ProvenanceRelation::NOT_SET};

  Aws::String m_sourceId;

  SourceType m_sourceType{SourceType::NOT_SET};
  bool m_relationHasBeenSet = false;
  bool m_sourceIdHasBeenSet = false;
  bool m_sourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
