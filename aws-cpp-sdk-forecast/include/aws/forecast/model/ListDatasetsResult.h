/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DatasetSummary.h>
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
  class ListDatasetsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListDatasetsResult();
    AWS_FORECASTSERVICE_API ListDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that summarize each dataset's properties.</p>
     */
    inline const Aws::Vector<DatasetSummary>& GetDatasets() const{ return m_datasets; }

    /**
     * <p>An array of objects that summarize each dataset's properties.</p>
     */
    inline void SetDatasets(const Aws::Vector<DatasetSummary>& value) { m_datasets = value; }

    /**
     * <p>An array of objects that summarize each dataset's properties.</p>
     */
    inline void SetDatasets(Aws::Vector<DatasetSummary>&& value) { m_datasets = std::move(value); }

    /**
     * <p>An array of objects that summarize each dataset's properties.</p>
     */
    inline ListDatasetsResult& WithDatasets(const Aws::Vector<DatasetSummary>& value) { SetDatasets(value); return *this;}

    /**
     * <p>An array of objects that summarize each dataset's properties.</p>
     */
    inline ListDatasetsResult& WithDatasets(Aws::Vector<DatasetSummary>&& value) { SetDatasets(std::move(value)); return *this;}

    /**
     * <p>An array of objects that summarize each dataset's properties.</p>
     */
    inline ListDatasetsResult& AddDatasets(const DatasetSummary& value) { m_datasets.push_back(value); return *this; }

    /**
     * <p>An array of objects that summarize each dataset's properties.</p>
     */
    inline ListDatasetsResult& AddDatasets(DatasetSummary&& value) { m_datasets.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListDatasetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListDatasetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListDatasetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DatasetSummary> m_datasets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
