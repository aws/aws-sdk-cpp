/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BackupDetails.h>
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
  class CreateBackupResult
  {
  public:
    AWS_DYNAMODB_API CreateBackupResult();
    AWS_DYNAMODB_API CreateBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API CreateBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateBackupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateBackupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateBackupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    BackupDetails m_backupDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
