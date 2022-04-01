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
   * <p>The data type TokenValidityUnits specifies the time units you use when you
   * set the duration of ID, access, and refresh tokens.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/TokenValidityUnitsType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API TokenValidityUnitsType
  {
  public:
    TokenValidityUnitsType();
    TokenValidityUnitsType(Aws::Utils::Json::JsonView jsonValue);
    TokenValidityUnitsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>AccessTokenValidity</code> parameter. The default
     * <code>AccessTokenValidity</code> time unit is hours.</p>
     */
    inline const TimeUnitsType& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p> A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>AccessTokenValidity</code> parameter. The default
     * <code>AccessTokenValidity</code> time unit is hours.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p> A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>AccessTokenValidity</code> parameter. The default
     * <code>AccessTokenValidity</code> time unit is hours.</p>
     */
    inline void SetAccessToken(const TimeUnitsType& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p> A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>AccessTokenValidity</code> parameter. The default
     * <code>AccessTokenValidity</code> time unit is hours.</p>
     */
    inline void SetAccessToken(TimeUnitsType&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p> A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>AccessTokenValidity</code> parameter. The default
     * <code>AccessTokenValidity</code> time unit is hours.</p>
     */
    inline TokenValidityUnitsType& WithAccessToken(const TimeUnitsType& value) { SetAccessToken(value); return *this;}

    /**
     * <p> A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>AccessTokenValidity</code> parameter. The default
     * <code>AccessTokenValidity</code> time unit is hours.</p>
     */
    inline TokenValidityUnitsType& WithAccessToken(TimeUnitsType&& value) { SetAccessToken(std::move(value)); return *this;}


    /**
     * <p>A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>IdTokenValidity</code> parameter. The default <code>IdTokenValidity</code>
     * time unit is hours.</p>
     */
    inline const TimeUnitsType& GetIdToken() const{ return m_idToken; }

    /**
     * <p>A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>IdTokenValidity</code> parameter. The default <code>IdTokenValidity</code>
     * time unit is hours.</p>
     */
    inline bool IdTokenHasBeenSet() const { return m_idTokenHasBeenSet; }

    /**
     * <p>A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>IdTokenValidity</code> parameter. The default <code>IdTokenValidity</code>
     * time unit is hours.</p>
     */
    inline void SetIdToken(const TimeUnitsType& value) { m_idTokenHasBeenSet = true; m_idToken = value; }

    /**
     * <p>A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>IdTokenValidity</code> parameter. The default <code>IdTokenValidity</code>
     * time unit is hours.</p>
     */
    inline void SetIdToken(TimeUnitsType&& value) { m_idTokenHasBeenSet = true; m_idToken = std::move(value); }

    /**
     * <p>A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>IdTokenValidity</code> parameter. The default <code>IdTokenValidity</code>
     * time unit is hours.</p>
     */
    inline TokenValidityUnitsType& WithIdToken(const TimeUnitsType& value) { SetIdToken(value); return *this;}

    /**
     * <p>A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>IdTokenValidity</code> parameter. The default <code>IdTokenValidity</code>
     * time unit is hours.</p>
     */
    inline TokenValidityUnitsType& WithIdToken(TimeUnitsType&& value) { SetIdToken(std::move(value)); return *this;}


    /**
     * <p>A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>RefreshTokenValidity</code> parameter. The default
     * <code>RefreshTokenValidity</code> time unit is days.</p>
     */
    inline const TimeUnitsType& GetRefreshToken() const{ return m_refreshToken; }

    /**
     * <p>A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>RefreshTokenValidity</code> parameter. The default
     * <code>RefreshTokenValidity</code> time unit is days.</p>
     */
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }

    /**
     * <p>A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>RefreshTokenValidity</code> parameter. The default
     * <code>RefreshTokenValidity</code> time unit is days.</p>
     */
    inline void SetRefreshToken(const TimeUnitsType& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }

    /**
     * <p>A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>RefreshTokenValidity</code> parameter. The default
     * <code>RefreshTokenValidity</code> time unit is days.</p>
     */
    inline void SetRefreshToken(TimeUnitsType&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }

    /**
     * <p>A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>RefreshTokenValidity</code> parameter. The default
     * <code>RefreshTokenValidity</code> time unit is days.</p>
     */
    inline TokenValidityUnitsType& WithRefreshToken(const TimeUnitsType& value) { SetRefreshToken(value); return *this;}

    /**
     * <p>A time unit of <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code> for the value that you set in the
     * <code>RefreshTokenValidity</code> parameter. The default
     * <code>RefreshTokenValidity</code> time unit is days.</p>
     */
    inline TokenValidityUnitsType& WithRefreshToken(TimeUnitsType&& value) { SetRefreshToken(std::move(value)); return *this;}

  private:

    TimeUnitsType m_accessToken;
    bool m_accessTokenHasBeenSet;

    TimeUnitsType m_idToken;
    bool m_idTokenHasBeenSet;

    TimeUnitsType m_refreshToken;
    bool m_refreshTokenHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
