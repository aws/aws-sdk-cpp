/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AggregatedValue.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class AWS_IOTSITEWISE_API GetAssetPropertyAggregatesResult
  {
  public:
    GetAssetPropertyAggregatesResult();
    GetAssetPropertyAggregatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAssetPropertyAggregatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested aggregated values.</p>
     */
    inline const Aws::Vector<AggregatedValue>& GetAggregatedValues() const{ return m_aggregatedValues; }

    /**
     * <p>The requested aggregated values.</p>
     */
    inline void SetAggregatedValues(const Aws::Vector<AggregatedValue>& value) { m_aggregatedValues = value; }

    /**
     * <p>The requested aggregated values.</p>
     */
    inline void SetAggregatedValues(Aws::Vector<AggregatedValue>&& value) { m_aggregatedValues = std::move(value); }

    /**
     * <p>The requested aggregated values.</p>
     */
    inline GetAssetPropertyAggregatesResult& WithAggregatedValues(const Aws::Vector<AggregatedValue>& value) { SetAggregatedValues(value); return *this;}

    /**
     * <p>The requested aggregated values.</p>
     */
    inline GetAssetPropertyAggregatesResult& WithAggregatedValues(Aws::Vector<AggregatedValue>&& value) { SetAggregatedValues(std::move(value)); return *this;}

    /**
     * <p>The requested aggregated values.</p>
     */
    inline GetAssetPropertyAggregatesResult& AddAggregatedValues(const AggregatedValue& value) { m_aggregatedValues.push_back(value); return *this; }

    /**
     * <p>The requested aggregated values.</p>
     */
    inline GetAssetPropertyAggregatesResult& AddAggregatedValues(AggregatedValue&& value) { m_aggregatedValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline GetAssetPropertyAggregatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline GetAssetPropertyAggregatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline GetAssetPropertyAggregatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AggregatedValue> m_aggregatedValues;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
