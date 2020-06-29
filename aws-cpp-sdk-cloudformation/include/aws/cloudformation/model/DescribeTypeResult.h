/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/RegistryType.h>
#include <aws/cloudformation/model/ProvisioningType.h>
#include <aws/cloudformation/model/DeprecatedStatus.h>
#include <aws/cloudformation/model/LoggingConfig.h>
#include <aws/cloudformation/model/Visibility.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  class AWS_CLOUDFORMATION_API DescribeTypeResult
  {
  public:
    DescribeTypeResult();
    DescribeTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline DescribeTypeResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline DescribeTypeResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the type.</p>
     */
    inline DescribeTypeResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The kind of type. </p> <p>Currently the only valid value is
     * <code>RESOURCE</code>.</p>
     */
    inline const RegistryType& GetType() const{ return m_type; }

    /**
     * <p>The kind of type. </p> <p>Currently the only valid value is
     * <code>RESOURCE</code>.</p>
     */
    inline void SetType(const RegistryType& value) { m_type = value; }

    /**
     * <p>The kind of type. </p> <p>Currently the only valid value is
     * <code>RESOURCE</code>.</p>
     */
    inline void SetType(RegistryType&& value) { m_type = std::move(value); }

    /**
     * <p>The kind of type. </p> <p>Currently the only valid value is
     * <code>RESOURCE</code>.</p>
     */
    inline DescribeTypeResult& WithType(const RegistryType& value) { SetType(value); return *this;}

    /**
     * <p>The kind of type. </p> <p>Currently the only valid value is
     * <code>RESOURCE</code>.</p>
     */
    inline DescribeTypeResult& WithType(RegistryType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the registered type.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the registered type.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeName = value; }

    /**
     * <p>The name of the registered type.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeName = std::move(value); }

    /**
     * <p>The name of the registered type.</p>
     */
    inline void SetTypeName(const char* value) { m_typeName.assign(value); }

    /**
     * <p>The name of the registered type.</p>
     */
    inline DescribeTypeResult& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the registered type.</p>
     */
    inline DescribeTypeResult& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the registered type.</p>
     */
    inline DescribeTypeResult& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline const Aws::String& GetDefaultVersionId() const{ return m_defaultVersionId; }

    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline void SetDefaultVersionId(const Aws::String& value) { m_defaultVersionId = value; }

    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline void SetDefaultVersionId(Aws::String&& value) { m_defaultVersionId = std::move(value); }

    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline void SetDefaultVersionId(const char* value) { m_defaultVersionId.assign(value); }

    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline DescribeTypeResult& WithDefaultVersionId(const Aws::String& value) { SetDefaultVersionId(value); return *this;}

    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline DescribeTypeResult& WithDefaultVersionId(Aws::String&& value) { SetDefaultVersionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the default version of the type. The default version is used when
     * the type version is not specified.</p> <p>To set the default version of a type,
     * use <code> <a>SetTypeDefaultVersion</a> </code>. </p>
     */
    inline DescribeTypeResult& WithDefaultVersionId(const char* value) { SetDefaultVersionId(value); return *this;}


    /**
     * <p>Whether the specified type version is set as the default version.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }

    /**
     * <p>Whether the specified type version is set as the default version.</p>
     */
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersion = value; }

    /**
     * <p>Whether the specified type version is set as the default version.</p>
     */
    inline DescribeTypeResult& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}


    /**
     * <p>The description of the registered type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the registered type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the registered type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the registered type.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the registered type.</p>
     */
    inline DescribeTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the registered type.</p>
     */
    inline DescribeTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the registered type.</p>
     */
    inline DescribeTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The schema that defines the type.</p> <p>For more information on type
     * schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * Provider Schema</a> in the <i>CloudFormation CLI User Guide</i>.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema that defines the type.</p> <p>For more information on type
     * schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * Provider Schema</a> in the <i>CloudFormation CLI User Guide</i>.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schema = value; }

    /**
     * <p>The schema that defines the type.</p> <p>For more information on type
     * schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * Provider Schema</a> in the <i>CloudFormation CLI User Guide</i>.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schema = std::move(value); }

    /**
     * <p>The schema that defines the type.</p> <p>For more information on type
     * schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * Provider Schema</a> in the <i>CloudFormation CLI User Guide</i>.</p>
     */
    inline void SetSchema(const char* value) { m_schema.assign(value); }

    /**
     * <p>The schema that defines the type.</p> <p>For more information on type
     * schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * Provider Schema</a> in the <i>CloudFormation CLI User Guide</i>.</p>
     */
    inline DescribeTypeResult& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema that defines the type.</p> <p>For more information on type
     * schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * Provider Schema</a> in the <i>CloudFormation CLI User Guide</i>.</p>
     */
    inline DescribeTypeResult& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The schema that defines the type.</p> <p>For more information on type
     * schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * Provider Schema</a> in the <i>CloudFormation CLI User Guide</i>.</p>
     */
    inline DescribeTypeResult& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>The provisioning behavior of the type. AWS CloudFormation determines the
     * provisioning type during registration, based on the types of handlers in the
     * schema handler package submitted.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>FULLY_MUTABLE</code>: The type includes an update handler to process
     * updates to the type during stack update operations.</p> </li> <li> <p>
     * <code>IMMUTABLE</code>: The type does not include an update handler, so the type
     * cannot be updated and must instead be replaced during stack update
     * operations.</p> </li> <li> <p> <code>NON_PROVISIONABLE</code>: The type does not
     * include all of the following handlers, and therefore cannot actually be
     * provisioned.</p> <ul> <li> <p>create</p> </li> <li> <p>read</p> </li> <li>
     * <p>delete</p> </li> </ul> </li> </ul>
     */
    inline const ProvisioningType& GetProvisioningType() const{ return m_provisioningType; }

    /**
     * <p>The provisioning behavior of the type. AWS CloudFormation determines the
     * provisioning type during registration, based on the types of handlers in the
     * schema handler package submitted.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>FULLY_MUTABLE</code>: The type includes an update handler to process
     * updates to the type during stack update operations.</p> </li> <li> <p>
     * <code>IMMUTABLE</code>: The type does not include an update handler, so the type
     * cannot be updated and must instead be replaced during stack update
     * operations.</p> </li> <li> <p> <code>NON_PROVISIONABLE</code>: The type does not
     * include all of the following handlers, and therefore cannot actually be
     * provisioned.</p> <ul> <li> <p>create</p> </li> <li> <p>read</p> </li> <li>
     * <p>delete</p> </li> </ul> </li> </ul>
     */
    inline void SetProvisioningType(const ProvisioningType& value) { m_provisioningType = value; }

    /**
     * <p>The provisioning behavior of the type. AWS CloudFormation determines the
     * provisioning type during registration, based on the types of handlers in the
     * schema handler package submitted.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>FULLY_MUTABLE</code>: The type includes an update handler to process
     * updates to the type during stack update operations.</p> </li> <li> <p>
     * <code>IMMUTABLE</code>: The type does not include an update handler, so the type
     * cannot be updated and must instead be replaced during stack update
     * operations.</p> </li> <li> <p> <code>NON_PROVISIONABLE</code>: The type does not
     * include all of the following handlers, and therefore cannot actually be
     * provisioned.</p> <ul> <li> <p>create</p> </li> <li> <p>read</p> </li> <li>
     * <p>delete</p> </li> </ul> </li> </ul>
     */
    inline void SetProvisioningType(ProvisioningType&& value) { m_provisioningType = std::move(value); }

    /**
     * <p>The provisioning behavior of the type. AWS CloudFormation determines the
     * provisioning type during registration, based on the types of handlers in the
     * schema handler package submitted.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>FULLY_MUTABLE</code>: The type includes an update handler to process
     * updates to the type during stack update operations.</p> </li> <li> <p>
     * <code>IMMUTABLE</code>: The type does not include an update handler, so the type
     * cannot be updated and must instead be replaced during stack update
     * operations.</p> </li> <li> <p> <code>NON_PROVISIONABLE</code>: The type does not
     * include all of the following handlers, and therefore cannot actually be
     * provisioned.</p> <ul> <li> <p>create</p> </li> <li> <p>read</p> </li> <li>
     * <p>delete</p> </li> </ul> </li> </ul>
     */
    inline DescribeTypeResult& WithProvisioningType(const ProvisioningType& value) { SetProvisioningType(value); return *this;}

    /**
     * <p>The provisioning behavior of the type. AWS CloudFormation determines the
     * provisioning type during registration, based on the types of handlers in the
     * schema handler package submitted.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>FULLY_MUTABLE</code>: The type includes an update handler to process
     * updates to the type during stack update operations.</p> </li> <li> <p>
     * <code>IMMUTABLE</code>: The type does not include an update handler, so the type
     * cannot be updated and must instead be replaced during stack update
     * operations.</p> </li> <li> <p> <code>NON_PROVISIONABLE</code>: The type does not
     * include all of the following handlers, and therefore cannot actually be
     * provisioned.</p> <ul> <li> <p>create</p> </li> <li> <p>read</p> </li> <li>
     * <p>delete</p> </li> </ul> </li> </ul>
     */
    inline DescribeTypeResult& WithProvisioningType(ProvisioningType&& value) { SetProvisioningType(std::move(value)); return *this;}


    /**
     * <p>The deprecation status of the type.</p> <p>Valid values include:</p> <ul>
     * <li> <p> <code>LIVE</code>: The type is registered and can be used in
     * CloudFormation operations, dependent on its provisioning behavior and visibility
     * scope.</p> </li> <li> <p> <code>DEPRECATED</code>: The type has been
     * deregistered and can no longer be used in CloudFormation operations. </p> </li>
     * </ul>
     */
    inline const DeprecatedStatus& GetDeprecatedStatus() const{ return m_deprecatedStatus; }

    /**
     * <p>The deprecation status of the type.</p> <p>Valid values include:</p> <ul>
     * <li> <p> <code>LIVE</code>: The type is registered and can be used in
     * CloudFormation operations, dependent on its provisioning behavior and visibility
     * scope.</p> </li> <li> <p> <code>DEPRECATED</code>: The type has been
     * deregistered and can no longer be used in CloudFormation operations. </p> </li>
     * </ul>
     */
    inline void SetDeprecatedStatus(const DeprecatedStatus& value) { m_deprecatedStatus = value; }

    /**
     * <p>The deprecation status of the type.</p> <p>Valid values include:</p> <ul>
     * <li> <p> <code>LIVE</code>: The type is registered and can be used in
     * CloudFormation operations, dependent on its provisioning behavior and visibility
     * scope.</p> </li> <li> <p> <code>DEPRECATED</code>: The type has been
     * deregistered and can no longer be used in CloudFormation operations. </p> </li>
     * </ul>
     */
    inline void SetDeprecatedStatus(DeprecatedStatus&& value) { m_deprecatedStatus = std::move(value); }

    /**
     * <p>The deprecation status of the type.</p> <p>Valid values include:</p> <ul>
     * <li> <p> <code>LIVE</code>: The type is registered and can be used in
     * CloudFormation operations, dependent on its provisioning behavior and visibility
     * scope.</p> </li> <li> <p> <code>DEPRECATED</code>: The type has been
     * deregistered and can no longer be used in CloudFormation operations. </p> </li>
     * </ul>
     */
    inline DescribeTypeResult& WithDeprecatedStatus(const DeprecatedStatus& value) { SetDeprecatedStatus(value); return *this;}

    /**
     * <p>The deprecation status of the type.</p> <p>Valid values include:</p> <ul>
     * <li> <p> <code>LIVE</code>: The type is registered and can be used in
     * CloudFormation operations, dependent on its provisioning behavior and visibility
     * scope.</p> </li> <li> <p> <code>DEPRECATED</code>: The type has been
     * deregistered and can no longer be used in CloudFormation operations. </p> </li>
     * </ul>
     */
    inline DescribeTypeResult& WithDeprecatedStatus(DeprecatedStatus&& value) { SetDeprecatedStatus(std::move(value)); return *this;}


    /**
     * <p>Contains logging configuration information for a type.</p>
     */
    inline const LoggingConfig& GetLoggingConfig() const{ return m_loggingConfig; }

    /**
     * <p>Contains logging configuration information for a type.</p>
     */
    inline void SetLoggingConfig(const LoggingConfig& value) { m_loggingConfig = value; }

    /**
     * <p>Contains logging configuration information for a type.</p>
     */
    inline void SetLoggingConfig(LoggingConfig&& value) { m_loggingConfig = std::move(value); }

    /**
     * <p>Contains logging configuration information for a type.</p>
     */
    inline DescribeTypeResult& WithLoggingConfig(const LoggingConfig& value) { SetLoggingConfig(value); return *this;}

    /**
     * <p>Contains logging configuration information for a type.</p>
     */
    inline DescribeTypeResult& WithLoggingConfig(LoggingConfig&& value) { SetLoggingConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to register the
     * type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to register the
     * type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to register the
     * type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to register the
     * type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to register the
     * type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline DescribeTypeResult& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to register the
     * type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline DescribeTypeResult& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to register the
     * type. If your resource type calls AWS APIs in any of its handlers, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * AWS APIs, and provision that execution role in your account. CloudFormation then
     * assumes that execution role to provide your resource type with the appropriate
     * credentials.</p>
     */
    inline DescribeTypeResult& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The scope at which the type is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The type is only visible and usable within the account in which it is
     * registered. Currently, AWS CloudFormation marks any types you register as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The type is
     * publically visible and usable within any Amazon account.</p> </li> </ul>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The scope at which the type is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The type is only visible and usable within the account in which it is
     * registered. Currently, AWS CloudFormation marks any types you register as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The type is
     * publically visible and usable within any Amazon account.</p> </li> </ul>
     */
    inline void SetVisibility(const Visibility& value) { m_visibility = value; }

    /**
     * <p>The scope at which the type is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The type is only visible and usable within the account in which it is
     * registered. Currently, AWS CloudFormation marks any types you register as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The type is
     * publically visible and usable within any Amazon account.</p> </li> </ul>
     */
    inline void SetVisibility(Visibility&& value) { m_visibility = std::move(value); }

    /**
     * <p>The scope at which the type is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The type is only visible and usable within the account in which it is
     * registered. Currently, AWS CloudFormation marks any types you register as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The type is
     * publically visible and usable within any Amazon account.</p> </li> </ul>
     */
    inline DescribeTypeResult& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>The scope at which the type is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The type is only visible and usable within the account in which it is
     * registered. Currently, AWS CloudFormation marks any types you register as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The type is
     * publically visible and usable within any Amazon account.</p> </li> </ul>
     */
    inline DescribeTypeResult& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>The URL of the source code for the type.</p>
     */
    inline const Aws::String& GetSourceUrl() const{ return m_sourceUrl; }

    /**
     * <p>The URL of the source code for the type.</p>
     */
    inline void SetSourceUrl(const Aws::String& value) { m_sourceUrl = value; }

    /**
     * <p>The URL of the source code for the type.</p>
     */
    inline void SetSourceUrl(Aws::String&& value) { m_sourceUrl = std::move(value); }

    /**
     * <p>The URL of the source code for the type.</p>
     */
    inline void SetSourceUrl(const char* value) { m_sourceUrl.assign(value); }

    /**
     * <p>The URL of the source code for the type.</p>
     */
    inline DescribeTypeResult& WithSourceUrl(const Aws::String& value) { SetSourceUrl(value); return *this;}

    /**
     * <p>The URL of the source code for the type.</p>
     */
    inline DescribeTypeResult& WithSourceUrl(Aws::String&& value) { SetSourceUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the source code for the type.</p>
     */
    inline DescribeTypeResult& WithSourceUrl(const char* value) { SetSourceUrl(value); return *this;}


    /**
     * <p>The URL of a page providing detailed documentation for this type.</p>
     */
    inline const Aws::String& GetDocumentationUrl() const{ return m_documentationUrl; }

    /**
     * <p>The URL of a page providing detailed documentation for this type.</p>
     */
    inline void SetDocumentationUrl(const Aws::String& value) { m_documentationUrl = value; }

    /**
     * <p>The URL of a page providing detailed documentation for this type.</p>
     */
    inline void SetDocumentationUrl(Aws::String&& value) { m_documentationUrl = std::move(value); }

    /**
     * <p>The URL of a page providing detailed documentation for this type.</p>
     */
    inline void SetDocumentationUrl(const char* value) { m_documentationUrl.assign(value); }

    /**
     * <p>The URL of a page providing detailed documentation for this type.</p>
     */
    inline DescribeTypeResult& WithDocumentationUrl(const Aws::String& value) { SetDocumentationUrl(value); return *this;}

    /**
     * <p>The URL of a page providing detailed documentation for this type.</p>
     */
    inline DescribeTypeResult& WithDocumentationUrl(Aws::String&& value) { SetDocumentationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of a page providing detailed documentation for this type.</p>
     */
    inline DescribeTypeResult& WithDocumentationUrl(const char* value) { SetDocumentationUrl(value); return *this;}


    /**
     * <p>When the specified type version was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>When the specified type version was registered.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdated = value; }

    /**
     * <p>When the specified type version was registered.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdated = std::move(value); }

    /**
     * <p>When the specified type version was registered.</p>
     */
    inline DescribeTypeResult& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>When the specified type version was registered.</p>
     */
    inline DescribeTypeResult& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>When the specified type version was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeCreated() const{ return m_timeCreated; }

    /**
     * <p>When the specified type version was registered.</p>
     */
    inline void SetTimeCreated(const Aws::Utils::DateTime& value) { m_timeCreated = value; }

    /**
     * <p>When the specified type version was registered.</p>
     */
    inline void SetTimeCreated(Aws::Utils::DateTime&& value) { m_timeCreated = std::move(value); }

    /**
     * <p>When the specified type version was registered.</p>
     */
    inline DescribeTypeResult& WithTimeCreated(const Aws::Utils::DateTime& value) { SetTimeCreated(value); return *this;}

    /**
     * <p>When the specified type version was registered.</p>
     */
    inline DescribeTypeResult& WithTimeCreated(Aws::Utils::DateTime&& value) { SetTimeCreated(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTypeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTypeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    RegistryType m_type;

    Aws::String m_typeName;

    Aws::String m_defaultVersionId;

    bool m_isDefaultVersion;

    Aws::String m_description;

    Aws::String m_schema;

    ProvisioningType m_provisioningType;

    DeprecatedStatus m_deprecatedStatus;

    LoggingConfig m_loggingConfig;

    Aws::String m_executionRoleArn;

    Visibility m_visibility;

    Aws::String m_sourceUrl;

    Aws::String m_documentationUrl;

    Aws::Utils::DateTime m_lastUpdated;

    Aws::Utils::DateTime m_timeCreated;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
