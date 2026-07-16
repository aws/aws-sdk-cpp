/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/StorageTier.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class PutStorageTierPolicyRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API PutStorageTierPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutStorageTierPolicy"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The storage tier to set for the account. Valid values are
   * <code>STANDARD</code> and <code>INTELLIGENT_TIERING</code>.</p>
   */
  inline StorageTier GetStorageTier() const { return m_storageTier; }
  inline bool StorageTierHasBeenSet() const { return m_storageTierHasBeenSet; }
  inline void SetStorageTier(StorageTier value) {
    m_storageTierHasBeenSet = true;
    m_storageTier = value;
  }
  inline PutStorageTierPolicyRequest& WithStorageTier(StorageTier value) {
    SetStorageTier(value);
    return *this;
  }
  ///@}
 private:
  StorageTier m_storageTier{StorageTier::NOT_SET};
  bool m_storageTierHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
