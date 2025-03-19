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
    AWS_APPFLOW_API SalesforceMetadata() = default;
    AWS_APPFLOW_API SalesforceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SalesforceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The desired authorization scope for the Salesforce account. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOAuthScopes() const { return m_oAuthScopes; }
    inline bool OAuthScopesHasBeenSet() const { return m_oAuthScopesHasBeenSet; }
    template<typename OAuthScopesT = Aws::Vector<Aws::String>>
    void SetOAuthScopes(OAuthScopesT&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = std::forward<OAuthScopesT>(value); }
    template<typename OAuthScopesT = Aws::Vector<Aws::String>>
    SalesforceMetadata& WithOAuthScopes(OAuthScopesT&& value) { SetOAuthScopes(std::forward<OAuthScopesT>(value)); return *this;}
    template<typename OAuthScopesT = Aws::String>
    SalesforceMetadata& AddOAuthScopes(OAuthScopesT&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.emplace_back(std::forward<OAuthScopesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Salesforce APIs that you can have Amazon AppFlow use when your flows
     * transfers data to or from Salesforce.</p>
     */
    inline const Aws::Vector<SalesforceDataTransferApi>& GetDataTransferApis() const { return m_dataTransferApis; }
    inline bool DataTransferApisHasBeenSet() const { return m_dataTransferApisHasBeenSet; }
    template<typename DataTransferApisT = Aws::Vector<SalesforceDataTransferApi>>
    void SetDataTransferApis(DataTransferApisT&& value) { m_dataTransferApisHasBeenSet = true; m_dataTransferApis = std::forward<DataTransferApisT>(value); }
    template<typename DataTransferApisT = Aws::Vector<SalesforceDataTransferApi>>
    SalesforceMetadata& WithDataTransferApis(DataTransferApisT&& value) { SetDataTransferApis(std::forward<DataTransferApisT>(value)); return *this;}
    inline SalesforceMetadata& AddDataTransferApis(SalesforceDataTransferApi value) { m_dataTransferApisHasBeenSet = true; m_dataTransferApis.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The OAuth 2.0 grant types that Amazon AppFlow can use when it requests an
     * access token from Salesforce. Amazon AppFlow requires an access token each time
     * it attempts to access your Salesforce records.</p> <dl>
     * <dt>AUTHORIZATION_CODE</dt> <dd> <p>Amazon AppFlow passes an authorization code
     * when it requests the access token from Salesforce. Amazon AppFlow receives the
     * authorization code from Salesforce after you log in to your Salesforce account
     * and authorize Amazon AppFlow to access your records.</p> </dd>
     * <dt>JWT_BEARER</dt> <dd> <p>Amazon AppFlow passes a JSON web token (JWT) when it
     * requests the access token from Salesforce. You provide the JWT to Amazon AppFlow
     * when you define the connection to your Salesforce account. When you use this
     * grant type, you don't need to log in to your Salesforce account to authorize
     * Amazon AppFlow to access your records.</p> </dd> </dl>  <p>The
     * CLIENT_CREDENTIALS value is not supported for Salesforce.</p> 
     */
    inline const Aws::Vector<OAuth2GrantType>& GetOauth2GrantTypesSupported() const { return m_oauth2GrantTypesSupported; }
    inline bool Oauth2GrantTypesSupportedHasBeenSet() const { return m_oauth2GrantTypesSupportedHasBeenSet; }
    template<typename Oauth2GrantTypesSupportedT = Aws::Vector<OAuth2GrantType>>
    void SetOauth2GrantTypesSupported(Oauth2GrantTypesSupportedT&& value) { m_oauth2GrantTypesSupportedHasBeenSet = true; m_oauth2GrantTypesSupported = std::forward<Oauth2GrantTypesSupportedT>(value); }
    template<typename Oauth2GrantTypesSupportedT = Aws::Vector<OAuth2GrantType>>
    SalesforceMetadata& WithOauth2GrantTypesSupported(Oauth2GrantTypesSupportedT&& value) { SetOauth2GrantTypesSupported(std::forward<Oauth2GrantTypesSupportedT>(value)); return *this;}
    inline SalesforceMetadata& AddOauth2GrantTypesSupported(OAuth2GrantType value) { m_oauth2GrantTypesSupportedHasBeenSet = true; m_oauth2GrantTypesSupported.push_back(value); return *this; }
    ///@}
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
