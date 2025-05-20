/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceAutoRecoveryState.h>
#include <aws/ec2/model/InstanceRebootMigrationState.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyInstanceMaintenanceOptionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyInstanceMaintenanceOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceMaintenanceOptions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ModifyInstanceMaintenanceOptionsRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disables the automatic recovery behavior of your instance or sets it to
     * default.</p>
     */
    inline InstanceAutoRecoveryState GetAutoRecovery() const { return m_autoRecovery; }
    inline bool AutoRecoveryHasBeenSet() const { return m_autoRecoveryHasBeenSet; }
    inline void SetAutoRecovery(InstanceAutoRecoveryState value) { m_autoRecoveryHasBeenSet = true; m_autoRecovery = value; }
    inline ModifyInstanceMaintenanceOptionsRequest& WithAutoRecovery(InstanceAutoRecoveryState value) { SetAutoRecovery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to attempt reboot migration during a user-initiated reboot
     * of an instance that has a scheduled <code>system-reboot</code> event:</p> <ul>
     * <li> <p> <code>default</code> - Amazon EC2 attempts to migrate the instance to
     * new hardware (reboot migration). If successful, the <code>system-reboot</code>
     * event is cleared. If unsuccessful, an in-place reboot occurs and the event
     * remains scheduled.</p> </li> <li> <p> <code>disabled</code> - Amazon EC2 keeps
     * the instance on the same hardware (in-place reboot). The
     * <code>system-reboot</code> event remains scheduled.</p> </li> </ul> <p>This
     * setting only applies to supported instances that have a scheduled reboot event.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/schedevents_actions_reboot.html#reboot-migration">Enable
     * or disable reboot migration</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline InstanceRebootMigrationState GetRebootMigration() const { return m_rebootMigration; }
    inline bool RebootMigrationHasBeenSet() const { return m_rebootMigrationHasBeenSet; }
    inline void SetRebootMigration(InstanceRebootMigrationState value) { m_rebootMigrationHasBeenSet = true; m_rebootMigration = value; }
    inline ModifyInstanceMaintenanceOptionsRequest& WithRebootMigration(InstanceRebootMigrationState value) { SetRebootMigration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyInstanceMaintenanceOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceAutoRecoveryState m_autoRecovery{InstanceAutoRecoveryState::NOT_SET};
    bool m_autoRecoveryHasBeenSet = false;

    InstanceRebootMigrationState m_rebootMigration{InstanceRebootMigrationState::NOT_SET};
    bool m_rebootMigrationHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
