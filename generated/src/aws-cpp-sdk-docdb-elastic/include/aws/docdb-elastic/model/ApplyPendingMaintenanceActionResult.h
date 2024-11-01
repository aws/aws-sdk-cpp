/**
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
    AWS_DOCDBELASTIC_API ApplyPendingMaintenanceActionResult();
    AWS_DOCDBELASTIC_API ApplyPendingMaintenanceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DOCDBELASTIC_API ApplyPendingMaintenanceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The output of the pending maintenance action being applied.</p>
     */
    inline const ResourcePendingMaintenanceAction& GetResourcePendingMaintenanceAction() const{ return m_resourcePendingMaintenanceAction; }
    inline void SetResourcePendingMaintenanceAction(const ResourcePendingMaintenanceAction& value) { m_resourcePendingMaintenanceAction = value; }
    inline void SetResourcePendingMaintenanceAction(ResourcePendingMaintenanceAction&& value) { m_resourcePendingMaintenanceAction = std::move(value); }
    inline ApplyPendingMaintenanceActionResult& WithResourcePendingMaintenanceAction(const ResourcePendingMaintenanceAction& value) { SetResourcePendingMaintenanceAction(value); return *this;}
    inline ApplyPendingMaintenanceActionResult& WithResourcePendingMaintenanceAction(ResourcePendingMaintenanceAction&& value) { SetResourcePendingMaintenanceAction(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ApplyPendingMaintenanceActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ApplyPendingMaintenanceActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ApplyPendingMaintenanceActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ResourcePendingMaintenanceAction m_resourcePendingMaintenanceAction;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
