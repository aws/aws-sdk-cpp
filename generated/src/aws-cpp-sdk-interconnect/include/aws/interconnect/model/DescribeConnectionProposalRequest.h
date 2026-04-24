/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/interconnect/InterconnectRequest.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Interconnect {
namespace Model {

/**
 */
class DescribeConnectionProposalRequest : public InterconnectRequest {
 public:
  AWS_INTERCONNECT_API DescribeConnectionProposalRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeConnectionProposal"; }

  AWS_INTERCONNECT_API Aws::String SerializePayload() const override;

  AWS_INTERCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>An Activation Key that was generated on a supported partner's portal. This
   * key captures the desired parameters from the initial creation request.</p>
   */
  inline const Aws::String& GetActivationKey() const { return m_activationKey; }
  inline bool ActivationKeyHasBeenSet() const { return m_activationKeyHasBeenSet; }
  template <typename ActivationKeyT = Aws::String>
  void SetActivationKey(ActivationKeyT&& value) {
    m_activationKeyHasBeenSet = true;
    m_activationKey = std::forward<ActivationKeyT>(value);
  }
  template <typename ActivationKeyT = Aws::String>
  DescribeConnectionProposalRequest& WithActivationKey(ActivationKeyT&& value) {
    SetActivationKey(std::forward<ActivationKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_activationKey;
  bool m_activationKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
