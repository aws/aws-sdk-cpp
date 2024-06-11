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
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetDetailsResult();
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The size of the block on disk. </p>
     */
    inline int GetBlocksize() const{ return m_blocksize; }
    inline void SetBlocksize(int value) { m_blocksize = value; }
    inline GetDataSetDetailsResult& WithBlocksize(int value) { SetBlocksize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetDataSetDetailsResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetDataSetDetailsResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetDataSetName() const{ return m_dataSetName; }
    inline void SetDataSetName(const Aws::String& value) { m_dataSetName = value; }
    inline void SetDataSetName(Aws::String&& value) { m_dataSetName = std::move(value); }
    inline void SetDataSetName(const char* value) { m_dataSetName.assign(value); }
    inline GetDataSetDetailsResult& WithDataSetName(const Aws::String& value) { SetDataSetName(value); return *this;}
    inline GetDataSetDetailsResult& WithDataSetName(Aws::String&& value) { SetDataSetName(std::move(value)); return *this;}
    inline GetDataSetDetailsResult& WithDataSetName(const char* value) { SetDataSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline const DatasetDetailOrgAttributes& GetDataSetOrg() const{ return m_dataSetOrg; }
    inline void SetDataSetOrg(const DatasetDetailOrgAttributes& value) { m_dataSetOrg = value; }
    inline void SetDataSetOrg(DatasetDetailOrgAttributes&& value) { m_dataSetOrg = std::move(value); }
    inline GetDataSetDetailsResult& WithDataSetOrg(const DatasetDetailOrgAttributes& value) { SetDataSetOrg(value); return *this;}
    inline GetDataSetDetailsResult& WithDataSetOrg(DatasetDetailOrgAttributes&& value) { SetDataSetOrg(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>File size of the dataset.</p>
     */
    inline long long GetFileSize() const{ return m_fileSize; }
    inline void SetFileSize(long long value) { m_fileSize = value; }
    inline GetDataSetDetailsResult& WithFileSize(long long value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReferencedTime() const{ return m_lastReferencedTime; }
    inline void SetLastReferencedTime(const Aws::Utils::DateTime& value) { m_lastReferencedTime = value; }
    inline void SetLastReferencedTime(Aws::Utils::DateTime&& value) { m_lastReferencedTime = std::move(value); }
    inline GetDataSetDetailsResult& WithLastReferencedTime(const Aws::Utils::DateTime& value) { SetLastReferencedTime(value); return *this;}
    inline GetDataSetDetailsResult& WithLastReferencedTime(Aws::Utils::DateTime&& value) { SetLastReferencedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the data set was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }
    inline GetDataSetDetailsResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline GetDataSetDetailsResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location where the data set is stored.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline GetDataSetDetailsResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline GetDataSetDetailsResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline GetDataSetDetailsResult& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of records in the data set.</p>
     */
    inline int GetRecordLength() const{ return m_recordLength; }
    inline void SetRecordLength(int value) { m_recordLength = value; }
    inline GetDataSetDetailsResult& WithRecordLength(int value) { SetRecordLength(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataSetDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataSetDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataSetDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_blocksize;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_dataSetName;

    DatasetDetailOrgAttributes m_dataSetOrg;

    long long m_fileSize;

    Aws::Utils::DateTime m_lastReferencedTime;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_location;

    int m_recordLength;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
