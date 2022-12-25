/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/model/ConnectionOAuthClientResponseParameters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ConnectionOAuthHttpMethod.h>
#include <aws/events/model/ConnectionHttpParameters.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>Contains the response parameters when OAuth is specified as the authorization
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ConnectionOAuthResponseParameters">AWS
   * API Reference</a></p>
   */
  class ConnectionOAuthResponseParameters
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ConnectionOAuthResponseParameters();
    AWS_CLOUDWATCHEVENTS_API ConnectionOAuthResponseParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API ConnectionOAuthResponseParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>ConnectionOAuthClientResponseParameters</code> object that contains
     * details about the client parameters returned when OAuth is specified as the
     * authorization type.</p>
     */
    inline const ConnectionOAuthClientResponseParameters& GetClientParameters() const{ return m_clientParameters; }

    /**
     * <p>A <code>ConnectionOAuthClientResponseParameters</code> object that contains
     * details about the client parameters returned when OAuth is specified as the
     * authorization type.</p>
     */
    inline bool ClientParametersHasBeenSet() const { return m_clientParametersHasBeenSet; }

    /**
     * <p>A <code>ConnectionOAuthClientResponseParameters</code> object that contains
     * details about the client parameters returned when OAuth is specified as the
     * authorization type.</p>
     */
    inline void SetClientParameters(const ConnectionOAuthClientResponseParameters& value) { m_clientParametersHasBeenSet = true; m_clientParameters = value; }

    /**
     * <p>A <code>ConnectionOAuthClientResponseParameters</code> object that contains
     * details about the client parameters returned when OAuth is specified as the
     * authorization type.</p>
     */
    inline void SetClientParameters(ConnectionOAuthClientResponseParameters&& value) { m_clientParametersHasBeenSet = true; m_clientParameters = std::move(value); }

    /**
     * <p>A <code>ConnectionOAuthClientResponseParameters</code> object that contains
     * details about the client parameters returned when OAuth is specified as the
     * authorization type.</p>
     */
    inline ConnectionOAuthResponseParameters& WithClientParameters(const ConnectionOAuthClientResponseParameters& value) { SetClientParameters(value); return *this;}

    /**
     * <p>A <code>ConnectionOAuthClientResponseParameters</code> object that contains
     * details about the client parameters returned when OAuth is specified as the
     * authorization type.</p>
     */
    inline ConnectionOAuthResponseParameters& WithClientParameters(ConnectionOAuthClientResponseParameters&& value) { SetClientParameters(std::move(value)); return *this;}


    /**
     * <p>The URL to the HTTP endpoint that authorized the request.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const{ return m_authorizationEndpoint; }

    /**
     * <p>The URL to the HTTP endpoint that authorized the request.</p>
     */
    inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }

    /**
     * <p>The URL to the HTTP endpoint that authorized the request.</p>
     */
    inline void SetAuthorizationEndpoint(const Aws::String& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = value; }

    /**
     * <p>The URL to the HTTP endpoint that authorized the request.</p>
     */
    inline void SetAuthorizationEndpoint(Aws::String&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::move(value); }

    /**
     * <p>The URL to the HTTP endpoint that authorized the request.</p>
     */
    inline void SetAuthorizationEndpoint(const char* value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint.assign(value); }

    /**
     * <p>The URL to the HTTP endpoint that authorized the request.</p>
     */
    inline ConnectionOAuthResponseParameters& WithAuthorizationEndpoint(const Aws::String& value) { SetAuthorizationEndpoint(value); return *this;}

    /**
     * <p>The URL to the HTTP endpoint that authorized the request.</p>
     */
    inline ConnectionOAuthResponseParameters& WithAuthorizationEndpoint(Aws::String&& value) { SetAuthorizationEndpoint(std::move(value)); return *this;}

    /**
     * <p>The URL to the HTTP endpoint that authorized the request.</p>
     */
    inline ConnectionOAuthResponseParameters& WithAuthorizationEndpoint(const char* value) { SetAuthorizationEndpoint(value); return *this;}


    /**
     * <p>The method used to connect to the HTTP endpoint.</p>
     */
    inline const ConnectionOAuthHttpMethod& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>The method used to connect to the HTTP endpoint.</p>
     */
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }

    /**
     * <p>The method used to connect to the HTTP endpoint.</p>
     */
    inline void SetHttpMethod(const ConnectionOAuthHttpMethod& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>The method used to connect to the HTTP endpoint.</p>
     */
    inline void SetHttpMethod(ConnectionOAuthHttpMethod&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }

    /**
     * <p>The method used to connect to the HTTP endpoint.</p>
     */
    inline ConnectionOAuthResponseParameters& WithHttpMethod(const ConnectionOAuthHttpMethod& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The method used to connect to the HTTP endpoint.</p>
     */
    inline ConnectionOAuthResponseParameters& WithHttpMethod(ConnectionOAuthHttpMethod&& value) { SetHttpMethod(std::move(value)); return *this;}


    /**
     * <p>The additional HTTP parameters used for the OAuth authorization request.</p>
     */
    inline const ConnectionHttpParameters& GetOAuthHttpParameters() const{ return m_oAuthHttpParameters; }

    /**
     * <p>The additional HTTP parameters used for the OAuth authorization request.</p>
     */
    inline bool OAuthHttpParametersHasBeenSet() const { return m_oAuthHttpParametersHasBeenSet; }

    /**
     * <p>The additional HTTP parameters used for the OAuth authorization request.</p>
     */
    inline void SetOAuthHttpParameters(const ConnectionHttpParameters& value) { m_oAuthHttpParametersHasBeenSet = true; m_oAuthHttpParameters = value; }

    /**
     * <p>The additional HTTP parameters used for the OAuth authorization request.</p>
     */
    inline void SetOAuthHttpParameters(ConnectionHttpParameters&& value) { m_oAuthHttpParametersHasBeenSet = true; m_oAuthHttpParameters = std::move(value); }

    /**
     * <p>The additional HTTP parameters used for the OAuth authorization request.</p>
     */
    inline ConnectionOAuthResponseParameters& WithOAuthHttpParameters(const ConnectionHttpParameters& value) { SetOAuthHttpParameters(value); return *this;}

    /**
     * <p>The additional HTTP parameters used for the OAuth authorization request.</p>
     */
    inline ConnectionOAuthResponseParameters& WithOAuthHttpParameters(ConnectionHttpParameters&& value) { SetOAuthHttpParameters(std::move(value)); return *this;}

  private:

    ConnectionOAuthClientResponseParameters m_clientParameters;
    bool m_clientParametersHasBeenSet = false;

    Aws::String m_authorizationEndpoint;
    bool m_authorizationEndpointHasBeenSet = false;

    ConnectionOAuthHttpMethod m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    ConnectionHttpParameters m_oAuthHttpParameters;
    bool m_oAuthHttpParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
