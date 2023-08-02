/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A list of the user attributes and their properties in your user pool. The
   * attribute schema contains standard attributes, custom attributes with a
   * <code>custom:</code> prefix, and developer attributes with a <code>dev:</code>
   * prefix. For more information, see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html">User
   * pool attributes</a>.</p> <p>Developer-only attributes are a legacy feature of
   * user pools, are read-only to all app clients. You can create and update
   * developer-only attributes only with IAM-authenticated API operations. Use app
   * client read/write permissions instead.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SchemaAttributeType">AWS
   * API Reference</a></p>
   */
  class SchemaAttributeType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SchemaAttributeType();
    AWS_COGNITOIDENTITYPROVIDER_API SchemaAttributeType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API SchemaAttributeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of your user pool attribute, for example <code>username</code> or
     * <code>custom:costcenter</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of your user pool attribute, for example <code>username</code> or
     * <code>custom:costcenter</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of your user pool attribute, for example <code>username</code> or
     * <code>custom:costcenter</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of your user pool attribute, for example <code>username</code> or
     * <code>custom:costcenter</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of your user pool attribute, for example <code>username</code> or
     * <code>custom:costcenter</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of your user pool attribute, for example <code>username</code> or
     * <code>custom:costcenter</code>.</p>
     */
    inline SchemaAttributeType& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of your user pool attribute, for example <code>username</code> or
     * <code>custom:costcenter</code>.</p>
     */
    inline SchemaAttributeType& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of your user pool attribute, for example <code>username</code> or
     * <code>custom:costcenter</code>.</p>
     */
    inline SchemaAttributeType& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data format of the values for your attribute.</p>
     */
    inline const AttributeDataType& GetAttributeDataType() const{ return m_attributeDataType; }

    /**
     * <p>The data format of the values for your attribute.</p>
     */
    inline bool AttributeDataTypeHasBeenSet() const { return m_attributeDataTypeHasBeenSet; }

    /**
     * <p>The data format of the values for your attribute.</p>
     */
    inline void SetAttributeDataType(const AttributeDataType& value) { m_attributeDataTypeHasBeenSet = true; m_attributeDataType = value; }

    /**
     * <p>The data format of the values for your attribute.</p>
     */
    inline void SetAttributeDataType(AttributeDataType&& value) { m_attributeDataTypeHasBeenSet = true; m_attributeDataType = std::move(value); }

    /**
     * <p>The data format of the values for your attribute.</p>
     */
    inline SchemaAttributeType& WithAttributeDataType(const AttributeDataType& value) { SetAttributeDataType(value); return *this;}

    /**
     * <p>The data format of the values for your attribute.</p>
     */
    inline SchemaAttributeType& WithAttributeDataType(AttributeDataType&& value) { SetAttributeDataType(std::move(value)); return *this;}


    /**
     *  <p>You should use <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UserPoolClientType.html#CognitoUserPools-Type-UserPoolClientType-WriteAttributes">WriteAttributes</a>
     * in the user pool client to control how attributes can be mutated for new use
     * cases instead of using <code>DeveloperOnlyAttribute</code>.</p> 
     * <p>Specifies whether the attribute type is developer only. This attribute can
     * only be modified by an administrator. Users won't be able to modify this
     * attribute using their access token. For example,
     * <code>DeveloperOnlyAttribute</code> can be modified using
     * AdminUpdateUserAttributes but can't be updated using UpdateUserAttributes.</p>
     */
    inline bool GetDeveloperOnlyAttribute() const{ return m_developerOnlyAttribute; }

    /**
     *  <p>You should use <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UserPoolClientType.html#CognitoUserPools-Type-UserPoolClientType-WriteAttributes">WriteAttributes</a>
     * in the user pool client to control how attributes can be mutated for new use
     * cases instead of using <code>DeveloperOnlyAttribute</code>.</p> 
     * <p>Specifies whether the attribute type is developer only. This attribute can
     * only be modified by an administrator. Users won't be able to modify this
     * attribute using their access token. For example,
     * <code>DeveloperOnlyAttribute</code> can be modified using
     * AdminUpdateUserAttributes but can't be updated using UpdateUserAttributes.</p>
     */
    inline bool DeveloperOnlyAttributeHasBeenSet() const { return m_developerOnlyAttributeHasBeenSet; }

    /**
     *  <p>You should use <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UserPoolClientType.html#CognitoUserPools-Type-UserPoolClientType-WriteAttributes">WriteAttributes</a>
     * in the user pool client to control how attributes can be mutated for new use
     * cases instead of using <code>DeveloperOnlyAttribute</code>.</p> 
     * <p>Specifies whether the attribute type is developer only. This attribute can
     * only be modified by an administrator. Users won't be able to modify this
     * attribute using their access token. For example,
     * <code>DeveloperOnlyAttribute</code> can be modified using
     * AdminUpdateUserAttributes but can't be updated using UpdateUserAttributes.</p>
     */
    inline void SetDeveloperOnlyAttribute(bool value) { m_developerOnlyAttributeHasBeenSet = true; m_developerOnlyAttribute = value; }

    /**
     *  <p>You should use <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UserPoolClientType.html#CognitoUserPools-Type-UserPoolClientType-WriteAttributes">WriteAttributes</a>
     * in the user pool client to control how attributes can be mutated for new use
     * cases instead of using <code>DeveloperOnlyAttribute</code>.</p> 
     * <p>Specifies whether the attribute type is developer only. This attribute can
     * only be modified by an administrator. Users won't be able to modify this
     * attribute using their access token. For example,
     * <code>DeveloperOnlyAttribute</code> can be modified using
     * AdminUpdateUserAttributes but can't be updated using UpdateUserAttributes.</p>
     */
    inline SchemaAttributeType& WithDeveloperOnlyAttribute(bool value) { SetDeveloperOnlyAttribute(value); return *this;}


    /**
     * <p>Specifies whether the value of the attribute can be changed.</p> <p>Any user
     * pool attribute whose value you map from an IdP attribute must be mutable, with a
     * parameter value of <code>true</code>. Amazon Cognito updates mapped attributes
     * when users sign in to your application through an IdP. If an attribute is
     * immutable, Amazon Cognito throws an error when it attempts to update the
     * attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * Identity Provider Attribute Mappings for Your User Pool</a>.</p>
     */
    inline bool GetMutable() const{ return m_mutable; }

    /**
     * <p>Specifies whether the value of the attribute can be changed.</p> <p>Any user
     * pool attribute whose value you map from an IdP attribute must be mutable, with a
     * parameter value of <code>true</code>. Amazon Cognito updates mapped attributes
     * when users sign in to your application through an IdP. If an attribute is
     * immutable, Amazon Cognito throws an error when it attempts to update the
     * attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * Identity Provider Attribute Mappings for Your User Pool</a>.</p>
     */
    inline bool MutableHasBeenSet() const { return m_mutableHasBeenSet; }

    /**
     * <p>Specifies whether the value of the attribute can be changed.</p> <p>Any user
     * pool attribute whose value you map from an IdP attribute must be mutable, with a
     * parameter value of <code>true</code>. Amazon Cognito updates mapped attributes
     * when users sign in to your application through an IdP. If an attribute is
     * immutable, Amazon Cognito throws an error when it attempts to update the
     * attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * Identity Provider Attribute Mappings for Your User Pool</a>.</p>
     */
    inline void SetMutable(bool value) { m_mutableHasBeenSet = true; m_mutable = value; }

    /**
     * <p>Specifies whether the value of the attribute can be changed.</p> <p>Any user
     * pool attribute whose value you map from an IdP attribute must be mutable, with a
     * parameter value of <code>true</code>. Amazon Cognito updates mapped attributes
     * when users sign in to your application through an IdP. If an attribute is
     * immutable, Amazon Cognito throws an error when it attempts to update the
     * attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * Identity Provider Attribute Mappings for Your User Pool</a>.</p>
     */
    inline SchemaAttributeType& WithMutable(bool value) { SetMutable(value); return *this;}


    /**
     * <p>Specifies whether a user pool attribute is required. If the attribute is
     * required and the user doesn't provide a value, registration or sign-in will
     * fail.</p>
     */
    inline bool GetRequired() const{ return m_required; }

    /**
     * <p>Specifies whether a user pool attribute is required. If the attribute is
     * required and the user doesn't provide a value, registration or sign-in will
     * fail.</p>
     */
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }

    /**
     * <p>Specifies whether a user pool attribute is required. If the attribute is
     * required and the user doesn't provide a value, registration or sign-in will
     * fail.</p>
     */
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }

    /**
     * <p>Specifies whether a user pool attribute is required. If the attribute is
     * required and the user doesn't provide a value, registration or sign-in will
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
    bool m_nameHasBeenSet = false;

    AttributeDataType m_attributeDataType;
    bool m_attributeDataTypeHasBeenSet = false;

    bool m_developerOnlyAttribute;
    bool m_developerOnlyAttributeHasBeenSet = false;

    bool m_mutable;
    bool m_mutableHasBeenSet = false;

    bool m_required;
    bool m_requiredHasBeenSet = false;

    NumberAttributeConstraintsType m_numberAttributeConstraints;
    bool m_numberAttributeConstraintsHasBeenSet = false;

    StringAttributeConstraintsType m_stringAttributeConstraints;
    bool m_stringAttributeConstraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
