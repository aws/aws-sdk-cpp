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
    AWS_FMS_API GetAdminAccountResult() = default;
    AWS_FMS_API GetAdminAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetAdminAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The account that is set as the Firewall Manager default administrator.</p>
     */
    inline const Aws::String& GetAdminAccount() const { return m_adminAccount; }
    template<typename AdminAccountT = Aws::String>
    void SetAdminAccount(AdminAccountT&& value) { m_adminAccountHasBeenSet = true; m_adminAccount = std::forward<AdminAccountT>(value); }
    template<typename AdminAccountT = Aws::String>
    GetAdminAccountResult& WithAdminAccount(AdminAccountT&& value) { SetAdminAccount(std::forward<AdminAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the account that you set as the Firewall Manager default
     * administrator.</p>
     */
    inline AccountRoleStatus GetRoleStatus() const { return m_roleStatus; }
    inline void SetRoleStatus(AccountRoleStatus value) { m_roleStatusHasBeenSet = true; m_roleStatus = value; }
    inline GetAdminAccountResult& WithRoleStatus(AccountRoleStatus value) { SetRoleStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAdminAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adminAccount;
    bool m_adminAccountHasBeenSet = false;

    AccountRoleStatus m_roleStatus{AccountRoleStatus::NOT_SET};
    bool m_roleStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
