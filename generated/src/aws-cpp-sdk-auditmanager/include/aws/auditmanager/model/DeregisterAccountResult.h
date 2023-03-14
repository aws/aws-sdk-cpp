/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/AccountStatus.h>
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
namespace AuditManager
{
namespace Model
{
  class DeregisterAccountResult
  {
  public:
    AWS_AUDITMANAGER_API DeregisterAccountResult();
    AWS_AUDITMANAGER_API DeregisterAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API DeregisterAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The registration status of the account. </p>
     */
    inline const AccountStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The registration status of the account. </p>
     */
    inline void SetStatus(const AccountStatus& value) { m_status = value; }

    /**
     * <p> The registration status of the account. </p>
     */
    inline void SetStatus(AccountStatus&& value) { m_status = std::move(value); }

    /**
     * <p> The registration status of the account. </p>
     */
    inline DeregisterAccountResult& WithStatus(const AccountStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The registration status of the account. </p>
     */
    inline DeregisterAccountResult& WithStatus(AccountStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeregisterAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeregisterAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeregisterAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccountStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
