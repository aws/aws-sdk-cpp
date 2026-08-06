/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/ListAccessPointsMember.h>
#include <aws/core/http/HttpResponse.h>
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
class ListBackupAccessPointsByRecoveryPointResult {
 public:
  AWS_BACKUP_API ListBackupAccessPointsByRecoveryPointResult() = default;
  AWS_BACKUP_API ListBackupAccessPointsByRecoveryPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BACKUP_API ListBackupAccessPointsByRecoveryPointResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of backup access points, each containing metadata such as its name,
   * ARN, status, and associated recovery point.</p>
   */
  inline const Aws::Vector<ListAccessPointsMember>& GetBackupAccessPoints() const { return m_backupAccessPoints; }
  template <typename BackupAccessPointsT = Aws::Vector<ListAccessPointsMember>>
  void SetBackupAccessPoints(BackupAccessPointsT&& value) {
    m_backupAccessPointsHasBeenSet = true;
    m_backupAccessPoints = std::forward<BackupAccessPointsT>(value);
  }
  template <typename BackupAccessPointsT = Aws::Vector<ListAccessPointsMember>>
  ListBackupAccessPointsByRecoveryPointResult& WithBackupAccessPoints(BackupAccessPointsT&& value) {
    SetBackupAccessPoints(std::forward<BackupAccessPointsT>(value));
    return *this;
  }
  template <typename BackupAccessPointsT = ListAccessPointsMember>
  ListBackupAccessPointsByRecoveryPointResult& AddBackupAccessPoints(BackupAccessPointsT&& value) {
    m_backupAccessPointsHasBeenSet = true;
    m_backupAccessPoints.emplace_back(std::forward<BackupAccessPointsT>(value));
    return *this;
  }
  ///@}

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
  ListBackupAccessPointsByRecoveryPointResult& WithNextToken(NextTokenT&& value) {
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
  ListBackupAccessPointsByRecoveryPointResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ListAccessPointsMember> m_backupAccessPoints;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_backupAccessPointsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
