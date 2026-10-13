/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/RecordTypeSchemaOverride.h>
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
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>The custom metadata fields that records in the registry can carry.
 * <code>defaultSchema</code> defines the common attributes for every record type,
 * and <code>recordTypeSchemaOverrides</code> adds fields for individual record
 * types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/CustomMetadataSchemaConfiguration">AWS
 * API Reference</a></p>
 */
class CustomMetadataSchemaConfiguration {
 public:
  AWS_AGENTREGISTRYCONTROL_API CustomMetadataSchemaConfiguration() = default;
  AWS_AGENTREGISTRYCONTROL_API CustomMetadataSchemaConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API CustomMetadataSchemaConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A JSON Schema with the common attributes: fields that records of every record
   * type can carry.</p>
   */
  inline const Aws::String& GetDefaultSchema() const { return m_defaultSchema; }
  inline bool DefaultSchemaHasBeenSet() const { return m_defaultSchemaHasBeenSet; }
  template <typename DefaultSchemaT = Aws::String>
  void SetDefaultSchema(DefaultSchemaT&& value) {
    m_defaultSchemaHasBeenSet = true;
    m_defaultSchema = std::forward<DefaultSchemaT>(value);
  }
  template <typename DefaultSchemaT = Aws::String>
  CustomMetadataSchemaConfiguration& WithDefaultSchema(DefaultSchemaT&& value) {
    SetDefaultSchema(std::forward<DefaultSchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fields for individual record types. Records of a record type can carry
   * the common attributes defined in <code>defaultSchema</code> plus that record
   * type's fields.</p>
   */
  inline const Aws::Vector<RecordTypeSchemaOverride>& GetRecordTypeSchemaOverrides() const { return m_recordTypeSchemaOverrides; }
  inline bool RecordTypeSchemaOverridesHasBeenSet() const { return m_recordTypeSchemaOverridesHasBeenSet; }
  template <typename RecordTypeSchemaOverridesT = Aws::Vector<RecordTypeSchemaOverride>>
  void SetRecordTypeSchemaOverrides(RecordTypeSchemaOverridesT&& value) {
    m_recordTypeSchemaOverridesHasBeenSet = true;
    m_recordTypeSchemaOverrides = std::forward<RecordTypeSchemaOverridesT>(value);
  }
  template <typename RecordTypeSchemaOverridesT = Aws::Vector<RecordTypeSchemaOverride>>
  CustomMetadataSchemaConfiguration& WithRecordTypeSchemaOverrides(RecordTypeSchemaOverridesT&& value) {
    SetRecordTypeSchemaOverrides(std::forward<RecordTypeSchemaOverridesT>(value));
    return *this;
  }
  template <typename RecordTypeSchemaOverridesT = RecordTypeSchemaOverride>
  CustomMetadataSchemaConfiguration& AddRecordTypeSchemaOverrides(RecordTypeSchemaOverridesT&& value) {
    m_recordTypeSchemaOverridesHasBeenSet = true;
    m_recordTypeSchemaOverrides.emplace_back(std::forward<RecordTypeSchemaOverridesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_defaultSchema;

  Aws::Vector<RecordTypeSchemaOverride> m_recordTypeSchemaOverrides;
  bool m_defaultSchemaHasBeenSet = false;
  bool m_recordTypeSchemaOverridesHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
