/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/AuditorResult.h>
#include <aws/application-signals/model/DependencyGraph.h>
#include <aws/application-signals/model/MetricGraph.h>
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
namespace ApplicationSignals {
namespace Model {

/**
 * <p>Represents an audit finding that identifies a potential issue,
 * misconfiguration, or compliance violation in Application Signals
 * resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/AuditFinding">AWS
 * API Reference</a></p>
 */
class AuditFinding {
 public:
  AWS_APPLICATIONSIGNALS_API AuditFinding() = default;
  AWS_APPLICATIONSIGNALS_API AuditFinding(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API AuditFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map of key attributes that identify the resource associated with this audit
   * finding. These attributes help locate and understand the context of the
   * finding.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetKeyAttributes() const { return m_keyAttributes; }
  inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
  template <typename KeyAttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetKeyAttributes(KeyAttributesT&& value) {
    m_keyAttributesHasBeenSet = true;
    m_keyAttributes = std::forward<KeyAttributesT>(value);
  }
  template <typename KeyAttributesT = Aws::Map<Aws::String, Aws::String>>
  AuditFinding& WithKeyAttributes(KeyAttributesT&& value) {
    SetKeyAttributes(std::forward<KeyAttributesT>(value));
    return *this;
  }
  template <typename KeyAttributesKeyT = Aws::String, typename KeyAttributesValueT = Aws::String>
  AuditFinding& AddKeyAttributes(KeyAttributesKeyT&& key, KeyAttributesValueT&& value) {
    m_keyAttributesHasBeenSet = true;
    m_keyAttributes.emplace(std::forward<KeyAttributesKeyT>(key), std::forward<KeyAttributesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of results from different auditors that examined the resource. Each
   * result includes the auditor name, description, and severity level.</p>
   */
  inline const Aws::Vector<AuditorResult>& GetAuditorResults() const { return m_auditorResults; }
  inline bool AuditorResultsHasBeenSet() const { return m_auditorResultsHasBeenSet; }
  template <typename AuditorResultsT = Aws::Vector<AuditorResult>>
  void SetAuditorResults(AuditorResultsT&& value) {
    m_auditorResultsHasBeenSet = true;
    m_auditorResults = std::forward<AuditorResultsT>(value);
  }
  template <typename AuditorResultsT = Aws::Vector<AuditorResult>>
  AuditFinding& WithAuditorResults(AuditorResultsT&& value) {
    SetAuditorResults(std::forward<AuditorResultsT>(value));
    return *this;
  }
  template <typename AuditorResultsT = AuditorResult>
  AuditFinding& AddAuditorResults(AuditorResultsT&& value) {
    m_auditorResultsHasBeenSet = true;
    m_auditorResults.emplace_back(std::forward<AuditorResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operation or action that was being audited when this finding was
   * discovered. This provides context about what was being examined.</p>
   */
  inline const Aws::String& GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  template <typename OperationT = Aws::String>
  void SetOperation(OperationT&& value) {
    m_operationHasBeenSet = true;
    m_operation = std::forward<OperationT>(value);
  }
  template <typename OperationT = Aws::String>
  AuditFinding& WithOperation(OperationT&& value) {
    SetOperation(std::forward<OperationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A metric graph associated with the audit finding, showing relevant
   * performance data that may be related to the identified issue.</p>
   */
  inline const MetricGraph& GetMetricGraph() const { return m_metricGraph; }
  inline bool MetricGraphHasBeenSet() const { return m_metricGraphHasBeenSet; }
  template <typename MetricGraphT = MetricGraph>
  void SetMetricGraph(MetricGraphT&& value) {
    m_metricGraphHasBeenSet = true;
    m_metricGraph = std::forward<MetricGraphT>(value);
  }
  template <typename MetricGraphT = MetricGraph>
  AuditFinding& WithMetricGraph(MetricGraphT&& value) {
    SetMetricGraph(std::forward<MetricGraphT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A dependency graph showing the relationships between services that may be
   * affected by or related to the audit finding.</p>
   */
  inline const DependencyGraph& GetDependencyGraph() const { return m_dependencyGraph; }
  inline bool DependencyGraphHasBeenSet() const { return m_dependencyGraphHasBeenSet; }
  template <typename DependencyGraphT = DependencyGraph>
  void SetDependencyGraph(DependencyGraphT&& value) {
    m_dependencyGraphHasBeenSet = true;
    m_dependencyGraph = std::forward<DependencyGraphT>(value);
  }
  template <typename DependencyGraphT = DependencyGraph>
  AuditFinding& WithDependencyGraph(DependencyGraphT&& value) {
    SetDependencyGraph(std::forward<DependencyGraphT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type or category of the audit finding, such as "Performance", "Security",
   * or "Configuration".</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  AuditFinding& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_keyAttributes;
  bool m_keyAttributesHasBeenSet = false;

  Aws::Vector<AuditorResult> m_auditorResults;
  bool m_auditorResultsHasBeenSet = false;

  Aws::String m_operation;
  bool m_operationHasBeenSet = false;

  MetricGraph m_metricGraph;
  bool m_metricGraphHasBeenSet = false;

  DependencyGraph m_dependencyGraph;
  bool m_dependencyGraphHasBeenSet = false;

  Aws::String m_type;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
