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
class GetConfigurationBundleRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetConfigurationBundleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetConfigurationBundle"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORECONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier of the configuration bundle to retrieve.</p>
   */
  inline const Aws::String& GetBundleId() const { return m_bundleId; }
  inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
  template <typename BundleIdT = Aws::String>
  void SetBundleId(BundleIdT&& value) {
    m_bundleIdHasBeenSet = true;
    m_bundleId = std::forward<BundleIdT>(value);
  }
  template <typename BundleIdT = Aws::String>
  GetConfigurationBundleRequest& WithBundleId(BundleIdT&& value) {
    SetBundleId(std::forward<BundleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The branch name to get the latest version from. If not specified, returns the
   * latest version on the mainline branch.</p>
   */
  inline const Aws::String& GetBranchName() const { return m_branchName; }
  inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
  template <typename BranchNameT = Aws::String>
  void SetBranchName(BranchNameT&& value) {
    m_branchNameHasBeenSet = true;
    m_branchName = std::forward<BranchNameT>(value);
  }
  template <typename BranchNameT = Aws::String>
  GetConfigurationBundleRequest& WithBranchName(BranchNameT&& value) {
    SetBranchName(std::forward<BranchNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bundleId;

  Aws::String m_branchName;
  bool m_bundleIdHasBeenSet = false;
  bool m_branchNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
