﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/MetricDatum.h>
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
namespace IoT
{
namespace Model
{
  class ListMetricValuesResult
  {
  public:
    AWS_IOT_API ListMetricValuesResult();
    AWS_IOT_API ListMetricValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListMetricValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data the thing reports for the metric during the specified time
     * period.</p>
     */
    inline const Aws::Vector<MetricDatum>& GetMetricDatumList() const{ return m_metricDatumList; }
    inline void SetMetricDatumList(const Aws::Vector<MetricDatum>& value) { m_metricDatumList = value; }
    inline void SetMetricDatumList(Aws::Vector<MetricDatum>&& value) { m_metricDatumList = std::move(value); }
    inline ListMetricValuesResult& WithMetricDatumList(const Aws::Vector<MetricDatum>& value) { SetMetricDatumList(value); return *this;}
    inline ListMetricValuesResult& WithMetricDatumList(Aws::Vector<MetricDatum>&& value) { SetMetricDatumList(std::move(value)); return *this;}
    inline ListMetricValuesResult& AddMetricDatumList(const MetricDatum& value) { m_metricDatumList.push_back(value); return *this; }
    inline ListMetricValuesResult& AddMetricDatumList(MetricDatum&& value) { m_metricDatumList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMetricValuesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMetricValuesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMetricValuesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMetricValuesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMetricValuesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMetricValuesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MetricDatum> m_metricDatumList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
