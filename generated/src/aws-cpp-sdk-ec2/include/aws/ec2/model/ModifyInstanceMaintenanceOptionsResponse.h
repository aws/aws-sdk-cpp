/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceAutoRecoveryState.h>
#include <aws/ec2/model/InstanceRebootMigrationState.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class ModifyInstanceMaintenanceOptionsResponse
  {
  public:
    AWS_EC2_API ModifyInstanceMaintenanceOptionsResponse() = default;
    AWS_EC2_API ModifyInstanceMaintenanceOptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyInstanceMaintenanceOptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ModifyInstanceMaintenanceOptionsResponse& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on the current automatic recovery behavior of your
     * instance.</p>
     */
    inline InstanceAutoRecoveryState GetAutoRecovery() const { return m_autoRecovery; }
    inline void SetAutoRecovery(InstanceAutoRecoveryState value) { m_autoRecoveryHasBeenSet = true; m_autoRecovery = value; }
    inline ModifyInstanceMaintenanceOptionsResponse& WithAutoRecovery(InstanceAutoRecoveryState value) { SetAutoRecovery(value); return *this;}
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
    inline void SetRebootMigration(InstanceRebootMigrationState value) { m_rebootMigrationHasBeenSet = true; m_rebootMigration = value; }
    inline ModifyInstanceMaintenanceOptionsResponse& WithRebootMigration(InstanceRebootMigrationState value) { SetRebootMigration(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyInstanceMaintenanceOptionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceAutoRecoveryState m_autoRecovery{InstanceAutoRecoveryState::NOT_SET};
    bool m_autoRecoveryHasBeenSet = false;

    InstanceRebootMigrationState m_rebootMigration{InstanceRebootMigrationState::NOT_SET};
    bool m_rebootMigrationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
