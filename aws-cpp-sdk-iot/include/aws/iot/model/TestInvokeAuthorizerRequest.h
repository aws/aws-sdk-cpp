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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API TestInvokeAuthorizerRequest : public IoTRequest
  {
  public:
    TestInvokeAuthorizerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestInvokeAuthorizer"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The custom authorizer name.</p>
     */
    inline const Aws::String& GetAuthorizerName() const{ return m_authorizerName; }

    /**
     * <p>The custom authorizer name.</p>
     */
    inline bool AuthorizerNameHasBeenSet() const { return m_authorizerNameHasBeenSet; }

    /**
     * <p>The custom authorizer name.</p>
     */
    inline void SetAuthorizerName(const Aws::String& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = value; }

    /**
     * <p>The custom authorizer name.</p>
     */
    inline void SetAuthorizerName(Aws::String&& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = std::move(value); }

    /**
     * <p>The custom authorizer name.</p>
     */
    inline void SetAuthorizerName(const char* value) { m_authorizerNameHasBeenSet = true; m_authorizerName.assign(value); }

    /**
     * <p>The custom authorizer name.</p>
     */
    inline TestInvokeAuthorizerRequest& WithAuthorizerName(const Aws::String& value) { SetAuthorizerName(value); return *this;}

    /**
     * <p>The custom authorizer name.</p>
     */
    inline TestInvokeAuthorizerRequest& WithAuthorizerName(Aws::String&& value) { SetAuthorizerName(std::move(value)); return *this;}

    /**
     * <p>The custom authorizer name.</p>
     */
    inline TestInvokeAuthorizerRequest& WithAuthorizerName(const char* value) { SetAuthorizerName(value); return *this;}


    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline TestInvokeAuthorizerRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline TestInvokeAuthorizerRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The token returned by your custom authentication service.</p>
     */
    inline TestInvokeAuthorizerRequest& WithToken(const char* value) { SetToken(value); return *this;}


    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key.</p>
     */
    inline const Aws::String& GetTokenSignature() const{ return m_tokenSignature; }

    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key.</p>
     */
    inline bool TokenSignatureHasBeenSet() const { return m_tokenSignatureHasBeenSet; }

    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key.</p>
     */
    inline void SetTokenSignature(const Aws::String& value) { m_tokenSignatureHasBeenSet = true; m_tokenSignature = value; }

    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key.</p>
     */
    inline void SetTokenSignature(Aws::String&& value) { m_tokenSignatureHasBeenSet = true; m_tokenSignature = std::move(value); }

    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key.</p>
     */
    inline void SetTokenSignature(const char* value) { m_tokenSignatureHasBeenSet = true; m_tokenSignature.assign(value); }

    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key.</p>
     */
    inline TestInvokeAuthorizerRequest& WithTokenSignature(const Aws::String& value) { SetTokenSignature(value); return *this;}

    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key.</p>
     */
    inline TestInvokeAuthorizerRequest& WithTokenSignature(Aws::String&& value) { SetTokenSignature(std::move(value)); return *this;}

    /**
     * <p>The signature made with the token and your custom authentication service's
     * private key.</p>
     */
    inline TestInvokeAuthorizerRequest& WithTokenSignature(const char* value) { SetTokenSignature(value); return *this;}

  private:

    Aws::String m_authorizerName;
    bool m_authorizerNameHasBeenSet;

    Aws::String m_token;
    bool m_tokenHasBeenSet;

    Aws::String m_tokenSignature;
    bool m_tokenSignatureHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
