/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-control-config/model/Status.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   * <p>A control panel represents a group of routing controls that can be changed
   * together in a single transaction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/ControlPanel">AWS
   * API Reference</a></p>
   */
  class ControlPanel
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ControlPanel();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ControlPanel(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ControlPanel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the control
     * panel.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the control
     * panel.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the control
     * panel.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the control
     * panel.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the control
     * panel.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the control
     * panel.</p>
     */
    inline ControlPanel& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the control
     * panel.</p>
     */
    inline ControlPanel& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the control
     * panel.</p>
     */
    inline ControlPanel& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline const Aws::String& GetControlPanelArn() const{ return m_controlPanelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline bool ControlPanelArnHasBeenSet() const { return m_controlPanelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline void SetControlPanelArn(const Aws::String& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline void SetControlPanelArn(Aws::String&& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline void SetControlPanelArn(const char* value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline ControlPanel& WithControlPanelArn(const Aws::String& value) { SetControlPanelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline ControlPanel& WithControlPanelArn(Aws::String&& value) { SetControlPanelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline ControlPanel& WithControlPanelArn(const char* value) { SetControlPanelArn(value); return *this;}


    /**
     * <p>A flag that Amazon Route 53 Application Recovery Controller sets to true to
     * designate the default control panel for a cluster. When you create a cluster,
     * Amazon Route 53 Application Recovery Controller creates a control panel, and
     * sets this flag for that control panel. If you create a control panel yourself,
     * this flag is set to false.</p>
     */
    inline bool GetDefaultControlPanel() const{ return m_defaultControlPanel; }

    /**
     * <p>A flag that Amazon Route 53 Application Recovery Controller sets to true to
     * designate the default control panel for a cluster. When you create a cluster,
     * Amazon Route 53 Application Recovery Controller creates a control panel, and
     * sets this flag for that control panel. If you create a control panel yourself,
     * this flag is set to false.</p>
     */
    inline bool DefaultControlPanelHasBeenSet() const { return m_defaultControlPanelHasBeenSet; }

    /**
     * <p>A flag that Amazon Route 53 Application Recovery Controller sets to true to
     * designate the default control panel for a cluster. When you create a cluster,
     * Amazon Route 53 Application Recovery Controller creates a control panel, and
     * sets this flag for that control panel. If you create a control panel yourself,
     * this flag is set to false.</p>
     */
    inline void SetDefaultControlPanel(bool value) { m_defaultControlPanelHasBeenSet = true; m_defaultControlPanel = value; }

    /**
     * <p>A flag that Amazon Route 53 Application Recovery Controller sets to true to
     * designate the default control panel for a cluster. When you create a cluster,
     * Amazon Route 53 Application Recovery Controller creates a control panel, and
     * sets this flag for that control panel. If you create a control panel yourself,
     * this flag is set to false.</p>
     */
    inline ControlPanel& WithDefaultControlPanel(bool value) { SetDefaultControlPanel(value); return *this;}


    /**
     * <p>The name of the control panel. You can use any non-white space character in
     * the name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the control panel. You can use any non-white space character in
     * the name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the control panel. You can use any non-white space character in
     * the name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the control panel. You can use any non-white space character in
     * the name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the control panel. You can use any non-white space character in
     * the name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the control panel. You can use any non-white space character in
     * the name.</p>
     */
    inline ControlPanel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the control panel. You can use any non-white space character in
     * the name.</p>
     */
    inline ControlPanel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the control panel. You can use any non-white space character in
     * the name.</p>
     */
    inline ControlPanel& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The number of routing controls in the control panel.</p>
     */
    inline int GetRoutingControlCount() const{ return m_routingControlCount; }

    /**
     * <p>The number of routing controls in the control panel.</p>
     */
    inline bool RoutingControlCountHasBeenSet() const { return m_routingControlCountHasBeenSet; }

    /**
     * <p>The number of routing controls in the control panel.</p>
     */
    inline void SetRoutingControlCount(int value) { m_routingControlCountHasBeenSet = true; m_routingControlCount = value; }

    /**
     * <p>The number of routing controls in the control panel.</p>
     */
    inline ControlPanel& WithRoutingControlCount(int value) { SetRoutingControlCount(value); return *this;}


    /**
     * <p>The deployment status of control panel. Status can be one of the following:
     * PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The deployment status of control panel. Status can be one of the following:
     * PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The deployment status of control panel. Status can be one of the following:
     * PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The deployment status of control panel. Status can be one of the following:
     * PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The deployment status of control panel. Status can be one of the following:
     * PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline ControlPanel& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The deployment status of control panel. Status can be one of the following:
     * PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline ControlPanel& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_controlPanelArn;
    bool m_controlPanelArnHasBeenSet = false;

    bool m_defaultControlPanel;
    bool m_defaultControlPanelHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_routingControlCount;
    bool m_routingControlCountHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
