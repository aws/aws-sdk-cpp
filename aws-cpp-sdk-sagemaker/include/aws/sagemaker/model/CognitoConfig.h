/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Use this parameter to configure your Amazon Cognito workforce. A single
   * Cognito workforce is created using and corresponds to a single <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
   * Amazon Cognito user pool</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CognitoConfig">AWS
   * API Reference</a></p>
   */
  class CognitoConfig
  {
  public:
    AWS_SAGEMAKER_API CognitoConfig();
    AWS_SAGEMAKER_API CognitoConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CognitoConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * user pool</a> is a user directory in Amazon Cognito. With a user pool, your
     * users can sign in to your web or mobile app through Amazon Cognito. Your users
     * can also sign in through social identity providers like Google, Facebook,
     * Amazon, or Apple, and through SAML identity providers.</p>
     */
    inline const Aws::String& GetUserPool() const{ return m_userPool; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * user pool</a> is a user directory in Amazon Cognito. With a user pool, your
     * users can sign in to your web or mobile app through Amazon Cognito. Your users
     * can also sign in through social identity providers like Google, Facebook,
     * Amazon, or Apple, and through SAML identity providers.</p>
     */
    inline bool UserPoolHasBeenSet() const { return m_userPoolHasBeenSet; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * user pool</a> is a user directory in Amazon Cognito. With a user pool, your
     * users can sign in to your web or mobile app through Amazon Cognito. Your users
     * can also sign in through social identity providers like Google, Facebook,
     * Amazon, or Apple, and through SAML identity providers.</p>
     */
    inline void SetUserPool(const Aws::String& value) { m_userPoolHasBeenSet = true; m_userPool = value; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * user pool</a> is a user directory in Amazon Cognito. With a user pool, your
     * users can sign in to your web or mobile app through Amazon Cognito. Your users
     * can also sign in through social identity providers like Google, Facebook,
     * Amazon, or Apple, and through SAML identity providers.</p>
     */
    inline void SetUserPool(Aws::String&& value) { m_userPoolHasBeenSet = true; m_userPool = std::move(value); }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * user pool</a> is a user directory in Amazon Cognito. With a user pool, your
     * users can sign in to your web or mobile app through Amazon Cognito. Your users
     * can also sign in through social identity providers like Google, Facebook,
     * Amazon, or Apple, and through SAML identity providers.</p>
     */
    inline void SetUserPool(const char* value) { m_userPoolHasBeenSet = true; m_userPool.assign(value); }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * user pool</a> is a user directory in Amazon Cognito. With a user pool, your
     * users can sign in to your web or mobile app through Amazon Cognito. Your users
     * can also sign in through social identity providers like Google, Facebook,
     * Amazon, or Apple, and through SAML identity providers.</p>
     */
    inline CognitoConfig& WithUserPool(const Aws::String& value) { SetUserPool(value); return *this;}

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * user pool</a> is a user directory in Amazon Cognito. With a user pool, your
     * users can sign in to your web or mobile app through Amazon Cognito. Your users
     * can also sign in through social identity providers like Google, Facebook,
     * Amazon, or Apple, and through SAML identity providers.</p>
     */
    inline CognitoConfig& WithUserPool(Aws::String&& value) { SetUserPool(std::move(value)); return *this;}

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * user pool</a> is a user directory in Amazon Cognito. With a user pool, your
     * users can sign in to your web or mobile app through Amazon Cognito. Your users
     * can also sign in through social identity providers like Google, Facebook,
     * Amazon, or Apple, and through SAML identity providers.</p>
     */
    inline CognitoConfig& WithUserPool(const char* value) { SetUserPool(value); return *this;}


    /**
     * <p>The client ID for your Amazon Cognito user pool.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The client ID for your Amazon Cognito user pool.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The client ID for your Amazon Cognito user pool.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The client ID for your Amazon Cognito user pool.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The client ID for your Amazon Cognito user pool.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The client ID for your Amazon Cognito user pool.</p>
     */
    inline CognitoConfig& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The client ID for your Amazon Cognito user pool.</p>
     */
    inline CognitoConfig& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The client ID for your Amazon Cognito user pool.</p>
     */
    inline CognitoConfig& WithClientId(const char* value) { SetClientId(value); return *this;}

  private:

    Aws::String m_userPool;
    bool m_userPoolHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
