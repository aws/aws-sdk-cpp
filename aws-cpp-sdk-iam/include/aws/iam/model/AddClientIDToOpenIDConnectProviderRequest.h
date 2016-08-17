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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API AddClientIDToOpenIDConnectProviderRequest : public IAMRequest
  {
  public:
    AddClientIDToOpenIDConnectProviderRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect (OIDC) provider
     * resource to add the client ID to. You can get a list of OIDC provider ARNs by
     * using the <a>ListOpenIDConnectProviders</a> action.</p>
     */
    inline const Aws::String& GetOpenIDConnectProviderArn() const{ return m_openIDConnectProviderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect (OIDC) provider
     * resource to add the client ID to. You can get a list of OIDC provider ARNs by
     * using the <a>ListOpenIDConnectProviders</a> action.</p>
     */
    inline void SetOpenIDConnectProviderArn(const Aws::String& value) { m_openIDConnectProviderArnHasBeenSet = true; m_openIDConnectProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect (OIDC) provider
     * resource to add the client ID to. You can get a list of OIDC provider ARNs by
     * using the <a>ListOpenIDConnectProviders</a> action.</p>
     */
    inline void SetOpenIDConnectProviderArn(Aws::String&& value) { m_openIDConnectProviderArnHasBeenSet = true; m_openIDConnectProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect (OIDC) provider
     * resource to add the client ID to. You can get a list of OIDC provider ARNs by
     * using the <a>ListOpenIDConnectProviders</a> action.</p>
     */
    inline void SetOpenIDConnectProviderArn(const char* value) { m_openIDConnectProviderArnHasBeenSet = true; m_openIDConnectProviderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect (OIDC) provider
     * resource to add the client ID to. You can get a list of OIDC provider ARNs by
     * using the <a>ListOpenIDConnectProviders</a> action.</p>
     */
    inline AddClientIDToOpenIDConnectProviderRequest& WithOpenIDConnectProviderArn(const Aws::String& value) { SetOpenIDConnectProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect (OIDC) provider
     * resource to add the client ID to. You can get a list of OIDC provider ARNs by
     * using the <a>ListOpenIDConnectProviders</a> action.</p>
     */
    inline AddClientIDToOpenIDConnectProviderRequest& WithOpenIDConnectProviderArn(Aws::String&& value) { SetOpenIDConnectProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect (OIDC) provider
     * resource to add the client ID to. You can get a list of OIDC provider ARNs by
     * using the <a>ListOpenIDConnectProviders</a> action.</p>
     */
    inline AddClientIDToOpenIDConnectProviderRequest& WithOpenIDConnectProviderArn(const char* value) { SetOpenIDConnectProviderArn(value); return *this;}

    /**
     * <p>The client ID (also known as audience) to add to the IAM OpenID Connect
     * provider resource.</p>
     */
    inline const Aws::String& GetClientID() const{ return m_clientID; }

    /**
     * <p>The client ID (also known as audience) to add to the IAM OpenID Connect
     * provider resource.</p>
     */
    inline void SetClientID(const Aws::String& value) { m_clientIDHasBeenSet = true; m_clientID = value; }

    /**
     * <p>The client ID (also known as audience) to add to the IAM OpenID Connect
     * provider resource.</p>
     */
    inline void SetClientID(Aws::String&& value) { m_clientIDHasBeenSet = true; m_clientID = value; }

    /**
     * <p>The client ID (also known as audience) to add to the IAM OpenID Connect
     * provider resource.</p>
     */
    inline void SetClientID(const char* value) { m_clientIDHasBeenSet = true; m_clientID.assign(value); }

    /**
     * <p>The client ID (also known as audience) to add to the IAM OpenID Connect
     * provider resource.</p>
     */
    inline AddClientIDToOpenIDConnectProviderRequest& WithClientID(const Aws::String& value) { SetClientID(value); return *this;}

    /**
     * <p>The client ID (also known as audience) to add to the IAM OpenID Connect
     * provider resource.</p>
     */
    inline AddClientIDToOpenIDConnectProviderRequest& WithClientID(Aws::String&& value) { SetClientID(value); return *this;}

    /**
     * <p>The client ID (also known as audience) to add to the IAM OpenID Connect
     * provider resource.</p>
     */
    inline AddClientIDToOpenIDConnectProviderRequest& WithClientID(const char* value) { SetClientID(value); return *this;}

  private:
    Aws::String m_openIDConnectProviderArn;
    bool m_openIDConnectProviderArnHasBeenSet;
    Aws::String m_clientID;
    bool m_clientIDHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
