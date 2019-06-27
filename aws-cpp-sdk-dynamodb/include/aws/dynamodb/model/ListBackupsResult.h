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
  class AWS_DYNAMODB_API ListBackupsResult
  {
  public:
    ListBackupsResult();
    ListBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of <code>BackupSummary</code> objects.</p>
     */
    inline const Aws::Vector<BackupSummary>& GetBackupSummaries() const{ return m_backupSummaries; }

    /**
     * <p>List of <code>BackupSummary</code> objects.</p>
     */
    inline void SetBackupSummaries(const Aws::Vector<BackupSummary>& value) { m_backupSummaries = value; }

    /**
     * <p>List of <code>BackupSummary</code> objects.</p>
     */
    inline void SetBackupSummaries(Aws::Vector<BackupSummary>&& value) { m_backupSummaries = std::move(value); }

    /**
     * <p>List of <code>BackupSummary</code> objects.</p>
     */
    inline ListBackupsResult& WithBackupSummaries(const Aws::Vector<BackupSummary>& value) { SetBackupSummaries(value); return *this;}

    /**
     * <p>List of <code>BackupSummary</code> objects.</p>
     */
    inline ListBackupsResult& WithBackupSummaries(Aws::Vector<BackupSummary>&& value) { SetBackupSummaries(std::move(value)); return *this;}

    /**
     * <p>List of <code>BackupSummary</code> objects.</p>
     */
    inline ListBackupsResult& AddBackupSummaries(const BackupSummary& value) { m_backupSummaries.push_back(value); return *this; }

    /**
     * <p>List of <code>BackupSummary</code> objects.</p>
     */
    inline ListBackupsResult& AddBackupSummaries(BackupSummary&& value) { m_backupSummaries.push_back(std::move(value)); return *this; }


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
    inline const Aws::String& GetLastEvaluatedBackupArn() const{ return m_lastEvaluatedBackupArn; }

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
    inline void SetLastEvaluatedBackupArn(const Aws::String& value) { m_lastEvaluatedBackupArn = value; }

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
    inline void SetLastEvaluatedBackupArn(Aws::String&& value) { m_lastEvaluatedBackupArn = std::move(value); }

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
    inline void SetLastEvaluatedBackupArn(const char* value) { m_lastEvaluatedBackupArn.assign(value); }

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
    inline ListBackupsResult& WithLastEvaluatedBackupArn(const Aws::String& value) { SetLastEvaluatedBackupArn(value); return *this;}

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
    inline ListBackupsResult& WithLastEvaluatedBackupArn(Aws::String&& value) { SetLastEvaluatedBackupArn(std::move(value)); return *this;}

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
    inline ListBackupsResult& WithLastEvaluatedBackupArn(const char* value) { SetLastEvaluatedBackupArn(value); return *this;}

  private:

    Aws::Vector<BackupSummary> m_backupSummaries;

    Aws::String m_lastEvaluatedBackupArn;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
