/**
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
  class GetAccountStatusResult
  {
  public:
    AWS_AUDITMANAGER_API GetAccountStatusResult();
    AWS_AUDITMANAGER_API GetAccountStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetAccountStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The status of the Amazon Web Services account. </p>
     */
    inline const AccountStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the Amazon Web Services account. </p>
     */
    inline void SetStatus(const AccountStatus& value) { m_status = value; }

    /**
     * <p> The status of the Amazon Web Services account. </p>
     */
    inline void SetStatus(AccountStatus&& value) { m_status = std::move(value); }

    /**
     * <p> The status of the Amazon Web Services account. </p>
     */
    inline GetAccountStatusResult& WithStatus(const AccountStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the Amazon Web Services account. </p>
     */
    inline GetAccountStatusResult& WithStatus(AccountStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    AccountStatus m_status;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
