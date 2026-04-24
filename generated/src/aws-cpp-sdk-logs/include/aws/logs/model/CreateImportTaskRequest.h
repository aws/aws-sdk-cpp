/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/ImportFilter.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class CreateImportTaskRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API CreateImportTaskRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateImportTask"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN of the source to import from.</p>
   */
  inline const Aws::String& GetImportSourceArn() const { return m_importSourceArn; }
  inline bool ImportSourceArnHasBeenSet() const { return m_importSourceArnHasBeenSet; }
  template <typename ImportSourceArnT = Aws::String>
  void SetImportSourceArn(ImportSourceArnT&& value) {
    m_importSourceArnHasBeenSet = true;
    m_importSourceArn = std::forward<ImportSourceArnT>(value);
  }
  template <typename ImportSourceArnT = Aws::String>
  CreateImportTaskRequest& WithImportSourceArn(ImportSourceArnT&& value) {
    SetImportSourceArn(std::forward<ImportSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that grants CloudWatch Logs permission to import from
   * the CloudTrail Lake Event Data Store.</p>
   */
  inline const Aws::String& GetImportRoleArn() const { return m_importRoleArn; }
  inline bool ImportRoleArnHasBeenSet() const { return m_importRoleArnHasBeenSet; }
  template <typename ImportRoleArnT = Aws::String>
  void SetImportRoleArn(ImportRoleArnT&& value) {
    m_importRoleArnHasBeenSet = true;
    m_importRoleArn = std::forward<ImportRoleArnT>(value);
  }
  template <typename ImportRoleArnT = Aws::String>
  CreateImportTaskRequest& WithImportRoleArn(ImportRoleArnT&& value) {
    SetImportRoleArn(std::forward<ImportRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filters to constrain the import by CloudTrail event time. Times are
   * specified in Unix timestamp milliseconds. The range of data being imported must
   * be within the specified source's retention period.</p>
   */
  inline const ImportFilter& GetImportFilter() const { return m_importFilter; }
  inline bool ImportFilterHasBeenSet() const { return m_importFilterHasBeenSet; }
  template <typename ImportFilterT = ImportFilter>
  void SetImportFilter(ImportFilterT&& value) {
    m_importFilterHasBeenSet = true;
    m_importFilter = std::forward<ImportFilterT>(value);
  }
  template <typename ImportFilterT = ImportFilter>
  CreateImportTaskRequest& WithImportFilter(ImportFilterT&& value) {
    SetImportFilter(std::forward<ImportFilterT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_importSourceArn;

  Aws::String m_importRoleArn;

  ImportFilter m_importFilter;
  bool m_importSourceArnHasBeenSet = false;
  bool m_importRoleArnHasBeenSet = false;
  bool m_importFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
