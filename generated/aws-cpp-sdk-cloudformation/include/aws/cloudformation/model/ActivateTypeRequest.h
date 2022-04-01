﻿/**
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
  class AWS_CLOUDFORMATION_API ActivateTypeRequest : public CloudFormationRequest
  {
  public:
    ActivateTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ActivateType"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The extension type.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline const ThirdPartyType& GetType() const{ return m_type; }

    /**
     * <p>The extension type.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The extension type.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline void SetType(const ThirdPartyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The extension type.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline void SetType(ThirdPartyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The extension type.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline ActivateTypeRequest& WithType(const ThirdPartyType& value) { SetType(value); return *this;}

    /**
     * <p>The extension type.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline ActivateTypeRequest& WithType(ThirdPartyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) of the public extension.</p> <p>Conditional:
     * You must specify <code>PublicTypeArn</code>, or <code>TypeName</code>,
     * <code>Type</code>, and <code>PublisherId</code>.</p>
     */
    inline const Aws::String& GetPublicTypeArn() const{ return m_publicTypeArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the public extension.</p> <p>Conditional:
     * You must specify <code>PublicTypeArn</code>, or <code>TypeName</code>,
     * <code>Type</code>, and <code>PublisherId</code>.</p>
     */
    inline bool PublicTypeArnHasBeenSet() const { return m_publicTypeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the public extension.</p> <p>Conditional:
     * You must specify <code>PublicTypeArn</code>, or <code>TypeName</code>,
     * <code>Type</code>, and <code>PublisherId</code>.</p>
     */
    inline void SetPublicTypeArn(const Aws::String& value) { m_publicTypeArnHasBeenSet = true; m_publicTypeArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the public extension.</p> <p>Conditional:
     * You must specify <code>PublicTypeArn</code>, or <code>TypeName</code>,
     * <code>Type</code>, and <code>PublisherId</code>.</p>
     */
    inline void SetPublicTypeArn(Aws::String&& value) { m_publicTypeArnHasBeenSet = true; m_publicTypeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the public extension.</p> <p>Conditional:
     * You must specify <code>PublicTypeArn</code>, or <code>TypeName</code>,
     * <code>Type</code>, and <code>PublisherId</code>.</p>
     */
    inline void SetPublicTypeArn(const char* value) { m_publicTypeArnHasBeenSet = true; m_publicTypeArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the public extension.</p> <p>Conditional:
     * You must specify <code>PublicTypeArn</code>, or <code>TypeName</code>,
     * <code>Type</code>, and <code>PublisherId</code>.</p>
     */
    inline ActivateTypeRequest& WithPublicTypeArn(const Aws::String& value) { SetPublicTypeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the public extension.</p> <p>Conditional:
     * You must specify <code>PublicTypeArn</code>, or <code>TypeName</code>,
     * <code>Type</code>, and <code>PublisherId</code>.</p>
     */
    inline ActivateTypeRequest& WithPublicTypeArn(Aws::String&& value) { SetPublicTypeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the public extension.</p> <p>Conditional:
     * You must specify <code>PublicTypeArn</code>, or <code>TypeName</code>,
     * <code>Type</code>, and <code>PublisherId</code>.</p>
     */
    inline ActivateTypeRequest& WithPublicTypeArn(const char* value) { SetPublicTypeArn(value); return *this;}


    /**
     * <p>The ID of the extension publisher.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline const Aws::String& GetPublisherId() const{ return m_publisherId; }

    /**
     * <p>The ID of the extension publisher.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline bool PublisherIdHasBeenSet() const { return m_publisherIdHasBeenSet; }

    /**
     * <p>The ID of the extension publisher.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline void SetPublisherId(const Aws::String& value) { m_publisherIdHasBeenSet = true; m_publisherId = value; }

    /**
     * <p>The ID of the extension publisher.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline void SetPublisherId(Aws::String&& value) { m_publisherIdHasBeenSet = true; m_publisherId = std::move(value); }

    /**
     * <p>The ID of the extension publisher.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline void SetPublisherId(const char* value) { m_publisherIdHasBeenSet = true; m_publisherId.assign(value); }

    /**
     * <p>The ID of the extension publisher.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline ActivateTypeRequest& WithPublisherId(const Aws::String& value) { SetPublisherId(value); return *this;}

    /**
     * <p>The ID of the extension publisher.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline ActivateTypeRequest& WithPublisherId(Aws::String&& value) { SetPublisherId(std::move(value)); return *this;}

    /**
     * <p>The ID of the extension publisher.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline ActivateTypeRequest& WithPublisherId(const char* value) { SetPublisherId(value); return *this;}


    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline ActivateTypeRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline ActivateTypeRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>PublicTypeArn</code>, or <code>TypeName</code>, <code>Type</code>, and
     * <code>PublisherId</code>.</p>
     */
    inline ActivateTypeRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>An alias to assign to the public extension, in this account and region. If
     * you specify an alias for the extension, CloudFormation treats the alias as the
     * extension type name within this account and region. You must use the alias to
     * refer to the extension in your templates, API calls, and CloudFormation
     * console.</p> <p>An extension alias must be unique within a given account and
     * region. You can activate the same public resource multiple times in the same
     * account and region, using different type name aliases.</p>
     */
    inline const Aws::String& GetTypeNameAlias() const{ return m_typeNameAlias; }

    /**
     * <p>An alias to assign to the public extension, in this account and region. If
     * you specify an alias for the extension, CloudFormation treats the alias as the
     * extension type name within this account and region. You must use the alias to
     * refer to the extension in your templates, API calls, and CloudFormation
     * console.</p> <p>An extension alias must be unique within a given account and
     * region. You can activate the same public resource multiple times in the same
     * account and region, using different type name aliases.</p>
     */
    inline bool TypeNameAliasHasBeenSet() const { return m_typeNameAliasHasBeenSet; }

    /**
     * <p>An alias to assign to the public extension, in this account and region. If
     * you specify an alias for the extension, CloudFormation treats the alias as the
     * extension type name within this account and region. You must use the alias to
     * refer to the extension in your templates, API calls, and CloudFormation
     * console.</p> <p>An extension alias must be unique within a given account and
     * region. You can activate the same public resource multiple times in the same
     * account and region, using different type name aliases.</p>
     */
    inline void SetTypeNameAlias(const Aws::String& value) { m_typeNameAliasHasBeenSet = true; m_typeNameAlias = value; }

    /**
     * <p>An alias to assign to the public extension, in this account and region. If
     * you specify an alias for the extension, CloudFormation treats the alias as the
     * extension type name within this account and region. You must use the alias to
     * refer to the extension in your templates, API calls, and CloudFormation
     * console.</p> <p>An extension alias must be unique within a given account and
     * region. You can activate the same public resource multiple times in the same
     * account and region, using different type name aliases.</p>
     */
    inline void SetTypeNameAlias(Aws::String&& value) { m_typeNameAliasHasBeenSet = true; m_typeNameAlias = std::move(value); }

    /**
     * <p>An alias to assign to the public extension, in this account and region. If
     * you specify an alias for the extension, CloudFormation treats the alias as the
     * extension type name within this account and region. You must use the alias to
     * refer to the extension in your templates, API calls, and CloudFormation
     * console.</p> <p>An extension alias must be unique within a given account and
     * region. You can activate the same public resource multiple times in the same
     * account and region, using different type name aliases.</p>
     */
    inline void SetTypeNameAlias(const char* value) { m_typeNameAliasHasBeenSet = true; m_typeNameAlias.assign(value); }

    /**
     * <p>An alias to assign to the public extension, in this account and region. If
     * you specify an alias for the extension, CloudFormation treats the alias as the
     * extension type name within this account and region. You must use the alias to
     * refer to the extension in your templates, API calls, and CloudFormation
     * console.</p> <p>An extension alias must be unique within a given account and
     * region. You can activate the same public resource multiple times in the same
     * account and region, using different type name aliases.</p>
     */
    inline ActivateTypeRequest& WithTypeNameAlias(const Aws::String& value) { SetTypeNameAlias(value); return *this;}

    /**
     * <p>An alias to assign to the public extension, in this account and region. If
     * you specify an alias for the extension, CloudFormation treats the alias as the
     * extension type name within this account and region. You must use the alias to
     * refer to the extension in your templates, API calls, and CloudFormation
     * console.</p> <p>An extension alias must be unique within a given account and
     * region. You can activate the same public resource multiple times in the same
     * account and region, using different type name aliases.</p>
     */
    inline ActivateTypeRequest& WithTypeNameAlias(Aws::String&& value) { SetTypeNameAlias(std::move(value)); return *this;}

    /**
     * <p>An alias to assign to the public extension, in this account and region. If
     * you specify an alias for the extension, CloudFormation treats the alias as the
     * extension type name within this account and region. You must use the alias to
     * refer to the extension in your templates, API calls, and CloudFormation
     * console.</p> <p>An extension alias must be unique within a given account and
     * region. You can activate the same public resource multiple times in the same
     * account and region, using different type name aliases.</p>
     */
    inline ActivateTypeRequest& WithTypeNameAlias(const char* value) { SetTypeNameAlias(value); return *this;}


    /**
     * <p>Whether to automatically update the extension in this account and region when
     * a new <i>minor</i> version is published by the extension publisher. Major
     * versions released by the publisher must be manually updated.</p> <p>The default
     * is <code>true</code>.</p>
     */
    inline bool GetAutoUpdate() const{ return m_autoUpdate; }

    /**
     * <p>Whether to automatically update the extension in this account and region when
     * a new <i>minor</i> version is published by the extension publisher. Major
     * versions released by the publisher must be manually updated.</p> <p>The default
     * is <code>true</code>.</p>
     */
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }

    /**
     * <p>Whether to automatically update the extension in this account and region when
     * a new <i>minor</i> version is published by the extension publisher. Major
     * versions released by the publisher must be manually updated.</p> <p>The default
     * is <code>true</code>.</p>
     */
    inline void SetAutoUpdate(bool value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }

    /**
     * <p>Whether to automatically update the extension in this account and region when
     * a new <i>minor</i> version is published by the extension publisher. Major
     * versions released by the publisher must be manually updated.</p> <p>The default
     * is <code>true</code>.</p>
     */
    inline ActivateTypeRequest& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}


    
    inline const LoggingConfig& GetLoggingConfig() const{ return m_loggingConfig; }

    
    inline bool LoggingConfigHasBeenSet() const { return m_loggingConfigHasBeenSet; }

    
    inline void SetLoggingConfig(const LoggingConfig& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = value; }

    
    inline void SetLoggingConfig(LoggingConfig&& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = std::move(value); }

    
    inline ActivateTypeRequest& WithLoggingConfig(const LoggingConfig& value) { SetLoggingConfig(value); return *this;}

    
    inline ActivateTypeRequest& WithLoggingConfig(LoggingConfig&& value) { SetLoggingConfig(std::move(value)); return *this;}


    /**
     * <p>The name of the IAM execution role to use to activate the extension.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The name of the IAM execution role to use to activate the extension.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The name of the IAM execution role to use to activate the extension.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The name of the IAM execution role to use to activate the extension.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The name of the IAM execution role to use to activate the extension.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The name of the IAM execution role to use to activate the extension.</p>
     */
    inline ActivateTypeRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The name of the IAM execution role to use to activate the extension.</p>
     */
    inline ActivateTypeRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM execution role to use to activate the extension.</p>
     */
    inline ActivateTypeRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>Manually updates a previously-activated type to a new major or minor version,
     * if available. You can also use this parameter to update the value of
     * <code>AutoUpdate</code>.</p> <ul> <li> <p> <code>MAJOR</code>: CloudFormation
     * updates the extension to the newest major version, if one is available.</p>
     * </li> <li> <p> <code>MINOR</code>: CloudFormation updates the extension to the
     * newest minor version, if one is available.</p> </li> </ul>
     */
    inline const VersionBump& GetVersionBump() const{ return m_versionBump; }

    /**
     * <p>Manually updates a previously-activated type to a new major or minor version,
     * if available. You can also use this parameter to update the value of
     * <code>AutoUpdate</code>.</p> <ul> <li> <p> <code>MAJOR</code>: CloudFormation
     * updates the extension to the newest major version, if one is available.</p>
     * </li> <li> <p> <code>MINOR</code>: CloudFormation updates the extension to the
     * newest minor version, if one is available.</p> </li> </ul>
     */
    inline bool VersionBumpHasBeenSet() const { return m_versionBumpHasBeenSet; }

    /**
     * <p>Manually updates a previously-activated type to a new major or minor version,
     * if available. You can also use this parameter to update the value of
     * <code>AutoUpdate</code>.</p> <ul> <li> <p> <code>MAJOR</code>: CloudFormation
     * updates the extension to the newest major version, if one is available.</p>
     * </li> <li> <p> <code>MINOR</code>: CloudFormation updates the extension to the
     * newest minor version, if one is available.</p> </li> </ul>
     */
    inline void SetVersionBump(const VersionBump& value) { m_versionBumpHasBeenSet = true; m_versionBump = value; }

    /**
     * <p>Manually updates a previously-activated type to a new major or minor version,
     * if available. You can also use this parameter to update the value of
     * <code>AutoUpdate</code>.</p> <ul> <li> <p> <code>MAJOR</code>: CloudFormation
     * updates the extension to the newest major version, if one is available.</p>
     * </li> <li> <p> <code>MINOR</code>: CloudFormation updates the extension to the
     * newest minor version, if one is available.</p> </li> </ul>
     */
    inline void SetVersionBump(VersionBump&& value) { m_versionBumpHasBeenSet = true; m_versionBump = std::move(value); }

    /**
     * <p>Manually updates a previously-activated type to a new major or minor version,
     * if available. You can also use this parameter to update the value of
     * <code>AutoUpdate</code>.</p> <ul> <li> <p> <code>MAJOR</code>: CloudFormation
     * updates the extension to the newest major version, if one is available.</p>
     * </li> <li> <p> <code>MINOR</code>: CloudFormation updates the extension to the
     * newest minor version, if one is available.</p> </li> </ul>
     */
    inline ActivateTypeRequest& WithVersionBump(const VersionBump& value) { SetVersionBump(value); return *this;}

    /**
     * <p>Manually updates a previously-activated type to a new major or minor version,
     * if available. You can also use this parameter to update the value of
     * <code>AutoUpdate</code>.</p> <ul> <li> <p> <code>MAJOR</code>: CloudFormation
     * updates the extension to the newest major version, if one is available.</p>
     * </li> <li> <p> <code>MINOR</code>: CloudFormation updates the extension to the
     * newest minor version, if one is available.</p> </li> </ul>
     */
    inline ActivateTypeRequest& WithVersionBump(VersionBump&& value) { SetVersionBump(std::move(value)); return *this;}


    /**
     * <p>The major version of this extension you want to activate, if multiple major
     * versions are available. The default is the latest major version. CloudFormation
     * uses the latest available <i>minor</i> version of the major version
     * selected.</p> <p>You can specify <code>MajorVersion</code> or
     * <code>VersionBump</code>, but not both.</p>
     */
    inline long long GetMajorVersion() const{ return m_majorVersion; }

    /**
     * <p>The major version of this extension you want to activate, if multiple major
     * versions are available. The default is the latest major version. CloudFormation
     * uses the latest available <i>minor</i> version of the major version
     * selected.</p> <p>You can specify <code>MajorVersion</code> or
     * <code>VersionBump</code>, but not both.</p>
     */
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }

    /**
     * <p>The major version of this extension you want to activate, if multiple major
     * versions are available. The default is the latest major version. CloudFormation
     * uses the latest available <i>minor</i> version of the major version
     * selected.</p> <p>You can specify <code>MajorVersion</code> or
     * <code>VersionBump</code>, but not both.</p>
     */
    inline void SetMajorVersion(long long value) { m_majorVersionHasBeenSet = true; m_majorVersion = value; }

    /**
     * <p>The major version of this extension you want to activate, if multiple major
     * versions are available. The default is the latest major version. CloudFormation
     * uses the latest available <i>minor</i> version of the major version
     * selected.</p> <p>You can specify <code>MajorVersion</code> or
     * <code>VersionBump</code>, but not both.</p>
     */
    inline ActivateTypeRequest& WithMajorVersion(long long value) { SetMajorVersion(value); return *this;}

  private:

    ThirdPartyType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_publicTypeArn;
    bool m_publicTypeArnHasBeenSet;

    Aws::String m_publisherId;
    bool m_publisherIdHasBeenSet;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;

    Aws::String m_typeNameAlias;
    bool m_typeNameAliasHasBeenSet;

    bool m_autoUpdate;
    bool m_autoUpdateHasBeenSet;

    LoggingConfig m_loggingConfig;
    bool m_loggingConfigHasBeenSet;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet;

    VersionBump m_versionBump;
    bool m_versionBumpHasBeenSet;

    long long m_majorVersion;
    bool m_majorVersionHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
