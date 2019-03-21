/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/AttributeDataType.h>
#include <aws/cognito-idp/model/NumberAttributeConstraintsType.h>
#include <aws/cognito-idp/model/StringAttributeConstraintsType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Contains information about the schema attribute.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SchemaAttributeType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API SchemaAttributeType
  {
  public:
    SchemaAttributeType();
    SchemaAttributeType(Aws::Utils::Json::JsonView jsonValue);
    SchemaAttributeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A schema attribute of the name type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A schema attribute of the name type.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A schema attribute of the name type.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A schema attribute of the name type.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A schema attribute of the name type.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A schema attribute of the name type.</p>
     */
    inline SchemaAttributeType& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A schema attribute of the name type.</p>
     */
    inline SchemaAttributeType& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A schema attribute of the name type.</p>
     */
    inline SchemaAttributeType& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The attribute data type.</p>
     */
    inline const AttributeDataType& GetAttributeDataType() const{ return m_attributeDataType; }

    /**
     * <p>The attribute data type.</p>
     */
    inline bool AttributeDataTypeHasBeenSet() const { return m_attributeDataTypeHasBeenSet; }

    /**
     * <p>The attribute data type.</p>
     */
    inline void SetAttributeDataType(const AttributeDataType& value) { m_attributeDataTypeHasBeenSet = true; m_attributeDataType = value; }

    /**
     * <p>The attribute data type.</p>
     */
    inline void SetAttributeDataType(AttributeDataType&& value) { m_attributeDataTypeHasBeenSet = true; m_attributeDataType = std::move(value); }

    /**
     * <p>The attribute data type.</p>
     */
    inline SchemaAttributeType& WithAttributeDataType(const AttributeDataType& value) { SetAttributeDataType(value); return *this;}

    /**
     * <p>The attribute data type.</p>
     */
    inline SchemaAttributeType& WithAttributeDataType(AttributeDataType&& value) { SetAttributeDataType(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the attribute type is developer only.</p>
     */
    inline bool GetDeveloperOnlyAttribute() const{ return m_developerOnlyAttribute; }

    /**
     * <p>Specifies whether the attribute type is developer only.</p>
     */
    inline bool DeveloperOnlyAttributeHasBeenSet() const { return m_developerOnlyAttributeHasBeenSet; }

    /**
     * <p>Specifies whether the attribute type is developer only.</p>
     */
    inline void SetDeveloperOnlyAttribute(bool value) { m_developerOnlyAttributeHasBeenSet = true; m_developerOnlyAttribute = value; }

    /**
     * <p>Specifies whether the attribute type is developer only.</p>
     */
    inline SchemaAttributeType& WithDeveloperOnlyAttribute(bool value) { SetDeveloperOnlyAttribute(value); return *this;}


    /**
     * <p>Specifies whether the value of the attribute can be changed.</p> <p>For any
     * user pool attribute that's mapped to an identity provider attribute, you must
     * set this parameter to <code>true</code>. Amazon Cognito updates mapped
     * attributes when users sign in to your application through an identity provider.
     * If an attribute is immutable, Amazon Cognito throws an error when it attempts to
     * update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * Identity Provider Attribute Mappings for Your User Pool</a>.</p>
     */
    inline bool GetMutable() const{ return m_mutable; }

    /**
     * <p>Specifies whether the value of the attribute can be changed.</p> <p>For any
     * user pool attribute that's mapped to an identity provider attribute, you must
     * set this parameter to <code>true</code>. Amazon Cognito updates mapped
     * attributes when users sign in to your application through an identity provider.
     * If an attribute is immutable, Amazon Cognito throws an error when it attempts to
     * update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * Identity Provider Attribute Mappings for Your User Pool</a>.</p>
     */
    inline bool MutableHasBeenSet() const { return m_mutableHasBeenSet; }

    /**
     * <p>Specifies whether the value of the attribute can be changed.</p> <p>For any
     * user pool attribute that's mapped to an identity provider attribute, you must
     * set this parameter to <code>true</code>. Amazon Cognito updates mapped
     * attributes when users sign in to your application through an identity provider.
     * If an attribute is immutable, Amazon Cognito throws an error when it attempts to
     * update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * Identity Provider Attribute Mappings for Your User Pool</a>.</p>
     */
    inline void SetMutable(bool value) { m_mutableHasBeenSet = true; m_mutable = value; }

    /**
     * <p>Specifies whether the value of the attribute can be changed.</p> <p>For any
     * user pool attribute that's mapped to an identity provider attribute, you must
     * set this parameter to <code>true</code>. Amazon Cognito updates mapped
     * attributes when users sign in to your application through an identity provider.
     * If an attribute is immutable, Amazon Cognito throws an error when it attempts to
     * update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * Identity Provider Attribute Mappings for Your User Pool</a>.</p>
     */
    inline SchemaAttributeType& WithMutable(bool value) { SetMutable(value); return *this;}


    /**
     * <p>Specifies whether a user pool attribute is required. If the attribute is
     * required and the user does not provide a value, registration or sign-in will
     * fail.</p>
     */
    inline bool GetRequired() const{ return m_required; }

    /**
     * <p>Specifies whether a user pool attribute is required. If the attribute is
     * required and the user does not provide a value, registration or sign-in will
     * fail.</p>
     */
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }

    /**
     * <p>Specifies whether a user pool attribute is required. If the attribute is
     * required and the user does not provide a value, registration or sign-in will
     * fail.</p>
     */
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }

    /**
     * <p>Specifies whether a user pool attribute is required. If the attribute is
     * required and the user does not provide a value, registration or sign-in will
     * fail.</p>
     */
    inline SchemaAttributeType& WithRequired(bool value) { SetRequired(value); return *this;}


    /**
     * <p>Specifies the constraints for an attribute of the number type.</p>
     */
    inline const NumberAttributeConstraintsType& GetNumberAttributeConstraints() const{ return m_numberAttributeConstraints; }

    /**
     * <p>Specifies the constraints for an attribute of the number type.</p>
     */
    inline bool NumberAttributeConstraintsHasBeenSet() const { return m_numberAttributeConstraintsHasBeenSet; }

    /**
     * <p>Specifies the constraints for an attribute of the number type.</p>
     */
    inline void SetNumberAttributeConstraints(const NumberAttributeConstraintsType& value) { m_numberAttributeConstraintsHasBeenSet = true; m_numberAttributeConstraints = value; }

    /**
     * <p>Specifies the constraints for an attribute of the number type.</p>
     */
    inline void SetNumberAttributeConstraints(NumberAttributeConstraintsType&& value) { m_numberAttributeConstraintsHasBeenSet = true; m_numberAttributeConstraints = std::move(value); }

    /**
     * <p>Specifies the constraints for an attribute of the number type.</p>
     */
    inline SchemaAttributeType& WithNumberAttributeConstraints(const NumberAttributeConstraintsType& value) { SetNumberAttributeConstraints(value); return *this;}

    /**
     * <p>Specifies the constraints for an attribute of the number type.</p>
     */
    inline SchemaAttributeType& WithNumberAttributeConstraints(NumberAttributeConstraintsType&& value) { SetNumberAttributeConstraints(std::move(value)); return *this;}


    /**
     * <p>Specifies the constraints for an attribute of the string type.</p>
     */
    inline const StringAttributeConstraintsType& GetStringAttributeConstraints() const{ return m_stringAttributeConstraints; }

    /**
     * <p>Specifies the constraints for an attribute of the string type.</p>
     */
    inline bool StringAttributeConstraintsHasBeenSet() const { return m_stringAttributeConstraintsHasBeenSet; }

    /**
     * <p>Specifies the constraints for an attribute of the string type.</p>
     */
    inline void SetStringAttributeConstraints(const StringAttributeConstraintsType& value) { m_stringAttributeConstraintsHasBeenSet = true; m_stringAttributeConstraints = value; }

    /**
     * <p>Specifies the constraints for an attribute of the string type.</p>
     */
    inline void SetStringAttributeConstraints(StringAttributeConstraintsType&& value) { m_stringAttributeConstraintsHasBeenSet = true; m_stringAttributeConstraints = std::move(value); }

    /**
     * <p>Specifies the constraints for an attribute of the string type.</p>
     */
    inline SchemaAttributeType& WithStringAttributeConstraints(const StringAttributeConstraintsType& value) { SetStringAttributeConstraints(value); return *this;}

    /**
     * <p>Specifies the constraints for an attribute of the string type.</p>
     */
    inline SchemaAttributeType& WithStringAttributeConstraints(StringAttributeConstraintsType&& value) { SetStringAttributeConstraints(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    AttributeDataType m_attributeDataType;
    bool m_attributeDataTypeHasBeenSet;

    bool m_developerOnlyAttribute;
    bool m_developerOnlyAttributeHasBeenSet;

    bool m_mutable;
    bool m_mutableHasBeenSet;

    bool m_required;
    bool m_requiredHasBeenSet;

    NumberAttributeConstraintsType m_numberAttributeConstraints;
    bool m_numberAttributeConstraintsHasBeenSet;

    StringAttributeConstraintsType m_stringAttributeConstraints;
    bool m_stringAttributeConstraintsHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
