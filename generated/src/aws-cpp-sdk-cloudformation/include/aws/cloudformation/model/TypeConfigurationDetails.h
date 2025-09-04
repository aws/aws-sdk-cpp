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
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-set-configuration.html">Edit
   * configuration data for extensions in your account</a> in the <i>CloudFormation
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/TypeConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class TypeConfigurationDetails
  {
  public:
    AWS_CLOUDFORMATION_API TypeConfigurationDetails() = default;
    AWS_CLOUDFORMATION_API TypeConfigurationDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API TypeConfigurationDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN for the configuration data, in this account and Region.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    TypeConfigurationDetails& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    TypeConfigurationDetails& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string specifying the configuration data for the extension, in this
     * account and Region.</p> <p>If a configuration hasn't been set for a specified
     * extension, CloudFormation returns <code>{}</code>.</p>
     */
    inline const Aws::String& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = Aws::String>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::String>
    TypeConfigurationDetails& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the configuration data was last updated for this extension.</p> <p>If a
     * configuration hasn't been set for a specified extension, CloudFormation returns
     * <code>null</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    TypeConfigurationDetails& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the extension, in this account and Region.</p> <p>For public
     * extensions, this will be the ARN assigned when you call the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>
     * API operation in this account and Region. For private extensions, this will be
     * the ARN assigned when you call the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>
     * API operation in this account and Region.</p>
     */
    inline const Aws::String& GetTypeArn() const { return m_typeArn; }
    inline bool TypeArnHasBeenSet() const { return m_typeArnHasBeenSet; }
    template<typename TypeArnT = Aws::String>
    void SetTypeArn(TypeArnT&& value) { m_typeArnHasBeenSet = true; m_typeArn = std::forward<TypeArnT>(value); }
    template<typename TypeArnT = Aws::String>
    TypeConfigurationDetails& WithTypeArn(TypeArnT&& value) { SetTypeArn(std::forward<TypeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the extension.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    TypeConfigurationDetails& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether this configuration data is the default configuration for the
     * extension.</p>
     */
    inline bool GetIsDefaultConfiguration() const { return m_isDefaultConfiguration; }
    inline bool IsDefaultConfigurationHasBeenSet() const { return m_isDefaultConfigurationHasBeenSet; }
    inline void SetIsDefaultConfiguration(bool value) { m_isDefaultConfigurationHasBeenSet = true; m_isDefaultConfiguration = value; }
    inline TypeConfigurationDetails& WithIsDefaultConfiguration(bool value) { SetIsDefaultConfiguration(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_typeArn;
    bool m_typeArnHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    bool m_isDefaultConfiguration{false};
    bool m_isDefaultConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
