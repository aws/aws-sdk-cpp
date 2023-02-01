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
    AWS_FORECASTSERVICE_API ListDatasetGroupsResult();
    AWS_FORECASTSERVICE_API ListDatasetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListDatasetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that summarize each dataset group's properties.</p>
     */
    inline const Aws::Vector<DatasetGroupSummary>& GetDatasetGroups() const{ return m_datasetGroups; }

    /**
     * <p>An array of objects that summarize each dataset group's properties.</p>
     */
    inline void SetDatasetGroups(const Aws::Vector<DatasetGroupSummary>& value) { m_datasetGroups = value; }

    /**
     * <p>An array of objects that summarize each dataset group's properties.</p>
     */
    inline void SetDatasetGroups(Aws::Vector<DatasetGroupSummary>&& value) { m_datasetGroups = std::move(value); }

    /**
     * <p>An array of objects that summarize each dataset group's properties.</p>
     */
    inline ListDatasetGroupsResult& WithDatasetGroups(const Aws::Vector<DatasetGroupSummary>& value) { SetDatasetGroups(value); return *this;}

    /**
     * <p>An array of objects that summarize each dataset group's properties.</p>
     */
    inline ListDatasetGroupsResult& WithDatasetGroups(Aws::Vector<DatasetGroupSummary>&& value) { SetDatasetGroups(std::move(value)); return *this;}

    /**
     * <p>An array of objects that summarize each dataset group's properties.</p>
     */
    inline ListDatasetGroupsResult& AddDatasetGroups(const DatasetGroupSummary& value) { m_datasetGroups.push_back(value); return *this; }

    /**
     * <p>An array of objects that summarize each dataset group's properties.</p>
     */
    inline ListDatasetGroupsResult& AddDatasetGroups(DatasetGroupSummary&& value) { m_datasetGroups.push_back(std::move(value)); return *this; }


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
    inline ListDatasetGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListDatasetGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListDatasetGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DatasetGroupSummary> m_datasetGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
