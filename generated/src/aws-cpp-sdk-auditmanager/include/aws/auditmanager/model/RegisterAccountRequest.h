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
  class RegisterAccountRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API RegisterAccountRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterAccount"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The KMS key details. </p>
     */
    inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    template<typename KmsKeyT = Aws::String>
    void SetKmsKey(KmsKeyT&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::forward<KmsKeyT>(value); }
    template<typename KmsKeyT = Aws::String>
    RegisterAccountRequest& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The delegated administrator account for Audit Manager. </p>
     */
    inline const Aws::String& GetDelegatedAdminAccount() const { return m_delegatedAdminAccount; }
    inline bool DelegatedAdminAccountHasBeenSet() const { return m_delegatedAdminAccountHasBeenSet; }
    template<typename DelegatedAdminAccountT = Aws::String>
    void SetDelegatedAdminAccount(DelegatedAdminAccountT&& value) { m_delegatedAdminAccountHasBeenSet = true; m_delegatedAdminAccount = std::forward<DelegatedAdminAccountT>(value); }
    template<typename DelegatedAdminAccountT = Aws::String>
    RegisterAccountRequest& WithDelegatedAdminAccount(DelegatedAdminAccountT&& value) { SetDelegatedAdminAccount(std::forward<DelegatedAdminAccountT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    Aws::String m_delegatedAdminAccount;
    bool m_delegatedAdminAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
