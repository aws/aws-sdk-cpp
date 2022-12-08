/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-control-config/model/RoutingControl.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{
  class ListRoutingControlsResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListRoutingControlsResult();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListRoutingControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListRoutingControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListRoutingControlsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListRoutingControlsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListRoutingControlsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of routing controls.</p>
     */
    inline const Aws::Vector<RoutingControl>& GetRoutingControls() const{ return m_routingControls; }

    /**
     * <p>An array of routing controls.</p>
     */
    inline void SetRoutingControls(const Aws::Vector<RoutingControl>& value) { m_routingControls = value; }

    /**
     * <p>An array of routing controls.</p>
     */
    inline void SetRoutingControls(Aws::Vector<RoutingControl>&& value) { m_routingControls = std::move(value); }

    /**
     * <p>An array of routing controls.</p>
     */
    inline ListRoutingControlsResult& WithRoutingControls(const Aws::Vector<RoutingControl>& value) { SetRoutingControls(value); return *this;}

    /**
     * <p>An array of routing controls.</p>
     */
    inline ListRoutingControlsResult& WithRoutingControls(Aws::Vector<RoutingControl>&& value) { SetRoutingControls(std::move(value)); return *this;}

    /**
     * <p>An array of routing controls.</p>
     */
    inline ListRoutingControlsResult& AddRoutingControls(const RoutingControl& value) { m_routingControls.push_back(value); return *this; }

    /**
     * <p>An array of routing controls.</p>
     */
    inline ListRoutingControlsResult& AddRoutingControls(RoutingControl&& value) { m_routingControls.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RoutingControl> m_routingControls;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
