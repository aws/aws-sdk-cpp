/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDFORMATION_API RegisterTypeRequest : public CloudFormationRequest
  {
  public:
    RegisterTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterType"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The kind of type.</p> <p>Currently, the only valid value is
     * <code>RESOURCE</code>.</p>
     */
    inline const RegistryType& GetType() const{ return m_type; }

    /**
     * <p>The kind of type.</p> <p>Currently, the only valid value is
     * <code>RESOURCE</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The kind of type.</p> <p>Currently, the only valid value is
     * <code>RESOURCE</code>.</p>
     */
    inline void SetType(const RegistryType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The kind of type.</p> <p>Currently, the only valid value is
     * <code>RESOURCE</code>.</p>
     */
    inline void SetType(RegistryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The kind of type.</p> <p>Currently, the only valid value is
     * <code>RESOURCE</code>.</p>
     */
    inline RegisterTypeRequest& WithType(const RegistryType& value) { SetType(value); return *this;}

    /**
     * <p>The kind of type.</p> <p>Currently, the only valid value is
     * <code>RESOURCE</code>.</p>
     */
    inline RegisterTypeRequest& WithType(RegistryType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the type being registered.</p> <p>We recommend that type names
     * adhere to the following pattern:
     * <i>company_or_organization</i>::<i>service</i>::<i>type</i>.</p> <note> <p>The
     * following organization namespaces are reserved and cannot be used in your
     * resource type names:</p> <ul> <li> <p> <code>Alexa</code> </p> </li> <li> <p>
     * <code>AMZN</code> </p> </li> <li> <p> <code>Amazon</code> </p> </li> <li> <p>
     * <code>AWS</code> </p> </li> <li> <p> <code>Custom</code> </p> </li> <li> <p>
     * <code>Dev</code> </p> </li> </ul> </note>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the type being registered.</p> <p>We recommend that type names
     * adhere to the following pattern:
     * <i>company_or_organization</i>::<i>service</i>::<i>type</i>.</p> <note> <p>The
     * following organization namespaces are reserved and cannot be used in your
     * resource type names:</p> <ul> <li> <p> <code>Alexa</code> </p> </li> <li> <p>
     * <code>AMZN</code> </p> </li> <li> <p> <code>Amazon</code> </p> </li> <li> <p>
     * <code>AWS</code> </p> </li> <li> <p> <code>Custom</code> </p> </li> <li> <p>
     * <code>Dev</code> </p> </li> </ul> </note>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The name of the type being registered.</p> <p>We recommend that type names
     * adhere to the following pattern:
     * <i>company_or_organization</i>::<i>service</i>::<i>type</i>.</p> <note> <p>The
     * following organization namespaces are reserved and cannot be used in your
     * resource type names:</p> <ul> <li> <p> <code>Alexa</code> </p> </li> <li> <p>
     * <code>AMZN</code> </p> </li> <li> <p> <code>Amazon</code> </p> </li> <li> <p>
     * <code>AWS</code> </p> </li> <li> <p> <code>Custom</code> </p> </li> <li> <p>
     * <code>Dev</code> </p> </li> </ul> </note>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the type being registered.</p> <p>We recommend that type names
     * adhere to the following pattern:
     * <i>company_or_organization</i>::<i>service</i>::<i>type</i>.</p> <note> <p>The
     * following organization namespaces are reserved and cannot be used in your
     * resource type names:</p> <ul> <li> <p> <code>Alexa</code> </p> </li> <li> <p>
     * <code>AMZN</code> </p> </li> <li> <p> <code>Amazon</code> </p> </li> <li> <p>
     * <code>AWS</code> </p> </li> <li> <p> <code>Custom</code> </p> </li> <li> <p>
     * <code>Dev</code> </p> </li> </ul> </note>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the type being registered.</p> <p>We recommend that type names
     * adhere to the following pattern:
     * <i>company_or_organization</i>::<i>service</i>::<i>type</i>.</p> <note> <p>The
     * following organization namespaces are reserved and cannot be used in your
     * resource type names:</p> <ul> <li> <p> <code>Alexa</code> </p> </li> <li> <p>
     * <code>AMZN</code> </p> </li> <li> <p> <code>Amazon</code> </p> </li> <li> <p>
     * <code>AWS</code> </p> </li> <li> <p> <code>Custom</code> </p> </li> <li> <p>
     * <code>Dev</code> </p> </li> </ul> </note>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the type being registered.</p> <p>We recommend that type names
     * adhere to the following pattern:
     * <i>company_or_organization</i>::<i>service</i>::<i>type</i>.</p> <note> <p>The
     * following organization namespaces are reserved and cannot be used in your
     * resource type names:</p> <ul> <li> <p> <code>Alexa</code> </p> </li> <li> <p>
     * <code>AMZN</code> </p> </li> <li> <p> <code>Amazon</code> </p> </li> <li> <p>
     * <code>AWS</code> </p> </li> <li> <p> <code>Custom</code> </p> </li> <li> <p>
     * <code>Dev</code> </p> </li> </ul> </note>
     */
    inline RegisterTypeRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the type being registered.</p> <p>We recommend that type names
     * adhere to the following pattern:
     * <i>company_or_organization</i>::<i>service</i>::<i>type</i>.</p> <note> <p>The
     * following organization namespaces are reserved and cannot be used in your
     * resource type names:</p> <ul> <li> <p> <code>Alexa</code> </p> </li> <li> <p>
     * <code>AMZN</code> </p> </li> <li> <p> <code>Amazon</code> </p> </li> <li> <p>
     * <code>AWS</code> </p> </li> <li> <p> <code>Custom</code> </p> </li> <li> <p>
     * <code>Dev</code> </p> </li> </ul> </note>
     */
    inline RegisterTypeRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the type being registered.</p> <p>We recommend that type names
     * adhere to the following pattern:
     * <i>company_or_organization</i>::<i>service</i>::<i>type</i>.</p> <note> <p>The
     * following organization namespaces are reserved and cannot be used in your
     * resource type names:</p> <ul> <li> <p> <code>Alexa</code> </p> </li> <li> <p>
     * <code>AMZN</code> </p> </li> <li> <p> <code>Amazon</code> </p> </li> <li> <p>
     * <code>AWS</code> </p> </li> <li> <p> <code>Custom</code> </p> </li> <li> <p>
     * <code>Dev</code> </p> </li> </ul> </note>
     */
    inline RegisterTypeRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>A url to the S3 bucket containing the schema handler package that contains
     * the schema, event handlers, and associated files for the type you want to
     * register.</p> <p>For information on generating a schema handler package for the
     * type you want to register, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-cli-submit.html">submit</a>
     * in the <i>CloudFormation CLI User Guide</i>.</p> <note> <p>As part of
     * registering a resource provider type, CloudFormation must be able to access the
     * S3 bucket which contains the schema handler package for that resource provider.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry.html#registry-register-permissions">IAM
     * Permissions for Registering a Resource Provider</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p> </note>
     */
    inline const Aws::String& GetSchemaHandlerPackage() const{ return m_schemaHandlerPackage; }

    /**
     * <p>A url to the S3 bucket containing the schema handler package that contains
     * the schema, event handlers, and associated files for the type you want to
     * register.</p> <p>For information on generating a schema handler package for the
     * type you want to register, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-cli-submit.html">submit</a>
     * in the <i>CloudFormation CLI User Guide</i>.</p> <note> <p>As part of
     * registering a resource provider type, CloudFormation must be able to access the
     * S3 bucket which contains the schema handler package for that resource provider.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry.html#registry-register-permissions">IAM
     * Permissions for Registering a Resource Provider</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p> </note>
     */
    inline bool SchemaHandlerPackageHasBeenSet() const { return m_schemaHandlerPackageHasBeenSet; }

    /**
     * <p>A url to the S3 bucket containing the schema handler package that contains
     * the schema, event handlers, and associated files for the type you want to
     * register.</p> <p>For information on generating a schema handler package for the
     * type you want to register, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-cli-submit.html">submit</a>
     * in the <i>CloudFormation CLI User Guide</i>.</p> <note> <p>As part of
     * registering a resource provider type, CloudFormation must be able to access the
     * S3 bucket which contains the schema handler package for that resource provider.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry.html#registry-register-permissions">IAM
     * Permissions for Registering a Resource Provider</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p> </note>
     */
    inline void SetSchemaHandlerPackage(const Aws::String& value) { m_schemaHandlerPackageHasBeenSet = true; m_schemaHandlerPackage = value; }

    /**
     * <p>A url to the S3 bucket containing the schema handler package that contains
     * the schema, event handlers, and associated files for the type you want to
     * register.</p> <p>For information on generating a schema handler package for the
     * type you want to register, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-cli-submit.html">submit</a>
     * in the <i>CloudFormation CLI User Guide</i>.</p> <note> <p>As part of
     * registering a resource provider type, CloudFormation must be able to access the
     * S3 bucket which contains the schema handler package for that resource provider.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry.html#registry-register-permissions">IAM
     * Permissions for Registering a Resource Provider</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p> </note>
     */
    inline void SetSchemaHandlerPackage(Aws::String&& value) { m_schemaHandlerPackageHasBeenSet = true; m_schemaHandlerPackage = std::move(value); }

    /**
     * <p>A url to the S3 bucket containing the schema handler package that contains
     * the schema, event handlers, and associated files for the type you want to
     * register.</p> <p>For information on generating a schema handler package for the
     * type you want to register, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-cli-submit.html">submit</a>
     * in the <i>CloudFormation CLI User Guide</i>.</p> <note> <p>As part of
     * registering a resource provider type, CloudFormation must be able to access the
     * S3 bucket which contains the schema handler package for that resource provider.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry.html#registry-register-permissions">IAM
     * Permissions for Registering a Resource Provider</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p> </note>
     */
    inline void SetSchemaHandlerPackage(const char* value) { m_schemaHandlerPackageHasBeenSet = true; m_schemaHandlerPackage.assign(value); }

    /**
     * <p>A url to the S3 bucket containing the schema handler package that contains
     * the schema, event handlers, and associated files for the type you want to
     * register.</p> <p>For information on generating a schema handler package for the
     * type you want to register, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-cli-submit.html">submit</a>
     * in the <i>CloudFormation CLI User Guide</i>.</p> <note> <p>As part of
     * registering a resource provider type, CloudFormation must be able to access the
     * S3 bucket which contains the schema handler package for that resource provider.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry.html#registry-register-permissions">IAM
     * Permissions for Registering a Resource Provider</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p> </note>
     */
    inline RegisterTypeRequest& WithSchemaHandlerPackage(const Aws::String& value) { SetSchemaHandlerPackage(value); return *this;}

    /**
     * <p>A url to the S3 bucket containing the schema handler package that contains
     * the schema, event handlers, and associated files for the type you want to
     * register.</p> <p>For information on generating a schema handler package for the
     * type you want to register, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-cli-submit.html">submit</a>
     * in the <i>CloudFormation CLI User Guide</i>.</p> <note> <p>As part of
     * registering a resource provider type, CloudFormation must be able to access the
     * S3 bucket which contains the schema handler package for that resource provider.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry.html#registry-register-permissions">IAM
     * Permissions for Registering a Resource Provider</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p> </note>
     */
    inline RegisterTypeRequest& WithSchemaHandlerPackage(Aws::String&& value) { SetSchemaHandlerPackage(std::move(value)); return *this;}

    /**
     * <p>A url to the S3 bucket containing the schema handler package that contains
     * the schema, event handlers, and associated files for the type you want to
     * register.</p> <p>For information on generating a schema handler package for the
     * type you want to register, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-cli-submit.html">submit</a>
     * in the <i>CloudFormation CLI User Guide</i>.</p> <note> <p>As part of
     * registering a resource provider type, CloudFormation must be able to access the
     * S3 bucket which contains the schema handler package for that resource provider.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry.html#registry-register-permissions">IAM
     * Permissions for Registering a Resource Provider</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p> </note>
     */
    inline RegisterTypeRequest& WithSchemaHandlerPackage(const char* value) { SetSchemaHandlerPackage(value); return *this;}


    /**
     * <p>Specifies logging configuration information for a type.</p>
     */
    inline const LoggingConfig& GetLoggingConfig() const{ return m_loggingConfig; }

    /**
     * <p>Specifies logging configuration information for a type.</p>
     */
    inline bool LoggingConfigHasBeenSet() const { return m_loggingConfigHasBeenSet; }

    /**
     * <p>Specifies logging configuration information for a type.</p>
     */
    inline void SetLoggingConfig(const LoggingConfig& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = value; }

    /**
     * <p>Specifies logging configuration information for a type.</p>
     */
    inline void SetLoggingConfig(LoggingConfig&& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = std::move(value); }

    /**
     * <p>Specifies logging configuration information for a type.</p>
     */
    inline RegisterTypeRequest& WithLoggingConfig(const LoggingConfig& value) { SetLoggingConfig(value); return *this;}

    /**
     * <p>Specifies logging configuration information for a type.</p>
     */
    inline RegisterTypeRequest& WithLoggingConfig(LoggingConfig&& value) { SetLoggingConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role to use to register
     * the type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role to use to register
     * the type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role to use to register
     * the type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role to use to register
     * the type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role to use to register
     * the type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role to use to register
     * the type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline RegisterTypeRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role to use to register
     * the type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline RegisterTypeRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role to use to register
     * the type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline RegisterTypeRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>A unique identifier that acts as an idempotency key for this registration
     * request. Specifying a client request token prevents CloudFormation from
     * generating more than one version of a type from the same registeration request,
     * even if the request is submitted multiple times. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique identifier that acts as an idempotency key for this registration
     * request. Specifying a client request token prevents CloudFormation from
     * generating more than one version of a type from the same registeration request,
     * even if the request is submitted multiple times. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique identifier that acts as an idempotency key for this registration
     * request. Specifying a client request token prevents CloudFormation from
     * generating more than one version of a type from the same registeration request,
     * even if the request is submitted multiple times. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique identifier that acts as an idempotency key for this registration
     * request. Specifying a client request token prevents CloudFormation from
     * generating more than one version of a type from the same registeration request,
     * even if the request is submitted multiple times. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique identifier that acts as an idempotency key for this registration
     * request. Specifying a client request token prevents CloudFormation from
     * generating more than one version of a type from the same registeration request,
     * even if the request is submitted multiple times. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique identifier that acts as an idempotency key for this registration
     * request. Specifying a client request token prevents CloudFormation from
     * generating more than one version of a type from the same registeration request,
     * even if the request is submitted multiple times. </p>
     */
    inline RegisterTypeRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique identifier that acts as an idempotency key for this registration
     * request. Specifying a client request token prevents CloudFormation from
     * generating more than one version of a type from the same registeration request,
     * even if the request is submitted multiple times. </p>
     */
    inline RegisterTypeRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that acts as an idempotency key for this registration
     * request. Specifying a client request token prevents CloudFormation from
     * generating more than one version of a type from the same registeration request,
     * even if the request is submitted multiple times. </p>
     */
    inline RegisterTypeRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    RegistryType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;

    Aws::String m_schemaHandlerPackage;
    bool m_schemaHandlerPackageHasBeenSet;

    LoggingConfig m_loggingConfig;
    bool m_loggingConfigHasBeenSet;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
