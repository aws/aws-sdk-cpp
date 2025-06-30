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
    AWS_CLOUDFORMATION_API RegisterTypeRequest() = default;

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
    inline RegistryType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RegistryType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RegisterTypeRequest& WithType(RegistryType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the extension being registered.</p> <p>We suggest that extension
     * names adhere to the following patterns:</p> <ul> <li> <p>For resource types,
     * <code>company_or_organization::service::type</code>.</p> </li> <li> <p>For
     * modules, <code>company_or_organization::service::type::MODULE</code>.</p> </li>
     * <li> <p>For Hooks, <code>MyCompany::Testing::MyTestHook</code>.</p> </li> </ul>
     *  <p>The following organization namespaces are reserved and can't be used
     * in your extension names:</p> <ul> <li> <p> <code>Alexa</code> </p> </li> <li>
     * <p> <code>AMZN</code> </p> </li> <li> <p> <code>Amazon</code> </p> </li> <li>
     * <p> <code>AWS</code> </p> </li> <li> <p> <code>Custom</code> </p> </li> <li> <p>
     * <code>Dev</code> </p> </li> </ul> 
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    RegisterTypeRequest& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL to the S3 bucket that contains the extension project package that
     * contains the necessary files for the extension you want to register.</p> <p>For
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
    inline const Aws::String& GetSchemaHandlerPackage() const { return m_schemaHandlerPackage; }
    inline bool SchemaHandlerPackageHasBeenSet() const { return m_schemaHandlerPackageHasBeenSet; }
    template<typename SchemaHandlerPackageT = Aws::String>
    void SetSchemaHandlerPackage(SchemaHandlerPackageT&& value) { m_schemaHandlerPackageHasBeenSet = true; m_schemaHandlerPackage = std::forward<SchemaHandlerPackageT>(value); }
    template<typename SchemaHandlerPackageT = Aws::String>
    RegisterTypeRequest& WithSchemaHandlerPackage(SchemaHandlerPackageT&& value) { SetSchemaHandlerPackage(std::forward<SchemaHandlerPackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies logging configuration information for an extension.</p>
     */
    inline const LoggingConfig& GetLoggingConfig() const { return m_loggingConfig; }
    inline bool LoggingConfigHasBeenSet() const { return m_loggingConfigHasBeenSet; }
    template<typename LoggingConfigT = LoggingConfig>
    void SetLoggingConfig(LoggingConfigT&& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = std::forward<LoggingConfigT>(value); }
    template<typename LoggingConfigT = LoggingConfig>
    RegisterTypeRequest& WithLoggingConfig(LoggingConfigT&& value) { SetLoggingConfig(std::forward<LoggingConfigT>(value)); return *this;}
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
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    RegisterTypeRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that acts as an idempotency key for this registration
     * request. Specifying a client request token prevents CloudFormation from
     * generating more than one version of an extension from the same registration
     * request, even if the request is submitted multiple times.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    RegisterTypeRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    RegistryType m_type{RegistryType::NOT_SET};
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
