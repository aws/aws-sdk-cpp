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
    AWS_LOOKOUTEQUIPMENT_API ListDataIngestionJobsResult() = default;
    AWS_LOOKOUTEQUIPMENT_API ListDataIngestionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListDataIngestionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An opaque pagination token indicating where to continue the listing of data
     * ingestion jobs. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataIngestionJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information about the specific data ingestion job, including
     * dataset name and status. </p>
     */
    inline const Aws::Vector<DataIngestionJobSummary>& GetDataIngestionJobSummaries() const { return m_dataIngestionJobSummaries; }
    template<typename DataIngestionJobSummariesT = Aws::Vector<DataIngestionJobSummary>>
    void SetDataIngestionJobSummaries(DataIngestionJobSummariesT&& value) { m_dataIngestionJobSummariesHasBeenSet = true; m_dataIngestionJobSummaries = std::forward<DataIngestionJobSummariesT>(value); }
    template<typename DataIngestionJobSummariesT = Aws::Vector<DataIngestionJobSummary>>
    ListDataIngestionJobsResult& WithDataIngestionJobSummaries(DataIngestionJobSummariesT&& value) { SetDataIngestionJobSummaries(std::forward<DataIngestionJobSummariesT>(value)); return *this;}
    template<typename DataIngestionJobSummariesT = DataIngestionJobSummary>
    ListDataIngestionJobsResult& AddDataIngestionJobSummaries(DataIngestionJobSummariesT&& value) { m_dataIngestionJobSummariesHasBeenSet = true; m_dataIngestionJobSummaries.emplace_back(std::forward<DataIngestionJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataIngestionJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<DataIngestionJobSummary> m_dataIngestionJobSummaries;
    bool m_dataIngestionJobSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
