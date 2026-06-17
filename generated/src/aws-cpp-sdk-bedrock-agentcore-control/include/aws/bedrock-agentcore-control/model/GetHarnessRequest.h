/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class GetHarnessRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetHarnessRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetHarness"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORECONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the harness to retrieve.</p>
   */
  inline const Aws::String& GetHarnessId() const { return m_harnessId; }
  inline bool HarnessIdHasBeenSet() const { return m_harnessIdHasBeenSet; }
  template <typename HarnessIdT = Aws::String>
  void SetHarnessId(HarnessIdT&& value) {
    m_harnessIdHasBeenSet = true;
    m_harnessId = std::forward<HarnessIdT>(value);
  }
  template <typename HarnessIdT = Aws::String>
  GetHarnessRequest& WithHarnessId(HarnessIdT&& value) {
    SetHarnessId(std::forward<HarnessIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specific version of the harness to retrieve. If omitted, returns the current
   * Harness configuration, including its status.</p>
   */
  inline const Aws::String& GetHarnessVersion() const { return m_harnessVersion; }
  inline bool HarnessVersionHasBeenSet() const { return m_harnessVersionHasBeenSet; }
  template <typename HarnessVersionT = Aws::String>
  void SetHarnessVersion(HarnessVersionT&& value) {
    m_harnessVersionHasBeenSet = true;
    m_harnessVersion = std::forward<HarnessVersionT>(value);
  }
  template <typename HarnessVersionT = Aws::String>
  GetHarnessRequest& WithHarnessVersion(HarnessVersionT&& value) {
    SetHarnessVersion(std::forward<HarnessVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_harnessId;

  Aws::String m_harnessVersion;
  bool m_harnessIdHasBeenSet = false;
  bool m_harnessVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
