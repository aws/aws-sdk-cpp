/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BackupDescription.h>
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
    AWS_DYNAMODB_API DescribeBackupResult();
    AWS_DYNAMODB_API DescribeBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the description of the backup created for the table.</p>
     */
    inline const BackupDescription& GetBackupDescription() const{ return m_backupDescription; }

    /**
     * <p>Contains the description of the backup created for the table.</p>
     */
    inline void SetBackupDescription(const BackupDescription& value) { m_backupDescription = value; }

    /**
     * <p>Contains the description of the backup created for the table.</p>
     */
    inline void SetBackupDescription(BackupDescription&& value) { m_backupDescription = std::move(value); }

    /**
     * <p>Contains the description of the backup created for the table.</p>
     */
    inline DescribeBackupResult& WithBackupDescription(const BackupDescription& value) { SetBackupDescription(value); return *this;}

    /**
     * <p>Contains the description of the backup created for the table.</p>
     */
    inline DescribeBackupResult& WithBackupDescription(BackupDescription&& value) { SetBackupDescription(std::move(value)); return *this;}

  private:

    BackupDescription m_backupDescription;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
