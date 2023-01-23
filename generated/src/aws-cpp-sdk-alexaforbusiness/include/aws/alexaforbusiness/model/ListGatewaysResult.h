/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/GatewaySummary.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class ListGatewaysResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API ListGatewaysResult();
    AWS_ALEXAFORBUSINESS_API ListGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API ListGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The gateways in the list.</p>
     */
    inline const Aws::Vector<GatewaySummary>& GetGateways() const{ return m_gateways; }

    /**
     * <p>The gateways in the list.</p>
     */
    inline void SetGateways(const Aws::Vector<GatewaySummary>& value) { m_gateways = value; }

    /**
     * <p>The gateways in the list.</p>
     */
    inline void SetGateways(Aws::Vector<GatewaySummary>&& value) { m_gateways = std::move(value); }

    /**
     * <p>The gateways in the list.</p>
     */
    inline ListGatewaysResult& WithGateways(const Aws::Vector<GatewaySummary>& value) { SetGateways(value); return *this;}

    /**
     * <p>The gateways in the list.</p>
     */
    inline ListGatewaysResult& WithGateways(Aws::Vector<GatewaySummary>&& value) { SetGateways(std::move(value)); return *this;}

    /**
     * <p>The gateways in the list.</p>
     */
    inline ListGatewaysResult& AddGateways(const GatewaySummary& value) { m_gateways.push_back(value); return *this; }

    /**
     * <p>The gateways in the list.</p>
     */
    inline ListGatewaysResult& AddGateways(GatewaySummary&& value) { m_gateways.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline ListGatewaysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline ListGatewaysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to paginate though multiple pages of gateway summaries.</p>
     */
    inline ListGatewaysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GatewaySummary> m_gateways;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
