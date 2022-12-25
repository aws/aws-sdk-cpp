/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/NamespaceStatus.h>
#include <aws/redshift-serverless/model/LogExport.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>A collection of database objects and users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/Namespace">AWS
   * API Reference</a></p>
   */
  class Namespace
  {
  public:
    AWS_REDSHIFTSERVERLESS_API Namespace();
    AWS_REDSHIFTSERVERLESS_API Namespace(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Namespace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline Namespace& WithAdminUsername(const Aws::String& value) { SetAdminUsername(value); return *this;}

    /**
     * <p>The username of the administrator for the first database created in the
     * namespace.</p>
     */
    inline Namespace& WithAdminUsername(Aws::String&& value) { SetAdminUsername(std::move(value)); return *this;}

    /**
     * <p>The username of the administrator for the first database created in the
     * namespace.</p>
     */
    inline Namespace& WithAdminUsername(const char* value) { SetAdminUsername(value); return *this;}


    /**
     * <p>The date of when the namespace was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date of when the namespace was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date of when the namespace was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date of when the namespace was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date of when the namespace was created.</p>
     */
    inline Namespace& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date of when the namespace was created.</p>
     */
    inline Namespace& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The name of the first database created in the namespace.</p>
     */
    inline const Aws::String& GetDbName() const{ return m_dbName; }

    /**
     * <p>The name of the first database created in the namespace.</p>
     */
    inline bool DbNameHasBeenSet() const { return m_dbNameHasBeenSet; }

    /**
     * <p>The name of the first database created in the namespace.</p>
     */
    inline void SetDbName(const Aws::String& value) { m_dbNameHasBeenSet = true; m_dbName = value; }

    /**
     * <p>The name of the first database created in the namespace.</p>
     */
    inline void SetDbName(Aws::String&& value) { m_dbNameHasBeenSet = true; m_dbName = std::move(value); }

    /**
     * <p>The name of the first database created in the namespace.</p>
     */
    inline void SetDbName(const char* value) { m_dbNameHasBeenSet = true; m_dbName.assign(value); }

    /**
     * <p>The name of the first database created in the namespace.</p>
     */
    inline Namespace& WithDbName(const Aws::String& value) { SetDbName(value); return *this;}

    /**
     * <p>The name of the first database created in the namespace.</p>
     */
    inline Namespace& WithDbName(Aws::String&& value) { SetDbName(std::move(value)); return *this;}

    /**
     * <p>The name of the first database created in the namespace.</p>
     */
    inline Namespace& WithDbName(const char* value) { SetDbName(value); return *this;}


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
    inline Namespace& WithDefaultIamRoleArn(const Aws::String& value) { SetDefaultIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to set as a default in the
     * namespace.</p>
     */
    inline Namespace& WithDefaultIamRoleArn(Aws::String&& value) { SetDefaultIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to set as a default in the
     * namespace.</p>
     */
    inline Namespace& WithDefaultIamRoleArn(const char* value) { SetDefaultIamRoleArn(value); return *this;}


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
    inline Namespace& WithIamRoles(const Aws::Vector<Aws::String>& value) { SetIamRoles(value); return *this;}

    /**
     * <p>A list of IAM roles to associate with the namespace.</p>
     */
    inline Namespace& WithIamRoles(Aws::Vector<Aws::String>&& value) { SetIamRoles(std::move(value)); return *this;}

    /**
     * <p>A list of IAM roles to associate with the namespace.</p>
     */
    inline Namespace& AddIamRoles(const Aws::String& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(value); return *this; }

    /**
     * <p>A list of IAM roles to associate with the namespace.</p>
     */
    inline Namespace& AddIamRoles(Aws::String&& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IAM roles to associate with the namespace.</p>
     */
    inline Namespace& AddIamRoles(const char* value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(value); return *this; }


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
    inline Namespace& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Key Management Service key used to encrypt
     * your data.</p>
     */
    inline Namespace& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Key Management Service key used to encrypt
     * your data.</p>
     */
    inline Namespace& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The types of logs the namespace can export. Available export types are User
     * log, Connection log, and User activity log.</p>
     */
    inline const Aws::Vector<LogExport>& GetLogExports() const{ return m_logExports; }

    /**
     * <p>The types of logs the namespace can export. Available export types are User
     * log, Connection log, and User activity log.</p>
     */
    inline bool LogExportsHasBeenSet() const { return m_logExportsHasBeenSet; }

    /**
     * <p>The types of logs the namespace can export. Available export types are User
     * log, Connection log, and User activity log.</p>
     */
    inline void SetLogExports(const Aws::Vector<LogExport>& value) { m_logExportsHasBeenSet = true; m_logExports = value; }

    /**
     * <p>The types of logs the namespace can export. Available export types are User
     * log, Connection log, and User activity log.</p>
     */
    inline void SetLogExports(Aws::Vector<LogExport>&& value) { m_logExportsHasBeenSet = true; m_logExports = std::move(value); }

    /**
     * <p>The types of logs the namespace can export. Available export types are User
     * log, Connection log, and User activity log.</p>
     */
    inline Namespace& WithLogExports(const Aws::Vector<LogExport>& value) { SetLogExports(value); return *this;}

    /**
     * <p>The types of logs the namespace can export. Available export types are User
     * log, Connection log, and User activity log.</p>
     */
    inline Namespace& WithLogExports(Aws::Vector<LogExport>&& value) { SetLogExports(std::move(value)); return *this;}

    /**
     * <p>The types of logs the namespace can export. Available export types are User
     * log, Connection log, and User activity log.</p>
     */
    inline Namespace& AddLogExports(const LogExport& value) { m_logExportsHasBeenSet = true; m_logExports.push_back(value); return *this; }

    /**
     * <p>The types of logs the namespace can export. Available export types are User
     * log, Connection log, and User activity log.</p>
     */
    inline Namespace& AddLogExports(LogExport&& value) { m_logExportsHasBeenSet = true; m_logExports.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) associated with a namespace.</p>
     */
    inline const Aws::String& GetNamespaceArn() const{ return m_namespaceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with a namespace.</p>
     */
    inline bool NamespaceArnHasBeenSet() const { return m_namespaceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with a namespace.</p>
     */
    inline void SetNamespaceArn(const Aws::String& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with a namespace.</p>
     */
    inline void SetNamespaceArn(Aws::String&& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with a namespace.</p>
     */
    inline void SetNamespaceArn(const char* value) { m_namespaceArnHasBeenSet = true; m_namespaceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with a namespace.</p>
     */
    inline Namespace& WithNamespaceArn(const Aws::String& value) { SetNamespaceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with a namespace.</p>
     */
    inline Namespace& WithNamespaceArn(Aws::String&& value) { SetNamespaceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with a namespace.</p>
     */
    inline Namespace& WithNamespaceArn(const char* value) { SetNamespaceArn(value); return *this;}


    /**
     * <p>The unique identifier of a namespace.</p>
     */
    inline const Aws::String& GetNamespaceId() const{ return m_namespaceId; }

    /**
     * <p>The unique identifier of a namespace.</p>
     */
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }

    /**
     * <p>The unique identifier of a namespace.</p>
     */
    inline void SetNamespaceId(const Aws::String& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = value; }

    /**
     * <p>The unique identifier of a namespace.</p>
     */
    inline void SetNamespaceId(Aws::String&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::move(value); }

    /**
     * <p>The unique identifier of a namespace.</p>
     */
    inline void SetNamespaceId(const char* value) { m_namespaceIdHasBeenSet = true; m_namespaceId.assign(value); }

    /**
     * <p>The unique identifier of a namespace.</p>
     */
    inline Namespace& WithNamespaceId(const Aws::String& value) { SetNamespaceId(value); return *this;}

    /**
     * <p>The unique identifier of a namespace.</p>
     */
    inline Namespace& WithNamespaceId(Aws::String&& value) { SetNamespaceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a namespace.</p>
     */
    inline Namespace& WithNamespaceId(const char* value) { SetNamespaceId(value); return *this;}


    /**
     * <p>The name of the namespace. Must be between 3-64 alphanumeric characters in
     * lowercase, and it cannot be a reserved word. A list of reserved words can be
     * found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the namespace. Must be between 3-64 alphanumeric characters in
     * lowercase, and it cannot be a reserved word. A list of reserved words can be
     * found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The name of the namespace. Must be between 3-64 alphanumeric characters in
     * lowercase, and it cannot be a reserved word. A list of reserved words can be
     * found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The name of the namespace. Must be between 3-64 alphanumeric characters in
     * lowercase, and it cannot be a reserved word. A list of reserved words can be
     * found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The name of the namespace. Must be between 3-64 alphanumeric characters in
     * lowercase, and it cannot be a reserved word. A list of reserved words can be
     * found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The name of the namespace. Must be between 3-64 alphanumeric characters in
     * lowercase, and it cannot be a reserved word. A list of reserved words can be
     * found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p>
     */
    inline Namespace& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the namespace. Must be between 3-64 alphanumeric characters in
     * lowercase, and it cannot be a reserved word. A list of reserved words can be
     * found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p>
     */
    inline Namespace& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace. Must be between 3-64 alphanumeric characters in
     * lowercase, and it cannot be a reserved word. A list of reserved words can be
     * found in <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p>
     */
    inline Namespace& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>The status of the namespace.</p>
     */
    inline const NamespaceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the namespace.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the namespace.</p>
     */
    inline void SetStatus(const NamespaceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the namespace.</p>
     */
    inline void SetStatus(NamespaceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the namespace.</p>
     */
    inline Namespace& WithStatus(const NamespaceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the namespace.</p>
     */
    inline Namespace& WithStatus(NamespaceStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_adminUsername;
    bool m_adminUsernameHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_dbName;
    bool m_dbNameHasBeenSet = false;

    Aws::String m_defaultIamRoleArn;
    bool m_defaultIamRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_iamRoles;
    bool m_iamRolesHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<LogExport> m_logExports;
    bool m_logExportsHasBeenSet = false;

    Aws::String m_namespaceArn;
    bool m_namespaceArnHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    NamespaceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
