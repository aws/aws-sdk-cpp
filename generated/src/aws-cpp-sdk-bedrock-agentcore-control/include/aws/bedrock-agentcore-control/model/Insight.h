/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>A reference to an insight analysis to run against sessions.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Insight">AWS
 * API Reference</a></p>
 */
class Insight {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API Insight() = default;
  AWS_BEDROCKAGENTCORECONTROL_API Insight(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Insight& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetInsightId() const { return m_insightId; }
  inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }
  template <typename InsightIdT = Aws::String>
  void SetInsightId(InsightIdT&& value) {
    m_insightIdHasBeenSet = true;
    m_insightId = std::forward<InsightIdT>(value);
  }
  template <typename InsightIdT = Aws::String>
  Insight& WithInsightId(InsightIdT&& value) {
    SetInsightId(std::forward<InsightIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_insightId;
  bool m_insightIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
