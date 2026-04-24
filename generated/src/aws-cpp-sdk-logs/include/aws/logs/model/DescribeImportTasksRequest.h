/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/ImportStatus.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class DescribeImportTasksRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API DescribeImportTasksRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeImportTasks"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Optional filter to describe a specific import task by its ID.</p>
   */
  inline const Aws::String& GetImportId() const { return m_importId; }
  inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }
  template <typename ImportIdT = Aws::String>
  void SetImportId(ImportIdT&& value) {
    m_importIdHasBeenSet = true;
    m_importId = std::forward<ImportIdT>(value);
  }
  template <typename ImportIdT = Aws::String>
  DescribeImportTasksRequest& WithImportId(ImportIdT&& value) {
    SetImportId(std::forward<ImportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter to list imports by their status. Valid values are
   * IN_PROGRESS, CANCELLED, COMPLETED and FAILED.</p>
   */
  inline ImportStatus GetImportStatus() const { return m_importStatus; }
  inline bool ImportStatusHasBeenSet() const { return m_importStatusHasBeenSet; }
  inline void SetImportStatus(ImportStatus value) {
    m_importStatusHasBeenSet = true;
    m_importStatus = value;
  }
  inline DescribeImportTasksRequest& WithImportStatus(ImportStatus value) {
    SetImportStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter to list imports from a specific source</p>
   */
  inline const Aws::String& GetImportSourceArn() const { return m_importSourceArn; }
  inline bool ImportSourceArnHasBeenSet() const { return m_importSourceArnHasBeenSet; }
  template <typename ImportSourceArnT = Aws::String>
  void SetImportSourceArn(ImportSourceArnT&& value) {
    m_importSourceArnHasBeenSet = true;
    m_importSourceArn = std::forward<ImportSourceArnT>(value);
  }
  template <typename ImportSourceArnT = Aws::String>
  DescribeImportTasksRequest& WithImportSourceArn(ImportSourceArnT&& value) {
    SetImportSourceArn(std::forward<ImportSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of import tasks to return in the response. Default: 50</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline DescribeImportTasksRequest& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token for the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeImportTasksRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_importId;

  ImportStatus m_importStatus{ImportStatus::NOT_SET};

  Aws::String m_importSourceArn;

  int m_limit{0};

  Aws::String m_nextToken;
  bool m_importIdHasBeenSet = false;
  bool m_importStatusHasBeenSet = false;
  bool m_importSourceArnHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
