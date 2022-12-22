/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   * <p>The details of the control panel that you're updating.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/UpdateControlPanelRequest">AWS
   * API Reference</a></p>
   */
  class UpdateControlPanelRequest : public Route53RecoveryControlConfigRequest
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateControlPanelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateControlPanel"; }

    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::String SerializePayload() const override;


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
    inline UpdateControlPanelRequest& WithControlPanelArn(const Aws::String& value) { SetControlPanelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline UpdateControlPanelRequest& WithControlPanelArn(Aws::String&& value) { SetControlPanelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline UpdateControlPanelRequest& WithControlPanelArn(const char* value) { SetControlPanelArn(value); return *this;}


    /**
     * <p>The name of the control panel.</p>
     */
    inline const Aws::String& GetControlPanelName() const{ return m_controlPanelName; }

    /**
     * <p>The name of the control panel.</p>
     */
    inline bool ControlPanelNameHasBeenSet() const { return m_controlPanelNameHasBeenSet; }

    /**
     * <p>The name of the control panel.</p>
     */
    inline void SetControlPanelName(const Aws::String& value) { m_controlPanelNameHasBeenSet = true; m_controlPanelName = value; }

    /**
     * <p>The name of the control panel.</p>
     */
    inline void SetControlPanelName(Aws::String&& value) { m_controlPanelNameHasBeenSet = true; m_controlPanelName = std::move(value); }

    /**
     * <p>The name of the control panel.</p>
     */
    inline void SetControlPanelName(const char* value) { m_controlPanelNameHasBeenSet = true; m_controlPanelName.assign(value); }

    /**
     * <p>The name of the control panel.</p>
     */
    inline UpdateControlPanelRequest& WithControlPanelName(const Aws::String& value) { SetControlPanelName(value); return *this;}

    /**
     * <p>The name of the control panel.</p>
     */
    inline UpdateControlPanelRequest& WithControlPanelName(Aws::String&& value) { SetControlPanelName(std::move(value)); return *this;}

    /**
     * <p>The name of the control panel.</p>
     */
    inline UpdateControlPanelRequest& WithControlPanelName(const char* value) { SetControlPanelName(value); return *this;}

  private:

    Aws::String m_controlPanelArn;
    bool m_controlPanelArnHasBeenSet = false;

    Aws::String m_controlPanelName;
    bool m_controlPanelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
