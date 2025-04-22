/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/FeatureType.h>
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
   * <p>The configuration of your app client for refresh token rotation. When
   * enabled, your app client issues new ID, access, and refresh tokens when users
   * renew their sessions with refresh tokens. When disabled, token refresh issues
   * only ID and access tokens.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RefreshTokenRotationType">AWS
   * API Reference</a></p>
   */
  class RefreshTokenRotationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API RefreshTokenRotationType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API RefreshTokenRotationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API RefreshTokenRotationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of refresh token rotation for the current app client.</p>
     */
    inline FeatureType GetFeature() const { return m_feature; }
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
    inline void SetFeature(FeatureType value) { m_featureHasBeenSet = true; m_feature = value; }
    inline RefreshTokenRotationType& WithFeature(FeatureType value) { SetFeature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you request a token refresh with <code>GetTokensFromRefreshToken</code>,
     * the original refresh token that you're rotating out can remain valid for a
     * period of time of up to 60 seconds. This allows for client-side retries. When
     * <code>RetryGracePeriodSeconds</code> is <code>0</code>, the grace period is
     * disabled and a successful request immediately invalidates the submitted refresh
     * token.</p>
     */
    inline int GetRetryGracePeriodSeconds() const { return m_retryGracePeriodSeconds; }
    inline bool RetryGracePeriodSecondsHasBeenSet() const { return m_retryGracePeriodSecondsHasBeenSet; }
    inline void SetRetryGracePeriodSeconds(int value) { m_retryGracePeriodSecondsHasBeenSet = true; m_retryGracePeriodSeconds = value; }
    inline RefreshTokenRotationType& WithRetryGracePeriodSeconds(int value) { SetRetryGracePeriodSeconds(value); return *this;}
    ///@}
  private:

    FeatureType m_feature{FeatureType::NOT_SET};
    bool m_featureHasBeenSet = false;

    int m_retryGracePeriodSeconds{0};
    bool m_retryGracePeriodSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
