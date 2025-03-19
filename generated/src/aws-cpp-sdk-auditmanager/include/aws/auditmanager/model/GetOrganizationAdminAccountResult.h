/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
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
  class GetOrganizationAdminAccountResult
  {
  public:
    AWS_AUDITMANAGER_API GetOrganizationAdminAccountResult() = default;
    AWS_AUDITMANAGER_API GetOrganizationAdminAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetOrganizationAdminAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The identifier for the administrator account. </p>
     */
    inline const Aws::String& GetAdminAccountId() const { return m_adminAccountId; }
    template<typename AdminAccountIdT = Aws::String>
    void SetAdminAccountId(AdminAccountIdT&& value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId = std::forward<AdminAccountIdT>(value); }
    template<typename AdminAccountIdT = Aws::String>
    GetOrganizationAdminAccountResult& WithAdminAccountId(AdminAccountIdT&& value) { SetAdminAccountId(std::forward<AdminAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the organization. </p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    GetOrganizationAdminAccountResult& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOrganizationAdminAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adminAccountId;
    bool m_adminAccountIdHasBeenSet = false;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
