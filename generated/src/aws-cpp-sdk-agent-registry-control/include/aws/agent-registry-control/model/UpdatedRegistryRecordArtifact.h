/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/RegistryRecordArtifactUpload.h>

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
 * <p>The skill package patch wrapper. Omit to leave the package unchanged; supply
 * an empty object to remove an uploaded package; supply optionalValue to upload a
 * new package.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdatedRegistryRecordArtifact">AWS
 * API Reference</a></p>
 */
class UpdatedRegistryRecordArtifact {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdatedRegistryRecordArtifact() = default;
  AWS_AGENTREGISTRYCONTROL_API UpdatedRegistryRecordArtifact(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API UpdatedRegistryRecordArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The skill package to upload. It replaces the record's current package or its
   * synchronized content.</p>
   */
  inline const RegistryRecordArtifactUpload& GetOptionalValue() const { return m_optionalValue; }
  inline bool OptionalValueHasBeenSet() const { return m_optionalValueHasBeenSet; }
  template <typename OptionalValueT = RegistryRecordArtifactUpload>
  void SetOptionalValue(OptionalValueT&& value) {
    m_optionalValueHasBeenSet = true;
    m_optionalValue = std::forward<OptionalValueT>(value);
  }
  template <typename OptionalValueT = RegistryRecordArtifactUpload>
  UpdatedRegistryRecordArtifact& WithOptionalValue(OptionalValueT&& value) {
    SetOptionalValue(std::forward<OptionalValueT>(value));
    return *this;
  }
  ///@}
 private:
  RegistryRecordArtifactUpload m_optionalValue;
  bool m_optionalValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
