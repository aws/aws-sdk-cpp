/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/SchemaAttributeType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to add custom attributes.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AddCustomAttributesRequest">AWS
   * API Reference</a></p>
   */
  class AddCustomAttributesRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AddCustomAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddCustomAttributes"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID for the user pool where you want to add custom
     * attributes.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool where you want to add custom
     * attributes.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool where you want to add custom
     * attributes.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool where you want to add custom
     * attributes.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

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
    inline AddCustomAttributesRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

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
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }

    /**
     * <p>An array of custom attributes, such as Mutable and Name.</p>
     */
    inline void SetCustomAttributes(const Aws::Vector<SchemaAttributeType>& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }

    /**
     * <p>An array of custom attributes, such as Mutable and Name.</p>
     */
    inline void SetCustomAttributes(Aws::Vector<SchemaAttributeType>&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::move(value); }

    /**
     * <p>An array of custom attributes, such as Mutable and Name.</p>
     */
    inline AddCustomAttributesRequest& WithCustomAttributes(const Aws::Vector<SchemaAttributeType>& value) { SetCustomAttributes(value); return *this;}

    /**
     * <p>An array of custom attributes, such as Mutable and Name.</p>
     */
    inline AddCustomAttributesRequest& WithCustomAttributes(Aws::Vector<SchemaAttributeType>&& value) { SetCustomAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of custom attributes, such as Mutable and Name.</p>
     */
    inline AddCustomAttributesRequest& AddCustomAttributes(const SchemaAttributeType& value) { m_customAttributesHasBeenSet = true; m_customAttributes.push_back(value); return *this; }

    /**
     * <p>An array of custom attributes, such as Mutable and Name.</p>
     */
    inline AddCustomAttributesRequest& AddCustomAttributes(SchemaAttributeType&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::Vector<SchemaAttributeType> m_customAttributes;
    bool m_customAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
