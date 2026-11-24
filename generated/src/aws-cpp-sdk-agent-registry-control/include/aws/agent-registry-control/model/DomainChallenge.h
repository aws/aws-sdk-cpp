/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
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
 * <p>Server-generated DNS-01 challenge the caller must publish to prove
 * ownership.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/DomainChallenge">AWS
 * API Reference</a></p>
 */
class DomainChallenge {
 public:
  AWS_AGENTREGISTRYCONTROL_API DomainChallenge() = default;
  AWS_AGENTREGISTRYCONTROL_API DomainChallenge(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API DomainChallenge& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the DNS TXT record to create, such as
   * <code>_acme-challenge.example.com</code>.</p>
   */
  inline const Aws::String& GetRecordName() const { return m_recordName; }
  inline bool RecordNameHasBeenSet() const { return m_recordNameHasBeenSet; }
  template <typename RecordNameT = Aws::String>
  void SetRecordName(RecordNameT&& value) {
    m_recordNameHasBeenSet = true;
    m_recordName = std::forward<RecordNameT>(value);
  }
  template <typename RecordNameT = Aws::String>
  DomainChallenge& WithRecordName(RecordNameT&& value) {
    SetRecordName(std::forward<RecordNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to publish in the DNS TXT record. A new value is issued each time
   * verification restarts, and earlier values no longer verify the domain.</p>
   */
  inline const Aws::String& GetRecordValue() const { return m_recordValue; }
  inline bool RecordValueHasBeenSet() const { return m_recordValueHasBeenSet; }
  template <typename RecordValueT = Aws::String>
  void SetRecordValue(RecordValueT&& value) {
    m_recordValueHasBeenSet = true;
    m_recordValue = std::forward<RecordValueT>(value);
  }
  template <typename RecordValueT = Aws::String>
  DomainChallenge& WithRecordValue(RecordValueT&& value) {
    SetRecordValue(std::forward<RecordValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recordName;

  Aws::String m_recordValue;
  bool m_recordNameHasBeenSet = false;
  bool m_recordValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
