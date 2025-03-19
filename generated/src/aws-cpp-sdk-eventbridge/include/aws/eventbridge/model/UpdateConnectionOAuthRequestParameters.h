/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/model/UpdateConnectionOAuthClientRequestParameters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ConnectionOAuthHttpMethod.h>
#include <aws/eventbridge/model/ConnectionHttpParameters.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>The OAuth request parameters to use for the connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/UpdateConnectionOAuthRequestParameters">AWS
   * API Reference</a></p>
   */
  class UpdateConnectionOAuthRequestParameters
  {
  public:
    AWS_EVENTBRIDGE_API UpdateConnectionOAuthRequestParameters() = default;
    AWS_EVENTBRIDGE_API UpdateConnectionOAuthRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API UpdateConnectionOAuthRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The client parameters to use for the connection when OAuth is specified as
     * the authorization type.</p>
     */
    inline const UpdateConnectionOAuthClientRequestParameters& GetClientParameters() const { return m_clientParameters; }
    inline bool ClientParametersHasBeenSet() const { return m_clientParametersHasBeenSet; }
    template<typename ClientParametersT = UpdateConnectionOAuthClientRequestParameters>
    void SetClientParameters(ClientParametersT&& value) { m_clientParametersHasBeenSet = true; m_clientParameters = std::forward<ClientParametersT>(value); }
    template<typename ClientParametersT = UpdateConnectionOAuthClientRequestParameters>
    UpdateConnectionOAuthRequestParameters& WithClientParameters(ClientParametersT&& value) { SetClientParameters(std::forward<ClientParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the authorization endpoint when OAuth is specified as the
     * authorization type.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const { return m_authorizationEndpoint; }
    inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }
    template<typename AuthorizationEndpointT = Aws::String>
    void SetAuthorizationEndpoint(AuthorizationEndpointT&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::forward<AuthorizationEndpointT>(value); }
    template<typename AuthorizationEndpointT = Aws::String>
    UpdateConnectionOAuthRequestParameters& WithAuthorizationEndpoint(AuthorizationEndpointT&& value) { SetAuthorizationEndpoint(std::forward<AuthorizationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method used to connect to the HTTP endpoint.</p>
     */
    inline ConnectionOAuthHttpMethod GetHttpMethod() const { return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(ConnectionOAuthHttpMethod value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline UpdateConnectionOAuthRequestParameters& WithHttpMethod(ConnectionOAuthHttpMethod value) { SetHttpMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional HTTP parameters used for the OAuth authorization request.</p>
     */
    inline const ConnectionHttpParameters& GetOAuthHttpParameters() const { return m_oAuthHttpParameters; }
    inline bool OAuthHttpParametersHasBeenSet() const { return m_oAuthHttpParametersHasBeenSet; }
    template<typename OAuthHttpParametersT = ConnectionHttpParameters>
    void SetOAuthHttpParameters(OAuthHttpParametersT&& value) { m_oAuthHttpParametersHasBeenSet = true; m_oAuthHttpParameters = std::forward<OAuthHttpParametersT>(value); }
    template<typename OAuthHttpParametersT = ConnectionHttpParameters>
    UpdateConnectionOAuthRequestParameters& WithOAuthHttpParameters(OAuthHttpParametersT&& value) { SetOAuthHttpParameters(std::forward<OAuthHttpParametersT>(value)); return *this;}
    ///@}
  private:

    UpdateConnectionOAuthClientRequestParameters m_clientParameters;
    bool m_clientParametersHasBeenSet = false;

    Aws::String m_authorizationEndpoint;
    bool m_authorizationEndpointHasBeenSet = false;

    ConnectionOAuthHttpMethod m_httpMethod{ConnectionOAuthHttpMethod::NOT_SET};
    bool m_httpMethodHasBeenSet = false;

    ConnectionHttpParameters m_oAuthHttpParameters;
    bool m_oAuthHttpParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
