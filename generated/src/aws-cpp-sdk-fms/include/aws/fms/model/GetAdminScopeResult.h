/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/AdminScope.h>
#include <aws/fms/model/OrganizationStatus.h>
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
namespace FMS
{
namespace Model
{
  class GetAdminScopeResult
  {
  public:
    AWS_FMS_API GetAdminScopeResult() = default;
    AWS_FMS_API GetAdminScopeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetAdminScopeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains details about the administrative scope of the requested account.</p>
     */
    inline const AdminScope& GetAdminScope() const { return m_adminScope; }
    template<typename AdminScopeT = AdminScope>
    void SetAdminScope(AdminScopeT&& value) { m_adminScopeHasBeenSet = true; m_adminScope = std::forward<AdminScopeT>(value); }
    template<typename AdminScopeT = AdminScope>
    GetAdminScopeResult& WithAdminScope(AdminScopeT&& value) { SetAdminScope(std::forward<AdminScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the request to onboard a member account as an Firewall
     * Manager administrator.</p> <ul> <li> <p> <code>ONBOARDING</code> - The account
     * is onboarding to Firewall Manager as an administrator.</p> </li> <li> <p>
     * <code>ONBOARDING_COMPLETE</code> - Firewall Manager The account is onboarded to
     * Firewall Manager as an administrator, and can perform actions on the resources
     * defined in their <a>AdminScope</a>.</p> </li> <li> <p> <code>OFFBOARDING</code>
     * - The account is being removed as an Firewall Manager administrator.</p> </li>
     * <li> <p> <code>OFFBOARDING_COMPLETE</code> - The account has been removed as an
     * Firewall Manager administrator.</p> </li> </ul>
     */
    inline OrganizationStatus GetStatus() const { return m_status; }
    inline void SetStatus(OrganizationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetAdminScopeResult& WithStatus(OrganizationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAdminScopeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AdminScope m_adminScope;
    bool m_adminScopeHasBeenSet = false;

    OrganizationStatus m_status{OrganizationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
