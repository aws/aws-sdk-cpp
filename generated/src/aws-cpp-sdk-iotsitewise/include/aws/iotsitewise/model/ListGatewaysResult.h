/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/GatewaySummary.h>
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
  class ListGatewaysResult
  {
  public:
    AWS_IOTSITEWISE_API ListGatewaysResult();
    AWS_IOTSITEWISE_API ListGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each gateway.</p>
     */
    inline const Aws::Vector<GatewaySummary>& GetGatewaySummaries() const{ return m_gatewaySummaries; }

    /**
     * <p>A list that summarizes each gateway.</p>
     */
    inline void SetGatewaySummaries(const Aws::Vector<GatewaySummary>& value) { m_gatewaySummaries = value; }

    /**
     * <p>A list that summarizes each gateway.</p>
     */
    inline void SetGatewaySummaries(Aws::Vector<GatewaySummary>&& value) { m_gatewaySummaries = std::move(value); }

    /**
     * <p>A list that summarizes each gateway.</p>
     */
    inline ListGatewaysResult& WithGatewaySummaries(const Aws::Vector<GatewaySummary>& value) { SetGatewaySummaries(value); return *this;}

    /**
     * <p>A list that summarizes each gateway.</p>
     */
    inline ListGatewaysResult& WithGatewaySummaries(Aws::Vector<GatewaySummary>&& value) { SetGatewaySummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each gateway.</p>
     */
    inline ListGatewaysResult& AddGatewaySummaries(const GatewaySummary& value) { m_gatewaySummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each gateway.</p>
     */
    inline ListGatewaysResult& AddGatewaySummaries(GatewaySummary&& value) { m_gatewaySummaries.push_back(std::move(value)); return *this; }


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
    inline ListGatewaysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListGatewaysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListGatewaysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GatewaySummary> m_gatewaySummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
