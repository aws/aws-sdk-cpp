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


    /**
     * <p>The size of the block on disk. </p>
     */
    inline int GetBlocksize() const{ return m_blocksize; }

    /**
     * <p>The size of the block on disk. </p>
     */
    inline void SetBlocksize(int value) { m_blocksize = value; }

    /**
     * <p>The size of the block on disk. </p>
     */
    inline GetDataSetDetailsResult& WithBlocksize(int value) { SetBlocksize(value); return *this;}


    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline GetDataSetDetailsResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp when the data set was created.</p>
     */
    inline GetDataSetDetailsResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetDataSetName() const{ return m_dataSetName; }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetDataSetName(const Aws::String& value) { m_dataSetName = value; }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetDataSetName(Aws::String&& value) { m_dataSetName = std::move(value); }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetDataSetName(const char* value) { m_dataSetName.assign(value); }

    /**
     * <p>The name of the data set.</p>
     */
    inline GetDataSetDetailsResult& WithDataSetName(const Aws::String& value) { SetDataSetName(value); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline GetDataSetDetailsResult& WithDataSetName(Aws::String&& value) { SetDataSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline GetDataSetDetailsResult& WithDataSetName(const char* value) { SetDataSetName(value); return *this;}


    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline const DatasetDetailOrgAttributes& GetDataSetOrg() const{ return m_dataSetOrg; }

    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline void SetDataSetOrg(const DatasetDetailOrgAttributes& value) { m_dataSetOrg = value; }

    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline void SetDataSetOrg(DatasetDetailOrgAttributes&& value) { m_dataSetOrg = std::move(value); }

    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline GetDataSetDetailsResult& WithDataSetOrg(const DatasetDetailOrgAttributes& value) { SetDataSetOrg(value); return *this;}

    /**
     * <p>The type of data set. The only supported value is VSAM.</p>
     */
    inline GetDataSetDetailsResult& WithDataSetOrg(DatasetDetailOrgAttributes&& value) { SetDataSetOrg(std::move(value)); return *this;}


    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReferencedTime() const{ return m_lastReferencedTime; }

    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline void SetLastReferencedTime(const Aws::Utils::DateTime& value) { m_lastReferencedTime = value; }

    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline void SetLastReferencedTime(Aws::Utils::DateTime&& value) { m_lastReferencedTime = std::move(value); }

    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline GetDataSetDetailsResult& WithLastReferencedTime(const Aws::Utils::DateTime& value) { SetLastReferencedTime(value); return *this;}

    /**
     * <p>The last time the data set was referenced.</p>
     */
    inline GetDataSetDetailsResult& WithLastReferencedTime(Aws::Utils::DateTime&& value) { SetLastReferencedTime(std::move(value)); return *this;}


    /**
     * <p>The last time the data set was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline GetDataSetDetailsResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The last time the data set was updated.</p>
     */
    inline GetDataSetDetailsResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The location where the data set is stored.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The location where the data set is stored.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The location where the data set is stored.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The location where the data set is stored.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The location where the data set is stored.</p>
     */
    inline GetDataSetDetailsResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The location where the data set is stored.</p>
     */
    inline GetDataSetDetailsResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The location where the data set is stored.</p>
     */
    inline GetDataSetDetailsResult& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The length of records in the data set.</p>
     */
    inline int GetRecordLength() const{ return m_recordLength; }

    /**
     * <p>The length of records in the data set.</p>
     */
    inline void SetRecordLength(int value) { m_recordLength = value; }

    /**
     * <p>The length of records in the data set.</p>
     */
    inline GetDataSetDetailsResult& WithRecordLength(int value) { SetRecordLength(value); return *this;}

  private:

    int m_blocksize;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_dataSetName;

    DatasetDetailOrgAttributes m_dataSetOrg;

    Aws::Utils::DateTime m_lastReferencedTime;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_location;

    int m_recordLength;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
