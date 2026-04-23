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
#include <aws/es/ElasticsearchService_EXPORTS.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Options to specify the Cognito user and identity pools for Kibana
   * authentication. For more information, see <a
   * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
   * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CognitoOptions">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API CognitoOptions
  {
  public:
    CognitoOptions();
    CognitoOptions(Aws::Utils::Json::JsonView jsonValue);
    CognitoOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the option to enable Cognito for Kibana authentication.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies the option to enable Cognito for Kibana authentication.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies the option to enable Cognito for Kibana authentication.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies the option to enable Cognito for Kibana authentication.</p>
     */
    inline CognitoOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Specifies the Cognito user pool ID for Kibana authentication.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>Specifies the Cognito user pool ID for Kibana authentication.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>Specifies the Cognito user pool ID for Kibana authentication.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>Specifies the Cognito user pool ID for Kibana authentication.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>Specifies the Cognito user pool ID for Kibana authentication.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>Specifies the Cognito user pool ID for Kibana authentication.</p>
     */
    inline CognitoOptions& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>Specifies the Cognito user pool ID for Kibana authentication.</p>
     */
    inline CognitoOptions& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>Specifies the Cognito user pool ID for Kibana authentication.</p>
     */
    inline CognitoOptions& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>Specifies the Cognito identity pool ID for Kibana authentication.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>Specifies the Cognito identity pool ID for Kibana authentication.</p>
     */
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }

    /**
     * <p>Specifies the Cognito identity pool ID for Kibana authentication.</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * <p>Specifies the Cognito identity pool ID for Kibana authentication.</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::move(value); }

    /**
     * <p>Specifies the Cognito identity pool ID for Kibana authentication.</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * <p>Specifies the Cognito identity pool ID for Kibana authentication.</p>
     */
    inline CognitoOptions& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>Specifies the Cognito identity pool ID for Kibana authentication.</p>
     */
    inline CognitoOptions& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>Specifies the Cognito identity pool ID for Kibana authentication.</p>
     */
    inline CognitoOptions& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}


    /**
     * <p>Specifies the role ARN that provides Elasticsearch permissions for accessing
     * Cognito resources.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>Specifies the role ARN that provides Elasticsearch permissions for accessing
     * Cognito resources.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>Specifies the role ARN that provides Elasticsearch permissions for accessing
     * Cognito resources.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>Specifies the role ARN that provides Elasticsearch permissions for accessing
     * Cognito resources.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>Specifies the role ARN that provides Elasticsearch permissions for accessing
     * Cognito resources.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>Specifies the role ARN that provides Elasticsearch permissions for accessing
     * Cognito resources.</p>
     */
    inline CognitoOptions& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>Specifies the role ARN that provides Elasticsearch permissions for accessing
     * Cognito resources.</p>
     */
    inline CognitoOptions& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the role ARN that provides Elasticsearch permissions for accessing
     * Cognito resources.</p>
     */
    inline CognitoOptions& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
