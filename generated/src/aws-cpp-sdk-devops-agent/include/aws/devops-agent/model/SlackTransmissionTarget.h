/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/SlackChannel.h>

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
 * <p>Defines Slack channels for different types of agent
 * notifications.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SlackTransmissionTarget">AWS
 * API Reference</a></p>
 */
class SlackTransmissionTarget {
 public:
  AWS_DEVOPSAGENT_API SlackTransmissionTarget() = default;
  AWS_DEVOPSAGENT_API SlackTransmissionTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SlackTransmissionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Destination for On-call Agent (Ops1)</p>
   */
  inline const SlackChannel& GetOpsOncallTarget() const { return m_opsOncallTarget; }
  inline bool OpsOncallTargetHasBeenSet() const { return m_opsOncallTargetHasBeenSet; }
  template <typename OpsOncallTargetT = SlackChannel>
  void SetOpsOncallTarget(OpsOncallTargetT&& value) {
    m_opsOncallTargetHasBeenSet = true;
    m_opsOncallTarget = std::forward<OpsOncallTargetT>(value);
  }
  template <typename OpsOncallTargetT = SlackChannel>
  SlackTransmissionTarget& WithOpsOncallTarget(OpsOncallTargetT&& value) {
    SetOpsOncallTarget(std::forward<OpsOncallTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Destination for SRE Agent (Ops1.5)</p>
   */
  inline const SlackChannel& GetOpsSRETarget() const { return m_opsSRETarget; }
  inline bool OpsSRETargetHasBeenSet() const { return m_opsSRETargetHasBeenSet; }
  template <typename OpsSRETargetT = SlackChannel>
  void SetOpsSRETarget(OpsSRETargetT&& value) {
    m_opsSRETargetHasBeenSet = true;
    m_opsSRETarget = std::forward<OpsSRETargetT>(value);
  }
  template <typename OpsSRETargetT = SlackChannel>
  SlackTransmissionTarget& WithOpsSRETarget(OpsSRETargetT&& value) {
    SetOpsSRETarget(std::forward<OpsSRETargetT>(value));
    return *this;
  }
  ///@}
 private:
  SlackChannel m_opsOncallTarget;

  SlackChannel m_opsSRETarget;
  bool m_opsOncallTargetHasBeenSet = false;
  bool m_opsSRETargetHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
