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
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class DeleteConfigurationBundleRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API DeleteConfigurationBundleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteConfigurationBundle"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the configuration bundle to delete.</p>
   */
  inline const Aws::String& GetBundleId() const { return m_bundleId; }
  inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
  template <typename BundleIdT = Aws::String>
  void SetBundleId(BundleIdT&& value) {
    m_bundleIdHasBeenSet = true;
    m_bundleId = std::forward<BundleIdT>(value);
  }
  template <typename BundleIdT = Aws::String>
  DeleteConfigurationBundleRequest& WithBundleId(BundleIdT&& value) {
    SetBundleId(std::forward<BundleIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bundleId;
  bool m_bundleIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
