/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/SalesforceDataTransferApi.h>
#include <aws/appflow/model/OAuth2GrantType.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector metadata specific to Salesforce. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SalesforceMetadata">AWS
   * API Reference</a></p>
   */
  class SalesforceMetadata
  {
  public:
    AWS_APPFLOW_API SalesforceMetadata();
    AWS_APPFLOW_API SalesforceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SalesforceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOAuthScopes() const{ return m_oAuthScopes; }

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline bool OAuthScopesHasBeenSet() const { return m_oAuthScopesHasBeenSet; }

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline void SetOAuthScopes(const Aws::Vector<Aws::String>& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = value; }

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline void SetOAuthScopes(Aws::Vector<Aws::String>&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = std::move(value); }

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline SalesforceMetadata& WithOAuthScopes(const Aws::Vector<Aws::String>& value) { SetOAuthScopes(value); return *this;}

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline SalesforceMetadata& WithOAuthScopes(Aws::Vector<Aws::String>&& value) { SetOAuthScopes(std::move(value)); return *this;}

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline SalesforceMetadata& AddOAuthScopes(const Aws::String& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(value); return *this; }

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline SalesforceMetadata& AddOAuthScopes(Aws::String&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(std::move(value)); return *this; }

    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline SalesforceMetadata& AddOAuthScopes(const char* value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(value); return *this; }


    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline const Aws::Vector<SalesforceDataTransferApi>& GetDataTransferApis() const{ return m_dataTransferApis; }

    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline bool DataTransferApisHasBeenSet() const { return m_dataTransferApisHasBeenSet; }

    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline void SetDataTransferApis(const Aws::Vector<SalesforceDataTransferApi>& value) { m_dataTransferApisHasBeenSet = true; m_dataTransferApis = value; }

    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline void SetDataTransferApis(Aws::Vector<SalesforceDataTransferApi>&& value) { m_dataTransferApisHasBeenSet = true; m_dataTransferApis = std::move(value); }

    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline SalesforceMetadata& WithDataTransferApis(const Aws::Vector<SalesforceDataTransferApi>& value) { SetDataTransferApis(value); return *this;}

    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline SalesforceMetadata& WithDataTransferApis(Aws::Vector<SalesforceDataTransferApi>&& value) { SetDataTransferApis(std::move(value)); return *this;}

    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline SalesforceMetadata& AddDataTransferApis(const SalesforceDataTransferApi& value) { m_dataTransferApisHasBeenSet = true; m_dataTransferApis.push_back(value); return *this; }

    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline SalesforceMetadata& AddDataTransferApis(SalesforceDataTransferApi&& value) { m_dataTransferApisHasBeenSet = true; m_dataTransferApis.push_back(std::move(value)); return *this; }


    /**
     * <p>The OAuth 2.0 grant types that Amazon AppFlow can use when it requests an
     * access token from Salesforce. Amazon AppFlow requires an access token each time
     * it attempts to access your Salesforce records.</p> <dl>
     * <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon AppFlow passes an authorization code
     * when it requests the access token from Salesforce. Amazon AppFlow receives the
     * authorization code from Salesforce after you log in to your Salesforce account
     * and authorize Amazon AppFlow to access your records.</p> </dd>
     * <dt>CLIENT_CREDENTIALS</dt> <dd> <p>Amazon AppFlow passes client credentials (a
     * client ID and client secret) when it requests the access token from Salesforce.
     * You provide these credentials to Amazon AppFlow when you define the connection
     * to your Salesforce account.</p> </dd> <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow
     * passes a JSON web token (JWT) when it requests the access token from Salesforce.
     * You provide the JWT to Amazon AppFlow when you define the connection to your
     * Salesforce account. When you use this grant type, you don't need to log in to
     * your Salesforce account to authorize Amazon AppFlow to access your records.</p>
     * </dd> </dl>
     */
    inline const Aws::Vector<OAuth2GrantType>& GetOauth2GrantTypesSupported() const{ return m_oauth2GrantTypesSupported; }

    /**
     * <p>The OAuth 2.0 grant types that Amazon AppFlow can use when it requests an
     * access token from Salesforce. Amazon AppFlow requires an access token each time
     * it attempts to access your Salesforce records.</p> <dl>
     * <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon AppFlow passes an authorization code
     * when it requests the access token from Salesforce. Amazon AppFlow receives the
     * authorization code from Salesforce after you log in to your Salesforce account
     * and authorize Amazon AppFlow to access your records.</p> </dd>
     * <dt>CLIENT_CREDENTIALS</dt> <dd> <p>Amazon AppFlow passes client credentials (a
     * client ID and client secret) when it requests the access token from Salesforce.
     * You provide these credentials to Amazon AppFlow when you define the connection
     * to your Salesforce account.</p> </dd> <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow
     * passes a JSON web token (JWT) when it requests the access token from Salesforce.
     * You provide the JWT to Amazon AppFlow when you define the connection to your
     * Salesforce account. When you use this grant type, you don't need to log in to
     * your Salesforce account to authorize Amazon AppFlow to access your records.</p>
     * </dd> </dl>
     */
    inline bool Oauth2GrantTypesSupportedHasBeenSet() const { return m_oauth2GrantTypesSupportedHasBeenSet; }

    /**
     * <p>The OAuth 2.0 grant types that Amazon AppFlow can use when it requests an
     * access token from Salesforce. Amazon AppFlow requires an access token each time
     * it attempts to access your Salesforce records.</p> <dl>
     * <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon AppFlow passes an authorization code
     * when it requests the access token from Salesforce. Amazon AppFlow receives the
     * authorization code from Salesforce after you log in to your Salesforce account
     * and authorize Amazon AppFlow to access your records.</p> </dd>
     * <dt>CLIENT_CREDENTIALS</dt> <dd> <p>Amazon AppFlow passes client credentials (a
     * client ID and client secret) when it requests the access token from Salesforce.
     * You provide these credentials to Amazon AppFlow when you define the connection
     * to your Salesforce account.</p> </dd> <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow
     * passes a JSON web token (JWT) when it requests the access token from Salesforce.
     * You provide the JWT to Amazon AppFlow when you define the connection to your
     * Salesforce account. When you use this grant type, you don't need to log in to
     * your Salesforce account to authorize Amazon AppFlow to access your records.</p>
     * </dd> </dl>
     */
    inline void SetOauth2GrantTypesSupported(const Aws::Vector<OAuth2GrantType>& value) { m_oauth2GrantTypesSupportedHasBeenSet = true; m_oauth2GrantTypesSupported = value; }

    /**
     * <p>The OAuth 2.0 grant types that Amazon AppFlow can use when it requests an
     * access token from Salesforce. Amazon AppFlow requires an access token each time
     * it attempts to access your Salesforce records.</p> <dl>
     * <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon AppFlow passes an authorization code
     * when it requests the access token from Salesforce. Amazon AppFlow receives the
     * authorization code from Salesforce after you log in to your Salesforce account
     * and authorize Amazon AppFlow to access your records.</p> </dd>
     * <dt>CLIENT_CREDENTIALS</dt> <dd> <p>Amazon AppFlow passes client credentials (a
     * client ID and client secret) when it requests the access token from Salesforce.
     * You provide these credentials to Amazon AppFlow when you define the connection
     * to your Salesforce account.</p> </dd> <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow
     * passes a JSON web token (JWT) when it requests the access token from Salesforce.
     * You provide the JWT to Amazon AppFlow when you define the connection to your
     * Salesforce account. When you use this grant type, you don't need to log in to
     * your Salesforce account to authorize Amazon AppFlow to access your records.</p>
     * </dd> </dl>
     */
    inline void SetOauth2GrantTypesSupported(Aws::Vector<OAuth2GrantType>&& value) { m_oauth2GrantTypesSupportedHasBeenSet = true; m_oauth2GrantTypesSupported = std::move(value); }

    /**
     * <p>The OAuth 2.0 grant types that Amazon AppFlow can use when it requests an
     * access token from Salesforce. Amazon AppFlow requires an access token each time
     * it attempts to access your Salesforce records.</p> <dl>
     * <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon AppFlow passes an authorization code
     * when it requests the access token from Salesforce. Amazon AppFlow receives the
     * authorization code from Salesforce after you log in to your Salesforce account
     * and authorize Amazon AppFlow to access your records.</p> </dd>
     * <dt>CLIENT_CREDENTIALS</dt> <dd> <p>Amazon AppFlow passes client credentials (a
     * client ID and client secret) when it requests the access token from Salesforce.
     * You provide these credentials to Amazon AppFlow when you define the connection
     * to your Salesforce account.</p> </dd> <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow
     * passes a JSON web token (JWT) when it requests the access token from Salesforce.
     * You provide the JWT to Amazon AppFlow when you define the connection to your
     * Salesforce account. When you use this grant type, you don't need to log in to
     * your Salesforce account to authorize Amazon AppFlow to access your records.</p>
     * </dd> </dl>
     */
    inline SalesforceMetadata& WithOauth2GrantTypesSupported(const Aws::Vector<OAuth2GrantType>& value) { SetOauth2GrantTypesSupported(value); return *this;}

    /**
     * <p>The OAuth 2.0 grant types that Amazon AppFlow can use when it requests an
     * access token from Salesforce. Amazon AppFlow requires an access token each time
     * it attempts to access your Salesforce records.</p> <dl>
     * <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon AppFlow passes an authorization code
     * when it requests the access token from Salesforce. Amazon AppFlow receives the
     * authorization code from Salesforce after you log in to your Salesforce account
     * and authorize Amazon AppFlow to access your records.</p> </dd>
     * <dt>CLIENT_CREDENTIALS</dt> <dd> <p>Amazon AppFlow passes client credentials (a
     * client ID and client secret) when it requests the access token from Salesforce.
     * You provide these credentials to Amazon AppFlow when you define the connection
     * to your Salesforce account.</p> </dd> <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow
     * passes a JSON web token (JWT) when it requests the access token from Salesforce.
     * You provide the JWT to Amazon AppFlow when you define the connection to your
     * Salesforce account. When you use this grant type, you don't need to log in to
     * your Salesforce account to authorize Amazon AppFlow to access your records.</p>
     * </dd> </dl>
     */
    inline SalesforceMetadata& WithOauth2GrantTypesSupported(Aws::Vector<OAuth2GrantType>&& value) { SetOauth2GrantTypesSupported(std::move(value)); return *this;}

    /**
     * <p>The OAuth 2.0 grant types that Amazon AppFlow can use when it requests an
     * access token from Salesforce. Amazon AppFlow requires an access token each time
     * it attempts to access your Salesforce records.</p> <dl>
     * <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon AppFlow passes an authorization code
     * when it requests the access token from Salesforce. Amazon AppFlow receives the
     * authorization code from Salesforce after you log in to your Salesforce account
     * and authorize Amazon AppFlow to access your records.</p> </dd>
     * <dt>CLIENT_CREDENTIALS</dt> <dd> <p>Amazon AppFlow passes client credentials (a
     * client ID and client secret) when it requests the access token from Salesforce.
     * You provide these credentials to Amazon AppFlow when you define the connection
     * to your Salesforce account.</p> </dd> <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow
     * passes a JSON web token (JWT) when it requests the access token from Salesforce.
     * You provide the JWT to Amazon AppFlow when you define the connection to your
     * Salesforce account. When you use this grant type, you don't need to log in to
     * your Salesforce account to authorize Amazon AppFlow to access your records.</p>
     * </dd> </dl>
     */
    inline SalesforceMetadata& AddOauth2GrantTypesSupported(const OAuth2GrantType& value) { m_oauth2GrantTypesSupportedHasBeenSet = true; m_oauth2GrantTypesSupported.push_back(value); return *this; }

    /**
     * <p>The OAuth 2.0 grant types that Amazon AppFlow can use when it requests an
     * access token from Salesforce. Amazon AppFlow requires an access token each time
     * it attempts to access your Salesforce records.</p> <dl>
     * <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon AppFlow passes an authorization code
     * when it requests the access token from Salesforce. Amazon AppFlow receives the
     * authorization code from Salesforce after you log in to your Salesforce account
     * and authorize Amazon AppFlow to access your records.</p> </dd>
     * <dt>CLIENT_CREDENTIALS</dt> <dd> <p>Amazon AppFlow passes client credentials (a
     * client ID and client secret) when it requests the access token from Salesforce.
     * You provide these credentials to Amazon AppFlow when you define the connection
     * to your Salesforce account.</p> </dd> <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow
     * passes a JSON web token (JWT) when it requests the access token from Salesforce.
     * You provide the JWT to Amazon AppFlow when you define the connection to your
     * Salesforce account. When you use this grant type, you don't need to log in to
     * your Salesforce account to authorize Amazon AppFlow to access your records.</p>
     * </dd> </dl>
     */
    inline SalesforceMetadata& AddOauth2GrantTypesSupported(OAuth2GrantType&& value) { m_oauth2GrantTypesSupportedHasBeenSet = true; m_oauth2GrantTypesSupported.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_oAuthScopes;
    bool m_oAuthScopesHasBeenSet = false;

    Aws::Vector<SalesforceDataTransferApi> m_dataTransferApis;
    bool m_dataTransferApisHasBeenSet = false;

    Aws::Vector<OAuth2GrantType> m_oauth2GrantTypesSupported;
    bool m_oauth2GrantTypesSupportedHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
