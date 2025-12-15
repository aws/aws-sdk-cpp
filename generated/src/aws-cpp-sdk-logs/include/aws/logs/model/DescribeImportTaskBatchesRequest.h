/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/ImportStatus.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class DescribeImportTaskBatchesRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API DescribeImportTaskBatchesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeImportTaskBatches"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the import task to get batch information for.</p>
   */
  inline const Aws::String& GetImportId() const { return m_importId; }
  inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }
  template <typename ImportIdT = Aws::String>
  void SetImportId(ImportIdT&& value) {
    m_importIdHasBeenSet = true;
    m_importId = std::forward<ImportIdT>(value);
  }
  template <typename ImportIdT = Aws::String>
  DescribeImportTaskBatchesRequest& WithImportId(ImportIdT&& value) {
    SetImportId(std::forward<ImportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter to list import batches by their status. Accepts multiple
   * status values: IN_PROGRESS, CANCELLED, COMPLETED and FAILED.</p>
   */
  inline const Aws::Vector<ImportStatus>& GetBatchImportStatus() const { return m_batchImportStatus; }
  inline bool BatchImportStatusHasBeenSet() const { return m_batchImportStatusHasBeenSet; }
  template <typename BatchImportStatusT = Aws::Vector<ImportStatus>>
  void SetBatchImportStatus(BatchImportStatusT&& value) {
    m_batchImportStatusHasBeenSet = true;
    m_batchImportStatus = std::forward<BatchImportStatusT>(value);
  }
  template <typename BatchImportStatusT = Aws::Vector<ImportStatus>>
  DescribeImportTaskBatchesRequest& WithBatchImportStatus(BatchImportStatusT&& value) {
    SetBatchImportStatus(std::forward<BatchImportStatusT>(value));
    return *this;
  }
  inline DescribeImportTaskBatchesRequest& AddBatchImportStatus(ImportStatus value) {
    m_batchImportStatusHasBeenSet = true;
    m_batchImportStatus.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of import batches to return in the response. Default:
   * 10</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline DescribeImportTaskBatchesRequest& WithLimit(int value) {
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
  DescribeImportTaskBatchesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_importId;

  Aws::Vector<ImportStatus> m_batchImportStatus;

  int m_limit{0};

  Aws::String m_nextToken;
  bool m_importIdHasBeenSet = false;
  bool m_batchImportStatusHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
