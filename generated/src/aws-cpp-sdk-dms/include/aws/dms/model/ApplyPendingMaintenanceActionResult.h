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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ApplyPendingMaintenanceActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ApplyPendingMaintenanceActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ApplyPendingMaintenanceActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResourcePendingMaintenanceActions m_resourcePendingMaintenanceActions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
