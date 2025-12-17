/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/ImportBatch.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {
class DescribeImportTaskBatchesResult {
 public:
  AWS_CLOUDWATCHLOGS_API DescribeImportTaskBatchesResult() = default;
  AWS_CLOUDWATCHLOGS_API DescribeImportTaskBatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API DescribeImportTaskBatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the source being imported from.</p>
   */
  inline const Aws::String& GetImportSourceArn() const { return m_importSourceArn; }
  template <typename ImportSourceArnT = Aws::String>
  void SetImportSourceArn(ImportSourceArnT&& value) {
    m_importSourceArnHasBeenSet = true;
    m_importSourceArn = std::forward<ImportSourceArnT>(value);
  }
  template <typename ImportSourceArnT = Aws::String>
  DescribeImportTaskBatchesResult& WithImportSourceArn(ImportSourceArnT&& value) {
    SetImportSourceArn(std::forward<ImportSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the import task.</p>
   */
  inline const Aws::String& GetImportId() const { return m_importId; }
  template <typename ImportIdT = Aws::String>
  void SetImportId(ImportIdT&& value) {
    m_importIdHasBeenSet = true;
    m_importId = std::forward<ImportIdT>(value);
  }
  template <typename ImportIdT = Aws::String>
  DescribeImportTaskBatchesResult& WithImportId(ImportIdT&& value) {
    SetImportId(std::forward<ImportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of import batches that match the request filters.</p>
   */
  inline const Aws::Vector<ImportBatch>& GetImportBatches() const { return m_importBatches; }
  template <typename ImportBatchesT = Aws::Vector<ImportBatch>>
  void SetImportBatches(ImportBatchesT&& value) {
    m_importBatchesHasBeenSet = true;
    m_importBatches = std::forward<ImportBatchesT>(value);
  }
  template <typename ImportBatchesT = Aws::Vector<ImportBatch>>
  DescribeImportTaskBatchesResult& WithImportBatches(ImportBatchesT&& value) {
    SetImportBatches(std::forward<ImportBatchesT>(value));
    return *this;
  }
  template <typename ImportBatchesT = ImportBatch>
  DescribeImportTaskBatchesResult& AddImportBatches(ImportBatchesT&& value) {
    m_importBatchesHasBeenSet = true;
    m_importBatches.emplace_back(std::forward<ImportBatchesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use when requesting the next set of results. Not present if
   * there are no additional results to retrieve.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeImportTaskBatchesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeImportTaskBatchesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_importSourceArn;

  Aws::String m_importId;

  Aws::Vector<ImportBatch> m_importBatches;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_importSourceArnHasBeenSet = false;
  bool m_importIdHasBeenSet = false;
  bool m_importBatchesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
