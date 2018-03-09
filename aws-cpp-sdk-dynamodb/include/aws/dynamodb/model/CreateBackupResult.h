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
#include <aws/dynamodb/model/BackupDetails.h>
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
  class AWS_DYNAMODB_API CreateBackupResult
  {
  public:
    CreateBackupResult();
    CreateBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the details of the backup created for the table.</p>
     */
    inline const BackupDetails& GetBackupDetails() const{ return m_backupDetails; }

    /**
     * <p>Contains the details of the backup created for the table.</p>
     */
    inline void SetBackupDetails(const BackupDetails& value) { m_backupDetails = value; }

    /**
     * <p>Contains the details of the backup created for the table.</p>
     */
    inline void SetBackupDetails(BackupDetails&& value) { m_backupDetails = std::move(value); }

    /**
     * <p>Contains the details of the backup created for the table.</p>
     */
    inline CreateBackupResult& WithBackupDetails(const BackupDetails& value) { SetBackupDetails(value); return *this;}

    /**
     * <p>Contains the details of the backup created for the table.</p>
     */
    inline CreateBackupResult& WithBackupDetails(BackupDetails&& value) { SetBackupDetails(std::move(value)); return *this;}

  private:

    BackupDetails m_backupDetails;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
