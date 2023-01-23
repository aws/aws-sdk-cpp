/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/ResourcePendingMaintenanceActions.h>
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
    AWS_DATABASEMIGRATIONSERVICE_API ApplyPendingMaintenanceActionResult();
    AWS_DATABASEMIGRATIONSERVICE_API ApplyPendingMaintenanceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ApplyPendingMaintenanceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The DMS resource that the pending maintenance action will be applied to.</p>
     */
    inline const ResourcePendingMaintenanceActions& GetResourcePendingMaintenanceActions() const{ return m_resourcePendingMaintenanceActions; }

    /**
     * <p>The DMS resource that the pending maintenance action will be applied to.</p>
     */
    inline void SetResourcePendingMaintenanceActions(const ResourcePendingMaintenanceActions& value) { m_resourcePendingMaintenanceActions = value; }

    /**
     * <p>The DMS resource that the pending maintenance action will be applied to.</p>
     */
    inline void SetResourcePendingMaintenanceActions(ResourcePendingMaintenanceActions&& value) { m_resourcePendingMaintenanceActions = std::move(value); }

    /**
     * <p>The DMS resource that the pending maintenance action will be applied to.</p>
     */
    inline ApplyPendingMaintenanceActionResult& WithResourcePendingMaintenanceActions(const ResourcePendingMaintenanceActions& value) { SetResourcePendingMaintenanceActions(value); return *this;}

    /**
     * <p>The DMS resource that the pending maintenance action will be applied to.</p>
     */
    inline ApplyPendingMaintenanceActionResult& WithResourcePendingMaintenanceActions(ResourcePendingMaintenanceActions&& value) { SetResourcePendingMaintenanceActions(std::move(value)); return *this;}

  private:

    ResourcePendingMaintenanceActions m_resourcePendingMaintenanceActions;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
