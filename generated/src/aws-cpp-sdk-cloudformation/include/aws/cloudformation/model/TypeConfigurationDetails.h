/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Detailed information concerning the specification of a CloudFormation
   * extension in a given account and Region.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
   * extensions at the account level</a> in the <i>CloudFormation User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/TypeConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class TypeConfigurationDetails
  {
  public:
    AWS_CLOUDFORMATION_API TypeConfigurationDetails();
    AWS_CLOUDFORMATION_API TypeConfigurationDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API TypeConfigurationDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and Region.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and Region.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and Region.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and Region.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and Region.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and Region.</p>
     */
    inline TypeConfigurationDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and Region.</p>
     */
    inline TypeConfigurationDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and Region.</p>
     */
    inline TypeConfigurationDetails& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline TypeConfigurationDetails& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline TypeConfigurationDetails& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline TypeConfigurationDetails& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>A JSON string specifying the configuration data for the extension, in this
     * account and Region.</p> <p>If a configuration hasn't been set for a specified
     * extension, CloudFormation returns <code>{}</code>.</p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>A JSON string specifying the configuration data for the extension, in this
     * account and Region.</p> <p>If a configuration hasn't been set for a specified
     * extension, CloudFormation returns <code>{}</code>.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>A JSON string specifying the configuration data for the extension, in this
     * account and Region.</p> <p>If a configuration hasn't been set for a specified
     * extension, CloudFormation returns <code>{}</code>.</p>
     */
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>A JSON string specifying the configuration data for the extension, in this
     * account and Region.</p> <p>If a configuration hasn't been set for a specified
     * extension, CloudFormation returns <code>{}</code>.</p>
     */
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>A JSON string specifying the configuration data for the extension, in this
     * account and Region.</p> <p>If a configuration hasn't been set for a specified
     * extension, CloudFormation returns <code>{}</code>.</p>
     */
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }

    /**
     * <p>A JSON string specifying the configuration data for the extension, in this
     * account and Region.</p> <p>If a configuration hasn't been set for a specified
     * extension, CloudFormation returns <code>{}</code>.</p>
     */
    inline TypeConfigurationDetails& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}

    /**
     * <p>A JSON string specifying the configuration data for the extension, in this
     * account and Region.</p> <p>If a configuration hasn't been set for a specified
     * extension, CloudFormation returns <code>{}</code>.</p>
     */
    inline TypeConfigurationDetails& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>A JSON string specifying the configuration data for the extension, in this
     * account and Region.</p> <p>If a configuration hasn't been set for a specified
     * extension, CloudFormation returns <code>{}</code>.</p>
     */
    inline TypeConfigurationDetails& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}


    /**
     * <p>When the configuration data was last updated for this extension.</p> <p>If a
     * configuration hasn't been set for a specified extension, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>When the configuration data was last updated for this extension.</p> <p>If a
     * configuration hasn't been set for a specified extension, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>When the configuration data was last updated for this extension.</p> <p>If a
     * configuration hasn't been set for a specified extension, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>When the configuration data was last updated for this extension.</p> <p>If a
     * configuration hasn't been set for a specified extension, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>When the configuration data was last updated for this extension.</p> <p>If a
     * configuration hasn't been set for a specified extension, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline TypeConfigurationDetails& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>When the configuration data was last updated for this extension.</p> <p>If a
     * configuration hasn't been set for a specified extension, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline TypeConfigurationDetails& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p>
     */
    inline const Aws::String& GetTypeArn() const{ return m_typeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p>
     */
    inline bool TypeArnHasBeenSet() const { return m_typeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p>
     */
    inline void SetTypeArn(const Aws::String& value) { m_typeArnHasBeenSet = true; m_typeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p>
     */
    inline void SetTypeArn(Aws::String&& value) { m_typeArnHasBeenSet = true; m_typeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p>
     */
    inline void SetTypeArn(const char* value) { m_typeArnHasBeenSet = true; m_typeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p>
     */
    inline TypeConfigurationDetails& WithTypeArn(const Aws::String& value) { SetTypeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p>
     */
    inline TypeConfigurationDetails& WithTypeArn(Aws::String&& value) { SetTypeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p>
     */
    inline TypeConfigurationDetails& WithTypeArn(const char* value) { SetTypeArn(value); return *this;}


    /**
     * <p>The name of the extension.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the extension.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The name of the extension.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the extension.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the extension.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the extension.</p>
     */
    inline TypeConfigurationDetails& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the extension.</p>
     */
    inline TypeConfigurationDetails& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the extension.</p>
     */
    inline TypeConfigurationDetails& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>Whether this configuration data is the default configuration for the
     * extension.</p>
     */
    inline bool GetIsDefaultConfiguration() const{ return m_isDefaultConfiguration; }

    /**
     * <p>Whether this configuration data is the default configuration for the
     * extension.</p>
     */
    inline bool IsDefaultConfigurationHasBeenSet() const { return m_isDefaultConfigurationHasBeenSet; }

    /**
     * <p>Whether this configuration data is the default configuration for the
     * extension.</p>
     */
    inline void SetIsDefaultConfiguration(bool value) { m_isDefaultConfigurationHasBeenSet = true; m_isDefaultConfiguration = value; }

    /**
     * <p>Whether this configuration data is the default configuration for the
     * extension.</p>
     */
    inline TypeConfigurationDetails& WithIsDefaultConfiguration(bool value) { SetIsDefaultConfiguration(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_typeArn;
    bool m_typeArnHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    bool m_isDefaultConfiguration;
    bool m_isDefaultConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
