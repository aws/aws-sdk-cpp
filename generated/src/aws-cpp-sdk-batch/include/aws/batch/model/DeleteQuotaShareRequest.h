/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/BatchRequest.h>
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Batch {
namespace Model {

/**
 */
class DeleteQuotaShareRequest : public BatchRequest {
 public:
  AWS_BATCH_API DeleteQuotaShareRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteQuotaShare"; }

  AWS_BATCH_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the quota share.</p>
   */
  inline const Aws::String& GetQuotaShareArn() const { return m_quotaShareArn; }
  inline bool QuotaShareArnHasBeenSet() const { return m_quotaShareArnHasBeenSet; }
  template <typename QuotaShareArnT = Aws::String>
  void SetQuotaShareArn(QuotaShareArnT&& value) {
    m_quotaShareArnHasBeenSet = true;
    m_quotaShareArn = std::forward<QuotaShareArnT>(value);
  }
  template <typename QuotaShareArnT = Aws::String>
  DeleteQuotaShareRequest& WithQuotaShareArn(QuotaShareArnT&& value) {
    SetQuotaShareArn(std::forward<QuotaShareArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_quotaShareArn;
  bool m_quotaShareArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
