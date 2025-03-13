/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class DeregisterOrganizationAdminAccountRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API DeregisterOrganizationAdminAccountRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterOrganizationAdminAccount"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The identifier for the administrator account. </p>
     */
    inline const Aws::String& GetAdminAccountId() const { return m_adminAccountId; }
    inline bool AdminAccountIdHasBeenSet() const { return m_adminAccountIdHasBeenSet; }
    template<typename AdminAccountIdT = Aws::String>
    void SetAdminAccountId(AdminAccountIdT&& value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId = std::forward<AdminAccountIdT>(value); }
    template<typename AdminAccountIdT = Aws::String>
    DeregisterOrganizationAdminAccountRequest& WithAdminAccountId(AdminAccountIdT&& value) { SetAdminAccountId(std::forward<AdminAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adminAccountId;
    bool m_adminAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
