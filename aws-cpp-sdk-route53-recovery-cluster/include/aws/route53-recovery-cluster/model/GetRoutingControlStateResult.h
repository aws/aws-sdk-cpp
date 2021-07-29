﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-cluster/model/RoutingControlState.h>
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
namespace Route53RecoveryCluster
{
namespace Model
{
  class AWS_ROUTE53RECOVERYCLUSTER_API GetRoutingControlStateResult
  {
  public:
    GetRoutingControlStateResult();
    GetRoutingControlStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRoutingControlStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Number (ARN) of the response.</p>
     */
    inline const Aws::String& GetRoutingControlArn() const{ return m_routingControlArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the response.</p>
     */
    inline void SetRoutingControlArn(const Aws::String& value) { m_routingControlArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the response.</p>
     */
    inline void SetRoutingControlArn(Aws::String&& value) { m_routingControlArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the response.</p>
     */
    inline void SetRoutingControlArn(const char* value) { m_routingControlArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the response.</p>
     */
    inline GetRoutingControlStateResult& WithRoutingControlArn(const Aws::String& value) { SetRoutingControlArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the response.</p>
     */
    inline GetRoutingControlStateResult& WithRoutingControlArn(Aws::String&& value) { SetRoutingControlArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the response.</p>
     */
    inline GetRoutingControlStateResult& WithRoutingControlArn(const char* value) { SetRoutingControlArn(value); return *this;}


    /**
     * <p>The state of the routing control.</p>
     */
    inline const RoutingControlState& GetRoutingControlState() const{ return m_routingControlState; }

    /**
     * <p>The state of the routing control.</p>
     */
    inline void SetRoutingControlState(const RoutingControlState& value) { m_routingControlState = value; }

    /**
     * <p>The state of the routing control.</p>
     */
    inline void SetRoutingControlState(RoutingControlState&& value) { m_routingControlState = std::move(value); }

    /**
     * <p>The state of the routing control.</p>
     */
    inline GetRoutingControlStateResult& WithRoutingControlState(const RoutingControlState& value) { SetRoutingControlState(value); return *this;}

    /**
     * <p>The state of the routing control.</p>
     */
    inline GetRoutingControlStateResult& WithRoutingControlState(RoutingControlState&& value) { SetRoutingControlState(std::move(value)); return *this;}

  private:

    Aws::String m_routingControlArn;

    RoutingControlState m_routingControlState;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
