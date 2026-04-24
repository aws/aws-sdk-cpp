/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/BraketRequest.h>
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Braket {
namespace Model {

/**
 */
class DeleteSpendingLimitRequest : public BraketRequest {
 public:
  AWS_BRAKET_API DeleteSpendingLimitRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteSpendingLimit"; }

  AWS_BRAKET_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the spending limit to delete.</p>
   */
  inline const Aws::String& GetSpendingLimitArn() const { return m_spendingLimitArn; }
  inline bool SpendingLimitArnHasBeenSet() const { return m_spendingLimitArnHasBeenSet; }
  template <typename SpendingLimitArnT = Aws::String>
  void SetSpendingLimitArn(SpendingLimitArnT&& value) {
    m_spendingLimitArnHasBeenSet = true;
    m_spendingLimitArn = std::forward<SpendingLimitArnT>(value);
  }
  template <typename SpendingLimitArnT = Aws::String>
  DeleteSpendingLimitRequest& WithSpendingLimitArn(SpendingLimitArnT&& value) {
    SetSpendingLimitArn(std::forward<SpendingLimitArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spendingLimitArn;
  bool m_spendingLimitArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
