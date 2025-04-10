﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/model/ResourcePendingMaintenanceAction.h>
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
namespace DocDBElastic
{
namespace Model
{
  class ApplyPendingMaintenanceActionResult
  {
  public:
    AWS_DOCDBELASTIC_API ApplyPendingMaintenanceActionResult() = default;
    AWS_DOCDBELASTIC_API ApplyPendingMaintenanceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DOCDBELASTIC_API ApplyPendingMaintenanceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The output of the pending maintenance action being applied.</p>
     */
    inline const ResourcePendingMaintenanceAction& GetResourcePendingMaintenanceAction() const { return m_resourcePendingMaintenanceAction; }
    template<typename ResourcePendingMaintenanceActionT = ResourcePendingMaintenanceAction>
    void SetResourcePendingMaintenanceAction(ResourcePendingMaintenanceActionT&& value) { m_resourcePendingMaintenanceActionHasBeenSet = true; m_resourcePendingMaintenanceAction = std::forward<ResourcePendingMaintenanceActionT>(value); }
    template<typename ResourcePendingMaintenanceActionT = ResourcePendingMaintenanceAction>
    ApplyPendingMaintenanceActionResult& WithResourcePendingMaintenanceAction(ResourcePendingMaintenanceActionT&& value) { SetResourcePendingMaintenanceAction(std::forward<ResourcePendingMaintenanceActionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ApplyPendingMaintenanceActionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResourcePendingMaintenanceAction m_resourcePendingMaintenanceAction;
    bool m_resourcePendingMaintenanceActionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
