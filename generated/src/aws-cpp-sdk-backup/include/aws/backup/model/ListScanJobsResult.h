/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/ScanJob.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Backup {
namespace Model {
class ListScanJobsResult {
 public:
  AWS_BACKUP_API ListScanJobsResult() = default;
  AWS_BACKUP_API ListScanJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BACKUP_API ListScanJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The next item following a partial list of returned items. For example, if a
   * request is made to return <code>MaxResults</code> number of items,
   * <code>NextToken</code> allows you to return more items in your list starting at
   * the location pointed to by the next token.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListScanJobsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of structures containing metadata about your scan jobs returned in
   * JSON format.</p>
   */
  inline const Aws::Vector<ScanJob>& GetScanJobs() const { return m_scanJobs; }
  template <typename ScanJobsT = Aws::Vector<ScanJob>>
  void SetScanJobs(ScanJobsT&& value) {
    m_scanJobsHasBeenSet = true;
    m_scanJobs = std::forward<ScanJobsT>(value);
  }
  template <typename ScanJobsT = Aws::Vector<ScanJob>>
  ListScanJobsResult& WithScanJobs(ScanJobsT&& value) {
    SetScanJobs(std::forward<ScanJobsT>(value));
    return *this;
  }
  template <typename ScanJobsT = ScanJob>
  ListScanJobsResult& AddScanJobs(ScanJobsT&& value) {
    m_scanJobsHasBeenSet = true;
    m_scanJobs.emplace_back(std::forward<ScanJobsT>(value));
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
  ListScanJobsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<ScanJob> m_scanJobs;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_scanJobsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
