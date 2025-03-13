/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/BackupSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  class ListBackupsResult
  {
  public:
    AWS_DYNAMODB_API ListBackupsResult() = default;
    AWS_DYNAMODB_API ListBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ListBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of <code>BackupSummary</code> objects.</p>
     */
    inline const Aws::Vector<BackupSummary>& GetBackupSummaries() const { return m_backupSummaries; }
    template<typename BackupSummariesT = Aws::Vector<BackupSummary>>
    void SetBackupSummaries(BackupSummariesT&& value) { m_backupSummariesHasBeenSet = true; m_backupSummaries = std::forward<BackupSummariesT>(value); }
    template<typename BackupSummariesT = Aws::Vector<BackupSummary>>
    ListBackupsResult& WithBackupSummaries(BackupSummariesT&& value) { SetBackupSummaries(std::forward<BackupSummariesT>(value)); return *this;}
    template<typename BackupSummariesT = BackupSummary>
    ListBackupsResult& AddBackupSummaries(BackupSummariesT&& value) { m_backupSummariesHasBeenSet = true; m_backupSummaries.emplace_back(std::forward<BackupSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The ARN of the backup last evaluated when the current page of results was
     * returned, inclusive of the current page of results. This value may be specified
     * as the <code>ExclusiveStartBackupArn</code> of a new <code>ListBackups</code>
     * operation in order to fetch the next page of results. </p> <p> If
     * <code>LastEvaluatedBackupArn</code> is empty, then the last page of results has
     * been processed and there are no more results to be retrieved. </p> <p> If
     * <code>LastEvaluatedBackupArn</code> is not empty, this may or may not indicate
     * that there is more data to be returned. All results are guaranteed to have been
     * returned if and only if no value for <code>LastEvaluatedBackupArn</code> is
     * returned. </p>
     */
    inline const Aws::String& GetLastEvaluatedBackupArn() const { return m_lastEvaluatedBackupArn; }
    template<typename LastEvaluatedBackupArnT = Aws::String>
    void SetLastEvaluatedBackupArn(LastEvaluatedBackupArnT&& value) { m_lastEvaluatedBackupArnHasBeenSet = true; m_lastEvaluatedBackupArn = std::forward<LastEvaluatedBackupArnT>(value); }
    template<typename LastEvaluatedBackupArnT = Aws::String>
    ListBackupsResult& WithLastEvaluatedBackupArn(LastEvaluatedBackupArnT&& value) { SetLastEvaluatedBackupArn(std::forward<LastEvaluatedBackupArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBackupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BackupSummary> m_backupSummaries;
    bool m_backupSummariesHasBeenSet = false;

    Aws::String m_lastEvaluatedBackupArn;
    bool m_lastEvaluatedBackupArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
