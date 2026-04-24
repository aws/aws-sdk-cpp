/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/MinimumThroughputBillingCommitmentInput.h>

#include <utility>

namespace Aws {
namespace Kinesis {
namespace Model {

/**
 */
class UpdateAccountSettingsRequest : public KinesisRequest {
 public:
  AWS_KINESIS_API UpdateAccountSettingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountSettings"; }

  AWS_KINESIS_API Aws::String SerializePayload() const override;

  AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the minimum throughput billing commitment configuration for your
   * account.</p>
   */
  inline const MinimumThroughputBillingCommitmentInput& GetMinimumThroughputBillingCommitment() const {
    return m_minimumThroughputBillingCommitment;
  }
  inline bool MinimumThroughputBillingCommitmentHasBeenSet() const { return m_minimumThroughputBillingCommitmentHasBeenSet; }
  template <typename MinimumThroughputBillingCommitmentT = MinimumThroughputBillingCommitmentInput>
  void SetMinimumThroughputBillingCommitment(MinimumThroughputBillingCommitmentT&& value) {
    m_minimumThroughputBillingCommitmentHasBeenSet = true;
    m_minimumThroughputBillingCommitment = std::forward<MinimumThroughputBillingCommitmentT>(value);
  }
  template <typename MinimumThroughputBillingCommitmentT = MinimumThroughputBillingCommitmentInput>
  UpdateAccountSettingsRequest& WithMinimumThroughputBillingCommitment(MinimumThroughputBillingCommitmentT&& value) {
    SetMinimumThroughputBillingCommitment(std::forward<MinimumThroughputBillingCommitmentT>(value));
    return *this;
  }
  ///@}
 private:
  MinimumThroughputBillingCommitmentInput m_minimumThroughputBillingCommitment;
  bool m_minimumThroughputBillingCommitmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
