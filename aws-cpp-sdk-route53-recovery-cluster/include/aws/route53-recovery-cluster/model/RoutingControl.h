/**
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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53RecoveryCluster
{
namespace Model
{

  /**
   * <p>A routing control, which is a simple on/off switch that you can use to route
   * traffic to cells. When a routing control state is On, traffic flows to a cell.
   * When the state is Off, traffic does not flow. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/RoutingControl">AWS
   * API Reference</a></p>
   */
  class RoutingControl
  {
  public:
    AWS_ROUTE53RECOVERYCLUSTER_API RoutingControl();
    AWS_ROUTE53RECOVERYCLUSTER_API RoutingControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API RoutingControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the control panel where the routing control
     * is located.</p>
     */
    inline const Aws::String& GetControlPanelArn() const{ return m_controlPanelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel where the routing control
     * is located.</p>
     */
    inline bool ControlPanelArnHasBeenSet() const { return m_controlPanelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel where the routing control
     * is located.</p>
     */
    inline void SetControlPanelArn(const Aws::String& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel where the routing control
     * is located.</p>
     */
    inline void SetControlPanelArn(Aws::String&& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel where the routing control
     * is located.</p>
     */
    inline void SetControlPanelArn(const char* value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel where the routing control
     * is located.</p>
     */
    inline RoutingControl& WithControlPanelArn(const Aws::String& value) { SetControlPanelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel where the routing control
     * is located.</p>
     */
    inline RoutingControl& WithControlPanelArn(Aws::String&& value) { SetControlPanelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel where the routing control
     * is located.</p>
     */
    inline RoutingControl& WithControlPanelArn(const char* value) { SetControlPanelArn(value); return *this;}


    /**
     * <p>The name of the control panel where the routing control is located.</p>
     */
    inline const Aws::String& GetControlPanelName() const{ return m_controlPanelName; }

    /**
     * <p>The name of the control panel where the routing control is located.</p>
     */
    inline bool ControlPanelNameHasBeenSet() const { return m_controlPanelNameHasBeenSet; }

    /**
     * <p>The name of the control panel where the routing control is located.</p>
     */
    inline void SetControlPanelName(const Aws::String& value) { m_controlPanelNameHasBeenSet = true; m_controlPanelName = value; }

    /**
     * <p>The name of the control panel where the routing control is located.</p>
     */
    inline void SetControlPanelName(Aws::String&& value) { m_controlPanelNameHasBeenSet = true; m_controlPanelName = std::move(value); }

    /**
     * <p>The name of the control panel where the routing control is located.</p>
     */
    inline void SetControlPanelName(const char* value) { m_controlPanelNameHasBeenSet = true; m_controlPanelName.assign(value); }

    /**
     * <p>The name of the control panel where the routing control is located.</p>
     */
    inline RoutingControl& WithControlPanelName(const Aws::String& value) { SetControlPanelName(value); return *this;}

    /**
     * <p>The name of the control panel where the routing control is located.</p>
     */
    inline RoutingControl& WithControlPanelName(Aws::String&& value) { SetControlPanelName(std::move(value)); return *this;}

    /**
     * <p>The name of the control panel where the routing control is located.</p>
     */
    inline RoutingControl& WithControlPanelName(const char* value) { SetControlPanelName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline const Aws::String& GetRoutingControlArn() const{ return m_routingControlArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline bool RoutingControlArnHasBeenSet() const { return m_routingControlArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline void SetRoutingControlArn(const Aws::String& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline void SetRoutingControlArn(Aws::String&& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline void SetRoutingControlArn(const char* value) { m_routingControlArnHasBeenSet = true; m_routingControlArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline RoutingControl& WithRoutingControlArn(const Aws::String& value) { SetRoutingControlArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline RoutingControl& WithRoutingControlArn(Aws::String&& value) { SetRoutingControlArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline RoutingControl& WithRoutingControlArn(const char* value) { SetRoutingControlArn(value); return *this;}


    /**
     * <p>The name of the routing control.</p>
     */
    inline const Aws::String& GetRoutingControlName() const{ return m_routingControlName; }

    /**
     * <p>The name of the routing control.</p>
     */
    inline bool RoutingControlNameHasBeenSet() const { return m_routingControlNameHasBeenSet; }

    /**
     * <p>The name of the routing control.</p>
     */
    inline void SetRoutingControlName(const Aws::String& value) { m_routingControlNameHasBeenSet = true; m_routingControlName = value; }

    /**
     * <p>The name of the routing control.</p>
     */
    inline void SetRoutingControlName(Aws::String&& value) { m_routingControlNameHasBeenSet = true; m_routingControlName = std::move(value); }

    /**
     * <p>The name of the routing control.</p>
     */
    inline void SetRoutingControlName(const char* value) { m_routingControlNameHasBeenSet = true; m_routingControlName.assign(value); }

    /**
     * <p>The name of the routing control.</p>
     */
    inline RoutingControl& WithRoutingControlName(const Aws::String& value) { SetRoutingControlName(value); return *this;}

    /**
     * <p>The name of the routing control.</p>
     */
    inline RoutingControl& WithRoutingControlName(Aws::String&& value) { SetRoutingControlName(std::move(value)); return *this;}

    /**
     * <p>The name of the routing control.</p>
     */
    inline RoutingControl& WithRoutingControlName(const char* value) { SetRoutingControlName(value); return *this;}


    /**
     * <p>The current state of the routing control. When a routing control state is On,
     * traffic flows to a cell. When the state is Off, traffic does not flow. </p>
     */
    inline const RoutingControlState& GetRoutingControlState() const{ return m_routingControlState; }

    /**
     * <p>The current state of the routing control. When a routing control state is On,
     * traffic flows to a cell. When the state is Off, traffic does not flow. </p>
     */
    inline bool RoutingControlStateHasBeenSet() const { return m_routingControlStateHasBeenSet; }

    /**
     * <p>The current state of the routing control. When a routing control state is On,
     * traffic flows to a cell. When the state is Off, traffic does not flow. </p>
     */
    inline void SetRoutingControlState(const RoutingControlState& value) { m_routingControlStateHasBeenSet = true; m_routingControlState = value; }

    /**
     * <p>The current state of the routing control. When a routing control state is On,
     * traffic flows to a cell. When the state is Off, traffic does not flow. </p>
     */
    inline void SetRoutingControlState(RoutingControlState&& value) { m_routingControlStateHasBeenSet = true; m_routingControlState = std::move(value); }

    /**
     * <p>The current state of the routing control. When a routing control state is On,
     * traffic flows to a cell. When the state is Off, traffic does not flow. </p>
     */
    inline RoutingControl& WithRoutingControlState(const RoutingControlState& value) { SetRoutingControlState(value); return *this;}

    /**
     * <p>The current state of the routing control. When a routing control state is On,
     * traffic flows to a cell. When the state is Off, traffic does not flow. </p>
     */
    inline RoutingControl& WithRoutingControlState(RoutingControlState&& value) { SetRoutingControlState(std::move(value)); return *this;}

  private:

    Aws::String m_controlPanelArn;
    bool m_controlPanelArnHasBeenSet = false;

    Aws::String m_controlPanelName;
    bool m_controlPanelNameHasBeenSet = false;

    Aws::String m_routingControlArn;
    bool m_routingControlArnHasBeenSet = false;

    Aws::String m_routingControlName;
    bool m_routingControlNameHasBeenSet = false;

    RoutingControlState m_routingControlState;
    bool m_routingControlStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
