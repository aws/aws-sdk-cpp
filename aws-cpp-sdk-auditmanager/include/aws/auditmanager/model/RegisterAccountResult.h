﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/AccountStatus.h>
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
  class AWS_AUDITMANAGER_API RegisterAccountResult
  {
  public:
    RegisterAccountResult();
    RegisterAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RegisterAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The status of the account registration request. </p>
     */
    inline const AccountStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the account registration request. </p>
     */
    inline void SetStatus(const AccountStatus& value) { m_status = value; }

    /**
     * <p> The status of the account registration request. </p>
     */
    inline void SetStatus(AccountStatus&& value) { m_status = std::move(value); }

    /**
     * <p> The status of the account registration request. </p>
     */
    inline RegisterAccountResult& WithStatus(const AccountStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the account registration request. </p>
     */
    inline RegisterAccountResult& WithStatus(AccountStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    AccountStatus m_status;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
