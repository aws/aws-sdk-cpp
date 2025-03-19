/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DatasetGroupSummary.h>
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
namespace ForecastService
{
namespace Model
{
  class ListDatasetGroupsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListDatasetGroupsResult() = default;
    AWS_FORECASTSERVICE_API ListDatasetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListDatasetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that summarize each dataset group's properties.</p>
     */
    inline const Aws::Vector<DatasetGroupSummary>& GetDatasetGroups() const { return m_datasetGroups; }
    template<typename DatasetGroupsT = Aws::Vector<DatasetGroupSummary>>
    void SetDatasetGroups(DatasetGroupsT&& value) { m_datasetGroupsHasBeenSet = true; m_datasetGroups = std::forward<DatasetGroupsT>(value); }
    template<typename DatasetGroupsT = Aws::Vector<DatasetGroupSummary>>
    ListDatasetGroupsResult& WithDatasetGroups(DatasetGroupsT&& value) { SetDatasetGroups(std::forward<DatasetGroupsT>(value)); return *this;}
    template<typename DatasetGroupsT = DatasetGroupSummary>
    ListDatasetGroupsResult& AddDatasetGroups(DatasetGroupsT&& value) { m_datasetGroupsHasBeenSet = true; m_datasetGroups.emplace_back(std::forward<DatasetGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatasetGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDatasetGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DatasetGroupSummary> m_datasetGroups;
    bool m_datasetGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
