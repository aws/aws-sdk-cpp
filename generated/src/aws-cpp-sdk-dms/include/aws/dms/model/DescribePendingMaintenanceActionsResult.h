﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribePendingMaintenanceActionsResponse">AWS
   * API Reference</a></p>
   */
  class DescribePendingMaintenanceActionsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribePendingMaintenanceActionsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribePendingMaintenanceActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribePendingMaintenanceActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pending maintenance action.</p>
     */
    inline const Aws::Vector<ResourcePendingMaintenanceActions>& GetPendingMaintenanceActions() const{ return m_pendingMaintenanceActions; }
    inline void SetPendingMaintenanceActions(const Aws::Vector<ResourcePendingMaintenanceActions>& value) { m_pendingMaintenanceActions = value; }
    inline void SetPendingMaintenanceActions(Aws::Vector<ResourcePendingMaintenanceActions>&& value) { m_pendingMaintenanceActions = std::move(value); }
    inline DescribePendingMaintenanceActionsResult& WithPendingMaintenanceActions(const Aws::Vector<ResourcePendingMaintenanceActions>& value) { SetPendingMaintenanceActions(value); return *this;}
    inline DescribePendingMaintenanceActionsResult& WithPendingMaintenanceActions(Aws::Vector<ResourcePendingMaintenanceActions>&& value) { SetPendingMaintenanceActions(std::move(value)); return *this;}
    inline DescribePendingMaintenanceActionsResult& AddPendingMaintenanceActions(const ResourcePendingMaintenanceActions& value) { m_pendingMaintenanceActions.push_back(value); return *this; }
    inline DescribePendingMaintenanceActionsResult& AddPendingMaintenanceActions(ResourcePendingMaintenanceActions&& value) { m_pendingMaintenanceActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribePendingMaintenanceActionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribePendingMaintenanceActionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribePendingMaintenanceActionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePendingMaintenanceActionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePendingMaintenanceActionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePendingMaintenanceActionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResourcePendingMaintenanceActions> m_pendingMaintenanceActions;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
