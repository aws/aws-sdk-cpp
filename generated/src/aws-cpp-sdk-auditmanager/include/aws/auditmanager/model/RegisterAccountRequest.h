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
    AWS_AUDITMANAGER_API RegisterAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterAccount"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p> The KMS key details. </p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p> The KMS key details. </p>
     */
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }

    /**
     * <p> The KMS key details. </p>
     */
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }

    /**
     * <p> The KMS key details. </p>
     */
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }

    /**
     * <p> The KMS key details. </p>
     */
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }

    /**
     * <p> The KMS key details. </p>
     */
    inline RegisterAccountRequest& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

    /**
     * <p> The KMS key details. </p>
     */
    inline RegisterAccountRequest& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

    /**
     * <p> The KMS key details. </p>
     */
    inline RegisterAccountRequest& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}


    /**
     * <p> The delegated administrator account for Audit Manager. </p>
     */
    inline const Aws::String& GetDelegatedAdminAccount() const{ return m_delegatedAdminAccount; }

    /**
     * <p> The delegated administrator account for Audit Manager. </p>
     */
    inline bool DelegatedAdminAccountHasBeenSet() const { return m_delegatedAdminAccountHasBeenSet; }

    /**
     * <p> The delegated administrator account for Audit Manager. </p>
     */
    inline void SetDelegatedAdminAccount(const Aws::String& value) { m_delegatedAdminAccountHasBeenSet = true; m_delegatedAdminAccount = value; }

    /**
     * <p> The delegated administrator account for Audit Manager. </p>
     */
    inline void SetDelegatedAdminAccount(Aws::String&& value) { m_delegatedAdminAccountHasBeenSet = true; m_delegatedAdminAccount = std::move(value); }

    /**
     * <p> The delegated administrator account for Audit Manager. </p>
     */
    inline void SetDelegatedAdminAccount(const char* value) { m_delegatedAdminAccountHasBeenSet = true; m_delegatedAdminAccount.assign(value); }

    /**
     * <p> The delegated administrator account for Audit Manager. </p>
     */
    inline RegisterAccountRequest& WithDelegatedAdminAccount(const Aws::String& value) { SetDelegatedAdminAccount(value); return *this;}

    /**
     * <p> The delegated administrator account for Audit Manager. </p>
     */
    inline RegisterAccountRequest& WithDelegatedAdminAccount(Aws::String&& value) { SetDelegatedAdminAccount(std::move(value)); return *this;}

    /**
     * <p> The delegated administrator account for Audit Manager. </p>
     */
    inline RegisterAccountRequest& WithDelegatedAdminAccount(const char* value) { SetDelegatedAdminAccount(value); return *this;}

  private:

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    Aws::String m_delegatedAdminAccount;
    bool m_delegatedAdminAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
