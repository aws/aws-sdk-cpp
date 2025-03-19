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
    AWS_DOCDBELASTIC_API ListPendingMaintenanceActionsResult() = default;
    AWS_DOCDBELASTIC_API ListPendingMaintenanceActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DOCDBELASTIC_API ListPendingMaintenanceActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is displayed, the responses will include only records beyond the
     * marker, up to the value specified by <code>maxResults</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPendingMaintenanceActionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about a pending maintenance action for a resource.</p>
     */
    inline const Aws::Vector<ResourcePendingMaintenanceAction>& GetResourcePendingMaintenanceActions() const { return m_resourcePendingMaintenanceActions; }
    template<typename ResourcePendingMaintenanceActionsT = Aws::Vector<ResourcePendingMaintenanceAction>>
    void SetResourcePendingMaintenanceActions(ResourcePendingMaintenanceActionsT&& value) { m_resourcePendingMaintenanceActionsHasBeenSet = true; m_resourcePendingMaintenanceActions = std::forward<ResourcePendingMaintenanceActionsT>(value); }
    template<typename ResourcePendingMaintenanceActionsT = Aws::Vector<ResourcePendingMaintenanceAction>>
    ListPendingMaintenanceActionsResult& WithResourcePendingMaintenanceActions(ResourcePendingMaintenanceActionsT&& value) { SetResourcePendingMaintenanceActions(std::forward<ResourcePendingMaintenanceActionsT>(value)); return *this;}
    template<typename ResourcePendingMaintenanceActionsT = ResourcePendingMaintenanceAction>
    ListPendingMaintenanceActionsResult& AddResourcePendingMaintenanceActions(ResourcePendingMaintenanceActionsT&& value) { m_resourcePendingMaintenanceActionsHasBeenSet = true; m_resourcePendingMaintenanceActions.emplace_back(std::forward<ResourcePendingMaintenanceActionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPendingMaintenanceActionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ResourcePendingMaintenanceAction> m_resourcePendingMaintenanceActions;
    bool m_resourcePendingMaintenanceActionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
