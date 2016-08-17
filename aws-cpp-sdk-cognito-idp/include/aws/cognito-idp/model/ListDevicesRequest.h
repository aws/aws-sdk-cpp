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

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to list the devices.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API ListDevicesRequest : public CognitoIdentityProviderRequest
  {
  public:
    ListDevicesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The access tokens for the request to list devices.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>The access tokens for the request to list devices.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The access tokens for the request to list devices.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The access tokens for the request to list devices.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>The access tokens for the request to list devices.</p>
     */
    inline ListDevicesRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access tokens for the request to list devices.</p>
     */
    inline ListDevicesRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access tokens for the request to list devices.</p>
     */
    inline ListDevicesRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}

    /**
     * <p>The limit of the device request.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The limit of the device request.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The limit of the device request.</p>
     */
    inline ListDevicesRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>The pagination token for the list request.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p>The pagination token for the list request.</p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = value; }

    /**
     * <p>The pagination token for the list request.</p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = value; }

    /**
     * <p>The pagination token for the list request.</p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationTokenHasBeenSet = true; m_paginationToken.assign(value); }

    /**
     * <p>The pagination token for the list request.</p>
     */
    inline ListDevicesRequest& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>The pagination token for the list request.</p>
     */
    inline ListDevicesRequest& WithPaginationToken(Aws::String&& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>The pagination token for the list request.</p>
     */
    inline ListDevicesRequest& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}

  private:
    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
