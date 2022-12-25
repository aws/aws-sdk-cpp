/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters required to enable Cognito authentication for an
   * OpenSearch Service domain. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html">Configuring
   * Amazon Cognito authentication for OpenSearch Dashboards</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CognitoOptions">AWS
   * API Reference</a></p>
   */
  class CognitoOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API CognitoOptions();
    AWS_OPENSEARCHSERVICE_API CognitoOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API CognitoOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to enable or disable Amazon Cognito authentication for OpenSearch
     * Dashboards.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether to enable or disable Amazon Cognito authentication for OpenSearch
     * Dashboards.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether to enable or disable Amazon Cognito authentication for OpenSearch
     * Dashboards.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether to enable or disable Amazon Cognito authentication for OpenSearch
     * Dashboards.</p>
     */
    inline CognitoOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The Amazon Cognito user pool ID that you want OpenSearch Service to use for
     * OpenSearch Dashboards authentication.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The Amazon Cognito user pool ID that you want OpenSearch Service to use for
     * OpenSearch Dashboards authentication.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The Amazon Cognito user pool ID that you want OpenSearch Service to use for
     * OpenSearch Dashboards authentication.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The Amazon Cognito user pool ID that you want OpenSearch Service to use for
     * OpenSearch Dashboards authentication.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The Amazon Cognito user pool ID that you want OpenSearch Service to use for
     * OpenSearch Dashboards authentication.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The Amazon Cognito user pool ID that you want OpenSearch Service to use for
     * OpenSearch Dashboards authentication.</p>
     */
    inline CognitoOptions& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The Amazon Cognito user pool ID that you want OpenSearch Service to use for
     * OpenSearch Dashboards authentication.</p>
     */
    inline CognitoOptions& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Cognito user pool ID that you want OpenSearch Service to use for
     * OpenSearch Dashboards authentication.</p>
     */
    inline CognitoOptions& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The Amazon Cognito identity pool ID that you want OpenSearch Service to use
     * for OpenSearch Dashboards authentication.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>The Amazon Cognito identity pool ID that you want OpenSearch Service to use
     * for OpenSearch Dashboards authentication.</p>
     */
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }

    /**
     * <p>The Amazon Cognito identity pool ID that you want OpenSearch Service to use
     * for OpenSearch Dashboards authentication.</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * <p>The Amazon Cognito identity pool ID that you want OpenSearch Service to use
     * for OpenSearch Dashboards authentication.</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::move(value); }

    /**
     * <p>The Amazon Cognito identity pool ID that you want OpenSearch Service to use
     * for OpenSearch Dashboards authentication.</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * <p>The Amazon Cognito identity pool ID that you want OpenSearch Service to use
     * for OpenSearch Dashboards authentication.</p>
     */
    inline CognitoOptions& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>The Amazon Cognito identity pool ID that you want OpenSearch Service to use
     * for OpenSearch Dashboards authentication.</p>
     */
    inline CognitoOptions& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Cognito identity pool ID that you want OpenSearch Service to use
     * for OpenSearch Dashboards authentication.</p>
     */
    inline CognitoOptions& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}


    /**
     * <p>The <code>AmazonOpenSearchServiceCognitoAccess</code> role that allows
     * OpenSearch Service to configure your user pool and identity pool.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The <code>AmazonOpenSearchServiceCognitoAccess</code> role that allows
     * OpenSearch Service to configure your user pool and identity pool.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The <code>AmazonOpenSearchServiceCognitoAccess</code> role that allows
     * OpenSearch Service to configure your user pool and identity pool.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The <code>AmazonOpenSearchServiceCognitoAccess</code> role that allows
     * OpenSearch Service to configure your user pool and identity pool.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The <code>AmazonOpenSearchServiceCognitoAccess</code> role that allows
     * OpenSearch Service to configure your user pool and identity pool.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The <code>AmazonOpenSearchServiceCognitoAccess</code> role that allows
     * OpenSearch Service to configure your user pool and identity pool.</p>
     */
    inline CognitoOptions& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The <code>AmazonOpenSearchServiceCognitoAccess</code> role that allows
     * OpenSearch Service to configure your user pool and identity pool.</p>
     */
    inline CognitoOptions& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The <code>AmazonOpenSearchServiceCognitoAccess</code> role that allows
     * OpenSearch Service to configure your user pool and identity pool.</p>
     */
    inline CognitoOptions& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
