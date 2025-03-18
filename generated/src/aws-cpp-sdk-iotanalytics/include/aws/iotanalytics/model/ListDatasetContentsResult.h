/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/DatasetContentSummary.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class ListDatasetContentsResult
  {
  public:
    AWS_IOTANALYTICS_API ListDatasetContentsResult() = default;
    AWS_IOTANALYTICS_API ListDatasetContentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API ListDatasetContentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about dataset contents that have been created.</p>
     */
    inline const Aws::Vector<DatasetContentSummary>& GetDatasetContentSummaries() const { return m_datasetContentSummaries; }
    template<typename DatasetContentSummariesT = Aws::Vector<DatasetContentSummary>>
    void SetDatasetContentSummaries(DatasetContentSummariesT&& value) { m_datasetContentSummariesHasBeenSet = true; m_datasetContentSummaries = std::forward<DatasetContentSummariesT>(value); }
    template<typename DatasetContentSummariesT = Aws::Vector<DatasetContentSummary>>
    ListDatasetContentsResult& WithDatasetContentSummaries(DatasetContentSummariesT&& value) { SetDatasetContentSummaries(std::forward<DatasetContentSummariesT>(value)); return *this;}
    template<typename DatasetContentSummariesT = DatasetContentSummary>
    ListDatasetContentsResult& AddDatasetContentSummaries(DatasetContentSummariesT&& value) { m_datasetContentSummariesHasBeenSet = true; m_datasetContentSummaries.emplace_back(std::forward<DatasetContentSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatasetContentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDatasetContentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DatasetContentSummary> m_datasetContentSummaries;
    bool m_datasetContentSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
