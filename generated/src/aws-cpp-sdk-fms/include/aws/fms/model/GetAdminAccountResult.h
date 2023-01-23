/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/AccountRoleStatus.h>
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
namespace FMS
{
namespace Model
{
  class GetAdminAccountResult
  {
  public:
    AWS_FMS_API GetAdminAccountResult();
    AWS_FMS_API GetAdminAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetAdminAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Web Services account that is set as the Firewall Manager
     * administrator.</p>
     */
    inline const Aws::String& GetAdminAccount() const{ return m_adminAccount; }

    /**
     * <p>The Amazon Web Services account that is set as the Firewall Manager
     * administrator.</p>
     */
    inline void SetAdminAccount(const Aws::String& value) { m_adminAccount = value; }

    /**
     * <p>The Amazon Web Services account that is set as the Firewall Manager
     * administrator.</p>
     */
    inline void SetAdminAccount(Aws::String&& value) { m_adminAccount = std::move(value); }

    /**
     * <p>The Amazon Web Services account that is set as the Firewall Manager
     * administrator.</p>
     */
    inline void SetAdminAccount(const char* value) { m_adminAccount.assign(value); }

    /**
     * <p>The Amazon Web Services account that is set as the Firewall Manager
     * administrator.</p>
     */
    inline GetAdminAccountResult& WithAdminAccount(const Aws::String& value) { SetAdminAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account that is set as the Firewall Manager
     * administrator.</p>
     */
    inline GetAdminAccountResult& WithAdminAccount(Aws::String&& value) { SetAdminAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account that is set as the Firewall Manager
     * administrator.</p>
     */
    inline GetAdminAccountResult& WithAdminAccount(const char* value) { SetAdminAccount(value); return *this;}


    /**
     * <p>The status of the Amazon Web Services account that you set as the Firewall
     * Manager administrator.</p>
     */
    inline const AccountRoleStatus& GetRoleStatus() const{ return m_roleStatus; }

    /**
     * <p>The status of the Amazon Web Services account that you set as the Firewall
     * Manager administrator.</p>
     */
    inline void SetRoleStatus(const AccountRoleStatus& value) { m_roleStatus = value; }

    /**
     * <p>The status of the Amazon Web Services account that you set as the Firewall
     * Manager administrator.</p>
     */
    inline void SetRoleStatus(AccountRoleStatus&& value) { m_roleStatus = std::move(value); }

    /**
     * <p>The status of the Amazon Web Services account that you set as the Firewall
     * Manager administrator.</p>
     */
    inline GetAdminAccountResult& WithRoleStatus(const AccountRoleStatus& value) { SetRoleStatus(value); return *this;}

    /**
     * <p>The status of the Amazon Web Services account that you set as the Firewall
     * Manager administrator.</p>
     */
    inline GetAdminAccountResult& WithRoleStatus(AccountRoleStatus&& value) { SetRoleStatus(std::move(value)); return *this;}

  private:

    Aws::String m_adminAccount;

    AccountRoleStatus m_roleStatus;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
