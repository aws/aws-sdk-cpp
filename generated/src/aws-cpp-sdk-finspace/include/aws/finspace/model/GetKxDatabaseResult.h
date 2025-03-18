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
    AWS_FINSPACE_API GetKxDatabaseResult() = default;
    AWS_FINSPACE_API GetKxDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetKxDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the kdb database for which the information is retrieved.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    GetKxDatabaseResult& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN identifier of the database.</p>
     */
    inline const Aws::String& GetDatabaseArn() const { return m_databaseArn; }
    template<typename DatabaseArnT = Aws::String>
    void SetDatabaseArn(DatabaseArnT&& value) { m_databaseArnHasBeenSet = true; m_databaseArn = std::forward<DatabaseArnT>(value); }
    template<typename DatabaseArnT = Aws::String>
    GetKxDatabaseResult& WithDatabaseArn(DatabaseArnT&& value) { SetDatabaseArn(std::forward<DatabaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    GetKxDatabaseResult& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the database.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetKxDatabaseResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the database is created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetKxDatabaseResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the database was modified. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const { return m_lastModifiedTimestamp; }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    void SetLastModifiedTimestamp(LastModifiedTimestampT&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::forward<LastModifiedTimestampT>(value); }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    GetKxDatabaseResult& WithLastModifiedTimestamp(LastModifiedTimestampT&& value) { SetLastModifiedTimestamp(std::forward<LastModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline const Aws::String& GetLastCompletedChangesetId() const { return m_lastCompletedChangesetId; }
    template<typename LastCompletedChangesetIdT = Aws::String>
    void SetLastCompletedChangesetId(LastCompletedChangesetIdT&& value) { m_lastCompletedChangesetIdHasBeenSet = true; m_lastCompletedChangesetId = std::forward<LastCompletedChangesetIdT>(value); }
    template<typename LastCompletedChangesetIdT = Aws::String>
    GetKxDatabaseResult& WithLastCompletedChangesetId(LastCompletedChangesetIdT&& value) { SetLastCompletedChangesetId(std::forward<LastCompletedChangesetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of bytes in the database.</p>
     */
    inline long long GetNumBytes() const { return m_numBytes; }
    inline void SetNumBytes(long long value) { m_numBytesHasBeenSet = true; m_numBytes = value; }
    inline GetKxDatabaseResult& WithNumBytes(long long value) { SetNumBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of changesets in the database.</p>
     */
    inline int GetNumChangesets() const { return m_numChangesets; }
    inline void SetNumChangesets(int value) { m_numChangesetsHasBeenSet = true; m_numChangesets = value; }
    inline GetKxDatabaseResult& WithNumChangesets(int value) { SetNumChangesets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of files in the database.</p>
     */
    inline int GetNumFiles() const { return m_numFiles; }
    inline void SetNumFiles(int value) { m_numFilesHasBeenSet = true; m_numFiles = value; }
    inline GetKxDatabaseResult& WithNumFiles(int value) { SetNumFiles(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetKxDatabaseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_databaseArn;
    bool m_databaseArnHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp{};
    bool m_lastModifiedTimestampHasBeenSet = false;

    Aws::String m_lastCompletedChangesetId;
    bool m_lastCompletedChangesetIdHasBeenSet = false;

    long long m_numBytes{0};
    bool m_numBytesHasBeenSet = false;

    int m_numChangesets{0};
    bool m_numChangesetsHasBeenSet = false;

    int m_numFiles{0};
    bool m_numFilesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
