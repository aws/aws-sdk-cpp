/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/SchemaAttributeType.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to add custom attributes.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AddCustomAttributesRequest : public CognitoIdentityProviderRequest
  {
  public:
    AddCustomAttributesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The user pool ID for the user pool where you want to add custom
     * attributes.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool where you want to add custom
     * attributes.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool where you want to add custom
     * attributes.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool where you want to add custom
     * attributes.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool where you want to add custom
     * attributes.</p>
     */
    inline AddCustomAttributesRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to add custom
     * attributes.</p>
     */
    inline AddCustomAttributesRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to add custom
     * attributes.</p>
     */
    inline AddCustomAttributesRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}

    /**
     * <p>An array of custom attributes, such as Mutable and Name.</p>
     */
    inline const Aws::Vector<SchemaAttributeType>& GetCustomAttributes() const{ return m_customAttributes; }

    /**
     * <p>An array of custom attributes, such as Mutable and Name.</p>
     */
    inline void SetCustomAttributes(const Aws::Vector<SchemaAttributeType>& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }

    /**
     * <p>An array of custom attributes, such as Mutable and Name.</p>
     */
    inline void SetCustomAttributes(Aws::Vector<SchemaAttributeType>&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }

    /**
     * <p>An array of custom attributes, such as Mutable and Name.</p>
     */
    inline AddCustomAttributesRequest& WithCustomAttributes(const Aws::Vector<SchemaAttributeType>& value) { SetCustomAttributes(value); return *this;}

    /**
     * <p>An array of custom attributes, such as Mutable and Name.</p>
     */
    inline AddCustomAttributesRequest& WithCustomAttributes(Aws::Vector<SchemaAttributeType>&& value) { SetCustomAttributes(value); return *this;}

    /**
     * <p>An array of custom attributes, such as Mutable and Name.</p>
     */
    inline AddCustomAttributesRequest& AddCustomAttributes(const SchemaAttributeType& value) { m_customAttributesHasBeenSet = true; m_customAttributes.push_back(value); return *this; }

    /**
     * <p>An array of custom attributes, such as Mutable and Name.</p>
     */
    inline AddCustomAttributesRequest& AddCustomAttributes(SchemaAttributeType&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.push_back(value); return *this; }

  private:
    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;
    Aws::Vector<SchemaAttributeType> m_customAttributes;
    bool m_customAttributesHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
