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
class CancelImportTaskRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API CancelImportTaskRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CancelImportTask"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the import task to cancel.</p>
   */
  inline const Aws::String& GetImportId() const { return m_importId; }
  inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }
  template <typename ImportIdT = Aws::String>
  void SetImportId(ImportIdT&& value) {
    m_importIdHasBeenSet = true;
    m_importId = std::forward<ImportIdT>(value);
  }
  template <typename ImportIdT = Aws::String>
  CancelImportTaskRequest& WithImportId(ImportIdT&& value) {
    SetImportId(std::forward<ImportIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_importId;
  bool m_importIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
