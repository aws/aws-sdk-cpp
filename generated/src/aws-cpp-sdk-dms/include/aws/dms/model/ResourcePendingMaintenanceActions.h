/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/PendingMaintenanceAction.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Identifies an DMS resource and any pending actions for it.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ResourcePendingMaintenanceActions">AWS
   * API Reference</a></p>
   */
  class ResourcePendingMaintenanceActions
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ResourcePendingMaintenanceActions() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ResourcePendingMaintenanceActions(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ResourcePendingMaintenanceActions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the DMS resource that the pending
     * maintenance action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Introduction.AWS.ARN.html">
     * Constructing an Amazon Resource Name (ARN) for DMS</a> in the DMS
     * documentation.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    ResourcePendingMaintenanceActions& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the pending maintenance action.</p>
     */
    inline const Aws::Vector<PendingMaintenanceAction>& GetPendingMaintenanceActionDetails() const { return m_pendingMaintenanceActionDetails; }
    inline bool PendingMaintenanceActionDetailsHasBeenSet() const { return m_pendingMaintenanceActionDetailsHasBeenSet; }
    template<typename PendingMaintenanceActionDetailsT = Aws::Vector<PendingMaintenanceAction>>
    void SetPendingMaintenanceActionDetails(PendingMaintenanceActionDetailsT&& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails = std::forward<PendingMaintenanceActionDetailsT>(value); }
    template<typename PendingMaintenanceActionDetailsT = Aws::Vector<PendingMaintenanceAction>>
    ResourcePendingMaintenanceActions& WithPendingMaintenanceActionDetails(PendingMaintenanceActionDetailsT&& value) { SetPendingMaintenanceActionDetails(std::forward<PendingMaintenanceActionDetailsT>(value)); return *this;}
    template<typename PendingMaintenanceActionDetailsT = PendingMaintenanceAction>
    ResourcePendingMaintenanceActions& AddPendingMaintenanceActionDetails(PendingMaintenanceActionDetailsT&& value) { m_pendingMaintenanceActionDetailsHasBeenSet = true; m_pendingMaintenanceActionDetails.emplace_back(std::forward<PendingMaintenanceActionDetailsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Vector<PendingMaintenanceAction> m_pendingMaintenanceActionDetails;
    bool m_pendingMaintenanceActionDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
