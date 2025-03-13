/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/DatasetSummary.h>
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
  class ListDatasetsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListDatasetsResult() = default;
    AWS_LOOKOUTEQUIPMENT_API ListDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatasetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the specified dataset, including creation time,
     * dataset ARN, and status. </p>
     */
    inline const Aws::Vector<DatasetSummary>& GetDatasetSummaries() const { return m_datasetSummaries; }
    template<typename DatasetSummariesT = Aws::Vector<DatasetSummary>>
    void SetDatasetSummaries(DatasetSummariesT&& value) { m_datasetSummariesHasBeenSet = true; m_datasetSummaries = std::forward<DatasetSummariesT>(value); }
    template<typename DatasetSummariesT = Aws::Vector<DatasetSummary>>
    ListDatasetsResult& WithDatasetSummaries(DatasetSummariesT&& value) { SetDatasetSummaries(std::forward<DatasetSummariesT>(value)); return *this;}
    template<typename DatasetSummariesT = DatasetSummary>
    ListDatasetsResult& AddDatasetSummaries(DatasetSummariesT&& value) { m_datasetSummariesHasBeenSet = true; m_datasetSummaries.emplace_back(std::forward<DatasetSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDatasetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<DatasetSummary> m_datasetSummaries;
    bool m_datasetSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
