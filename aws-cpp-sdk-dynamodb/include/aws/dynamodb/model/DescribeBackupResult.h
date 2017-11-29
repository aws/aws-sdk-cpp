/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DYNAMODB_API DescribeBackupResult
  {
  public:
    DescribeBackupResult();
    DescribeBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
