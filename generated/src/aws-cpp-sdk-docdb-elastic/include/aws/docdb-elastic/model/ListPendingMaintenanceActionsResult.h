/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb-elastic/model/ResourcePendingMaintenanceAction.h>
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
namespace DocDBElastic
{
namespace Model
{
  class ListPendingMaintenanceActionsResult
  {
  public:
    AWS_DOCDBELASTIC_API ListPendingMaintenanceActionsResult();
    AWS_DOCDBELASTIC_API ListPendingMaintenanceActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DOCDBELASTIC_API ListPendingMaintenanceActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is displayed, the responses will include only records beyond the
     * marker, up to the value specified by <code>maxResults</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPendingMaintenanceActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPendingMaintenanceActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPendingMaintenanceActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about a pending maintenance action for a resource.</p>
     */
    inline const Aws::Vector<ResourcePendingMaintenanceAction>& GetResourcePendingMaintenanceActions() const{ return m_resourcePendingMaintenanceActions; }
    inline void SetResourcePendingMaintenanceActions(const Aws::Vector<ResourcePendingMaintenanceAction>& value) { m_resourcePendingMaintenanceActions = value; }
    inline void SetResourcePendingMaintenanceActions(Aws::Vector<ResourcePendingMaintenanceAction>&& value) { m_resourcePendingMaintenanceActions = std::move(value); }
    inline ListPendingMaintenanceActionsResult& WithResourcePendingMaintenanceActions(const Aws::Vector<ResourcePendingMaintenanceAction>& value) { SetResourcePendingMaintenanceActions(value); return *this;}
    inline ListPendingMaintenanceActionsResult& WithResourcePendingMaintenanceActions(Aws::Vector<ResourcePendingMaintenanceAction>&& value) { SetResourcePendingMaintenanceActions(std::move(value)); return *this;}
    inline ListPendingMaintenanceActionsResult& AddResourcePendingMaintenanceActions(const ResourcePendingMaintenanceAction& value) { m_resourcePendingMaintenanceActions.push_back(value); return *this; }
    inline ListPendingMaintenanceActionsResult& AddResourcePendingMaintenanceActions(ResourcePendingMaintenanceAction&& value) { m_resourcePendingMaintenanceActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPendingMaintenanceActionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPendingMaintenanceActionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPendingMaintenanceActionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ResourcePendingMaintenanceAction> m_resourcePendingMaintenanceActions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
