/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DatasetImportJobSummary.h>
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
  class ListDatasetImportJobsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListDatasetImportJobsResult() = default;
    AWS_FORECASTSERVICE_API ListDatasetImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListDatasetImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that summarize each dataset import job's properties.</p>
     */
    inline const Aws::Vector<DatasetImportJobSummary>& GetDatasetImportJobs() const { return m_datasetImportJobs; }
    template<typename DatasetImportJobsT = Aws::Vector<DatasetImportJobSummary>>
    void SetDatasetImportJobs(DatasetImportJobsT&& value) { m_datasetImportJobsHasBeenSet = true; m_datasetImportJobs = std::forward<DatasetImportJobsT>(value); }
    template<typename DatasetImportJobsT = Aws::Vector<DatasetImportJobSummary>>
    ListDatasetImportJobsResult& WithDatasetImportJobs(DatasetImportJobsT&& value) { SetDatasetImportJobs(std::forward<DatasetImportJobsT>(value)); return *this;}
    template<typename DatasetImportJobsT = DatasetImportJobSummary>
    ListDatasetImportJobsResult& AddDatasetImportJobs(DatasetImportJobsT&& value) { m_datasetImportJobsHasBeenSet = true; m_datasetImportJobs.emplace_back(std::forward<DatasetImportJobsT>(value)); return *this; }
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
    ListDatasetImportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDatasetImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DatasetImportJobSummary> m_datasetImportJobs;
    bool m_datasetImportJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
