/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/LogExport.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class UpdateNamespaceRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNamespace"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The password of the administrator for the first database created in the
     * namespace.</p>
     */
    inline const Aws::String& GetAdminUserPassword() const{ return m_adminUserPassword; }

    /**
     * <p>The password of the administrator for the first database created in the
     * namespace.</p>
     */
    inline bool AdminUserPasswordHasBeenSet() const { return m_adminUserPasswordHasBeenSet; }

    /**
     * <p>The password of the administrator for the first database created in the
     * namespace.</p>
     */
    inline void SetAdminUserPassword(const Aws::String& value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword = value; }

    /**
     * <p>The password of the administrator for the first database created in the
     * namespace.</p>
     */
    inline void SetAdminUserPassword(Aws::String&& value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword = std::move(value); }

    /**
     * <p>The password of the administrator for the first database created in the
     * namespace.</p>
     */
    inline void SetAdminUserPassword(const char* value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword.assign(value); }

    /**
     * <p>The password of the administrator for the first database created in the
     * namespace.</p>
     */
    inline UpdateNamespaceRequest& WithAdminUserPassword(const Aws::String& value) { SetAdminUserPassword(value); return *this;}

    /**
     * <p>The password of the administrator for the first database created in the
     * namespace.</p>
     */
    inline UpdateNamespaceRequest& WithAdminUserPassword(Aws::String&& value) { SetAdminUserPassword(std::move(value)); return *this;}

    /**
     * <p>The password of the administrator for the first database created in the
     * namespace.</p>
     */
    inline UpdateNamespaceRequest& WithAdminUserPassword(const char* value) { SetAdminUserPassword(value); return *this;}


    /**
     * <p>The username of the administrator for the first database created in the
     * namespace.</p>
     */
    inline const Aws::String& GetAdminUsername() const{ return m_adminUsername; }

    /**
     * <p>The username of the administrator for the first database created in the
     * namespace.</p>
     */
    inline bool AdminUsernameHasBeenSet() const { return m_adminUsernameHasBeenSet; }

    /**
     * <p>The username of the administrator for the first database created in the
     * namespace.</p>
     */
    inline void SetAdminUsername(const Aws::String& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = value; }

    /**
     * <p>The username of the administrator for the first database created in the
     * namespace.</p>
     */
    inline void SetAdminUsername(Aws::String&& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = std::move(value); }

    /**
     * <p>The username of the administrator for the first database created in the
     * namespace.</p>
     */
    inline void SetAdminUsername(const char* value) { m_adminUsernameHasBeenSet = true; m_adminUsername.assign(value); }

    /**
     * <p>The username of the administrator for the first database created in the
     * namespace.</p>
     */
    inline UpdateNamespaceRequest& WithAdminUsername(const Aws::String& value) { SetAdminUsername(value); return *this;}

    /**
     * <p>The username of the administrator for the first database created in the
     * namespace.</p>
     */
    inline UpdateNamespaceRequest& WithAdminUsername(Aws::String&& value) { SetAdminUsername(std::move(value)); return *this;}

    /**
     * <p>The username of the administrator for the first database created in the
     * namespace.</p>
     */
    inline UpdateNamespaceRequest& WithAdminUsername(const char* value) { SetAdminUsername(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to set as a default in the
     * namespace.</p>
     */
    inline const Aws::String& GetDefaultIamRoleArn() const{ return m_defaultIamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to set as a default in the
     * namespace.</p>
     */
    inline bool DefaultIamRoleArnHasBeenSet() const { return m_defaultIamRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to set as a default in the
     * namespace.</p>
     */
    inline void SetDefaultIamRoleArn(const Aws::String& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to set as a default in the
     * namespace.</p>
     */
    inline void SetDefaultIamRoleArn(Aws::String&& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to set as a default in the
     * namespace.</p>
     */
    inline void SetDefaultIamRoleArn(const char* value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to set as a default in the
     * namespace.</p>
     */
    inline UpdateNamespaceRequest& WithDefaultIamRoleArn(const Aws::String& value) { SetDefaultIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to set as a default in the
     * namespace.</p>
     */
    inline UpdateNamespaceRequest& WithDefaultIamRoleArn(Aws::String&& value) { SetDefaultIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to set as a default in the
     * namespace.</p>
     */
    inline UpdateNamespaceRequest& WithDefaultIamRoleArn(const char* value) { SetDefaultIamRoleArn(value); return *this;}


    /**
     * <p>A list of IAM roles to associate with the namespace.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIamRoles() const{ return m_iamRoles; }

    /**
     * <p>A list of IAM roles to associate with the namespace.</p>
     */
    inline bool IamRolesHasBeenSet() const { return m_iamRolesHasBeenSet; }

    /**
     * <p>A list of IAM roles to associate with the namespace.</p>
     */
    inline void SetIamRoles(const Aws::Vector<Aws::String>& value) { m_iamRolesHasBeenSet = true; m_iamRoles = value; }

    /**
     * <p>A list of IAM roles to associate with the namespace.</p>
     */
    inline void SetIamRoles(Aws::Vector<Aws::String>&& value) { m_iamRolesHasBeenSet = true; m_iamRoles = std::move(value); }

    /**
     * <p>A list of IAM roles to associate with the namespace.</p>
     */
    inline UpdateNamespaceRequest& WithIamRoles(const Aws::Vector<Aws::String>& value) { SetIamRoles(value); return *this;}

    /**
     * <p>A list of IAM roles to associate with the namespace.</p>
     */
    inline UpdateNamespaceRequest& WithIamRoles(Aws::Vector<Aws::String>&& value) { SetIamRoles(std::move(value)); return *this;}

    /**
     * <p>A list of IAM roles to associate with the namespace.</p>
     */
    inline UpdateNamespaceRequest& AddIamRoles(const Aws::String& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(value); return *this; }

    /**
     * <p>A list of IAM roles to associate with the namespace.</p>
     */
    inline UpdateNamespaceRequest& AddIamRoles(Aws::String&& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IAM roles to associate with the namespace.</p>
     */
    inline UpdateNamespaceRequest& AddIamRoles(const char* value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(value); return *this; }


    /**
     * <p>The ID of the Amazon Web Services Key Management Service key used to encrypt
     * your data.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service key used to encrypt
     * your data.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service key used to encrypt
     * your data.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service key used to encrypt
     * your data.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service key used to encrypt
     * your data.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Key Management Service key used to encrypt
     * your data.</p>
     */
    inline UpdateNamespaceRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Key Management Service key used to encrypt
     * your data.</p>
     */
    inline UpdateNamespaceRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Key Management Service key used to encrypt
     * your data.</p>
     */
    inline UpdateNamespaceRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The types of logs the namespace can export. The export types are
     * <code>userlog</code>, <code>connectionlog</code>, and
     * <code>useractivitylog</code>.</p>
     */
    inline const Aws::Vector<LogExport>& GetLogExports() const{ return m_logExports; }

    /**
     * <p>The types of logs the namespace can export. The export types are
     * <code>userlog</code>, <code>connectionlog</code>, and
     * <code>useractivitylog</code>.</p>
     */
    inline bool LogExportsHasBeenSet() const { return m_logExportsHasBeenSet; }

    /**
     * <p>The types of logs the namespace can export. The export types are
     * <code>userlog</code>, <code>connectionlog</code>, and
     * <code>useractivitylog</code>.</p>
     */
    inline void SetLogExports(const Aws::Vector<LogExport>& value) { m_logExportsHasBeenSet = true; m_logExports = value; }

    /**
     * <p>The types of logs the namespace can export. The export types are
     * <code>userlog</code>, <code>connectionlog</code>, and
     * <code>useractivitylog</code>.</p>
     */
    inline void SetLogExports(Aws::Vector<LogExport>&& value) { m_logExportsHasBeenSet = true; m_logExports = std::move(value); }

    /**
     * <p>The types of logs the namespace can export. The export types are
     * <code>userlog</code>, <code>connectionlog</code>, and
     * <code>useractivitylog</code>.</p>
     */
    inline UpdateNamespaceRequest& WithLogExports(const Aws::Vector<LogExport>& value) { SetLogExports(value); return *this;}

    /**
     * <p>The types of logs the namespace can export. The export types are
     * <code>userlog</code>, <code>connectionlog</code>, and
     * <code>useractivitylog</code>.</p>
     */
    inline UpdateNamespaceRequest& WithLogExports(Aws::Vector<LogExport>&& value) { SetLogExports(std::move(value)); return *this;}

    /**
     * <p>The types of logs the namespace can export. The export types are
     * <code>userlog</code>, <code>connectionlog</code>, and
     * <code>useractivitylog</code>.</p>
     */
    inline UpdateNamespaceRequest& AddLogExports(const LogExport& value) { m_logExportsHasBeenSet = true; m_logExports.push_back(value); return *this; }

    /**
     * <p>The types of logs the namespace can export. The export types are
     * <code>userlog</code>, <code>connectionlog</code>, and
     * <code>useractivitylog</code>.</p>
     */
    inline UpdateNamespaceRequest& AddLogExports(LogExport&& value) { m_logExportsHasBeenSet = true; m_logExports.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the namespace.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the namespace.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The name of the namespace.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The name of the namespace.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The name of the namespace.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The name of the namespace.</p>
     */
    inline UpdateNamespaceRequest& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the namespace.</p>
     */
    inline UpdateNamespaceRequest& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace.</p>
     */
    inline UpdateNamespaceRequest& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}

  private:

    Aws::String m_adminUserPassword;
    bool m_adminUserPasswordHasBeenSet = false;

    Aws::String m_adminUsername;
    bool m_adminUsernameHasBeenSet = false;

    Aws::String m_defaultIamRoleArn;
    bool m_defaultIamRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_iamRoles;
    bool m_iamRolesHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<LogExport> m_logExports;
    bool m_logExportsHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
