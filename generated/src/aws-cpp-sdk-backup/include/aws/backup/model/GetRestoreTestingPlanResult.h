/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/RestoreTestingPlanForGet.h>
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
namespace Backup
{
namespace Model
{
  class GetRestoreTestingPlanResult
  {
  public:
    AWS_BACKUP_API GetRestoreTestingPlanResult() = default;
    AWS_BACKUP_API GetRestoreTestingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetRestoreTestingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the body of a restore testing plan. Includes
     * <code>RestoreTestingPlanName</code>.</p>
     */
    inline const RestoreTestingPlanForGet& GetRestoreTestingPlan() const { return m_restoreTestingPlan; }
    template<typename RestoreTestingPlanT = RestoreTestingPlanForGet>
    void SetRestoreTestingPlan(RestoreTestingPlanT&& value) { m_restoreTestingPlanHasBeenSet = true; m_restoreTestingPlan = std::forward<RestoreTestingPlanT>(value); }
    template<typename RestoreTestingPlanT = RestoreTestingPlanForGet>
    GetRestoreTestingPlanResult& WithRestoreTestingPlan(RestoreTestingPlanT&& value) { SetRestoreTestingPlan(std::forward<RestoreTestingPlanT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRestoreTestingPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RestoreTestingPlanForGet m_restoreTestingPlan;
    bool m_restoreTestingPlanHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
