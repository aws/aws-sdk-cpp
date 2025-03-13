/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/DatasetDetailOrgAttributes.h>
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
namespace MainframeModernization
{
namespace Model
{
  class GetDataSetDetailsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetDetailsResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The size of the block on disk. </p>
     */
    inline int GetBlocksize() const { return m_blocksize; }
    inline void SetBlocksize(int value) { m_blocksizeHasBeenSet = true; m_blocksize = value; }
    inline GetDataSetDetailsResult& WithBlocksize(int value) { SetBlocksize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetDataSetDetailsResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetDataSetName() const { return m_dataSetName; }
    template<typename DataSetNameT = Aws::String>
    void SetDataSetName(DataSetNameT&& value) { m_dataSetNameHasBeenSet = true; m_dataSetName = std::forward<DataSetNameT>(value); }
    template<typename DataSetNameT = Aws::String>
    GetDataSetDetailsResult& WithDataSetName(DataSetNameT&& value) { SetDataSetName(std::forward<DataSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline const DatasetDetailOrgAttributes& GetDataSetOrg() const { return m_dataSetOrg; }
    template<typename DataSetOrgT = DatasetDetailOrgAttributes>
    void SetDataSetOrg(DataSetOrgT&& value) { m_dataSetOrgHasBeenSet = true; m_dataSetOrg = std::forward<DataSetOrgT>(value); }
    template<typename DataSetOrgT = DatasetDetailOrgAttributes>
    GetDataSetDetailsResult& WithDataSetOrg(DataSetOrgT&& value) { SetDataSetOrg(std::forward<DataSetOrgT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>File size of the dataset.</p>
     */
    inline long long GetFileSize() const { return m_fileSize; }
    inline void SetFileSize(long long value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }
    inline GetDataSetDetailsResult& WithFileSize(long long value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReferencedTime() const { return m_lastReferencedTime; }
    template<typename LastReferencedTimeT = Aws::Utils::DateTime>
    void SetLastReferencedTime(LastReferencedTimeT&& value) { m_lastReferencedTimeHasBeenSet = true; m_lastReferencedTime = std::forward<LastReferencedTimeT>(value); }
    template<typename LastReferencedTimeT = Aws::Utils::DateTime>
    GetDataSetDetailsResult& WithLastReferencedTime(LastReferencedTimeT&& value) { SetLastReferencedTime(std::forward<LastReferencedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the data set was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    GetDataSetDetailsResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location where the data set is stored.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    GetDataSetDetailsResult& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of records in the data set.</p>
     */
    inline int GetRecordLength() const { return m_recordLength; }
    inline void SetRecordLength(int value) { m_recordLengthHasBeenSet = true; m_recordLength = value; }
    inline GetDataSetDetailsResult& WithRecordLength(int value) { SetRecordLength(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataSetDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_blocksize{0};
    bool m_blocksizeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_dataSetName;
    bool m_dataSetNameHasBeenSet = false;

    DatasetDetailOrgAttributes m_dataSetOrg;
    bool m_dataSetOrgHasBeenSet = false;

    long long m_fileSize{0};
    bool m_fileSizeHasBeenSet = false;

    Aws::Utils::DateTime m_lastReferencedTime{};
    bool m_lastReferencedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    int m_recordLength{0};
    bool m_recordLengthHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
