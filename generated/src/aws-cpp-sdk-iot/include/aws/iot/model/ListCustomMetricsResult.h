/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListCustomMetricsResult
  {
  public:
    AWS_IOT_API ListCustomMetricsResult();
    AWS_IOT_API ListCustomMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListCustomMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the custom metric. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricNames() const{ return m_metricNames; }

    /**
     * <p> The name of the custom metric. </p>
     */
    inline void SetMetricNames(const Aws::Vector<Aws::String>& value) { m_metricNames = value; }

    /**
     * <p> The name of the custom metric. </p>
     */
    inline void SetMetricNames(Aws::Vector<Aws::String>&& value) { m_metricNames = std::move(value); }

    /**
     * <p> The name of the custom metric. </p>
     */
    inline ListCustomMetricsResult& WithMetricNames(const Aws::Vector<Aws::String>& value) { SetMetricNames(value); return *this;}

    /**
     * <p> The name of the custom metric. </p>
     */
    inline ListCustomMetricsResult& WithMetricNames(Aws::Vector<Aws::String>&& value) { SetMetricNames(std::move(value)); return *this;}

    /**
     * <p> The name of the custom metric. </p>
     */
    inline ListCustomMetricsResult& AddMetricNames(const Aws::String& value) { m_metricNames.push_back(value); return *this; }

    /**
     * <p> The name of the custom metric. </p>
     */
    inline ListCustomMetricsResult& AddMetricNames(Aws::String&& value) { m_metricNames.push_back(std::move(value)); return *this; }

    /**
     * <p> The name of the custom metric. </p>
     */
    inline ListCustomMetricsResult& AddMetricNames(const char* value) { m_metricNames.push_back(value); return *this; }


    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline ListCustomMetricsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline ListCustomMetricsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline ListCustomMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_metricNames;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
