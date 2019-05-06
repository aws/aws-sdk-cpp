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
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to verify user attributes.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/VerifyUserAttributeRequest">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API VerifyUserAttributeRequest : public CognitoIdentityProviderRequest
  {
  public:
    VerifyUserAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifyUserAttribute"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Represents the access token of the request to verify user attributes.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>Represents the access token of the request to verify user attributes.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>Represents the access token of the request to verify user attributes.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>Represents the access token of the request to verify user attributes.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>Represents the access token of the request to verify user attributes.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>Represents the access token of the request to verify user attributes.</p>
     */
    inline VerifyUserAttributeRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>Represents the access token of the request to verify user attributes.</p>
     */
    inline VerifyUserAttributeRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>Represents the access token of the request to verify user attributes.</p>
     */
    inline VerifyUserAttributeRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p>The attribute name in the request to verify user attributes.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The attribute name in the request to verify user attributes.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The attribute name in the request to verify user attributes.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The attribute name in the request to verify user attributes.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The attribute name in the request to verify user attributes.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The attribute name in the request to verify user attributes.</p>
     */
    inline VerifyUserAttributeRequest& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The attribute name in the request to verify user attributes.</p>
     */
    inline VerifyUserAttributeRequest& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The attribute name in the request to verify user attributes.</p>
     */
    inline VerifyUserAttributeRequest& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The verification code in the request to verify user attributes.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The verification code in the request to verify user attributes.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The verification code in the request to verify user attributes.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The verification code in the request to verify user attributes.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The verification code in the request to verify user attributes.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The verification code in the request to verify user attributes.</p>
     */
    inline VerifyUserAttributeRequest& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The verification code in the request to verify user attributes.</p>
     */
    inline VerifyUserAttributeRequest& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The verification code in the request to verify user attributes.</p>
     */
    inline VerifyUserAttributeRequest& WithCode(const char* value) { SetCode(value); return *this;}

  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    Aws::String m_code;
    bool m_codeHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
