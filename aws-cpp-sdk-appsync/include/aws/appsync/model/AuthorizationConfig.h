/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>The authorization config in case the HTTP endpoint requires
   * authorization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/AuthorizationConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPSYNC_API AuthorizationConfig
  {
  public:
    AuthorizationConfig();
    AuthorizationConfig(Aws::Utils::Json::JsonView jsonValue);
    AuthorizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The authorization type required by the HTTP endpoint.</p> <ul> <li> <p>
     * <b>AWS_IAM</b>: The authorization type is Sigv4.</p> </li> </ul>
     */
    inline const AuthorizationType& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>The authorization type required by the HTTP endpoint.</p> <ul> <li> <p>
     * <b>AWS_IAM</b>: The authorization type is Sigv4.</p> </li> </ul>
     */
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }

    /**
     * <p>The authorization type required by the HTTP endpoint.</p> <ul> <li> <p>
     * <b>AWS_IAM</b>: The authorization type is Sigv4.</p> </li> </ul>
     */
    inline void SetAuthorizationType(const AuthorizationType& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    /**
     * <p>The authorization type required by the HTTP endpoint.</p> <ul> <li> <p>
     * <b>AWS_IAM</b>: The authorization type is Sigv4.</p> </li> </ul>
     */
    inline void SetAuthorizationType(AuthorizationType&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = std::move(value); }

    /**
     * <p>The authorization type required by the HTTP endpoint.</p> <ul> <li> <p>
     * <b>AWS_IAM</b>: The authorization type is Sigv4.</p> </li> </ul>
     */
    inline AuthorizationConfig& WithAuthorizationType(const AuthorizationType& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The authorization type required by the HTTP endpoint.</p> <ul> <li> <p>
     * <b>AWS_IAM</b>: The authorization type is Sigv4.</p> </li> </ul>
     */
    inline AuthorizationConfig& WithAuthorizationType(AuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}


    /**
     * <p>The AWS IAM settings.</p>
     */
    inline const AwsIamConfig& GetAwsIamConfig() const{ return m_awsIamConfig; }

    /**
     * <p>The AWS IAM settings.</p>
     */
    inline bool AwsIamConfigHasBeenSet() const { return m_awsIamConfigHasBeenSet; }

    /**
     * <p>The AWS IAM settings.</p>
     */
    inline void SetAwsIamConfig(const AwsIamConfig& value) { m_awsIamConfigHasBeenSet = true; m_awsIamConfig = value; }

    /**
     * <p>The AWS IAM settings.</p>
     */
    inline void SetAwsIamConfig(AwsIamConfig&& value) { m_awsIamConfigHasBeenSet = true; m_awsIamConfig = std::move(value); }

    /**
     * <p>The AWS IAM settings.</p>
     */
    inline AuthorizationConfig& WithAwsIamConfig(const AwsIamConfig& value) { SetAwsIamConfig(value); return *this;}

    /**
     * <p>The AWS IAM settings.</p>
     */
    inline AuthorizationConfig& WithAwsIamConfig(AwsIamConfig&& value) { SetAwsIamConfig(std::move(value)); return *this;}

  private:

    AuthorizationType m_authorizationType;
    bool m_authorizationTypeHasBeenSet;

    AwsIamConfig m_awsIamConfig;
    bool m_awsIamConfigHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
