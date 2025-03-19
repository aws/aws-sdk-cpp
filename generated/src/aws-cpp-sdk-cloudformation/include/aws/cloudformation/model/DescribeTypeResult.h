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
    AWS_CLOUDFORMATION_API DescribeTypeResult() = default;
    AWS_CLOUDFORMATION_API DescribeTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeTypeResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kind of extension.</p>
     */
    inline RegistryType GetType() const { return m_type; }
    inline void SetType(RegistryType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribeTypeResult& WithType(RegistryType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the extension.</p> <p>If the extension is a public third-party
     * type you have activated with a type name alias, CloudFormation returns the type
     * name alias. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    DescribeTypeResult& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetDefaultVersionId() const { return m_defaultVersionId; }
    template<typename DefaultVersionIdT = Aws::String>
    void SetDefaultVersionId(DefaultVersionIdT&& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = std::forward<DefaultVersionIdT>(value); }
    template<typename DefaultVersionIdT = Aws::String>
    DescribeTypeResult& WithDefaultVersionId(DefaultVersionIdT&& value) { SetDefaultVersionId(std::forward<DefaultVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the specified extension version is set as the default version.</p>
     * <p>This applies only to private extensions you have registered in your account,
     * and extensions published by Amazon Web Services. For public third-party
     * extensions, whether they are activated in your account, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline bool GetIsDefaultVersion() const { return m_isDefaultVersion; }
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersionHasBeenSet = true; m_isDefaultVersion = value; }
    inline DescribeTypeResult& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}
    ///@}

    ///@{
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
     * Command Line Interface (CLI) User Guide</i>.</p> </li> <li> <p>
     * <code>FAILED</code>: The extension has failed one or more contract tests.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code>: Contract tests are currently being
     * performed on the extension.</p> </li> <li> <p> <code>NOT_TESTED</code>: Contract
     * tests haven't been performed on the extension.</p> </li> </ul>
     */
    inline TypeTestsStatus GetTypeTestsStatus() const { return m_typeTestsStatus; }
    inline void SetTypeTestsStatus(TypeTestsStatus value) { m_typeTestsStatusHasBeenSet = true; m_typeTestsStatus = value; }
    inline DescribeTypeResult& WithTypeTestsStatus(TypeTestsStatus value) { SetTypeTestsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the test status. To return the extension test status of a
     * specific extension version, you must specify <code>VersionId</code>.</p> <p>This
     * applies only to registered private extension versions. CloudFormation doesn't
     * return this information for public extensions, whether they are activated in
     * your account.</p>
     */
    inline const Aws::String& GetTypeTestsStatusDescription() const { return m_typeTestsStatusDescription; }
    template<typename TypeTestsStatusDescriptionT = Aws::String>
    void SetTypeTestsStatusDescription(TypeTestsStatusDescriptionT&& value) { m_typeTestsStatusDescriptionHasBeenSet = true; m_typeTestsStatusDescription = std::forward<TypeTestsStatusDescriptionT>(value); }
    template<typename TypeTestsStatusDescriptionT = Aws::String>
    DescribeTypeResult& WithTypeTestsStatusDescription(TypeTestsStatusDescriptionT&& value) { SetTypeTestsStatusDescription(std::forward<TypeTestsStatusDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the extension.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeTypeResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema that defines the extension.</p> <p>For more information about
     * extension schemas, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * type schema</a> in the <i>CloudFormation Command Line Interface (CLI) User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetSchema() const { return m_schema; }
    template<typename SchemaT = Aws::String>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::String>
    DescribeTypeResult& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
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
    inline ProvisioningType GetProvisioningType() const { return m_provisioningType; }
    inline void SetProvisioningType(ProvisioningType value) { m_provisioningTypeHasBeenSet = true; m_provisioningType = value; }
    inline DescribeTypeResult& WithProvisioningType(ProvisioningType value) { SetProvisioningType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deprecation status of the extension version.</p> <p>Valid values
     * include:</p> <ul> <li> <p> <code>LIVE</code>: The extension is activated or
     * registered and can be used in CloudFormation operations, dependent on its
     * provisioning behavior and visibility scope.</p> </li> <li> <p>
     * <code>DEPRECATED</code>: The extension has been deactivated or deregistered and
     * can no longer be used in CloudFormation operations.</p> </li> </ul> <p>For
     * public third-party extensions, CloudFormation returns <code>null</code>.</p>
     */
    inline DeprecatedStatus GetDeprecatedStatus() const { return m_deprecatedStatus; }
    inline void SetDeprecatedStatus(DeprecatedStatus value) { m_deprecatedStatusHasBeenSet = true; m_deprecatedStatus = value; }
    inline DescribeTypeResult& WithDeprecatedStatus(DeprecatedStatus value) { SetDeprecatedStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains logging configuration information for private extensions. This
     * applies only to private extensions you have registered in your account. For
     * public extensions, both those provided by Amazon Web Services and published by
     * third parties, CloudFormation returns <code>null</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
     */
    inline const LoggingConfig& GetLoggingConfig() const { return m_loggingConfig; }
    template<typename LoggingConfigT = LoggingConfig>
    void SetLoggingConfig(LoggingConfigT&& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = std::forward<LoggingConfigT>(value); }
    template<typename LoggingConfigT = LoggingConfig>
    DescribeTypeResult& WithLoggingConfig(LoggingConfigT&& value) { SetLoggingConfig(std::forward<LoggingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For extensions that are modules, the public third-party extensions that must
     * be activated in your account in order for the module itself to be activated.</p>
     */
    inline const Aws::Vector<RequiredActivatedType>& GetRequiredActivatedTypes() const { return m_requiredActivatedTypes; }
    template<typename RequiredActivatedTypesT = Aws::Vector<RequiredActivatedType>>
    void SetRequiredActivatedTypes(RequiredActivatedTypesT&& value) { m_requiredActivatedTypesHasBeenSet = true; m_requiredActivatedTypes = std::forward<RequiredActivatedTypesT>(value); }
    template<typename RequiredActivatedTypesT = Aws::Vector<RequiredActivatedType>>
    DescribeTypeResult& WithRequiredActivatedTypes(RequiredActivatedTypesT&& value) { SetRequiredActivatedTypes(std::forward<RequiredActivatedTypesT>(value)); return *this;}
    template<typename RequiredActivatedTypesT = RequiredActivatedType>
    DescribeTypeResult& AddRequiredActivatedTypes(RequiredActivatedTypesT&& value) { m_requiredActivatedTypesHasBeenSet = true; m_requiredActivatedTypes.emplace_back(std::forward<RequiredActivatedTypesT>(value)); return *this; }
    ///@}

    ///@{
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
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    DescribeTypeResult& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope at which the extension is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The extension is only visible and usable within the account in which it is
     * registered. CloudFormation marks any extensions you register as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The extension is
     * publicly visible and usable within any Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline DescribeTypeResult& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the source code for the extension.</p>
     */
    inline const Aws::String& GetSourceUrl() const { return m_sourceUrl; }
    template<typename SourceUrlT = Aws::String>
    void SetSourceUrl(SourceUrlT&& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl = std::forward<SourceUrlT>(value); }
    template<typename SourceUrlT = Aws::String>
    DescribeTypeResult& WithSourceUrl(SourceUrlT&& value) { SetSourceUrl(std::forward<SourceUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of a page providing detailed documentation for this extension.</p>
     */
    inline const Aws::String& GetDocumentationUrl() const { return m_documentationUrl; }
    template<typename DocumentationUrlT = Aws::String>
    void SetDocumentationUrl(DocumentationUrlT&& value) { m_documentationUrlHasBeenSet = true; m_documentationUrl = std::forward<DocumentationUrlT>(value); }
    template<typename DocumentationUrlT = Aws::String>
    DescribeTypeResult& WithDocumentationUrl(DocumentationUrlT&& value) { SetDocumentationUrl(std::forward<DocumentationUrlT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    DescribeTypeResult& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the specified private extension version was registered or activated in
     * your account.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeCreated() const { return m_timeCreated; }
    template<typename TimeCreatedT = Aws::Utils::DateTime>
    void SetTimeCreated(TimeCreatedT&& value) { m_timeCreatedHasBeenSet = true; m_timeCreated = std::forward<TimeCreatedT>(value); }
    template<typename TimeCreatedT = Aws::Utils::DateTime>
    DescribeTypeResult& WithTimeCreated(TimeCreatedT&& value) { SetTimeCreated(std::forward<TimeCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string that represent the current configuration data for the extension
     * in this account and Region.</p> <p>To set the configuration data for an
     * extension, use <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_SetTypeConfiguration.html">SetTypeConfiguration</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-set-configuration.html">Edit
     * configuration data for extensions in your account</a> in the <i>CloudFormation
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetConfigurationSchema() const { return m_configurationSchema; }
    template<typename ConfigurationSchemaT = Aws::String>
    void SetConfigurationSchema(ConfigurationSchemaT&& value) { m_configurationSchemaHasBeenSet = true; m_configurationSchema = std::forward<ConfigurationSchemaT>(value); }
    template<typename ConfigurationSchemaT = Aws::String>
    DescribeTypeResult& WithConfigurationSchema(ConfigurationSchemaT&& value) { SetConfigurationSchema(std::forward<ConfigurationSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The publisher ID of the extension publisher.</p> <p>This applies only to
     * public third-party extensions. For private registered extensions, and extensions
     * provided by Amazon Web Services, CloudFormation returns <code>null</code>.</p>
     */
    inline const Aws::String& GetPublisherId() const { return m_publisherId; }
    template<typename PublisherIdT = Aws::String>
    void SetPublisherId(PublisherIdT&& value) { m_publisherIdHasBeenSet = true; m_publisherId = std::forward<PublisherIdT>(value); }
    template<typename PublisherIdT = Aws::String>
    DescribeTypeResult& WithPublisherId(PublisherIdT&& value) { SetPublisherId(std::forward<PublisherIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Use
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetOriginalTypeName() const { return m_originalTypeName; }
    template<typename OriginalTypeNameT = Aws::String>
    void SetOriginalTypeName(OriginalTypeNameT&& value) { m_originalTypeNameHasBeenSet = true; m_originalTypeName = std::forward<OriginalTypeNameT>(value); }
    template<typename OriginalTypeNameT = Aws::String>
    DescribeTypeResult& WithOriginalTypeName(OriginalTypeNameT&& value) { SetOriginalTypeName(std::forward<OriginalTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For public extensions that have been activated for this account and Region,
     * the Amazon Resource Name (ARN) of the public extension.</p>
     */
    inline const Aws::String& GetOriginalTypeArn() const { return m_originalTypeArn; }
    template<typename OriginalTypeArnT = Aws::String>
    void SetOriginalTypeArn(OriginalTypeArnT&& value) { m_originalTypeArnHasBeenSet = true; m_originalTypeArn = std::forward<OriginalTypeArnT>(value); }
    template<typename OriginalTypeArnT = Aws::String>
    DescribeTypeResult& WithOriginalTypeArn(OriginalTypeArnT&& value) { SetOriginalTypeArn(std::forward<OriginalTypeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of a public third-party extension.</p> <p>This applies
     * only if you specify a public extension you have activated in your account, or
     * specify a public extension without specifying a version. For all other
     * extensions, CloudFormation returns <code>null</code>.</p>
     */
    inline const Aws::String& GetPublicVersionNumber() const { return m_publicVersionNumber; }
    template<typename PublicVersionNumberT = Aws::String>
    void SetPublicVersionNumber(PublicVersionNumberT&& value) { m_publicVersionNumberHasBeenSet = true; m_publicVersionNumber = std::forward<PublicVersionNumberT>(value); }
    template<typename PublicVersionNumberT = Aws::String>
    DescribeTypeResult& WithPublicVersionNumber(PublicVersionNumberT&& value) { SetPublicVersionNumber(std::forward<PublicVersionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of a public extension <i>that is available</i> for
     * use.</p> <p>This only applies if you specify a public extension, and you don't
     * specify a version. For all other requests, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline const Aws::String& GetLatestPublicVersion() const { return m_latestPublicVersion; }
    template<typename LatestPublicVersionT = Aws::String>
    void SetLatestPublicVersion(LatestPublicVersionT&& value) { m_latestPublicVersionHasBeenSet = true; m_latestPublicVersion = std::forward<LatestPublicVersionT>(value); }
    template<typename LatestPublicVersionT = Aws::String>
    DescribeTypeResult& WithLatestPublicVersion(LatestPublicVersionT&& value) { SetLatestPublicVersion(std::forward<LatestPublicVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the extension is activated in the account and Region.</p> <p>This
     * only applies to public third-party extensions. For all other extensions,
     * CloudFormation returns <code>null</code>.</p>
     */
    inline bool GetIsActivated() const { return m_isActivated; }
    inline void SetIsActivated(bool value) { m_isActivatedHasBeenSet = true; m_isActivated = value; }
    inline DescribeTypeResult& WithIsActivated(bool value) { SetIsActivated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether CloudFormation automatically updates the extension in this account
     * and Region when a new <i>minor</i> version is published by the extension
     * publisher. Major versions released by the publisher must be manually updated.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-auto">Automatically
     * use new versions of extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline bool GetAutoUpdate() const { return m_autoUpdate; }
    inline void SetAutoUpdate(bool value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }
    inline DescribeTypeResult& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTypeResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    RegistryType m_type{RegistryType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_defaultVersionId;
    bool m_defaultVersionIdHasBeenSet = false;

    bool m_isDefaultVersion{false};
    bool m_isDefaultVersionHasBeenSet = false;

    TypeTestsStatus m_typeTestsStatus{TypeTestsStatus::NOT_SET};
    bool m_typeTestsStatusHasBeenSet = false;

    Aws::String m_typeTestsStatusDescription;
    bool m_typeTestsStatusDescriptionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    ProvisioningType m_provisioningType{ProvisioningType::NOT_SET};
    bool m_provisioningTypeHasBeenSet = false;

    DeprecatedStatus m_deprecatedStatus{DeprecatedStatus::NOT_SET};
    bool m_deprecatedStatusHasBeenSet = false;

    LoggingConfig m_loggingConfig;
    bool m_loggingConfigHasBeenSet = false;

    Aws::Vector<RequiredActivatedType> m_requiredActivatedTypes;
    bool m_requiredActivatedTypesHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    Aws::String m_sourceUrl;
    bool m_sourceUrlHasBeenSet = false;

    Aws::String m_documentationUrl;
    bool m_documentationUrlHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    Aws::Utils::DateTime m_timeCreated{};
    bool m_timeCreatedHasBeenSet = false;

    Aws::String m_configurationSchema;
    bool m_configurationSchemaHasBeenSet = false;

    Aws::String m_publisherId;
    bool m_publisherIdHasBeenSet = false;

    Aws::String m_originalTypeName;
    bool m_originalTypeNameHasBeenSet = false;

    Aws::String m_originalTypeArn;
    bool m_originalTypeArnHasBeenSet = false;

    Aws::String m_publicVersionNumber;
    bool m_publicVersionNumberHasBeenSet = false;

    Aws::String m_latestPublicVersion;
    bool m_latestPublicVersionHasBeenSet = false;

    bool m_isActivated{false};
    bool m_isActivatedHasBeenSet = false;

    bool m_autoUpdate{false};
    bool m_autoUpdateHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
