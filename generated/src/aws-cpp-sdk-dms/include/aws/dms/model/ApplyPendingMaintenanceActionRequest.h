/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ApplyPendingMaintenanceActionMessage">AWS
   * API Reference</a></p>
   */
  class ApplyPendingMaintenanceActionRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ApplyPendingMaintenanceActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ApplyPendingMaintenanceAction"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the DMS resource that the pending
     * maintenance action applies to.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const { return m_replicationInstanceArn; }
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }
    template<typename ReplicationInstanceArnT = Aws::String>
    void SetReplicationInstanceArn(ReplicationInstanceArnT&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::forward<ReplicationInstanceArnT>(value); }
    template<typename ReplicationInstanceArnT = Aws::String>
    ApplyPendingMaintenanceActionRequest& WithReplicationInstanceArn(ReplicationInstanceArnT&& value) { SetReplicationInstanceArn(std::forward<ReplicationInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>os-upgrade</code>, <code>system-update</code>,
     * <code>db-upgrade</code>, <code>os-patch</code> </p>
     */
    inline const Aws::String& GetApplyAction() const { return m_applyAction; }
    inline bool ApplyActionHasBeenSet() const { return m_applyActionHasBeenSet; }
    template<typename ApplyActionT = Aws::String>
    void SetApplyAction(ApplyActionT&& value) { m_applyActionHasBeenSet = true; m_applyAction = std::forward<ApplyActionT>(value); }
    template<typename ApplyActionT = Aws::String>
    ApplyPendingMaintenanceActionRequest& WithApplyAction(ApplyActionT&& value) { SetApplyAction(std::forward<ApplyActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the type of opt-in request, or undoes an opt-in
     * request. You can't undo an opt-in request of type <code>immediate</code>.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline const Aws::String& GetOptInType() const { return m_optInType; }
    inline bool OptInTypeHasBeenSet() const { return m_optInTypeHasBeenSet; }
    template<typename OptInTypeT = Aws::String>
    void SetOptInType(OptInTypeT&& value) { m_optInTypeHasBeenSet = true; m_optInType = std::forward<OptInTypeT>(value); }
    template<typename OptInTypeT = Aws::String>
    ApplyPendingMaintenanceActionRequest& WithOptInType(OptInTypeT&& value) { SetOptInType(std::forward<OptInTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet = false;

    Aws::String m_applyAction;
    bool m_applyActionHasBeenSet = false;

    Aws::String m_optInType;
    bool m_optInTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
