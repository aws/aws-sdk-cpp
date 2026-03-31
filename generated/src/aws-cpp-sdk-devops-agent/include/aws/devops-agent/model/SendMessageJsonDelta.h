/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

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
 * <p>JSON delta containing partial JSON</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SendMessageJsonDelta">AWS
 * API Reference</a></p>
 */
class SendMessageJsonDelta {
 public:
  AWS_DEVOPSAGENT_API SendMessageJsonDelta() = default;
  AWS_DEVOPSAGENT_API SendMessageJsonDelta(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SendMessageJsonDelta& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Partial JSON string</p>
   */
  inline const Aws::String& GetPartialJson() const { return m_partialJson; }
  inline bool PartialJsonHasBeenSet() const { return m_partialJsonHasBeenSet; }
  template <typename PartialJsonT = Aws::String>
  void SetPartialJson(PartialJsonT&& value) {
    m_partialJsonHasBeenSet = true;
    m_partialJson = std::forward<PartialJsonT>(value);
  }
  template <typename PartialJsonT = Aws::String>
  SendMessageJsonDelta& WithPartialJson(PartialJsonT&& value) {
    SetPartialJson(std::forward<PartialJsonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_partialJson;
  bool m_partialJsonHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
