/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class DeleteLookupTableRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API DeleteLookupTableRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteLookupTable"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN of the lookup table to delete.</p>
   */
  inline const Aws::String& GetLookupTableArn() const { return m_lookupTableArn; }
  inline bool LookupTableArnHasBeenSet() const { return m_lookupTableArnHasBeenSet; }
  template <typename LookupTableArnT = Aws::String>
  void SetLookupTableArn(LookupTableArnT&& value) {
    m_lookupTableArnHasBeenSet = true;
    m_lookupTableArn = std::forward<LookupTableArnT>(value);
  }
  template <typename LookupTableArnT = Aws::String>
  DeleteLookupTableRequest& WithLookupTableArn(LookupTableArnT&& value) {
    SetLookupTableArn(std::forward<LookupTableArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_lookupTableArn;
  bool m_lookupTableArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
