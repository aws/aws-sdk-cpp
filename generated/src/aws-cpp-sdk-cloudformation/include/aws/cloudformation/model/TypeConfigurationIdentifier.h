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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the extension, in this account and
     * Region.</p> <p>For public extensions, this will be the ARN assigned when you
     * call the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ActivateType.html">ActivateType</a>
     * API operation in this account and Region. For private extensions, this will be
     * the ARN assigned when you call the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>
     * API operation in this account and Region.</p>
     */
    inline const Aws::String& GetTypeArn() const{ return m_typeArn; }
    inline bool TypeArnHasBeenSet() const { return m_typeArnHasBeenSet; }
    inline void SetTypeArn(const Aws::String& value) { m_typeArnHasBeenSet = true; m_typeArn = value; }
    inline void SetTypeArn(Aws::String&& value) { m_typeArnHasBeenSet = true; m_typeArn = std::move(value); }
    inline void SetTypeArn(const char* value) { m_typeArnHasBeenSet = true; m_typeArn.assign(value); }
    inline TypeConfigurationIdentifier& WithTypeArn(const Aws::String& value) { SetTypeArn(value); return *this;}
    inline TypeConfigurationIdentifier& WithTypeArn(Aws::String&& value) { SetTypeArn(std::move(value)); return *this;}
    inline TypeConfigurationIdentifier& WithTypeArn(const char* value) { SetTypeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias specified for this configuration, if one was specified when the
     * configuration was set.</p>
     */
    inline const Aws::String& GetTypeConfigurationAlias() const{ return m_typeConfigurationAlias; }
    inline bool TypeConfigurationAliasHasBeenSet() const { return m_typeConfigurationAliasHasBeenSet; }
    inline void SetTypeConfigurationAlias(const Aws::String& value) { m_typeConfigurationAliasHasBeenSet = true; m_typeConfigurationAlias = value; }
    inline void SetTypeConfigurationAlias(Aws::String&& value) { m_typeConfigurationAliasHasBeenSet = true; m_typeConfigurationAlias = std::move(value); }
    inline void SetTypeConfigurationAlias(const char* value) { m_typeConfigurationAliasHasBeenSet = true; m_typeConfigurationAlias.assign(value); }
    inline TypeConfigurationIdentifier& WithTypeConfigurationAlias(const Aws::String& value) { SetTypeConfigurationAlias(value); return *this;}
    inline TypeConfigurationIdentifier& WithTypeConfigurationAlias(Aws::String&& value) { SetTypeConfigurationAlias(std::move(value)); return *this;}
    inline TypeConfigurationIdentifier& WithTypeConfigurationAlias(const char* value) { SetTypeConfigurationAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the configuration, in this account and
     * Region.</p>
     */
    inline const Aws::String& GetTypeConfigurationArn() const{ return m_typeConfigurationArn; }
    inline bool TypeConfigurationArnHasBeenSet() const { return m_typeConfigurationArnHasBeenSet; }
    inline void SetTypeConfigurationArn(const Aws::String& value) { m_typeConfigurationArnHasBeenSet = true; m_typeConfigurationArn = value; }
    inline void SetTypeConfigurationArn(Aws::String&& value) { m_typeConfigurationArnHasBeenSet = true; m_typeConfigurationArn = std::move(value); }
    inline void SetTypeConfigurationArn(const char* value) { m_typeConfigurationArnHasBeenSet = true; m_typeConfigurationArn.assign(value); }
    inline TypeConfigurationIdentifier& WithTypeConfigurationArn(const Aws::String& value) { SetTypeConfigurationArn(value); return *this;}
    inline TypeConfigurationIdentifier& WithTypeConfigurationArn(Aws::String&& value) { SetTypeConfigurationArn(std::move(value)); return *this;}
    inline TypeConfigurationIdentifier& WithTypeConfigurationArn(const char* value) { SetTypeConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of extension.</p>
     */
    inline const ThirdPartyType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ThirdPartyType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ThirdPartyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TypeConfigurationIdentifier& WithType(const ThirdPartyType& value) { SetType(value); return *this;}
    inline TypeConfigurationIdentifier& WithType(ThirdPartyType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the extension type to which this configuration applies.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline TypeConfigurationIdentifier& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline TypeConfigurationIdentifier& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline TypeConfigurationIdentifier& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}
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
