/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/cloudformation/model/ThirdPartyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/LoggingConfig.h>
#include <aws/cloudformation/model/VersionBump.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class ActivateTypeRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ActivateTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ActivateType"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The extension type.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline ThirdPartyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ThirdPartyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ActivateTypeRequest& WithType(ThirdPartyType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the public extension.</p> <p>Conditional:
     * You must specify <code>PublicTypeArn</code>, or <code>TypeName</code>,
     * <code>Type</code>, and <code>PublisherId</code>.</p>
     */
    inline const Aws::String& GetPublicTypeArn() const { return m_publicTypeArn; }
    inline bool PublicTypeArnHasBeenSet() const { return m_publicTypeArnHasBeenSet; }
    template<typename PublicTypeArnT = Aws::String>
    void SetPublicTypeArn(PublicTypeArnT&& value) { m_publicTypeArnHasBeenSet = true; m_publicTypeArn = std::forward<PublicTypeArnT>(value); }
    template<typename PublicTypeArnT = Aws::String>
    ActivateTypeRequest& WithPublicTypeArn(PublicTypeArnT&& value) { SetPublicTypeArn(std::forward<PublicTypeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the extension publisher.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline const Aws::String& GetPublisherId() const { return m_publisherId; }
    inline bool PublisherIdHasBeenSet() const { return m_publisherIdHasBeenSet; }
    template<typename PublisherIdT = Aws::String>
    void SetPublisherId(PublisherIdT&& value) { m_publisherIdHasBeenSet = true; m_publisherId = std::forward<PublisherIdT>(value); }
    template<typename PublisherIdT = Aws::String>
    ActivateTypeRequest& WithPublisherId(PublisherIdT&& value) { SetPublisherId(std::forward<PublisherIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    ActivateTypeRequest& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alias to assign to the public extension, in this account and Region. If
     * you specify an alias for the extension, CloudFormation treats the alias as the
     * extension type name within this account and Region. You must use the alias to
     * refer to the extension in your templates, API calls, and CloudFormation
     * console.</p> <p>An extension alias must be unique within a given account and
     * Region. You can activate the same public resource multiple times in the same
     * account and Region, using different type name aliases.</p>
     */
    inline const Aws::String& GetTypeNameAlias() const { return m_typeNameAlias; }
    inline bool TypeNameAliasHasBeenSet() const { return m_typeNameAliasHasBeenSet; }
    template<typename TypeNameAliasT = Aws::String>
    void SetTypeNameAlias(TypeNameAliasT&& value) { m_typeNameAliasHasBeenSet = true; m_typeNameAlias = std::forward<TypeNameAliasT>(value); }
    template<typename TypeNameAliasT = Aws::String>
    ActivateTypeRequest& WithTypeNameAlias(TypeNameAliasT&& value) { SetTypeNameAlias(std::forward<TypeNameAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to automatically update the extension in this account and Region when
     * a new <i>minor</i> version is published by the extension publisher. Major
     * versions released by the publisher must be manually updated.</p> <p>The default
     * is <code>true</code>.</p>
     */
    inline bool GetAutoUpdate() const { return m_autoUpdate; }
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }
    inline void SetAutoUpdate(bool value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }
    inline ActivateTypeRequest& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains logging configuration information for an extension.</p>
     */
    inline const LoggingConfig& GetLoggingConfig() const { return m_loggingConfig; }
    inline bool LoggingConfigHasBeenSet() const { return m_loggingConfigHasBeenSet; }
    template<typename LoggingConfigT = LoggingConfig>
    void SetLoggingConfig(LoggingConfigT&& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = std::forward<LoggingConfigT>(value); }
    template<typename LoggingConfigT = LoggingConfig>
    ActivateTypeRequest& WithLoggingConfig(LoggingConfigT&& value) { SetLoggingConfig(std::forward<LoggingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM execution role to use to activate the extension.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    ActivateTypeRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Manually updates a previously-activated type to a new major or minor version,
     * if available. You can also use this parameter to update the value of
     * <code>AutoUpdate</code>.</p> <ul> <li> <p> <code>MAJOR</code>: CloudFormation
     * updates the extension to the newest major version, if one is available.</p>
     * </li> <li> <p> <code>MINOR</code>: CloudFormation updates the extension to the
     * newest minor version, if one is available.</p> </li> </ul>
     */
    inline VersionBump GetVersionBump() const { return m_versionBump; }
    inline bool VersionBumpHasBeenSet() const { return m_versionBumpHasBeenSet; }
    inline void SetVersionBump(VersionBump value) { m_versionBumpHasBeenSet = true; m_versionBump = value; }
    inline ActivateTypeRequest& WithVersionBump(VersionBump value) { SetVersionBump(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major version of this extension you want to activate, if multiple major
     * versions are available. The default is the latest major version. CloudFormation
     * uses the latest available <i>minor</i> version of the major version
     * selected.</p> <p>You can specify <code>MajorVersion</code> or
     * <code>VersionBump</code>, but not both.</p>
     */
    inline long long GetMajorVersion() const { return m_majorVersion; }
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }
    inline void SetMajorVersion(long long value) { m_majorVersionHasBeenSet = true; m_majorVersion = value; }
    inline ActivateTypeRequest& WithMajorVersion(long long value) { SetMajorVersion(value); return *this;}
    ///@}
  private:

    ThirdPartyType m_type{ThirdPartyType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_publicTypeArn;
    bool m_publicTypeArnHasBeenSet = false;

    Aws::String m_publisherId;
    bool m_publisherIdHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_typeNameAlias;
    bool m_typeNameAliasHasBeenSet = false;

    bool m_autoUpdate{false};
    bool m_autoUpdateHasBeenSet = false;

    LoggingConfig m_loggingConfig;
    bool m_loggingConfigHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    VersionBump m_versionBump{VersionBump::NOT_SET};
    bool m_versionBumpHasBeenSet = false;

    long long m_majorVersion{0};
    bool m_majorVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
