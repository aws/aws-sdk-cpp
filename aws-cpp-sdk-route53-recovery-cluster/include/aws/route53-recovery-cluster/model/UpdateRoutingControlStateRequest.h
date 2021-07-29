﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-cluster/model/RoutingControlState.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryCluster
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStateRequest : public Route53RecoveryClusterRequest
  {
  public:
    UpdateRoutingControlStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoutingControlState"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Number (ARN) for the routing control that you want to
     * update the state for.</p>
     */
    inline const Aws::String& GetRoutingControlArn() const{ return m_routingControlArn; }

    /**
     * <p>The Amazon Resource Number (ARN) for the routing control that you want to
     * update the state for.</p>
     */
    inline bool RoutingControlArnHasBeenSet() const { return m_routingControlArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) for the routing control that you want to
     * update the state for.</p>
     */
    inline void SetRoutingControlArn(const Aws::String& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) for the routing control that you want to
     * update the state for.</p>
     */
    inline void SetRoutingControlArn(Aws::String&& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) for the routing control that you want to
     * update the state for.</p>
     */
    inline void SetRoutingControlArn(const char* value) { m_routingControlArnHasBeenSet = true; m_routingControlArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) for the routing control that you want to
     * update the state for.</p>
     */
    inline UpdateRoutingControlStateRequest& WithRoutingControlArn(const Aws::String& value) { SetRoutingControlArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) for the routing control that you want to
     * update the state for.</p>
     */
    inline UpdateRoutingControlStateRequest& WithRoutingControlArn(Aws::String&& value) { SetRoutingControlArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) for the routing control that you want to
     * update the state for.</p>
     */
    inline UpdateRoutingControlStateRequest& WithRoutingControlArn(const char* value) { SetRoutingControlArn(value); return *this;}


    /**
     * <p>The state of the routing control. You can set the value to be On or Off.</p>
     */
    inline const RoutingControlState& GetRoutingControlState() const{ return m_routingControlState; }

    /**
     * <p>The state of the routing control. You can set the value to be On or Off.</p>
     */
    inline bool RoutingControlStateHasBeenSet() const { return m_routingControlStateHasBeenSet; }

    /**
     * <p>The state of the routing control. You can set the value to be On or Off.</p>
     */
    inline void SetRoutingControlState(const RoutingControlState& value) { m_routingControlStateHasBeenSet = true; m_routingControlState = value; }

    /**
     * <p>The state of the routing control. You can set the value to be On or Off.</p>
     */
    inline void SetRoutingControlState(RoutingControlState&& value) { m_routingControlStateHasBeenSet = true; m_routingControlState = std::move(value); }

    /**
     * <p>The state of the routing control. You can set the value to be On or Off.</p>
     */
    inline UpdateRoutingControlStateRequest& WithRoutingControlState(const RoutingControlState& value) { SetRoutingControlState(value); return *this;}

    /**
     * <p>The state of the routing control. You can set the value to be On or Off.</p>
     */
    inline UpdateRoutingControlStateRequest& WithRoutingControlState(RoutingControlState&& value) { SetRoutingControlState(std::move(value)); return *this;}

  private:

    Aws::String m_routingControlArn;
    bool m_routingControlArnHasBeenSet;

    RoutingControlState m_routingControlState;
    bool m_routingControlStateHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
