/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/DataIngestionJobSummary.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ListDataIngestionJobsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListDataIngestionJobsResult();
    AWS_LOOKOUTEQUIPMENT_API ListDataIngestionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListDataIngestionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An opaque pagination token indicating where to continue the listing of data
     * ingestion jobs. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of data
     * ingestion jobs. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of data
     * ingestion jobs. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of data
     * ingestion jobs. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of data
     * ingestion jobs. </p>
     */
    inline ListDataIngestionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of data
     * ingestion jobs. </p>
     */
    inline ListDataIngestionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of data
     * ingestion jobs. </p>
     */
    inline ListDataIngestionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies information about the specific data ingestion job, including
     * dataset name and status. </p>
     */
    inline const Aws::Vector<DataIngestionJobSummary>& GetDataIngestionJobSummaries() const{ return m_dataIngestionJobSummaries; }

    /**
     * <p>Specifies information about the specific data ingestion job, including
     * dataset name and status. </p>
     */
    inline void SetDataIngestionJobSummaries(const Aws::Vector<DataIngestionJobSummary>& value) { m_dataIngestionJobSummaries = value; }

    /**
     * <p>Specifies information about the specific data ingestion job, including
     * dataset name and status. </p>
     */
    inline void SetDataIngestionJobSummaries(Aws::Vector<DataIngestionJobSummary>&& value) { m_dataIngestionJobSummaries = std::move(value); }

    /**
     * <p>Specifies information about the specific data ingestion job, including
     * dataset name and status. </p>
     */
    inline ListDataIngestionJobsResult& WithDataIngestionJobSummaries(const Aws::Vector<DataIngestionJobSummary>& value) { SetDataIngestionJobSummaries(value); return *this;}

    /**
     * <p>Specifies information about the specific data ingestion job, including
     * dataset name and status. </p>
     */
    inline ListDataIngestionJobsResult& WithDataIngestionJobSummaries(Aws::Vector<DataIngestionJobSummary>&& value) { SetDataIngestionJobSummaries(std::move(value)); return *this;}

    /**
     * <p>Specifies information about the specific data ingestion job, including
     * dataset name and status. </p>
     */
    inline ListDataIngestionJobsResult& AddDataIngestionJobSummaries(const DataIngestionJobSummary& value) { m_dataIngestionJobSummaries.push_back(value); return *this; }

    /**
     * <p>Specifies information about the specific data ingestion job, including
     * dataset name and status. </p>
     */
    inline ListDataIngestionJobsResult& AddDataIngestionJobSummaries(DataIngestionJobSummary&& value) { m_dataIngestionJobSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<DataIngestionJobSummary> m_dataIngestionJobSummaries;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
