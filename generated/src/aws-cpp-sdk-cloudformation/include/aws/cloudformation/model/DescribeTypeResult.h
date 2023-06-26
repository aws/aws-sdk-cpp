/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/RegistryType.h>
#include <aws/cloudformation/model/TypeTestsStatus.h>
#include <aws/cloudformation/model/ProvisioningType.h>
#include <aws/cloudformation/model/DeprecatedStatus.h>
#include <aws/cloudformation/model/LoggingConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/Visibility.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/RequiredActivatedType.h>
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
  class DescribeTypeResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeTypeResult();
    AWS_CLOUDFORMATION_API DescribeTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline DescribeTypeResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline DescribeTypeResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline DescribeTypeResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The kind of extension.</p>
     */
    inline const RegistryType& GetType() const{ return m_type; }

    /**
     * <p>The kind of extension.</p>
     */
    inline void SetType(const RegistryType& value) { m_type = value; }

    /**
     * <p>The kind of extension.</p>
     */
    inline void SetType(RegistryType&& value) { m_type = std::move(value); }

    /**
     * <p>The kind of extension.</p>
     */
    inline DescribeTypeResult& WithType(const RegistryType& value) { SetType(value); return *this;}

    /**
     * <p>The kind of extension.</p>
     */
    inline DescribeTypeResult& WithType(RegistryType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the extension.</p> <p>If the extension is a public third-party
     * type you have activated with a type name alias, CloudFormation returns the type
     * name alias. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the extension.</p> <p>If the extension is a public third-party
     * type you have activated with a type name alias, CloudFormation returns the type
     * name alias. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeName = value; }

    /**
     * <p>The name of the extension.</p> <p>If the extension is a public third-party
     * type you have activated with a type name alias, CloudFormation returns the type
     * name alias. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeName = std::move(value); }

    /**
     * <p>The name of the extension.</p> <p>If the extension is a public third-party
     * type you have activated with a type name alias, CloudFormation returns the type
     * name alias. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     */
    inline void SetTypeName(const char* value) { m_typeName.assign(value); }

    /**
     * <p>The name of the extension.</p> <p>If the extension is a public third-party
     * type you have activated with a type name alias, CloudFormation returns the type
     * name alias. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     */
    inline DescribeTypeResult& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the extension.</p> <p>If the extension is a public third-party
     * type you have activated with a type name alias, CloudFormation returns the type
     * name alias. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     */
    inline DescribeTypeResult& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the extension.</p> <p>If the extension is a public third-party
     * type you have activated with a type name alias, CloudFormation returns the type
     * name alias. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     */
    inline DescribeTypeResult& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon Web Services and published by third parties,
     * CloudFormation returns <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline const Aws::String& GetDefaultVersionId() const{ return m_defaultVersionId; }

    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon Web Services and published by third parties,
     * CloudFormation returns <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline void SetDefaultVersionId(const Aws::String& value) { m_defaultVersionId = value; }

    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon Web Services and published by third parties,
     * CloudFormation returns <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline void SetDefaultVersionId(Aws::String&& value) { m_defaultVersionId = std::move(value); }

    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon Web Services and published by third parties,
     * CloudFormation returns <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline void SetDefaultVersionId(const char* value) { m_defaultVersionId.assign(value); }

    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon Web Services and published by third parties,
     * CloudFormation returns <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline DescribeTypeResult& WithDefaultVersionId(const Aws::String& value) { SetDefaultVersionId(value); return *this;}

    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon Web Services and published by third parties,
     * CloudFormation returns <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline DescribeTypeResult& WithDefaultVersionId(Aws::String&& value) { SetDefaultVersionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the default version of the extension. The default version is used
     * when the extension version isn't specified.</p> <p>This applies only to private
     * extensions you have registered in your account. For public extensions, both
     * those provided by Amazon Web Services and published by third parties,
     * CloudFormation returns <code>null</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>To set the default version of an extension, use
     * <a>SetTypeDefaultVersion</a>.</p>
     */
    inline DescribeTypeResult& WithDefaultVersionId(const char* value) { SetDefaultVersionId(value); return *this;}


    /**
     * <p>Whether the specified extension version is set as the default version.</p>
     * <p>This applies only to private extensions you have registered in your account,
     * and extensions published by Amazon Web Services. For public third-party
     * extensions, whether they are activated in your account, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }

    /**
     * <p>Whether the specified extension version is set as the default version.</p>
     * <p>This applies only to private extensions you have registered in your account,
     * and extensions published by Amazon Web Services. For public third-party
     * extensions, whether they are activated in your account, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersion = value; }

    /**
     * <p>Whether the specified extension version is set as the default version.</p>
     * <p>This applies only to private extensions you have registered in your account,
     * and extensions published by Amazon Web Services. For public third-party
     * extensions, whether they are activated in your account, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline DescribeTypeResult& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}


    /**
     * <p>The contract test status of the registered extension version. To return the
     * extension test status of a specific extension version, you must specify
     * <code>VersionId</code>.</p> <p>This applies only to registered private extension
     * versions. CloudFormation doesn't return this information for public extensions,
     * whether they are activated in your account.</p> <ul> <li> <p>
     * <code>PASSED</code>: The extension has passed all its contract tests.</p> <p>An
     * extension must have a test status of <code>PASSED</code> before it can be
     * published. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-publish.html">Publishing
     * extensions to make them available for public use</a> in the <i>CloudFormation
     * Command Line Interface User Guide</i>.</p> </li> <li> <p> <code>FAILED</code>:
     * The extension has failed one or more contract tests.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: Contract tests are currently being performed on the
     * extension.</p> </li> <li> <p> <code>NOT_TESTED</code>: Contract tests haven't
     * been performed on the extension.</p> </li> </ul>
     */
    inline const TypeTestsStatus& GetTypeTestsStatus() const{ return m_typeTestsStatus; }

    /**
     * <p>The contract test status of the registered extension version. To return the
     * extension test status of a specific extension version, you must specify
     * <code>VersionId</code>.</p> <p>This applies only to registered private extension
     * versions. CloudFormation doesn't return this information for public extensions,
     * whether they are activated in your account.</p> <ul> <li> <p>
     * <code>PASSED</code>: The extension has passed all its contract tests.</p> <p>An
     * extension must have a test status of <code>PASSED</code> before it can be
     * published. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-publish.html">Publishing
     * extensions to make them available for public use</a> in the <i>CloudFormation
     * Command Line Interface User Guide</i>.</p> </li> <li> <p> <code>FAILED</code>:
     * The extension has failed one or more contract tests.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: Contract tests are currently being performed on the
     * extension.</p> </li> <li> <p> <code>NOT_TESTED</code>: Contract tests haven't
     * been performed on the extension.</p> </li> </ul>
     */
    inline void SetTypeTestsStatus(const TypeTestsStatus& value) { m_typeTestsStatus = value; }

    /**
     * <p>The contract test status of the registered extension version. To return the
     * extension test status of a specific extension version, you must specify
     * <code>VersionId</code>.</p> <p>This applies only to registered private extension
     * versions. CloudFormation doesn't return this information for public extensions,
     * whether they are activated in your account.</p> <ul> <li> <p>
     * <code>PASSED</code>: The extension has passed all its contract tests.</p> <p>An
     * extension must have a test status of <code>PASSED</code> before it can be
     * published. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-publish.html">Publishing
     * extensions to make them available for public use</a> in the <i>CloudFormation
     * Command Line Interface User Guide</i>.</p> </li> <li> <p> <code>FAILED</code>:
     * The extension has failed one or more contract tests.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: Contract tests are currently being performed on the
     * extension.</p> </li> <li> <p> <code>NOT_TESTED</code>: Contract tests haven't
     * been performed on the extension.</p> </li> </ul>
     */
    inline void SetTypeTestsStatus(TypeTestsStatus&& value) { m_typeTestsStatus = std::move(value); }

    /**
     * <p>The contract test status of the registered extension version. To return the
     * extension test status of a specific extension version, you must specify
     * <code>VersionId</code>.</p> <p>This applies only to registered private extension
     * versions. CloudFormation doesn't return this information for public extensions,
     * whether they are activated in your account.</p> <ul> <li> <p>
     * <code>PASSED</code>: The extension has passed all its contract tests.</p> <p>An
     * extension must have a test status of <code>PASSED</code> before it can be
     * published. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-publish.html">Publishing
     * extensions to make them available for public use</a> in the <i>CloudFormation
     * Command Line Interface User Guide</i>.</p> </li> <li> <p> <code>FAILED</code>:
     * The extension has failed one or more contract tests.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: Contract tests are currently being performed on the
     * extension.</p> </li> <li> <p> <code>NOT_TESTED</code>: Contract tests haven't
     * been performed on the extension.</p> </li> </ul>
     */
    inline DescribeTypeResult& WithTypeTestsStatus(const TypeTestsStatus& value) { SetTypeTestsStatus(value); return *this;}

    /**
     * <p>The contract test status of the registered extension version. To return the
     * extension test status of a specific extension version, you must specify
     * <code>VersionId</code>.</p> <p>This applies only to registered private extension
     * versions. CloudFormation doesn't return this information for public extensions,
     * whether they are activated in your account.</p> <ul> <li> <p>
     * <code>PASSED</code>: The extension has passed all its contract tests.</p> <p>An
     * extension must have a test status of <code>PASSED</code> before it can be
     * published. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-publish.html">Publishing
     * extensions to make them available for public use</a> in the <i>CloudFormation
     * Command Line Interface User Guide</i>.</p> </li> <li> <p> <code>FAILED</code>:
     * The extension has failed one or more contract tests.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: Contract tests are currently being performed on the
     * extension.</p> </li> <li> <p> <code>NOT_TESTED</code>: Contract tests haven't
     * been performed on the extension.</p> </li> </ul>
     */
    inline DescribeTypeResult& WithTypeTestsStatus(TypeTestsStatus&& value) { SetTypeTestsStatus(std::move(value)); return *this;}


    /**
     * <p>The description of the test status. To return the extension test status of a
     * specific extension version, you must specify <code>VersionId</code>.</p> <p>This
     * applies only to registered private extension versions. CloudFormation doesn't
     * return this information for public extensions, whether they are activated in
     * your account.</p>
     */
    inline const Aws::String& GetTypeTestsStatusDescription() const{ return m_typeTestsStatusDescription; }

    /**
     * <p>The description of the test status. To return the extension test status of a
     * specific extension version, you must specify <code>VersionId</code>.</p> <p>This
     * applies only to registered private extension versions. CloudFormation doesn't
     * return this information for public extensions, whether they are activated in
     * your account.</p>
     */
    inline void SetTypeTestsStatusDescription(const Aws::String& value) { m_typeTestsStatusDescription = value; }

    /**
     * <p>The description of the test status. To return the extension test status of a
     * specific extension version, you must specify <code>VersionId</code>.</p> <p>This
     * applies only to registered private extension versions. CloudFormation doesn't
     * return this information for public extensions, whether they are activated in
     * your account.</p>
     */
    inline void SetTypeTestsStatusDescription(Aws::String&& value) { m_typeTestsStatusDescription = std::move(value); }

    /**
     * <p>The description of the test status. To return the extension test status of a
     * specific extension version, you must specify <code>VersionId</code>.</p> <p>This
     * applies only to registered private extension versions. CloudFormation doesn't
     * return this information for public extensions, whether they are activated in
     * your account.</p>
     */
    inline void SetTypeTestsStatusDescription(const char* value) { m_typeTestsStatusDescription.assign(value); }

    /**
     * <p>The description of the test status. To return the extension test status of a
     * specific extension version, you must specify <code>VersionId</code>.</p> <p>This
     * applies only to registered private extension versions. CloudFormation doesn't
     * return this information for public extensions, whether they are activated in
     * your account.</p>
     */
    inline DescribeTypeResult& WithTypeTestsStatusDescription(const Aws::String& value) { SetTypeTestsStatusDescription(value); return *this;}

    /**
     * <p>The description of the test status. To return the extension test status of a
     * specific extension version, you must specify <code>VersionId</code>.</p> <p>This
     * applies only to registered private extension versions. CloudFormation doesn't
     * return this information for public extensions, whether they are activated in
     * your account.</p>
     */
    inline DescribeTypeResult& WithTypeTestsStatusDescription(Aws::String&& value) { SetTypeTestsStatusDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the test status. To return the extension test status of a
     * specific extension version, you must specify <code>VersionId</code>.</p> <p>This
     * applies only to registered private extension versions. CloudFormation doesn't
     * return this information for public extensions, whether they are activated in
     * your account.</p>
     */
    inline DescribeTypeResult& WithTypeTestsStatusDescription(const char* value) { SetTypeTestsStatusDescription(value); return *this;}


    /**
     * <p>The description of the extension.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the extension.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the extension.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the extension.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the extension.</p>
     */
    inline DescribeTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the extension.</p>
     */
    inline DescribeTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the extension.</p>
     */
    inline DescribeTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The schema that defines the extension.</p> <p>For more information about
     * extension schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * Provider Schema</a> in the <i>CloudFormation CLI User Guide</i>.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema that defines the extension.</p> <p>For more information about
     * extension schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * Provider Schema</a> in the <i>CloudFormation CLI User Guide</i>.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schema = value; }

    /**
     * <p>The schema that defines the extension.</p> <p>For more information about
     * extension schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * Provider Schema</a> in the <i>CloudFormation CLI User Guide</i>.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schema = std::move(value); }

    /**
     * <p>The schema that defines the extension.</p> <p>For more information about
     * extension schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * Provider Schema</a> in the <i>CloudFormation CLI User Guide</i>.</p>
     */
    inline void SetSchema(const char* value) { m_schema.assign(value); }

    /**
     * <p>The schema that defines the extension.</p> <p>For more information about
     * extension schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * Provider Schema</a> in the <i>CloudFormation CLI User Guide</i>.</p>
     */
    inline DescribeTypeResult& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema that defines the extension.</p> <p>For more information about
     * extension schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * Provider Schema</a> in the <i>CloudFormation CLI User Guide</i>.</p>
     */
    inline DescribeTypeResult& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The schema that defines the extension.</p> <p>For more information about
     * extension schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * Provider Schema</a> in the <i>CloudFormation CLI User Guide</i>.</p>
     */
    inline DescribeTypeResult& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>For resource type extensions, the provisioning behavior of the resource type.
     * CloudFormation determines the provisioning type during registration, based on
     * the types of handlers in the schema handler package submitted.</p> <p>Valid
     * values include:</p> <ul> <li> <p> <code>FULLY_MUTABLE</code>: The resource type
     * includes an update handler to process updates to the type during stack update
     * operations.</p> </li> <li> <p> <code>IMMUTABLE</code>: The resource type doesn't
     * include an update handler, so the type can't be updated and must instead be
     * replaced during stack update operations.</p> </li> <li> <p>
     * <code>NON_PROVISIONABLE</code>: The resource type doesn't include all the
     * following handlers, and therefore can't actually be provisioned.</p> <ul> <li>
     * <p>create</p> </li> <li> <p>read</p> </li> <li> <p>delete</p> </li> </ul> </li>
     * </ul>
     */
    inline const ProvisioningType& GetProvisioningType() const{ return m_provisioningType; }

    /**
     * <p>For resource type extensions, the provisioning behavior of the resource type.
     * CloudFormation determines the provisioning type during registration, based on
     * the types of handlers in the schema handler package submitted.</p> <p>Valid
     * values include:</p> <ul> <li> <p> <code>FULLY_MUTABLE</code>: The resource type
     * includes an update handler to process updates to the type during stack update
     * operations.</p> </li> <li> <p> <code>IMMUTABLE</code>: The resource type doesn't
     * include an update handler, so the type can't be updated and must instead be
     * replaced during stack update operations.</p> </li> <li> <p>
     * <code>NON_PROVISIONABLE</code>: The resource type doesn't include all the
     * following handlers, and therefore can't actually be provisioned.</p> <ul> <li>
     * <p>create</p> </li> <li> <p>read</p> </li> <li> <p>delete</p> </li> </ul> </li>
     * </ul>
     */
    inline void SetProvisioningType(const ProvisioningType& value) { m_provisioningType = value; }

    /**
     * <p>For resource type extensions, the provisioning behavior of the resource type.
     * CloudFormation determines the provisioning type during registration, based on
     * the types of handlers in the schema handler package submitted.</p> <p>Valid
     * values include:</p> <ul> <li> <p> <code>FULLY_MUTABLE</code>: The resource type
     * includes an update handler to process updates to the type during stack update
     * operations.</p> </li> <li> <p> <code>IMMUTABLE</code>: The resource type doesn't
     * include an update handler, so the type can't be updated and must instead be
     * replaced during stack update operations.</p> </li> <li> <p>
     * <code>NON_PROVISIONABLE</code>: The resource type doesn't include all the
     * following handlers, and therefore can't actually be provisioned.</p> <ul> <li>
     * <p>create</p> </li> <li> <p>read</p> </li> <li> <p>delete</p> </li> </ul> </li>
     * </ul>
     */
    inline void SetProvisioningType(ProvisioningType&& value) { m_provisioningType = std::move(value); }

    /**
     * <p>For resource type extensions, the provisioning behavior of the resource type.
     * CloudFormation determines the provisioning type during registration, based on
     * the types of handlers in the schema handler package submitted.</p> <p>Valid
     * values include:</p> <ul> <li> <p> <code>FULLY_MUTABLE</code>: The resource type
     * includes an update handler to process updates to the type during stack update
     * operations.</p> </li> <li> <p> <code>IMMUTABLE</code>: The resource type doesn't
     * include an update handler, so the type can't be updated and must instead be
     * replaced during stack update operations.</p> </li> <li> <p>
     * <code>NON_PROVISIONABLE</code>: The resource type doesn't include all the
     * following handlers, and therefore can't actually be provisioned.</p> <ul> <li>
     * <p>create</p> </li> <li> <p>read</p> </li> <li> <p>delete</p> </li> </ul> </li>
     * </ul>
     */
    inline DescribeTypeResult& WithProvisioningType(const ProvisioningType& value) { SetProvisioningType(value); return *this;}

    /**
     * <p>For resource type extensions, the provisioning behavior of the resource type.
     * CloudFormation determines the provisioning type during registration, based on
     * the types of handlers in the schema handler package submitted.</p> <p>Valid
     * values include:</p> <ul> <li> <p> <code>FULLY_MUTABLE</code>: The resource type
     * includes an update handler to process updates to the type during stack update
     * operations.</p> </li> <li> <p> <code>IMMUTABLE</code>: The resource type doesn't
     * include an update handler, so the type can't be updated and must instead be
     * replaced during stack update operations.</p> </li> <li> <p>
     * <code>NON_PROVISIONABLE</code>: The resource type doesn't include all the
     * following handlers, and therefore can't actually be provisioned.</p> <ul> <li>
     * <p>create</p> </li> <li> <p>read</p> </li> <li> <p>delete</p> </li> </ul> </li>
     * </ul>
     */
    inline DescribeTypeResult& WithProvisioningType(ProvisioningType&& value) { SetProvisioningType(std::move(value)); return *this;}


    /**
     * <p>The deprecation status of the extension version.</p> <p>Valid values
     * include:</p> <ul> <li> <p> <code>LIVE</code>: The extension is activated or
     * registered and can be used in CloudFormation operations, dependent on its
     * provisioning behavior and visibility scope.</p> </li> <li> <p>
     * <code>DEPRECATED</code>: The extension has been deactivated or deregistered and
     * can no longer be used in CloudFormation operations.</p> </li> </ul> <p>For
     * public third-party extensions, CloudFormation returns <code>null</code>.</p>
     */
    inline const DeprecatedStatus& GetDeprecatedStatus() const{ return m_deprecatedStatus; }

    /**
     * <p>The deprecation status of the extension version.</p> <p>Valid values
     * include:</p> <ul> <li> <p> <code>LIVE</code>: The extension is activated or
     * registered and can be used in CloudFormation operations, dependent on its
     * provisioning behavior and visibility scope.</p> </li> <li> <p>
     * <code>DEPRECATED</code>: The extension has been deactivated or deregistered and
     * can no longer be used in CloudFormation operations.</p> </li> </ul> <p>For
     * public third-party extensions, CloudFormation returns <code>null</code>.</p>
     */
    inline void SetDeprecatedStatus(const DeprecatedStatus& value) { m_deprecatedStatus = value; }

    /**
     * <p>The deprecation status of the extension version.</p> <p>Valid values
     * include:</p> <ul> <li> <p> <code>LIVE</code>: The extension is activated or
     * registered and can be used in CloudFormation operations, dependent on its
     * provisioning behavior and visibility scope.</p> </li> <li> <p>
     * <code>DEPRECATED</code>: The extension has been deactivated or deregistered and
     * can no longer be used in CloudFormation operations.</p> </li> </ul> <p>For
     * public third-party extensions, CloudFormation returns <code>null</code>.</p>
     */
    inline void SetDeprecatedStatus(DeprecatedStatus&& value) { m_deprecatedStatus = std::move(value); }

    /**
     * <p>The deprecation status of the extension version.</p> <p>Valid values
     * include:</p> <ul> <li> <p> <code>LIVE</code>: The extension is activated or
     * registered and can be used in CloudFormation operations, dependent on its
     * provisioning behavior and visibility scope.</p> </li> <li> <p>
     * <code>DEPRECATED</code>: The extension has been deactivated or deregistered and
     * can no longer be used in CloudFormation operations.</p> </li> </ul> <p>For
     * public third-party extensions, CloudFormation returns <code>null</code>.</p>
     */
    inline DescribeTypeResult& WithDeprecatedStatus(const DeprecatedStatus& value) { SetDeprecatedStatus(value); return *this;}

    /**
     * <p>The deprecation status of the extension version.</p> <p>Valid values
     * include:</p> <ul> <li> <p> <code>LIVE</code>: The extension is activated or
     * registered and can be used in CloudFormation operations, dependent on its
     * provisioning behavior and visibility scope.</p> </li> <li> <p>
     * <code>DEPRECATED</code>: The extension has been deactivated or deregistered and
     * can no longer be used in CloudFormation operations.</p> </li> </ul> <p>For
     * public third-party extensions, CloudFormation returns <code>null</code>.</p>
     */
    inline DescribeTypeResult& WithDeprecatedStatus(DeprecatedStatus&& value) { SetDeprecatedStatus(std::move(value)); return *this;}


    /**
     * <p>Contains logging configuration information for private extensions. This
     * applies only to private extensions you have registered in your account. For
     * public extensions, both those provided by Amazon Web Services and published by
     * third parties, CloudFormation returns <code>null</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     */
    inline const LoggingConfig& GetLoggingConfig() const{ return m_loggingConfig; }

    /**
     * <p>Contains logging configuration information for private extensions. This
     * applies only to private extensions you have registered in your account. For
     * public extensions, both those provided by Amazon Web Services and published by
     * third parties, CloudFormation returns <code>null</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     */
    inline void SetLoggingConfig(const LoggingConfig& value) { m_loggingConfig = value; }

    /**
     * <p>Contains logging configuration information for private extensions. This
     * applies only to private extensions you have registered in your account. For
     * public extensions, both those provided by Amazon Web Services and published by
     * third parties, CloudFormation returns <code>null</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     */
    inline void SetLoggingConfig(LoggingConfig&& value) { m_loggingConfig = std::move(value); }

    /**
     * <p>Contains logging configuration information for private extensions. This
     * applies only to private extensions you have registered in your account. For
     * public extensions, both those provided by Amazon Web Services and published by
     * third parties, CloudFormation returns <code>null</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     */
    inline DescribeTypeResult& WithLoggingConfig(const LoggingConfig& value) { SetLoggingConfig(value); return *this;}

    /**
     * <p>Contains logging configuration information for private extensions. This
     * applies only to private extensions you have registered in your account. For
     * public extensions, both those provided by Amazon Web Services and published by
     * third parties, CloudFormation returns <code>null</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     */
    inline DescribeTypeResult& WithLoggingConfig(LoggingConfig&& value) { SetLoggingConfig(std::move(value)); return *this;}


    /**
     * <p>For extensions that are modules, the public third-party extensions that must
     * be activated in your account in order for the module itself to be activated.</p>
     */
    inline const Aws::Vector<RequiredActivatedType>& GetRequiredActivatedTypes() const{ return m_requiredActivatedTypes; }

    /**
     * <p>For extensions that are modules, the public third-party extensions that must
     * be activated in your account in order for the module itself to be activated.</p>
     */
    inline void SetRequiredActivatedTypes(const Aws::Vector<RequiredActivatedType>& value) { m_requiredActivatedTypes = value; }

    /**
     * <p>For extensions that are modules, the public third-party extensions that must
     * be activated in your account in order for the module itself to be activated.</p>
     */
    inline void SetRequiredActivatedTypes(Aws::Vector<RequiredActivatedType>&& value) { m_requiredActivatedTypes = std::move(value); }

    /**
     * <p>For extensions that are modules, the public third-party extensions that must
     * be activated in your account in order for the module itself to be activated.</p>
     */
    inline DescribeTypeResult& WithRequiredActivatedTypes(const Aws::Vector<RequiredActivatedType>& value) { SetRequiredActivatedTypes(value); return *this;}

    /**
     * <p>For extensions that are modules, the public third-party extensions that must
     * be activated in your account in order for the module itself to be activated.</p>
     */
    inline DescribeTypeResult& WithRequiredActivatedTypes(Aws::Vector<RequiredActivatedType>&& value) { SetRequiredActivatedTypes(std::move(value)); return *this;}

    /**
     * <p>For extensions that are modules, the public third-party extensions that must
     * be activated in your account in order for the module itself to be activated.</p>
     */
    inline DescribeTypeResult& AddRequiredActivatedTypes(const RequiredActivatedType& value) { m_requiredActivatedTypes.push_back(value); return *this; }

    /**
     * <p>For extensions that are modules, the public third-party extensions that must
     * be activated in your account in order for the module itself to be activated.</p>
     */
    inline DescribeTypeResult& AddRequiredActivatedTypes(RequiredActivatedType&& value) { m_requiredActivatedTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to register the
     * extension. This applies only to private extensions you have registered in your
     * account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>If the registered extension calls any Amazon Web Services APIs, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * Amazon Web Services APIs, and provision that execution role in your account.
     * CloudFormation then assumes that execution role to provide your extension with
     * the appropriate credentials.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to register the
     * extension. This applies only to private extensions you have registered in your
     * account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>If the registered extension calls any Amazon Web Services APIs, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * Amazon Web Services APIs, and provision that execution role in your account.
     * CloudFormation then assumes that execution role to provide your extension with
     * the appropriate credentials.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to register the
     * extension. This applies only to private extensions you have registered in your
     * account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>If the registered extension calls any Amazon Web Services APIs, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * Amazon Web Services APIs, and provision that execution role in your account.
     * CloudFormation then assumes that execution role to provide your extension with
     * the appropriate credentials.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to register the
     * extension. This applies only to private extensions you have registered in your
     * account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>If the registered extension calls any Amazon Web Services APIs, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * Amazon Web Services APIs, and provision that execution role in your account.
     * CloudFormation then assumes that execution role to provide your extension with
     * the appropriate credentials.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to register the
     * extension. This applies only to private extensions you have registered in your
     * account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>If the registered extension calls any Amazon Web Services APIs, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * Amazon Web Services APIs, and provision that execution role in your account.
     * CloudFormation then assumes that execution role to provide your extension with
     * the appropriate credentials.</p>
     */
    inline DescribeTypeResult& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to register the
     * extension. This applies only to private extensions you have registered in your
     * account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>If the registered extension calls any Amazon Web Services APIs, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * Amazon Web Services APIs, and provision that execution role in your account.
     * CloudFormation then assumes that execution role to provide your extension with
     * the appropriate credentials.</p>
     */
    inline DescribeTypeResult& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to register the
     * extension. This applies only to private extensions you have registered in your
     * account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * <p>If the registered extension calls any Amazon Web Services APIs, you must
     * create an <i> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * execution role</a> </i> that includes the necessary permissions to call those
     * Amazon Web Services APIs, and provision that execution role in your account.
     * CloudFormation then assumes that execution role to provide your extension with
     * the appropriate credentials.</p>
     */
    inline DescribeTypeResult& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The scope at which the extension is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The extension is only visible and usable within the account in which it is
     * registered. CloudFormation marks any extensions you register as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The extension is
     * publicly visible and usable within any Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The scope at which the extension is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The extension is only visible and usable within the account in which it is
     * registered. CloudFormation marks any extensions you register as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The extension is
     * publicly visible and usable within any Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline void SetVisibility(const Visibility& value) { m_visibility = value; }

    /**
     * <p>The scope at which the extension is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The extension is only visible and usable within the account in which it is
     * registered. CloudFormation marks any extensions you register as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The extension is
     * publicly visible and usable within any Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline void SetVisibility(Visibility&& value) { m_visibility = std::move(value); }

    /**
     * <p>The scope at which the extension is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The extension is only visible and usable within the account in which it is
     * registered. CloudFormation marks any extensions you register as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The extension is
     * publicly visible and usable within any Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline DescribeTypeResult& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>The scope at which the extension is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The extension is only visible and usable within the account in which it is
     * registered. CloudFormation marks any extensions you register as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The extension is
     * publicly visible and usable within any Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline DescribeTypeResult& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>The URL of the source code for the extension.</p>
     */
    inline const Aws::String& GetSourceUrl() const{ return m_sourceUrl; }

    /**
     * <p>The URL of the source code for the extension.</p>
     */
    inline void SetSourceUrl(const Aws::String& value) { m_sourceUrl = value; }

    /**
     * <p>The URL of the source code for the extension.</p>
     */
    inline void SetSourceUrl(Aws::String&& value) { m_sourceUrl = std::move(value); }

    /**
     * <p>The URL of the source code for the extension.</p>
     */
    inline void SetSourceUrl(const char* value) { m_sourceUrl.assign(value); }

    /**
     * <p>The URL of the source code for the extension.</p>
     */
    inline DescribeTypeResult& WithSourceUrl(const Aws::String& value) { SetSourceUrl(value); return *this;}

    /**
     * <p>The URL of the source code for the extension.</p>
     */
    inline DescribeTypeResult& WithSourceUrl(Aws::String&& value) { SetSourceUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the source code for the extension.</p>
     */
    inline DescribeTypeResult& WithSourceUrl(const char* value) { SetSourceUrl(value); return *this;}


    /**
     * <p>The URL of a page providing detailed documentation for this extension.</p>
     */
    inline const Aws::String& GetDocumentationUrl() const{ return m_documentationUrl; }

    /**
     * <p>The URL of a page providing detailed documentation for this extension.</p>
     */
    inline void SetDocumentationUrl(const Aws::String& value) { m_documentationUrl = value; }

    /**
     * <p>The URL of a page providing detailed documentation for this extension.</p>
     */
    inline void SetDocumentationUrl(Aws::String&& value) { m_documentationUrl = std::move(value); }

    /**
     * <p>The URL of a page providing detailed documentation for this extension.</p>
     */
    inline void SetDocumentationUrl(const char* value) { m_documentationUrl.assign(value); }

    /**
     * <p>The URL of a page providing detailed documentation for this extension.</p>
     */
    inline DescribeTypeResult& WithDocumentationUrl(const Aws::String& value) { SetDocumentationUrl(value); return *this;}

    /**
     * <p>The URL of a page providing detailed documentation for this extension.</p>
     */
    inline DescribeTypeResult& WithDocumentationUrl(Aws::String&& value) { SetDocumentationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of a page providing detailed documentation for this extension.</p>
     */
    inline DescribeTypeResult& WithDocumentationUrl(const char* value) { SetDocumentationUrl(value); return *this;}


    /**
     * <p>When the specified extension version was registered. This applies only
     * to:</p> <ul> <li> <p>Private extensions you have registered in your account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * </li> <li> <p>Public extensions you have activated in your account with
     * auto-update specified. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     * </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>When the specified extension version was registered. This applies only
     * to:</p> <ul> <li> <p>Private extensions you have registered in your account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * </li> <li> <p>Public extensions you have activated in your account with
     * auto-update specified. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     * </li> </ul>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdated = value; }

    /**
     * <p>When the specified extension version was registered. This applies only
     * to:</p> <ul> <li> <p>Private extensions you have registered in your account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * </li> <li> <p>Public extensions you have activated in your account with
     * auto-update specified. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     * </li> </ul>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdated = std::move(value); }

    /**
     * <p>When the specified extension version was registered. This applies only
     * to:</p> <ul> <li> <p>Private extensions you have registered in your account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * </li> <li> <p>Public extensions you have activated in your account with
     * auto-update specified. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     * </li> </ul>
     */
    inline DescribeTypeResult& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>When the specified extension version was registered. This applies only
     * to:</p> <ul> <li> <p>Private extensions you have registered in your account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     * </li> <li> <p>Public extensions you have activated in your account with
     * auto-update specified. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     * </li> </ul>
     */
    inline DescribeTypeResult& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>When the specified private extension version was registered or activated in
     * your account.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeCreated() const{ return m_timeCreated; }

    /**
     * <p>When the specified private extension version was registered or activated in
     * your account.</p>
     */
    inline void SetTimeCreated(const Aws::Utils::DateTime& value) { m_timeCreated = value; }

    /**
     * <p>When the specified private extension version was registered or activated in
     * your account.</p>
     */
    inline void SetTimeCreated(Aws::Utils::DateTime&& value) { m_timeCreated = std::move(value); }

    /**
     * <p>When the specified private extension version was registered or activated in
     * your account.</p>
     */
    inline DescribeTypeResult& WithTimeCreated(const Aws::Utils::DateTime& value) { SetTimeCreated(value); return *this;}

    /**
     * <p>When the specified private extension version was registered or activated in
     * your account.</p>
     */
    inline DescribeTypeResult& WithTimeCreated(Aws::Utils::DateTime&& value) { SetTimeCreated(std::move(value)); return *this;}


    /**
     * <p>A JSON string that represent the current configuration data for the extension
     * in this account and Region.</p> <p>To set the configuration data for an
     * extension, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_SetTypeConfiguration.html">SetTypeConfiguration</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
     * extensions at the account level</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetConfigurationSchema() const{ return m_configurationSchema; }

    /**
     * <p>A JSON string that represent the current configuration data for the extension
     * in this account and Region.</p> <p>To set the configuration data for an
     * extension, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_SetTypeConfiguration.html">SetTypeConfiguration</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
     * extensions at the account level</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetConfigurationSchema(const Aws::String& value) { m_configurationSchema = value; }

    /**
     * <p>A JSON string that represent the current configuration data for the extension
     * in this account and Region.</p> <p>To set the configuration data for an
     * extension, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_SetTypeConfiguration.html">SetTypeConfiguration</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
     * extensions at the account level</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetConfigurationSchema(Aws::String&& value) { m_configurationSchema = std::move(value); }

    /**
     * <p>A JSON string that represent the current configuration data for the extension
     * in this account and Region.</p> <p>To set the configuration data for an
     * extension, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_SetTypeConfiguration.html">SetTypeConfiguration</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
     * extensions at the account level</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetConfigurationSchema(const char* value) { m_configurationSchema.assign(value); }

    /**
     * <p>A JSON string that represent the current configuration data for the extension
     * in this account and Region.</p> <p>To set the configuration data for an
     * extension, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_SetTypeConfiguration.html">SetTypeConfiguration</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
     * extensions at the account level</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline DescribeTypeResult& WithConfigurationSchema(const Aws::String& value) { SetConfigurationSchema(value); return *this;}

    /**
     * <p>A JSON string that represent the current configuration data for the extension
     * in this account and Region.</p> <p>To set the configuration data for an
     * extension, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_SetTypeConfiguration.html">SetTypeConfiguration</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
     * extensions at the account level</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline DescribeTypeResult& WithConfigurationSchema(Aws::String&& value) { SetConfigurationSchema(std::move(value)); return *this;}

    /**
     * <p>A JSON string that represent the current configuration data for the extension
     * in this account and Region.</p> <p>To set the configuration data for an
     * extension, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_SetTypeConfiguration.html">SetTypeConfiguration</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
     * extensions at the account level</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline DescribeTypeResult& WithConfigurationSchema(const char* value) { SetConfigurationSchema(value); return *this;}


    /**
     * <p>The publisher ID of the extension publisher.</p> <p>This applies only to
     * public third-party extensions. For private registered extensions, and extensions
     * provided by Amazon Web Services, CloudFormation returns <code>null</code>.</p>
     */
    inline const Aws::String& GetPublisherId() const{ return m_publisherId; }

    /**
     * <p>The publisher ID of the extension publisher.</p> <p>This applies only to
     * public third-party extensions. For private registered extensions, and extensions
     * provided by Amazon Web Services, CloudFormation returns <code>null</code>.</p>
     */
    inline void SetPublisherId(const Aws::String& value) { m_publisherId = value; }

    /**
     * <p>The publisher ID of the extension publisher.</p> <p>This applies only to
     * public third-party extensions. For private registered extensions, and extensions
     * provided by Amazon Web Services, CloudFormation returns <code>null</code>.</p>
     */
    inline void SetPublisherId(Aws::String&& value) { m_publisherId = std::move(value); }

    /**
     * <p>The publisher ID of the extension publisher.</p> <p>This applies only to
     * public third-party extensions. For private registered extensions, and extensions
     * provided by Amazon Web Services, CloudFormation returns <code>null</code>.</p>
     */
    inline void SetPublisherId(const char* value) { m_publisherId.assign(value); }

    /**
     * <p>The publisher ID of the extension publisher.</p> <p>This applies only to
     * public third-party extensions. For private registered extensions, and extensions
     * provided by Amazon Web Services, CloudFormation returns <code>null</code>.</p>
     */
    inline DescribeTypeResult& WithPublisherId(const Aws::String& value) { SetPublisherId(value); return *this;}

    /**
     * <p>The publisher ID of the extension publisher.</p> <p>This applies only to
     * public third-party extensions. For private registered extensions, and extensions
     * provided by Amazon Web Services, CloudFormation returns <code>null</code>.</p>
     */
    inline DescribeTypeResult& WithPublisherId(Aws::String&& value) { SetPublisherId(std::move(value)); return *this;}

    /**
     * <p>The publisher ID of the extension publisher.</p> <p>This applies only to
     * public third-party extensions. For private registered extensions, and extensions
     * provided by Amazon Web Services, CloudFormation returns <code>null</code>.</p>
     */
    inline DescribeTypeResult& WithPublisherId(const char* value) { SetPublisherId(value); return *this;}


    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetOriginalTypeName() const{ return m_originalTypeName; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetOriginalTypeName(const Aws::String& value) { m_originalTypeName = value; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetOriginalTypeName(Aws::String&& value) { m_originalTypeName = std::move(value); }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetOriginalTypeName(const char* value) { m_originalTypeName.assign(value); }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline DescribeTypeResult& WithOriginalTypeName(const Aws::String& value) { SetOriginalTypeName(value); return *this;}

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline DescribeTypeResult& WithOriginalTypeName(Aws::String&& value) { SetOriginalTypeName(std::move(value)); return *this;}

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Specifying
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline DescribeTypeResult& WithOriginalTypeName(const char* value) { SetOriginalTypeName(value); return *this;}


    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the Amazon Resource Name (ARN) of the public extension.</p>
     */
    inline const Aws::String& GetOriginalTypeArn() const{ return m_originalTypeArn; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the Amazon Resource Name (ARN) of the public extension.</p>
     */
    inline void SetOriginalTypeArn(const Aws::String& value) { m_originalTypeArn = value; }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the Amazon Resource Name (ARN) of the public extension.</p>
     */
    inline void SetOriginalTypeArn(Aws::String&& value) { m_originalTypeArn = std::move(value); }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the Amazon Resource Name (ARN) of the public extension.</p>
     */
    inline void SetOriginalTypeArn(const char* value) { m_originalTypeArn.assign(value); }

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the Amazon Resource Name (ARN) of the public extension.</p>
     */
    inline DescribeTypeResult& WithOriginalTypeArn(const Aws::String& value) { SetOriginalTypeArn(value); return *this;}

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the Amazon Resource Name (ARN) of the public extension.</p>
     */
    inline DescribeTypeResult& WithOriginalTypeArn(Aws::String&& value) { SetOriginalTypeArn(std::move(value)); return *this;}

    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the Amazon Resource Name (ARN) of the public extension.</p>
     */
    inline DescribeTypeResult& WithOriginalTypeArn(const char* value) { SetOriginalTypeArn(value); return *this;}


    /**
     * <p>The version number of a public third-party extension.</p> <p>This applies
     * only if you specify a public extension you have activated in your account, or
     * specify a public extension without specifying a version. For all other
     * extensions, CloudFormation returns <code>null</code>.</p>
     */
    inline const Aws::String& GetPublicVersionNumber() const{ return m_publicVersionNumber; }

    /**
     * <p>The version number of a public third-party extension.</p> <p>This applies
     * only if you specify a public extension you have activated in your account, or
     * specify a public extension without specifying a version. For all other
     * extensions, CloudFormation returns <code>null</code>.</p>
     */
    inline void SetPublicVersionNumber(const Aws::String& value) { m_publicVersionNumber = value; }

    /**
     * <p>The version number of a public third-party extension.</p> <p>This applies
     * only if you specify a public extension you have activated in your account, or
     * specify a public extension without specifying a version. For all other
     * extensions, CloudFormation returns <code>null</code>.</p>
     */
    inline void SetPublicVersionNumber(Aws::String&& value) { m_publicVersionNumber = std::move(value); }

    /**
     * <p>The version number of a public third-party extension.</p> <p>This applies
     * only if you specify a public extension you have activated in your account, or
     * specify a public extension without specifying a version. For all other
     * extensions, CloudFormation returns <code>null</code>.</p>
     */
    inline void SetPublicVersionNumber(const char* value) { m_publicVersionNumber.assign(value); }

    /**
     * <p>The version number of a public third-party extension.</p> <p>This applies
     * only if you specify a public extension you have activated in your account, or
     * specify a public extension without specifying a version. For all other
     * extensions, CloudFormation returns <code>null</code>.</p>
     */
    inline DescribeTypeResult& WithPublicVersionNumber(const Aws::String& value) { SetPublicVersionNumber(value); return *this;}

    /**
     * <p>The version number of a public third-party extension.</p> <p>This applies
     * only if you specify a public extension you have activated in your account, or
     * specify a public extension without specifying a version. For all other
     * extensions, CloudFormation returns <code>null</code>.</p>
     */
    inline DescribeTypeResult& WithPublicVersionNumber(Aws::String&& value) { SetPublicVersionNumber(std::move(value)); return *this;}

    /**
     * <p>The version number of a public third-party extension.</p> <p>This applies
     * only if you specify a public extension you have activated in your account, or
     * specify a public extension without specifying a version. For all other
     * extensions, CloudFormation returns <code>null</code>.</p>
     */
    inline DescribeTypeResult& WithPublicVersionNumber(const char* value) { SetPublicVersionNumber(value); return *this;}


    /**
     * <p>The latest version of a public extension <i>that is available</i> for
     * use.</p> <p>This only applies if you specify a public extension, and you don't
     * specify a version. For all other requests, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline const Aws::String& GetLatestPublicVersion() const{ return m_latestPublicVersion; }

    /**
     * <p>The latest version of a public extension <i>that is available</i> for
     * use.</p> <p>This only applies if you specify a public extension, and you don't
     * specify a version. For all other requests, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline void SetLatestPublicVersion(const Aws::String& value) { m_latestPublicVersion = value; }

    /**
     * <p>The latest version of a public extension <i>that is available</i> for
     * use.</p> <p>This only applies if you specify a public extension, and you don't
     * specify a version. For all other requests, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline void SetLatestPublicVersion(Aws::String&& value) { m_latestPublicVersion = std::move(value); }

    /**
     * <p>The latest version of a public extension <i>that is available</i> for
     * use.</p> <p>This only applies if you specify a public extension, and you don't
     * specify a version. For all other requests, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline void SetLatestPublicVersion(const char* value) { m_latestPublicVersion.assign(value); }

    /**
     * <p>The latest version of a public extension <i>that is available</i> for
     * use.</p> <p>This only applies if you specify a public extension, and you don't
     * specify a version. For all other requests, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline DescribeTypeResult& WithLatestPublicVersion(const Aws::String& value) { SetLatestPublicVersion(value); return *this;}

    /**
     * <p>The latest version of a public extension <i>that is available</i> for
     * use.</p> <p>This only applies if you specify a public extension, and you don't
     * specify a version. For all other requests, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline DescribeTypeResult& WithLatestPublicVersion(Aws::String&& value) { SetLatestPublicVersion(std::move(value)); return *this;}

    /**
     * <p>The latest version of a public extension <i>that is available</i> for
     * use.</p> <p>This only applies if you specify a public extension, and you don't
     * specify a version. For all other requests, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline DescribeTypeResult& WithLatestPublicVersion(const char* value) { SetLatestPublicVersion(value); return *this;}


    /**
     * <p>Whether the extension is activated in the account and Region.</p> <p>This
     * only applies to public third-party extensions. For all other extensions,
     * CloudFormation returns <code>null</code>.</p>
     */
    inline bool GetIsActivated() const{ return m_isActivated; }

    /**
     * <p>Whether the extension is activated in the account and Region.</p> <p>This
     * only applies to public third-party extensions. For all other extensions,
     * CloudFormation returns <code>null</code>.</p>
     */
    inline void SetIsActivated(bool value) { m_isActivated = value; }

    /**
     * <p>Whether the extension is activated in the account and Region.</p> <p>This
     * only applies to public third-party extensions. For all other extensions,
     * CloudFormation returns <code>null</code>.</p>
     */
    inline DescribeTypeResult& WithIsActivated(bool value) { SetIsActivated(value); return *this;}


    /**
     * <p>Whether CloudFormation automatically updates the extension in this account
     * and Region when a new <i>minor</i> version is published by the extension
     * publisher. Major versions released by the publisher must be manually updated.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable">Activating
     * public extensions for use in your account</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline bool GetAutoUpdate() const{ return m_autoUpdate; }

    /**
     * <p>Whether CloudFormation automatically updates the extension in this account
     * and Region when a new <i>minor</i> version is published by the extension
     * publisher. Major versions released by the publisher must be manually updated.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable">Activating
     * public extensions for use in your account</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline void SetAutoUpdate(bool value) { m_autoUpdate = value; }

    /**
     * <p>Whether CloudFormation automatically updates the extension in this account
     * and Region when a new <i>minor</i> version is published by the extension
     * publisher. Major versions released by the publisher must be manually updated.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable">Activating
     * public extensions for use in your account</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline DescribeTypeResult& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}


    
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

    TypeTestsStatus m_typeTestsStatus;

    Aws::String m_typeTestsStatusDescription;

    Aws::String m_description;

    Aws::String m_schema;

    ProvisioningType m_provisioningType;

    DeprecatedStatus m_deprecatedStatus;

    LoggingConfig m_loggingConfig;

    Aws::Vector<RequiredActivatedType> m_requiredActivatedTypes;

    Aws::String m_executionRoleArn;

    Visibility m_visibility;

    Aws::String m_sourceUrl;

    Aws::String m_documentationUrl;

    Aws::Utils::DateTime m_lastUpdated;

    Aws::Utils::DateTime m_timeCreated;

    Aws::String m_configurationSchema;

    Aws::String m_publisherId;

    Aws::String m_originalTypeName;

    Aws::String m_originalTypeArn;

    Aws::String m_publicVersionNumber;

    Aws::String m_latestPublicVersion;

    bool m_isActivated;

    bool m_autoUpdate;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
