/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetAssetPropertyAggregatesResult
  {
  public:
    AWS_IOTSITEWISE_API GetAssetPropertyAggregatesResult();
    AWS_IOTSITEWISE_API GetAssetPropertyAggregatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API GetAssetPropertyAggregatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
