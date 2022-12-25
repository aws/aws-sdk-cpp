/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/DatasetSummary.h>
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
  class ListDatasetsResult
  {
  public:
    AWS_IOTANALYTICS_API ListDatasetsResult();
    AWS_IOTANALYTICS_API ListDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API ListDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>DatasetSummary</code> objects.</p>
     */
    inline const Aws::Vector<DatasetSummary>& GetDatasetSummaries() const{ return m_datasetSummaries; }

    /**
     * <p>A list of <code>DatasetSummary</code> objects.</p>
     */
    inline void SetDatasetSummaries(const Aws::Vector<DatasetSummary>& value) { m_datasetSummaries = value; }

    /**
     * <p>A list of <code>DatasetSummary</code> objects.</p>
     */
    inline void SetDatasetSummaries(Aws::Vector<DatasetSummary>&& value) { m_datasetSummaries = std::move(value); }

    /**
     * <p>A list of <code>DatasetSummary</code> objects.</p>
     */
    inline ListDatasetsResult& WithDatasetSummaries(const Aws::Vector<DatasetSummary>& value) { SetDatasetSummaries(value); return *this;}

    /**
     * <p>A list of <code>DatasetSummary</code> objects.</p>
     */
    inline ListDatasetsResult& WithDatasetSummaries(Aws::Vector<DatasetSummary>&& value) { SetDatasetSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DatasetSummary</code> objects.</p>
     */
    inline ListDatasetsResult& AddDatasetSummaries(const DatasetSummary& value) { m_datasetSummaries.push_back(value); return *this; }

    /**
     * <p>A list of <code>DatasetSummary</code> objects.</p>
     */
    inline ListDatasetsResult& AddDatasetSummaries(DatasetSummary&& value) { m_datasetSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline ListDatasetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline ListDatasetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline ListDatasetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DatasetSummary> m_datasetSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
