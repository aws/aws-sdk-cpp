/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListRecordsResult
  {
  public:
    AWS_COGNITOSYNC_API ListRecordsResult() = default;
    AWS_COGNITOSYNC_API ListRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API ListRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A list of all records.
     */
    inline const Aws::Vector<Record>& GetRecords() const { return m_records; }
    template<typename RecordsT = Aws::Vector<Record>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<Record>>
    ListRecordsResult& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = Record>
    ListRecordsResult& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A pagination token for obtaining the next page of results.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecordsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Total number of records.
     */
    inline int GetCount() const { return m_count; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline ListRecordsResult& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * Server sync count for this dataset.
     */
    inline long long GetDatasetSyncCount() const { return m_datasetSyncCount; }
    inline void SetDatasetSyncCount(long long value) { m_datasetSyncCountHasBeenSet = true; m_datasetSyncCount = value; }
    inline ListRecordsResult& WithDatasetSyncCount(long long value) { SetDatasetSyncCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The user/device that made the last change to this record.
     */
    inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
    template<typename LastModifiedByT = Aws::String>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = Aws::String>
    ListRecordsResult& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Names of merged datasets.
     */
    inline const Aws::Vector<Aws::String>& GetMergedDatasetNames() const { return m_mergedDatasetNames; }
    template<typename MergedDatasetNamesT = Aws::Vector<Aws::String>>
    void SetMergedDatasetNames(MergedDatasetNamesT&& value) { m_mergedDatasetNamesHasBeenSet = true; m_mergedDatasetNames = std::forward<MergedDatasetNamesT>(value); }
    template<typename MergedDatasetNamesT = Aws::Vector<Aws::String>>
    ListRecordsResult& WithMergedDatasetNames(MergedDatasetNamesT&& value) { SetMergedDatasetNames(std::forward<MergedDatasetNamesT>(value)); return *this;}
    template<typename MergedDatasetNamesT = Aws::String>
    ListRecordsResult& AddMergedDatasetNames(MergedDatasetNamesT&& value) { m_mergedDatasetNamesHasBeenSet = true; m_mergedDatasetNames.emplace_back(std::forward<MergedDatasetNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Indicates whether the dataset exists.
     */
    inline bool GetDatasetExists() const { return m_datasetExists; }
    inline void SetDatasetExists(bool value) { m_datasetExistsHasBeenSet = true; m_datasetExists = value; }
    inline ListRecordsResult& WithDatasetExists(bool value) { SetDatasetExists(value); return *this;}
    ///@}

    ///@{
    /**
     * A boolean value specifying whether to delete the dataset locally.
     */
    inline bool GetDatasetDeletedAfterRequestedSyncCount() const { return m_datasetDeletedAfterRequestedSyncCount; }
    inline void SetDatasetDeletedAfterRequestedSyncCount(bool value) { m_datasetDeletedAfterRequestedSyncCountHasBeenSet = true; m_datasetDeletedAfterRequestedSyncCount = value; }
    inline ListRecordsResult& WithDatasetDeletedAfterRequestedSyncCount(bool value) { SetDatasetDeletedAfterRequestedSyncCount(value); return *this;}
    ///@}

    ///@{
    /**
     * A token containing a session ID, identity ID, and expiration.
     */
    inline const Aws::String& GetSyncSessionToken() const { return m_syncSessionToken; }
    template<typename SyncSessionTokenT = Aws::String>
    void SetSyncSessionToken(SyncSessionTokenT&& value) { m_syncSessionTokenHasBeenSet = true; m_syncSessionToken = std::forward<SyncSessionTokenT>(value); }
    template<typename SyncSessionTokenT = Aws::String>
    ListRecordsResult& WithSyncSessionToken(SyncSessionTokenT&& value) { SetSyncSessionToken(std::forward<SyncSessionTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRecordsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Record> m_records;
    bool m_recordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    long long m_datasetSyncCount{0};
    bool m_datasetSyncCountHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Vector<Aws::String> m_mergedDatasetNames;
    bool m_mergedDatasetNamesHasBeenSet = false;

    bool m_datasetExists{false};
    bool m_datasetExistsHasBeenSet = false;

    bool m_datasetDeletedAfterRequestedSyncCount{false};
    bool m_datasetDeletedAfterRequestedSyncCountHasBeenSet = false;

    Aws::String m_syncSessionToken;
    bool m_syncSessionTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
