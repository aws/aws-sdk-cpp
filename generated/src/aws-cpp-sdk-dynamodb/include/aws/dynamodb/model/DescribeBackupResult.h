/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BackupDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeBackupResult
  {
  public:
    AWS_DYNAMODB_API DescribeBackupResult() = default;
    AWS_DYNAMODB_API DescribeBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the description of the backup created for the table.</p>
     */
    inline const BackupDescription& GetBackupDescription() const { return m_backupDescription; }
    template<typename BackupDescriptionT = BackupDescription>
    void SetBackupDescription(BackupDescriptionT&& value) { m_backupDescriptionHasBeenSet = true; m_backupDescription = std::forward<BackupDescriptionT>(value); }
    template<typename BackupDescriptionT = BackupDescription>
    DescribeBackupResult& WithBackupDescription(BackupDescriptionT&& value) { SetBackupDescription(std::forward<BackupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBackupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BackupDescription m_backupDescription;
    bool m_backupDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
