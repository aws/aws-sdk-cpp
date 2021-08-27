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
   * <p>The data type for TokenValidityUnits that specifics the time measurements for
   * token validity.</p><p><h3>See Also:</h3>   <a
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
     * <p> A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * AccessTokenValidity, defaults to hours.</p>
     */
    inline const TimeUnitsType& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p> A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * AccessTokenValidity, defaults to hours.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p> A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * AccessTokenValidity, defaults to hours.</p>
     */
    inline void SetAccessToken(const TimeUnitsType& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p> A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * AccessTokenValidity, defaults to hours.</p>
     */
    inline void SetAccessToken(TimeUnitsType&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p> A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * AccessTokenValidity, defaults to hours.</p>
     */
    inline TokenValidityUnitsType& WithAccessToken(const TimeUnitsType& value) { SetAccessToken(value); return *this;}

    /**
     * <p> A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * AccessTokenValidity, defaults to hours.</p>
     */
    inline TokenValidityUnitsType& WithAccessToken(TimeUnitsType&& value) { SetAccessToken(std::move(value)); return *this;}


    /**
     * <p>A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * IdTokenValidity, defaults to hours.</p>
     */
    inline const TimeUnitsType& GetIdToken() const{ return m_idToken; }

    /**
     * <p>A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * IdTokenValidity, defaults to hours.</p>
     */
    inline bool IdTokenHasBeenSet() const { return m_idTokenHasBeenSet; }

    /**
     * <p>A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * IdTokenValidity, defaults to hours.</p>
     */
    inline void SetIdToken(const TimeUnitsType& value) { m_idTokenHasBeenSet = true; m_idToken = value; }

    /**
     * <p>A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * IdTokenValidity, defaults to hours.</p>
     */
    inline void SetIdToken(TimeUnitsType&& value) { m_idTokenHasBeenSet = true; m_idToken = std::move(value); }

    /**
     * <p>A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * IdTokenValidity, defaults to hours.</p>
     */
    inline TokenValidityUnitsType& WithIdToken(const TimeUnitsType& value) { SetIdToken(value); return *this;}

    /**
     * <p>A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * IdTokenValidity, defaults to hours.</p>
     */
    inline TokenValidityUnitsType& WithIdToken(TimeUnitsType&& value) { SetIdToken(std::move(value)); return *this;}


    /**
     * <p>A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * RefreshTokenValidity, defaults to days.</p>
     */
    inline const TimeUnitsType& GetRefreshToken() const{ return m_refreshToken; }

    /**
     * <p>A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * RefreshTokenValidity, defaults to days.</p>
     */
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }

    /**
     * <p>A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * RefreshTokenValidity, defaults to days.</p>
     */
    inline void SetRefreshToken(const TimeUnitsType& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }

    /**
     * <p>A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * RefreshTokenValidity, defaults to days.</p>
     */
    inline void SetRefreshToken(TimeUnitsType&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }

    /**
     * <p>A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * RefreshTokenValidity, defaults to days.</p>
     */
    inline TokenValidityUnitsType& WithRefreshToken(const TimeUnitsType& value) { SetRefreshToken(value); return *this;}

    /**
     * <p>A time unit in “seconds”, “minutes”, “hours” or “days” for the value in
     * RefreshTokenValidity, defaults to days.</p>
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
