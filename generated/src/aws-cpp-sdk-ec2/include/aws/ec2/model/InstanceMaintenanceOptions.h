/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceAutoRecoveryState.h>
#include <aws/ec2/model/InstanceRebootMigrationState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The maintenance options for the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceMaintenanceOptions">AWS
   * API Reference</a></p>
   */
  class InstanceMaintenanceOptions
  {
  public:
    AWS_EC2_API InstanceMaintenanceOptions() = default;
    AWS_EC2_API InstanceMaintenanceOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceMaintenanceOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Provides information on the current automatic recovery behavior of your
     * instance.</p>
     */
    inline InstanceAutoRecoveryState GetAutoRecovery() const { return m_autoRecovery; }
    inline bool AutoRecoveryHasBeenSet() const { return m_autoRecoveryHasBeenSet; }
    inline void SetAutoRecovery(InstanceAutoRecoveryState value) { m_autoRecoveryHasBeenSet = true; m_autoRecovery = value; }
    inline InstanceMaintenanceOptions& WithAutoRecovery(InstanceAutoRecoveryState value) { SetAutoRecovery(value); return *this;}
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
    inline InstanceMaintenanceOptions& WithRebootMigration(InstanceRebootMigrationState value) { SetRebootMigration(value); return *this;}
    ///@}
  private:

    InstanceAutoRecoveryState m_autoRecovery{InstanceAutoRecoveryState::NOT_SET};
    bool m_autoRecoveryHasBeenSet = false;

    InstanceRebootMigrationState m_rebootMigration{InstanceRebootMigrationState::NOT_SET};
    bool m_rebootMigrationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
