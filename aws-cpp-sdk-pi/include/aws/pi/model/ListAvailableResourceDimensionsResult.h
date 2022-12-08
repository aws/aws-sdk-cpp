/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/model/MetricDimensionGroups.h>
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
namespace PI
{
namespace Model
{
  class ListAvailableResourceDimensionsResult
  {
  public:
    AWS_PI_API ListAvailableResourceDimensionsResult();
    AWS_PI_API ListAvailableResourceDimensionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API ListAvailableResourceDimensionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The dimension information returned for requested metric types.</p>
     */
    inline const Aws::Vector<MetricDimensionGroups>& GetMetricDimensions() const{ return m_metricDimensions; }

    /**
     * <p>The dimension information returned for requested metric types.</p>
     */
    inline void SetMetricDimensions(const Aws::Vector<MetricDimensionGroups>& value) { m_metricDimensions = value; }

    /**
     * <p>The dimension information returned for requested metric types.</p>
     */
    inline void SetMetricDimensions(Aws::Vector<MetricDimensionGroups>&& value) { m_metricDimensions = std::move(value); }

    /**
     * <p>The dimension information returned for requested metric types.</p>
     */
    inline ListAvailableResourceDimensionsResult& WithMetricDimensions(const Aws::Vector<MetricDimensionGroups>& value) { SetMetricDimensions(value); return *this;}

    /**
     * <p>The dimension information returned for requested metric types.</p>
     */
    inline ListAvailableResourceDimensionsResult& WithMetricDimensions(Aws::Vector<MetricDimensionGroups>&& value) { SetMetricDimensions(std::move(value)); return *this;}

    /**
     * <p>The dimension information returned for requested metric types.</p>
     */
    inline ListAvailableResourceDimensionsResult& AddMetricDimensions(const MetricDimensionGroups& value) { m_metricDimensions.push_back(value); return *this; }

    /**
     * <p>The dimension information returned for requested metric types.</p>
     */
    inline ListAvailableResourceDimensionsResult& AddMetricDimensions(MetricDimensionGroups&& value) { m_metricDimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline ListAvailableResourceDimensionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline ListAvailableResourceDimensionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline ListAvailableResourceDimensionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MetricDimensionGroups> m_metricDimensions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
