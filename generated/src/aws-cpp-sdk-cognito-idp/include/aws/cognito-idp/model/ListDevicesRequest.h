/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents the request to list the devices.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListDevicesRequest">AWS
   * API Reference</a></p>
   */
  class ListDevicesRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ListDevicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDevices"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose list of
     * devices you want to view.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose list of
     * devices you want to view.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose list of
     * devices you want to view.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose list of
     * devices you want to view.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose list of
     * devices you want to view.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose list of
     * devices you want to view.</p>
     */
    inline ListDevicesRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose list of
     * devices you want to view.</p>
     */
    inline ListDevicesRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose list of
     * devices you want to view.</p>
     */
    inline ListDevicesRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p>The limit of the device request.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The limit of the device request.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

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
    inline bool PaginationTokenHasBeenSet() const { return m_paginationTokenHasBeenSet; }

    /**
     * <p>The pagination token for the list request.</p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = value; }

    /**
     * <p>The pagination token for the list request.</p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::move(value); }

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
    inline ListDevicesRequest& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token for the list request.</p>
     */
    inline ListDevicesRequest& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}

  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
