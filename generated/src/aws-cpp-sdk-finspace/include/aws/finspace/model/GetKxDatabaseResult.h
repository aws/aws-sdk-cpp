/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace finspace
{
namespace Model
{
  class GetKxDatabaseResult
  {
  public:
    AWS_FINSPACE_API GetKxDatabaseResult();
    AWS_FINSPACE_API GetKxDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetKxDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the kdb database for which the information is retrieved.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the kdb database for which the information is retrieved.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseName = value; }

    /**
     * <p>The name of the kdb database for which the information is retrieved.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseName = std::move(value); }

    /**
     * <p>The name of the kdb database for which the information is retrieved.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseName.assign(value); }

    /**
     * <p>The name of the kdb database for which the information is retrieved.</p>
     */
    inline GetKxDatabaseResult& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the kdb database for which the information is retrieved.</p>
     */
    inline GetKxDatabaseResult& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the kdb database for which the information is retrieved.</p>
     */
    inline GetKxDatabaseResult& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The ARN identifier of the database.</p>
     */
    inline const Aws::String& GetDatabaseArn() const{ return m_databaseArn; }

    /**
     * <p>The ARN identifier of the database.</p>
     */
    inline void SetDatabaseArn(const Aws::String& value) { m_databaseArn = value; }

    /**
     * <p>The ARN identifier of the database.</p>
     */
    inline void SetDatabaseArn(Aws::String&& value) { m_databaseArn = std::move(value); }

    /**
     * <p>The ARN identifier of the database.</p>
     */
    inline void SetDatabaseArn(const char* value) { m_databaseArn.assign(value); }

    /**
     * <p>The ARN identifier of the database.</p>
     */
    inline GetKxDatabaseResult& WithDatabaseArn(const Aws::String& value) { SetDatabaseArn(value); return *this;}

    /**
     * <p>The ARN identifier of the database.</p>
     */
    inline GetKxDatabaseResult& WithDatabaseArn(Aws::String&& value) { SetDatabaseArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifier of the database.</p>
     */
    inline GetKxDatabaseResult& WithDatabaseArn(const char* value) { SetDatabaseArn(value); return *this;}


    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline GetKxDatabaseResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline GetKxDatabaseResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline GetKxDatabaseResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>A description of the database.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the database.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the database.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the database.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the database.</p>
     */
    inline GetKxDatabaseResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the database.</p>
     */
    inline GetKxDatabaseResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the database.</p>
     */
    inline GetKxDatabaseResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The timestamp at which the database is created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The timestamp at which the database is created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The timestamp at which the database is created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The timestamp at which the database is created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxDatabaseResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the database is created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxDatabaseResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The last time that the database was modified. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }

    /**
     * <p>The last time that the database was modified. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }

    /**
     * <p>The last time that the database was modified. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }

    /**
     * <p>The last time that the database was modified. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxDatabaseResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p>The last time that the database was modified. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxDatabaseResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline const Aws::String& GetLastCompletedChangesetId() const{ return m_lastCompletedChangesetId; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetLastCompletedChangesetId(const Aws::String& value) { m_lastCompletedChangesetId = value; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetLastCompletedChangesetId(Aws::String&& value) { m_lastCompletedChangesetId = std::move(value); }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetLastCompletedChangesetId(const char* value) { m_lastCompletedChangesetId.assign(value); }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline GetKxDatabaseResult& WithLastCompletedChangesetId(const Aws::String& value) { SetLastCompletedChangesetId(value); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline GetKxDatabaseResult& WithLastCompletedChangesetId(Aws::String&& value) { SetLastCompletedChangesetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline GetKxDatabaseResult& WithLastCompletedChangesetId(const char* value) { SetLastCompletedChangesetId(value); return *this;}


    /**
     * <p>The total number of bytes in the database.</p>
     */
    inline long long GetNumBytes() const{ return m_numBytes; }

    /**
     * <p>The total number of bytes in the database.</p>
     */
    inline void SetNumBytes(long long value) { m_numBytes = value; }

    /**
     * <p>The total number of bytes in the database.</p>
     */
    inline GetKxDatabaseResult& WithNumBytes(long long value) { SetNumBytes(value); return *this;}


    /**
     * <p>The total number of changesets in the database.</p>
     */
    inline int GetNumChangesets() const{ return m_numChangesets; }

    /**
     * <p>The total number of changesets in the database.</p>
     */
    inline void SetNumChangesets(int value) { m_numChangesets = value; }

    /**
     * <p>The total number of changesets in the database.</p>
     */
    inline GetKxDatabaseResult& WithNumChangesets(int value) { SetNumChangesets(value); return *this;}


    /**
     * <p>The total number of files in the database.</p>
     */
    inline int GetNumFiles() const{ return m_numFiles; }

    /**
     * <p>The total number of files in the database.</p>
     */
    inline void SetNumFiles(int value) { m_numFiles = value; }

    /**
     * <p>The total number of files in the database.</p>
     */
    inline GetKxDatabaseResult& WithNumFiles(int value) { SetNumFiles(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetKxDatabaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetKxDatabaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetKxDatabaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_databaseName;

    Aws::String m_databaseArn;

    Aws::String m_environmentId;

    Aws::String m_description;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_lastModifiedTimestamp;

    Aws::String m_lastCompletedChangesetId;

    long long m_numBytes;

    int m_numChangesets;

    int m_numFiles;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
