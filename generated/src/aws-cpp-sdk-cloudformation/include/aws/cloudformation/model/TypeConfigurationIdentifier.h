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
    AWS_CLOUDFORMATION_API TypeConfigurationIdentifier() = default;
    AWS_CLOUDFORMATION_API TypeConfigurationIdentifier(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API TypeConfigurationIdentifier& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    TypeConfigurationIdentifier& WithTypeArn(TypeArnT&& value) { SetTypeArn(std::forward<TypeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline const Aws::String& GetTypeConfigurationAlias() const { return m_typeConfigurationAlias; }
    inline bool TypeConfigurationAliasHasBeenSet() const { return m_typeConfigurationAliasHasBeenSet; }
    template<typename TypeConfigurationAliasT = Aws::String>
    void SetTypeConfigurationAlias(TypeConfigurationAliasT&& value) { m_typeConfigurationAliasHasBeenSet = true; m_typeConfigurationAlias = std::forward<TypeConfigurationAliasT>(value); }
    template<typename TypeConfigurationAliasT = Aws::String>
    TypeConfigurationIdentifier& WithTypeConfigurationAlias(TypeConfigurationAliasT&& value) { SetTypeConfigurationAlias(std::forward<TypeConfigurationAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the configuration, in this account and Region.</p>
     */
    inline const Aws::String& GetTypeConfigurationArn() const { return m_typeConfigurationArn; }
    inline bool TypeConfigurationArnHasBeenSet() const { return m_typeConfigurationArnHasBeenSet; }
    template<typename TypeConfigurationArnT = Aws::String>
    void SetTypeConfigurationArn(TypeConfigurationArnT&& value) { m_typeConfigurationArnHasBeenSet = true; m_typeConfigurationArn = std::forward<TypeConfigurationArnT>(value); }
    template<typename TypeConfigurationArnT = Aws::String>
    TypeConfigurationIdentifier& WithTypeConfigurationArn(TypeConfigurationArnT&& value) { SetTypeConfigurationArn(std::forward<TypeConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of extension.</p>
     */
    inline ThirdPartyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ThirdPartyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TypeConfigurationIdentifier& WithType(ThirdPartyType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the extension type to which this configuration applies.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    TypeConfigurationIdentifier& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_typeArn;
    bool m_typeArnHasBeenSet = false;

    Aws::String m_typeConfigurationAlias;
    bool m_typeConfigurationAliasHasBeenSet = false;

    Aws::String m_typeConfigurationArn;
    bool m_typeConfigurationArnHasBeenSet = false;

    ThirdPartyType m_type{ThirdPartyType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
