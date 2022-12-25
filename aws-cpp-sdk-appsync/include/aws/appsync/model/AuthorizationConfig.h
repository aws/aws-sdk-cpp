/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/AuthorizationType.h>
#include <aws/appsync/model/AwsIamConfig.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>The authorization configuration in case the HTTP endpoint requires
   * authorization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/AuthorizationConfig">AWS
   * API Reference</a></p>
   */
  class AuthorizationConfig
  {
  public:
    AWS_APPSYNC_API AuthorizationConfig();
    AWS_APPSYNC_API AuthorizationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API AuthorizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The authorization type that the HTTP endpoint requires.</p> <ul> <li> <p>
     * <b>AWS_IAM</b>: The authorization type is Signature Version 4 (SigV4).</p> </li>
     * </ul>
     */
    inline const AuthorizationType& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>The authorization type that the HTTP endpoint requires.</p> <ul> <li> <p>
     * <b>AWS_IAM</b>: The authorization type is Signature Version 4 (SigV4).</p> </li>
     * </ul>
     */
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }

    /**
     * <p>The authorization type that the HTTP endpoint requires.</p> <ul> <li> <p>
     * <b>AWS_IAM</b>: The authorization type is Signature Version 4 (SigV4).</p> </li>
     * </ul>
     */
    inline void SetAuthorizationType(const AuthorizationType& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    /**
     * <p>The authorization type that the HTTP endpoint requires.</p> <ul> <li> <p>
     * <b>AWS_IAM</b>: The authorization type is Signature Version 4 (SigV4).</p> </li>
     * </ul>
     */
    inline void SetAuthorizationType(AuthorizationType&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = std::move(value); }

    /**
     * <p>The authorization type that the HTTP endpoint requires.</p> <ul> <li> <p>
     * <b>AWS_IAM</b>: The authorization type is Signature Version 4 (SigV4).</p> </li>
     * </ul>
     */
    inline AuthorizationConfig& WithAuthorizationType(const AuthorizationType& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The authorization type that the HTTP endpoint requires.</p> <ul> <li> <p>
     * <b>AWS_IAM</b>: The authorization type is Signature Version 4 (SigV4).</p> </li>
     * </ul>
     */
    inline AuthorizationConfig& WithAuthorizationType(AuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}


    /**
     * <p>The Identity and Access Management (IAM) settings.</p>
     */
    inline const AwsIamConfig& GetAwsIamConfig() const{ return m_awsIamConfig; }

    /**
     * <p>The Identity and Access Management (IAM) settings.</p>
     */
    inline bool AwsIamConfigHasBeenSet() const { return m_awsIamConfigHasBeenSet; }

    /**
     * <p>The Identity and Access Management (IAM) settings.</p>
     */
    inline void SetAwsIamConfig(const AwsIamConfig& value) { m_awsIamConfigHasBeenSet = true; m_awsIamConfig = value; }

    /**
     * <p>The Identity and Access Management (IAM) settings.</p>
     */
    inline void SetAwsIamConfig(AwsIamConfig&& value) { m_awsIamConfigHasBeenSet = true; m_awsIamConfig = std::move(value); }

    /**
     * <p>The Identity and Access Management (IAM) settings.</p>
     */
    inline AuthorizationConfig& WithAwsIamConfig(const AwsIamConfig& value) { SetAwsIamConfig(value); return *this;}

    /**
     * <p>The Identity and Access Management (IAM) settings.</p>
     */
    inline AuthorizationConfig& WithAwsIamConfig(AwsIamConfig&& value) { SetAwsIamConfig(std::move(value)); return *this;}

  private:

    AuthorizationType m_authorizationType;
    bool m_authorizationTypeHasBeenSet = false;

    AwsIamConfig m_awsIamConfig;
    bool m_awsIamConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
