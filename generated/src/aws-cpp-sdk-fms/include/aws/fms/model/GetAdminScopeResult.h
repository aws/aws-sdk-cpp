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
    AWS_FMS_API GetAdminScopeResult();
    AWS_FMS_API GetAdminScopeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetAdminScopeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains details about the administrative scope of the requested account.</p>
     */
    inline const AdminScope& GetAdminScope() const{ return m_adminScope; }

    /**
     * <p>Contains details about the administrative scope of the requested account.</p>
     */
    inline void SetAdminScope(const AdminScope& value) { m_adminScope = value; }

    /**
     * <p>Contains details about the administrative scope of the requested account.</p>
     */
    inline void SetAdminScope(AdminScope&& value) { m_adminScope = std::move(value); }

    /**
     * <p>Contains details about the administrative scope of the requested account.</p>
     */
    inline GetAdminScopeResult& WithAdminScope(const AdminScope& value) { SetAdminScope(value); return *this;}

    /**
     * <p>Contains details about the administrative scope of the requested account.</p>
     */
    inline GetAdminScopeResult& WithAdminScope(AdminScope&& value) { SetAdminScope(std::move(value)); return *this;}


    /**
     * <p>The current status of the request to onboard a member account as an Firewall
     * Manager administator.</p> <ul> <li> <p> <code>ONBOARDING</code> - The account is
     * onboarding to Firewall Manager as an administrator.</p> </li> <li> <p>
     * <code>ONBOARDING_COMPLETE</code> - Firewall Manager The account is onboarded to
     * Firewall Manager as an administrator, and can perform actions on the resources
     * defined in their <a>AdminScope</a>.</p> </li> <li> <p> <code>OFFBOARDING</code>
     * - The account is being removed as an Firewall Manager administrator.</p> </li>
     * <li> <p> <code>OFFBOARDING_COMPLETE</code> - The account has been removed as an
     * Firewall Manager administrator.</p> </li> </ul>
     */
    inline const OrganizationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the request to onboard a member account as an Firewall
     * Manager administator.</p> <ul> <li> <p> <code>ONBOARDING</code> - The account is
     * onboarding to Firewall Manager as an administrator.</p> </li> <li> <p>
     * <code>ONBOARDING_COMPLETE</code> - Firewall Manager The account is onboarded to
     * Firewall Manager as an administrator, and can perform actions on the resources
     * defined in their <a>AdminScope</a>.</p> </li> <li> <p> <code>OFFBOARDING</code>
     * - The account is being removed as an Firewall Manager administrator.</p> </li>
     * <li> <p> <code>OFFBOARDING_COMPLETE</code> - The account has been removed as an
     * Firewall Manager administrator.</p> </li> </ul>
     */
    inline void SetStatus(const OrganizationStatus& value) { m_status = value; }

    /**
     * <p>The current status of the request to onboard a member account as an Firewall
     * Manager administator.</p> <ul> <li> <p> <code>ONBOARDING</code> - The account is
     * onboarding to Firewall Manager as an administrator.</p> </li> <li> <p>
     * <code>ONBOARDING_COMPLETE</code> - Firewall Manager The account is onboarded to
     * Firewall Manager as an administrator, and can perform actions on the resources
     * defined in their <a>AdminScope</a>.</p> </li> <li> <p> <code>OFFBOARDING</code>
     * - The account is being removed as an Firewall Manager administrator.</p> </li>
     * <li> <p> <code>OFFBOARDING_COMPLETE</code> - The account has been removed as an
     * Firewall Manager administrator.</p> </li> </ul>
     */
    inline void SetStatus(OrganizationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the request to onboard a member account as an Firewall
     * Manager administator.</p> <ul> <li> <p> <code>ONBOARDING</code> - The account is
     * onboarding to Firewall Manager as an administrator.</p> </li> <li> <p>
     * <code>ONBOARDING_COMPLETE</code> - Firewall Manager The account is onboarded to
     * Firewall Manager as an administrator, and can perform actions on the resources
     * defined in their <a>AdminScope</a>.</p> </li> <li> <p> <code>OFFBOARDING</code>
     * - The account is being removed as an Firewall Manager administrator.</p> </li>
     * <li> <p> <code>OFFBOARDING_COMPLETE</code> - The account has been removed as an
     * Firewall Manager administrator.</p> </li> </ul>
     */
    inline GetAdminScopeResult& WithStatus(const OrganizationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the request to onboard a member account as an Firewall
     * Manager administator.</p> <ul> <li> <p> <code>ONBOARDING</code> - The account is
     * onboarding to Firewall Manager as an administrator.</p> </li> <li> <p>
     * <code>ONBOARDING_COMPLETE</code> - Firewall Manager The account is onboarded to
     * Firewall Manager as an administrator, and can perform actions on the resources
     * defined in their <a>AdminScope</a>.</p> </li> <li> <p> <code>OFFBOARDING</code>
     * - The account is being removed as an Firewall Manager administrator.</p> </li>
     * <li> <p> <code>OFFBOARDING_COMPLETE</code> - The account has been removed as an
     * Firewall Manager administrator.</p> </li> </ul>
     */
    inline GetAdminScopeResult& WithStatus(OrganizationStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAdminScopeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAdminScopeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAdminScopeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AdminScope m_adminScope;

    OrganizationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
