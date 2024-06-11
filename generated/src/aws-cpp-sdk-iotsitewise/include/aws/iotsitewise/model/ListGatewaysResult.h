﻿/**
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


    ///@{
    /**
     * <p>A list that summarizes each gateway.</p>
     */
    inline const Aws::Vector<GatewaySummary>& GetGatewaySummaries() const{ return m_gatewaySummaries; }
    inline void SetGatewaySummaries(const Aws::Vector<GatewaySummary>& value) { m_gatewaySummaries = value; }
    inline void SetGatewaySummaries(Aws::Vector<GatewaySummary>&& value) { m_gatewaySummaries = std::move(value); }
    inline ListGatewaysResult& WithGatewaySummaries(const Aws::Vector<GatewaySummary>& value) { SetGatewaySummaries(value); return *this;}
    inline ListGatewaysResult& WithGatewaySummaries(Aws::Vector<GatewaySummary>&& value) { SetGatewaySummaries(std::move(value)); return *this;}
    inline ListGatewaysResult& AddGatewaySummaries(const GatewaySummary& value) { m_gatewaySummaries.push_back(value); return *this; }
    inline ListGatewaysResult& AddGatewaySummaries(GatewaySummary&& value) { m_gatewaySummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListGatewaysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListGatewaysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListGatewaysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListGatewaysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListGatewaysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListGatewaysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GatewaySummary> m_gatewaySummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
