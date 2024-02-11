/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ThirdPartyType.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class SetTypeConfigurationRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API SetTypeConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetTypeConfiguration"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p> <p>Do not include the extension
     * versions suffix at the end of the ARN. You can set the configuration for an
     * extension, but not for a specific extension version.</p>
     */
    inline const Aws::String& GetTypeArn() const{ return m_typeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p> <p>Do not include the extension
     * versions suffix at the end of the ARN. You can set the configuration for an
     * extension, but not for a specific extension version.</p>
     */
    inline bool TypeArnHasBeenSet() const { return m_typeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p> <p>Do not include the extension
     * versions suffix at the end of the ARN. You can set the configuration for an
     * extension, but not for a specific extension version.</p>
     */
    inline void SetTypeArn(const Aws::String& value) { m_typeArnHasBeenSet = true; m_typeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p> <p>Do not include the extension
     * versions suffix at the end of the ARN. You can set the configuration for an
     * extension, but not for a specific extension version.</p>
     */
    inline void SetTypeArn(Aws::String&& value) { m_typeArnHasBeenSet = true; m_typeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p> <p>Do not include the extension
     * versions suffix at the end of the ARN. You can set the configuration for an
     * extension, but not for a specific extension version.</p>
     */
    inline void SetTypeArn(const char* value) { m_typeArnHasBeenSet = true; m_typeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p> <p>Do not include the extension
     * versions suffix at the end of the ARN. You can set the configuration for an
     * extension, but not for a specific extension version.</p>
     */
    inline SetTypeConfigurationRequest& WithTypeArn(const Aws::String& value) { SetTypeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p> <p>Do not include the extension
     * versions suffix at the end of the ARN. You can set the configuration for an
     * extension, but not for a specific extension version.</p>
     */
    inline SetTypeConfigurationRequest& WithTypeArn(Aws::String&& value) { SetTypeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p> <p>Do not include the extension
     * versions suffix at the end of the ARN. You can set the configuration for an
     * extension, but not for a specific extension version.</p>
     */
    inline SetTypeConfigurationRequest& WithTypeArn(const char* value) { SetTypeArn(value); return *this;}


    /**
     * <p>The configuration data for the extension, in this account and Region.</p>
     * <p>The configuration data must be formatted as JSON, and validate against the
     * schema returned in the <code>ConfigurationSchema</code> response element of <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DescribeType.html">DescribeType</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-model.html#resource-type-howto-configuration">Defining
     * account-level configuration data for an extension</a> in the <i>CloudFormation
     * CLI User Guide</i>.</p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration data for the extension, in this account and Region.</p>
     * <p>The configuration data must be formatted as JSON, and validate against the
     * schema returned in the <code>ConfigurationSchema</code> response element of <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DescribeType.html">DescribeType</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-model.html#resource-type-howto-configuration">Defining
     * account-level configuration data for an extension</a> in the <i>CloudFormation
     * CLI User Guide</i>.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration data for the extension, in this account and Region.</p>
     * <p>The configuration data must be formatted as JSON, and validate against the
     * schema returned in the <code>ConfigurationSchema</code> response element of <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DescribeType.html">DescribeType</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-model.html#resource-type-howto-configuration">Defining
     * account-level configuration data for an extension</a> in the <i>CloudFormation
     * CLI User Guide</i>.</p>
     */
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration data for the extension, in this account and Region.</p>
     * <p>The configuration data must be formatted as JSON, and validate against the
     * schema returned in the <code>ConfigurationSchema</code> response element of <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DescribeType.html">DescribeType</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-model.html#resource-type-howto-configuration">Defining
     * account-level configuration data for an extension</a> in the <i>CloudFormation
     * CLI User Guide</i>.</p>
     */
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration data for the extension, in this account and Region.</p>
     * <p>The configuration data must be formatted as JSON, and validate against the
     * schema returned in the <code>ConfigurationSchema</code> response element of <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DescribeType.html">DescribeType</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-model.html#resource-type-howto-configuration">Defining
     * account-level configuration data for an extension</a> in the <i>CloudFormation
     * CLI User Guide</i>.</p>
     */
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }

    /**
     * <p>The configuration data for the extension, in this account and Region.</p>
     * <p>The configuration data must be formatted as JSON, and validate against the
     * schema returned in the <code>ConfigurationSchema</code> response element of <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DescribeType.html">DescribeType</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-model.html#resource-type-howto-configuration">Defining
     * account-level configuration data for an extension</a> in the <i>CloudFormation
     * CLI User Guide</i>.</p>
     */
    inline SetTypeConfigurationRequest& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration data for the extension, in this account and Region.</p>
     * <p>The configuration data must be formatted as JSON, and validate against the
     * schema returned in the <code>ConfigurationSchema</code> response element of <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DescribeType.html">DescribeType</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-model.html#resource-type-howto-configuration">Defining
     * account-level configuration data for an extension</a> in the <i>CloudFormation
     * CLI User Guide</i>.</p>
     */
    inline SetTypeConfigurationRequest& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>The configuration data for the extension, in this account and Region.</p>
     * <p>The configuration data must be formatted as JSON, and validate against the
     * schema returned in the <code>ConfigurationSchema</code> response element of <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DescribeType.html">DescribeType</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-model.html#resource-type-howto-configuration">Defining
     * account-level configuration data for an extension</a> in the <i>CloudFormation
     * CLI User Guide</i>.</p>
     */
    inline SetTypeConfigurationRequest& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}


    /**
     * <p>An alias by which to refer to this extension configuration data.</p>
     * <p>Conditional: Specifying a configuration alias is required when setting a
     * configuration for a resource type extension.</p>
     */
    inline const Aws::String& GetConfigurationAlias() const{ return m_configurationAlias; }

    /**
     * <p>An alias by which to refer to this extension configuration data.</p>
     * <p>Conditional: Specifying a configuration alias is required when setting a
     * configuration for a resource type extension.</p>
     */
    inline bool ConfigurationAliasHasBeenSet() const { return m_configurationAliasHasBeenSet; }

    /**
     * <p>An alias by which to refer to this extension configuration data.</p>
     * <p>Conditional: Specifying a configuration alias is required when setting a
     * configuration for a resource type extension.</p>
     */
    inline void SetConfigurationAlias(const Aws::String& value) { m_configurationAliasHasBeenSet = true; m_configurationAlias = value; }

    /**
     * <p>An alias by which to refer to this extension configuration data.</p>
     * <p>Conditional: Specifying a configuration alias is required when setting a
     * configuration for a resource type extension.</p>
     */
    inline void SetConfigurationAlias(Aws::String&& value) { m_configurationAliasHasBeenSet = true; m_configurationAlias = std::move(value); }

    /**
     * <p>An alias by which to refer to this extension configuration data.</p>
     * <p>Conditional: Specifying a configuration alias is required when setting a
     * configuration for a resource type extension.</p>
     */
    inline void SetConfigurationAlias(const char* value) { m_configurationAliasHasBeenSet = true; m_configurationAlias.assign(value); }

    /**
     * <p>An alias by which to refer to this extension configuration data.</p>
     * <p>Conditional: Specifying a configuration alias is required when setting a
     * configuration for a resource type extension.</p>
     */
    inline SetTypeConfigurationRequest& WithConfigurationAlias(const Aws::String& value) { SetConfigurationAlias(value); return *this;}

    /**
     * <p>An alias by which to refer to this extension configuration data.</p>
     * <p>Conditional: Specifying a configuration alias is required when setting a
     * configuration for a resource type extension.</p>
     */
    inline SetTypeConfigurationRequest& WithConfigurationAlias(Aws::String&& value) { SetConfigurationAlias(std::move(value)); return *this;}

    /**
     * <p>An alias by which to refer to this extension configuration data.</p>
     * <p>Conditional: Specifying a configuration alias is required when setting a
     * configuration for a resource type extension.</p>
     */
    inline SetTypeConfigurationRequest& WithConfigurationAlias(const char* value) { SetConfigurationAlias(value); return *this;}


    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>ConfigurationArn</code>, or <code>Type</code> and
     * <code>TypeName</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>ConfigurationArn</code>, or <code>Type</code> and
     * <code>TypeName</code>.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>ConfigurationArn</code>, or <code>Type</code> and
     * <code>TypeName</code>.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>ConfigurationArn</code>, or <code>Type</code> and
     * <code>TypeName</code>.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>ConfigurationArn</code>, or <code>Type</code> and
     * <code>TypeName</code>.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>ConfigurationArn</code>, or <code>Type</code> and
     * <code>TypeName</code>.</p>
     */
    inline SetTypeConfigurationRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>ConfigurationArn</code>, or <code>Type</code> and
     * <code>TypeName</code>.</p>
     */
    inline SetTypeConfigurationRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify
     * <code>ConfigurationArn</code>, or <code>Type</code> and
     * <code>TypeName</code>.</p>
     */
    inline SetTypeConfigurationRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The type of extension.</p> <p>Conditional: You must specify
     * <code>ConfigurationArn</code>, or <code>Type</code> and
     * <code>TypeName</code>.</p>
     */
    inline const ThirdPartyType& GetType() const{ return m_type; }

    /**
     * <p>The type of extension.</p> <p>Conditional: You must specify
     * <code>ConfigurationArn</code>, or <code>Type</code> and
     * <code>TypeName</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of extension.</p> <p>Conditional: You must specify
     * <code>ConfigurationArn</code>, or <code>Type</code> and
     * <code>TypeName</code>.</p>
     */
    inline void SetType(const ThirdPartyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of extension.</p> <p>Conditional: You must specify
     * <code>ConfigurationArn</code>, or <code>Type</code> and
     * <code>TypeName</code>.</p>
     */
    inline void SetType(ThirdPartyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of extension.</p> <p>Conditional: You must specify
     * <code>ConfigurationArn</code>, or <code>Type</code> and
     * <code>TypeName</code>.</p>
     */
    inline SetTypeConfigurationRequest& WithType(const ThirdPartyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of extension.</p> <p>Conditional: You must specify
     * <code>ConfigurationArn</code>, or <code>Type</code> and
     * <code>TypeName</code>.</p>
     */
    inline SetTypeConfigurationRequest& WithType(ThirdPartyType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_typeArn;
    bool m_typeArnHasBeenSet = false;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_configurationAlias;
    bool m_configurationAliasHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    ThirdPartyType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
