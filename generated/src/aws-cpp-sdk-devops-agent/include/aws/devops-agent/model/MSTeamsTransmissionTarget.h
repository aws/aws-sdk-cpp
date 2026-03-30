/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/MSTeamsChannel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Defines MS Teams channels for different types of agent
 * notifications.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MSTeamsTransmissionTarget">AWS
 * API Reference</a></p>
 */
class MSTeamsTransmissionTarget {
 public:
  AWS_DEVOPSAGENT_API MSTeamsTransmissionTarget() = default;
  AWS_DEVOPSAGENT_API MSTeamsTransmissionTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MSTeamsTransmissionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Destination for On-call Agent(Ops1)</p>
   */
  inline const MSTeamsChannel& GetOpsOncallTarget() const { return m_opsOncallTarget; }
  inline bool OpsOncallTargetHasBeenSet() const { return m_opsOncallTargetHasBeenSet; }
  template <typename OpsOncallTargetT = MSTeamsChannel>
  void SetOpsOncallTarget(OpsOncallTargetT&& value) {
    m_opsOncallTargetHasBeenSet = true;
    m_opsOncallTarget = std::forward<OpsOncallTargetT>(value);
  }
  template <typename OpsOncallTargetT = MSTeamsChannel>
  MSTeamsTransmissionTarget& WithOpsOncallTarget(OpsOncallTargetT&& value) {
    SetOpsOncallTarget(std::forward<OpsOncallTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Destination for SRE Agent (Ops1.5)</p>
   */
  inline const MSTeamsChannel& GetOpsSRETarget() const { return m_opsSRETarget; }
  inline bool OpsSRETargetHasBeenSet() const { return m_opsSRETargetHasBeenSet; }
  template <typename OpsSRETargetT = MSTeamsChannel>
  void SetOpsSRETarget(OpsSRETargetT&& value) {
    m_opsSRETargetHasBeenSet = true;
    m_opsSRETarget = std::forward<OpsSRETargetT>(value);
  }
  template <typename OpsSRETargetT = MSTeamsChannel>
  MSTeamsTransmissionTarget& WithOpsSRETarget(OpsSRETargetT&& value) {
    SetOpsSRETarget(std::forward<OpsSRETargetT>(value));
    return *this;
  }
  ///@}
 private:
  MSTeamsChannel m_opsOncallTarget;

  MSTeamsChannel m_opsSRETarget;
  bool m_opsOncallTargetHasBeenSet = false;
  bool m_opsSRETargetHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
