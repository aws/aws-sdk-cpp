/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/TimeUnitsType.h>
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
   * <p>The time units that, with <code>IdTokenValidity</code>,
   * <code>AccessTokenValidity</code>, and <code>RefreshTokenValidity</code>, set and
   * display the duration of ID, access, and refresh tokens for an app client. You
   * can assign a separate token validity unit to each type of token. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/TokenValidityUnitsType">AWS
   * API Reference</a></p>
   */
  class TokenValidityUnitsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API TokenValidityUnitsType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API TokenValidityUnitsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API TokenValidityUnitsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A time unit for the value that you set in the
     * <code>AccessTokenValidity</code> parameter. The default
     * <code>AccessTokenValidity</code> time unit is <code>hours</code>.
     * <code>AccessTokenValidity</code> duration can range from five minutes to one
     * day.</p>
     */
    inline TimeUnitsType GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(TimeUnitsType value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline TokenValidityUnitsType& WithAccessToken(TimeUnitsType value) { SetAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time unit for the value that you set in the <code>IdTokenValidity</code>
     * parameter. The default <code>IdTokenValidity</code> time unit is
     * <code>hours</code>. <code>IdTokenValidity</code> duration can range from five
     * minutes to one day.</p>
     */
    inline TimeUnitsType GetIdToken() const { return m_idToken; }
    inline bool IdTokenHasBeenSet() const { return m_idTokenHasBeenSet; }
    inline void SetIdToken(TimeUnitsType value) { m_idTokenHasBeenSet = true; m_idToken = value; }
    inline TokenValidityUnitsType& WithIdToken(TimeUnitsType value) { SetIdToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time unit for the value that you set in the
     * <code>RefreshTokenValidity</code> parameter. The default
     * <code>RefreshTokenValidity</code> time unit is <code>days</code>.
     * <code>RefreshTokenValidity</code> duration can range from 60 minutes to 10
     * years.</p>
     */
    inline TimeUnitsType GetRefreshToken() const { return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    inline void SetRefreshToken(TimeUnitsType value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }
    inline TokenValidityUnitsType& WithRefreshToken(TimeUnitsType value) { SetRefreshToken(value); return *this;}
    ///@}
  private:

    TimeUnitsType m_accessToken{TimeUnitsType::NOT_SET};
    bool m_accessTokenHasBeenSet = false;

    TimeUnitsType m_idToken{TimeUnitsType::NOT_SET};
    bool m_idTokenHasBeenSet = false;

    TimeUnitsType m_refreshToken{TimeUnitsType::NOT_SET};
    bool m_refreshTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
