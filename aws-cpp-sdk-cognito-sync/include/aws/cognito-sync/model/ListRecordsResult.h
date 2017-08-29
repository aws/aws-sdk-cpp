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
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-sync/model/Record.h>
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
namespace CognitoSync
{
namespace Model
{
  /**
   * Returned for a successful ListRecordsRequest.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListRecordsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOSYNC_API ListRecordsResult
  {
  public:
    ListRecordsResult();
    ListRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A list of all records.
     */
    inline const Aws::Vector<Record>& GetRecords() const{ return m_records; }

    /**
     * A list of all records.
     */
    inline void SetRecords(const Aws::Vector<Record>& value) { m_records = value; }

    /**
     * A list of all records.
     */
    inline void SetRecords(Aws::Vector<Record>&& value) { m_records = std::move(value); }

    /**
     * A list of all records.
     */
    inline ListRecordsResult& WithRecords(const Aws::Vector<Record>& value) { SetRecords(value); return *this;}

    /**
     * A list of all records.
     */
    inline ListRecordsResult& WithRecords(Aws::Vector<Record>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * A list of all records.
     */
    inline ListRecordsResult& AddRecords(const Record& value) { m_records.push_back(value); return *this; }

    /**
     * A list of all records.
     */
    inline ListRecordsResult& AddRecords(Record&& value) { m_records.push_back(std::move(value)); return *this; }


    /**
     * A pagination token for obtaining the next page of results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline ListRecordsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline ListRecordsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline ListRecordsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * Total number of records.
     */
    inline int GetCount() const{ return m_count; }

    /**
     * Total number of records.
     */
    inline void SetCount(int value) { m_count = value; }

    /**
     * Total number of records.
     */
    inline ListRecordsResult& WithCount(int value) { SetCount(value); return *this;}


    /**
     * Server sync count for this dataset.
     */
    inline long long GetDatasetSyncCount() const{ return m_datasetSyncCount; }

    /**
     * Server sync count for this dataset.
     */
    inline void SetDatasetSyncCount(long long value) { m_datasetSyncCount = value; }

    /**
     * Server sync count for this dataset.
     */
    inline ListRecordsResult& WithDatasetSyncCount(long long value) { SetDatasetSyncCount(value); return *this;}


    /**
     * The user/device that made the last change to this record.
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * The user/device that made the last change to this record.
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedBy = value; }

    /**
     * The user/device that made the last change to this record.
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedBy = std::move(value); }

    /**
     * The user/device that made the last change to this record.
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedBy.assign(value); }

    /**
     * The user/device that made the last change to this record.
     */
    inline ListRecordsResult& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * The user/device that made the last change to this record.
     */
    inline ListRecordsResult& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * The user/device that made the last change to this record.
     */
    inline ListRecordsResult& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * Names of merged datasets.
     */
    inline const Aws::Vector<Aws::String>& GetMergedDatasetNames() const{ return m_mergedDatasetNames; }

    /**
     * Names of merged datasets.
     */
    inline void SetMergedDatasetNames(const Aws::Vector<Aws::String>& value) { m_mergedDatasetNames = value; }

    /**
     * Names of merged datasets.
     */
    inline void SetMergedDatasetNames(Aws::Vector<Aws::String>&& value) { m_mergedDatasetNames = std::move(value); }

    /**
     * Names of merged datasets.
     */
    inline ListRecordsResult& WithMergedDatasetNames(const Aws::Vector<Aws::String>& value) { SetMergedDatasetNames(value); return *this;}

    /**
     * Names of merged datasets.
     */
    inline ListRecordsResult& WithMergedDatasetNames(Aws::Vector<Aws::String>&& value) { SetMergedDatasetNames(std::move(value)); return *this;}

    /**
     * Names of merged datasets.
     */
    inline ListRecordsResult& AddMergedDatasetNames(const Aws::String& value) { m_mergedDatasetNames.push_back(value); return *this; }

    /**
     * Names of merged datasets.
     */
    inline ListRecordsResult& AddMergedDatasetNames(Aws::String&& value) { m_mergedDatasetNames.push_back(std::move(value)); return *this; }

    /**
     * Names of merged datasets.
     */
    inline ListRecordsResult& AddMergedDatasetNames(const char* value) { m_mergedDatasetNames.push_back(value); return *this; }


    /**
     * Indicates whether the dataset exists.
     */
    inline bool GetDatasetExists() const{ return m_datasetExists; }

    /**
     * Indicates whether the dataset exists.
     */
    inline void SetDatasetExists(bool value) { m_datasetExists = value; }

    /**
     * Indicates whether the dataset exists.
     */
    inline ListRecordsResult& WithDatasetExists(bool value) { SetDatasetExists(value); return *this;}


    /**
     * A boolean value specifying whether to delete the dataset locally.
     */
    inline bool GetDatasetDeletedAfterRequestedSyncCount() const{ return m_datasetDeletedAfterRequestedSyncCount; }

    /**
     * A boolean value specifying whether to delete the dataset locally.
     */
    inline void SetDatasetDeletedAfterRequestedSyncCount(bool value) { m_datasetDeletedAfterRequestedSyncCount = value; }

    /**
     * A boolean value specifying whether to delete the dataset locally.
     */
    inline ListRecordsResult& WithDatasetDeletedAfterRequestedSyncCount(bool value) { SetDatasetDeletedAfterRequestedSyncCount(value); return *this;}


    /**
     * A token containing a session ID, identity ID, and expiration.
     */
    inline const Aws::String& GetSyncSessionToken() const{ return m_syncSessionToken; }

    /**
     * A token containing a session ID, identity ID, and expiration.
     */
    inline void SetSyncSessionToken(const Aws::String& value) { m_syncSessionToken = value; }

    /**
     * A token containing a session ID, identity ID, and expiration.
     */
    inline void SetSyncSessionToken(Aws::String&& value) { m_syncSessionToken = std::move(value); }

    /**
     * A token containing a session ID, identity ID, and expiration.
     */
    inline void SetSyncSessionToken(const char* value) { m_syncSessionToken.assign(value); }

    /**
     * A token containing a session ID, identity ID, and expiration.
     */
    inline ListRecordsResult& WithSyncSessionToken(const Aws::String& value) { SetSyncSessionToken(value); return *this;}

    /**
     * A token containing a session ID, identity ID, and expiration.
     */
    inline ListRecordsResult& WithSyncSessionToken(Aws::String&& value) { SetSyncSessionToken(std::move(value)); return *this;}

    /**
     * A token containing a session ID, identity ID, and expiration.
     */
    inline ListRecordsResult& WithSyncSessionToken(const char* value) { SetSyncSessionToken(value); return *this;}

  private:

    Aws::Vector<Record> m_records;

    Aws::String m_nextToken;

    int m_count;

    long long m_datasetSyncCount;

    Aws::String m_lastModifiedBy;

    Aws::Vector<Aws::String> m_mergedDatasetNames;

    bool m_datasetExists;

    bool m_datasetDeletedAfterRequestedSyncCount;

    Aws::String m_syncSessionToken;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
