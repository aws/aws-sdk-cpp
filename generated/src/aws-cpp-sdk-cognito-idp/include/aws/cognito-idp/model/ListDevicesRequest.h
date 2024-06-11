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


    ///@{
    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose list of
     * devices you want to view.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline ListDevicesRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline ListDevicesRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline ListDevicesRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The limit of the device request.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListDevicesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This API operation returns a limited number of results. The pagination token
     * is an identifier that you can present in an additional API request with the same
     * parameters. When you include the pagination token, Amazon Cognito returns the
     * next set of items after the current list. Subsequent requests return a new
     * pagination token. By use of this token, you can paginate through the full list
     * of items.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }
    inline bool PaginationTokenHasBeenSet() const { return m_paginationTokenHasBeenSet; }
    inline void SetPaginationToken(const Aws::String& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = value; }
    inline void SetPaginationToken(Aws::String&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::move(value); }
    inline void SetPaginationToken(const char* value) { m_paginationTokenHasBeenSet = true; m_paginationToken.assign(value); }
    inline ListDevicesRequest& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}
    inline ListDevicesRequest& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}
    inline ListDevicesRequest& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}
    ///@}
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
