﻿/**
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
  class GetAccountStatusResult
  {
  public:
    AWS_AUDITMANAGER_API GetAccountStatusResult();
    AWS_AUDITMANAGER_API GetAccountStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetAccountStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The status of the Amazon Web Services account. </p>
     */
    inline const AccountStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const AccountStatus& value) { m_status = value; }
    inline void SetStatus(AccountStatus&& value) { m_status = std::move(value); }
    inline GetAccountStatusResult& WithStatus(const AccountStatus& value) { SetStatus(value); return *this;}
    inline GetAccountStatusResult& WithStatus(AccountStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAccountStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAccountStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAccountStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AccountStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
