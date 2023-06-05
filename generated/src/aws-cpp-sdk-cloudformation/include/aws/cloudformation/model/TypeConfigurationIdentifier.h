/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ThirdPartyType.h>
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
   * <p>Identifying information for the configuration of a CloudFormation
   * extension.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/TypeConfigurationIdentifier">AWS
   * API Reference</a></p>
   */
  class TypeConfigurationIdentifier
  {
  public:
    AWS_CLOUDFORMATION_API TypeConfigurationIdentifier();
    AWS_CLOUDFORMATION_API TypeConfigurationIdentifier(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API TypeConfigurationIdentifier& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline TypeConfigurationIdentifier& WithTypeArn(const Aws::String& value) { SetTypeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p>
     */
    inline TypeConfigurationIdentifier& WithTypeArn(Aws::String&& value) { SetTypeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">activate
     * the type</a> in this account and Region. For private extensions, this will be
     * the ARN assigned when you <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">register
     * the type</a> in this account and Region.</p>
     */
    inline TypeConfigurationIdentifier& WithTypeArn(const char* value) { SetTypeArn(value); return *this;}


    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline const Aws::String& GetTypeConfigurationAlias() const{ return m_typeConfigurationAlias; }

    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline bool TypeConfigurationAliasHasBeenSet() const { return m_typeConfigurationAliasHasBeenSet; }

    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline void SetTypeConfigurationAlias(const Aws::String& value) { m_typeConfigurationAliasHasBeenSet = true; m_typeConfigurationAlias = value; }

    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline void SetTypeConfigurationAlias(Aws::String&& value) { m_typeConfigurationAliasHasBeenSet = true; m_typeConfigurationAlias = std::move(value); }

    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline void SetTypeConfigurationAlias(const char* value) { m_typeConfigurationAliasHasBeenSet = true; m_typeConfigurationAlias.assign(value); }

    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline TypeConfigurationIdentifier& WithTypeConfigurationAlias(const Aws::String& value) { SetTypeConfigurationAlias(value); return *this;}

    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline TypeConfigurationIdentifier& WithTypeConfigurationAlias(Aws::String&& value) { SetTypeConfigurationAlias(std::move(value)); return *this;}

    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline TypeConfigurationIdentifier& WithTypeConfigurationAlias(const char* value) { SetTypeConfigurationAlias(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the configuration, in this account and
     * Region.</p>
     */
    inline const Aws::String& GetTypeConfigurationArn() const{ return m_typeConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration, in this account and
     * Region.</p>
     */
    inline bool TypeConfigurationArnHasBeenSet() const { return m_typeConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration, in this account and
     * Region.</p>
     */
    inline void SetTypeConfigurationArn(const Aws::String& value) { m_typeConfigurationArnHasBeenSet = true; m_typeConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration, in this account and
     * Region.</p>
     */
    inline void SetTypeConfigurationArn(Aws::String&& value) { m_typeConfigurationArnHasBeenSet = true; m_typeConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration, in this account and
     * Region.</p>
     */
    inline void SetTypeConfigurationArn(const char* value) { m_typeConfigurationArnHasBeenSet = true; m_typeConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration, in this account and
     * Region.</p>
     */
    inline TypeConfigurationIdentifier& WithTypeConfigurationArn(const Aws::String& value) { SetTypeConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration, in this account and
     * Region.</p>
     */
    inline TypeConfigurationIdentifier& WithTypeConfigurationArn(Aws::String&& value) { SetTypeConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the configuration, in this account and
     * Region.</p>
     */
    inline TypeConfigurationIdentifier& WithTypeConfigurationArn(const char* value) { SetTypeConfigurationArn(value); return *this;}


    /**
     * <p>The type of extension.</p>
     */
    inline const ThirdPartyType& GetType() const{ return m_type; }

    /**
     * <p>The type of extension.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of extension.</p>
     */
    inline void SetType(const ThirdPartyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of extension.</p>
     */
    inline void SetType(ThirdPartyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of extension.</p>
     */
    inline TypeConfigurationIdentifier& WithType(const ThirdPartyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of extension.</p>
     */
    inline TypeConfigurationIdentifier& WithType(ThirdPartyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the extension type to which this configuration applies.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the extension type to which this configuration applies.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The name of the extension type to which this configuration applies.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the extension type to which this configuration applies.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the extension type to which this configuration applies.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the extension type to which this configuration applies.</p>
     */
    inline TypeConfigurationIdentifier& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the extension type to which this configuration applies.</p>
     */
    inline TypeConfigurationIdentifier& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the extension type to which this configuration applies.</p>
     */
    inline TypeConfigurationIdentifier& WithTypeName(const char* value) { SetTypeName(value); return *this;}

  private:

    Aws::String m_typeArn;
    bool m_typeArnHasBeenSet = false;

    Aws::String m_typeConfigurationAlias;
    bool m_typeConfigurationAliasHasBeenSet = false;

    Aws::String m_typeConfigurationArn;
    bool m_typeConfigurationArnHasBeenSet = false;

    ThirdPartyType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
