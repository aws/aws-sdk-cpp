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
 * <p>Configuration that defines a typed metadata schema for a registry. Specify at
 * least one of a default schema or per-record-type schema overrides. You can
 * provide both.</p><p><h3>See Also:</h3>   <a
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
   * <p>The default JSON Schema that applies to record types without a specific
   * override. Supported property types are <code>string</code>, <code>string</code>
   * with an <code>enum</code> constraint, <code>string</code> with a
   * <code>uri</code> format, and <code>boolean</code>.</p>
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
   * <p>A list of per-record-type schema overrides. When a record's type matches an
   * override, that override's schema is used instead of the default schema for
   * validation. If you don't specify an override for a record type, the default
   * schema applies. If no default schema exists, custom metadata on records of that
   * type is rejected.</p>
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
