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
    AWS_BACKUP_API GetRestoreTestingPlanResult();
    AWS_BACKUP_API GetRestoreTestingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetRestoreTestingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the body of a restore testing plan. Includes
     * <code>RestoreTestingPlanName</code>.</p>
     */
    inline const RestoreTestingPlanForGet& GetRestoreTestingPlan() const{ return m_restoreTestingPlan; }

    /**
     * <p>Specifies the body of a restore testing plan. Includes
     * <code>RestoreTestingPlanName</code>.</p>
     */
    inline void SetRestoreTestingPlan(const RestoreTestingPlanForGet& value) { m_restoreTestingPlan = value; }

    /**
     * <p>Specifies the body of a restore testing plan. Includes
     * <code>RestoreTestingPlanName</code>.</p>
     */
    inline void SetRestoreTestingPlan(RestoreTestingPlanForGet&& value) { m_restoreTestingPlan = std::move(value); }

    /**
     * <p>Specifies the body of a restore testing plan. Includes
     * <code>RestoreTestingPlanName</code>.</p>
     */
    inline GetRestoreTestingPlanResult& WithRestoreTestingPlan(const RestoreTestingPlanForGet& value) { SetRestoreTestingPlan(value); return *this;}

    /**
     * <p>Specifies the body of a restore testing plan. Includes
     * <code>RestoreTestingPlanName</code>.</p>
     */
    inline GetRestoreTestingPlanResult& WithRestoreTestingPlan(RestoreTestingPlanForGet&& value) { SetRestoreTestingPlan(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRestoreTestingPlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRestoreTestingPlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRestoreTestingPlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RestoreTestingPlanForGet m_restoreTestingPlan;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
