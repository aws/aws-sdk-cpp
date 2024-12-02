/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/model/CreateConnectionOAuthClientRequestParameters.h>
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
   * <p>Contains the OAuth authorization parameters to use for the
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/CreateConnectionOAuthRequestParameters">AWS
   * API Reference</a></p>
   */
  class CreateConnectionOAuthRequestParameters
  {
  public:
    AWS_EVENTBRIDGE_API CreateConnectionOAuthRequestParameters();
    AWS_EVENTBRIDGE_API CreateConnectionOAuthRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API CreateConnectionOAuthRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The client parameters for OAuth authorization.</p>
     */
    inline const CreateConnectionOAuthClientRequestParameters& GetClientParameters() const{ return m_clientParameters; }
    inline bool ClientParametersHasBeenSet() const { return m_clientParametersHasBeenSet; }
    inline void SetClientParameters(const CreateConnectionOAuthClientRequestParameters& value) { m_clientParametersHasBeenSet = true; m_clientParameters = value; }
    inline void SetClientParameters(CreateConnectionOAuthClientRequestParameters&& value) { m_clientParametersHasBeenSet = true; m_clientParameters = std::move(value); }
    inline CreateConnectionOAuthRequestParameters& WithClientParameters(const CreateConnectionOAuthClientRequestParameters& value) { SetClientParameters(value); return *this;}
    inline CreateConnectionOAuthRequestParameters& WithClientParameters(CreateConnectionOAuthClientRequestParameters&& value) { SetClientParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the authorization endpoint when OAuth is specified as the
     * authorization type.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const{ return m_authorizationEndpoint; }
    inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }
    inline void SetAuthorizationEndpoint(const Aws::String& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = value; }
    inline void SetAuthorizationEndpoint(Aws::String&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::move(value); }
    inline void SetAuthorizationEndpoint(const char* value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint.assign(value); }
    inline CreateConnectionOAuthRequestParameters& WithAuthorizationEndpoint(const Aws::String& value) { SetAuthorizationEndpoint(value); return *this;}
    inline CreateConnectionOAuthRequestParameters& WithAuthorizationEndpoint(Aws::String&& value) { SetAuthorizationEndpoint(std::move(value)); return *this;}
    inline CreateConnectionOAuthRequestParameters& WithAuthorizationEndpoint(const char* value) { SetAuthorizationEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use for the authorization request.</p>
     */
    inline const ConnectionOAuthHttpMethod& GetHttpMethod() const{ return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(const ConnectionOAuthHttpMethod& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline void SetHttpMethod(ConnectionOAuthHttpMethod&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }
    inline CreateConnectionOAuthRequestParameters& WithHttpMethod(const ConnectionOAuthHttpMethod& value) { SetHttpMethod(value); return *this;}
    inline CreateConnectionOAuthRequestParameters& WithHttpMethod(ConnectionOAuthHttpMethod&& value) { SetHttpMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the additional parameters to use for the connection.</p>
     */
    inline const ConnectionHttpParameters& GetOAuthHttpParameters() const{ return m_oAuthHttpParameters; }
    inline bool OAuthHttpParametersHasBeenSet() const { return m_oAuthHttpParametersHasBeenSet; }
    inline void SetOAuthHttpParameters(const ConnectionHttpParameters& value) { m_oAuthHttpParametersHasBeenSet = true; m_oAuthHttpParameters = value; }
    inline void SetOAuthHttpParameters(ConnectionHttpParameters&& value) { m_oAuthHttpParametersHasBeenSet = true; m_oAuthHttpParameters = std::move(value); }
    inline CreateConnectionOAuthRequestParameters& WithOAuthHttpParameters(const ConnectionHttpParameters& value) { SetOAuthHttpParameters(value); return *this;}
    inline CreateConnectionOAuthRequestParameters& WithOAuthHttpParameters(ConnectionHttpParameters&& value) { SetOAuthHttpParameters(std::move(value)); return *this;}
    ///@}
  private:

    CreateConnectionOAuthClientRequestParameters m_clientParameters;
    bool m_clientParametersHasBeenSet = false;

    Aws::String m_authorizationEndpoint;
    bool m_authorizationEndpointHasBeenSet = false;

    ConnectionOAuthHttpMethod m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    ConnectionHttpParameters m_oAuthHttpParameters;
    bool m_oAuthHttpParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
