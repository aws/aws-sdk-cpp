/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/ResourcePendingMaintenanceActions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ApplyPendingMaintenanceActionResponse">AWS
   * API Reference</a></p>
   */
  class ApplyPendingMaintenanceActionResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ApplyPendingMaintenanceActionResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ApplyPendingMaintenanceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ApplyPendingMaintenanceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The DMS resource that the pending maintenance action will be applied to.</p>
     */
    inline const ResourcePendingMaintenanceActions& GetResourcePendingMaintenanceActions() const { return m_resourcePendingMaintenanceActions; }
    template<typename ResourcePendingMaintenanceActionsT = ResourcePendingMaintenanceActions>
    void SetResourcePendingMaintenanceActions(ResourcePendingMaintenanceActionsT&& value) { m_resourcePendingMaintenanceActionsHasBeenSet = true; m_resourcePendingMaintenanceActions = std::forward<ResourcePendingMaintenanceActionsT>(value); }
    template<typename ResourcePendingMaintenanceActionsT = ResourcePendingMaintenanceActions>
    ApplyPendingMaintenanceActionResult& WithResourcePendingMaintenanceActions(ResourcePendingMaintenanceActionsT&& value) { SetResourcePendingMaintenanceActions(std::forward<ResourcePendingMaintenanceActionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ApplyPendingMaintenanceActionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResourcePendingMaintenanceActions m_resourcePendingMaintenanceActions;
    bool m_resourcePendingMaintenanceActionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
