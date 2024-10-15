/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/cloudformation/model/RegistryType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/LoggingConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class RegisterTypeRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API RegisterTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterType"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The kind of extension.</p>
     */
    inline const RegistryType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RegistryType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RegistryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RegisterTypeRequest& WithType(const RegistryType& value) { SetType(value); return *this;}
    inline RegisterTypeRequest& WithType(RegistryType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the extension being registered.</p> <p>We suggest that extension
     * names adhere to the following patterns:</p> <ul> <li> <p>For resource types,
     * <code>company_or_organization::service::type</code>.</p> </li> <li> <p>For
     * modules, <code>company_or_organization::service::type::MODULE</code>.</p> </li>
     * <li> <p>For hooks, <code>MyCompany::Testing::MyTestHook</code>.</p> </li> </ul>
     *  <p>The following organization namespaces are reserved and can't be used
     * in your extension names:</p> <ul> <li> <p> <code>Alexa</code> </p> </li> <li>
     * <p> <code>AMZN</code> </p> </li> <li> <p> <code>Amazon</code> </p> </li> <li>
     * <p> <code>AWS</code> </p> </li> <li> <p> <code>Custom</code> </p> </li> <li> <p>
     * <code>Dev</code> </p> </li> </ul> 
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline RegisterTypeRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline RegisterTypeRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline RegisterTypeRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL to the S3 bucket containing the extension project package that contains
     * the necessary files for the extension you want to register.</p> <p>For
     * information about generating a schema handler package for the extension you want
     * to register, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-cli-submit.html">submit</a>
     * in the <i>CloudFormation Command Line Interface (CLI) User Guide</i>.</p> 
     * <p>The user registering the extension must be able to access the package in the
     * S3 bucket. That's, the user needs to have <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
     * permissions for the schema handler package. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazons3.html">Actions,
     * Resources, and Condition Keys for Amazon S3</a> in the <i>Identity and Access
     * Management User Guide</i>.</p> 
     */
    inline const Aws::String& GetSchemaHandlerPackage() const{ return m_schemaHandlerPackage; }
    inline bool SchemaHandlerPackageHasBeenSet() const { return m_schemaHandlerPackageHasBeenSet; }
    inline void SetSchemaHandlerPackage(const Aws::String& value) { m_schemaHandlerPackageHasBeenSet = true; m_schemaHandlerPackage = value; }
    inline void SetSchemaHandlerPackage(Aws::String&& value) { m_schemaHandlerPackageHasBeenSet = true; m_schemaHandlerPackage = std::move(value); }
    inline void SetSchemaHandlerPackage(const char* value) { m_schemaHandlerPackageHasBeenSet = true; m_schemaHandlerPackage.assign(value); }
    inline RegisterTypeRequest& WithSchemaHandlerPackage(const Aws::String& value) { SetSchemaHandlerPackage(value); return *this;}
    inline RegisterTypeRequest& WithSchemaHandlerPackage(Aws::String&& value) { SetSchemaHandlerPackage(std::move(value)); return *this;}
    inline RegisterTypeRequest& WithSchemaHandlerPackage(const char* value) { SetSchemaHandlerPackage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies logging configuration information for an extension.</p>
     */
    inline const LoggingConfig& GetLoggingConfig() const{ return m_loggingConfig; }
    inline bool LoggingConfigHasBeenSet() const { return m_loggingConfigHasBeenSet; }
    inline void SetLoggingConfig(const LoggingConfig& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = value; }
    inline void SetLoggingConfig(LoggingConfig&& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = std::move(value); }
    inline RegisterTypeRequest& WithLoggingConfig(const LoggingConfig& value) { SetLoggingConfig(value); return *this;}
    inline RegisterTypeRequest& WithLoggingConfig(LoggingConfig&& value) { SetLoggingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for CloudFormation to assume
     * when invoking the extension.</p> <p>For CloudFormation to assume the specified
     * execution role, the role must contain a trust relationship with the
     * CloudFormation service principal
     * (<code>resources.cloudformation.amazonaws.com</code>). For more information
     * about adding trust relationships, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-managingrole-editing-console.html#roles-managingrole_edit-trust-policy">Modifying
     * a role trust policy</a> in the <i>Identity and Access Management User
     * Guide</i>.</p> <p>If your extension calls Amazon Web Services APIs in any of its
     * handlers, you must create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * Amazon Web Services APIs, and provision that execution role in your account.
     * When CloudFormation needs to invoke the resource type handler, CloudFormation
     * assumes this execution role to create a temporary session token, which it then
     * passes to the resource type handler, thereby supplying your resource type with
     * the appropriate credentials.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline RegisterTypeRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline RegisterTypeRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline RegisterTypeRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that acts as an idempotency key for this registration
     * request. Specifying a client request token prevents CloudFormation from
     * generating more than one version of an extension from the same registration
     * request, even if the request is submitted multiple times.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline RegisterTypeRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline RegisterTypeRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline RegisterTypeRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
  private:

    RegistryType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_schemaHandlerPackage;
    bool m_schemaHandlerPackageHasBeenSet = false;

    LoggingConfig m_loggingConfig;
    bool m_loggingConfigHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
