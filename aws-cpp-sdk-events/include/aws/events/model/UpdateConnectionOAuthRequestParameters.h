/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/model/UpdateConnectionOAuthClientRequestParameters.h>
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
   * <p>Contains the OAuth request parameters to use for the
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UpdateConnectionOAuthRequestParameters">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API UpdateConnectionOAuthRequestParameters
  {
  public:
    UpdateConnectionOAuthRequestParameters();
    UpdateConnectionOAuthRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    UpdateConnectionOAuthRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>UpdateConnectionOAuthClientRequestParameters</code> object that
     * contains the client parameters to use for the connection when OAuth is specified
     * as the authorization type.</p>
     */
    inline const UpdateConnectionOAuthClientRequestParameters& GetClientParameters() const{ return m_clientParameters; }

    /**
     * <p>A <code>UpdateConnectionOAuthClientRequestParameters</code> object that
     * contains the client parameters to use for the connection when OAuth is specified
     * as the authorization type.</p>
     */
    inline bool ClientParametersHasBeenSet() const { return m_clientParametersHasBeenSet; }

    /**
     * <p>A <code>UpdateConnectionOAuthClientRequestParameters</code> object that
     * contains the client parameters to use for the connection when OAuth is specified
     * as the authorization type.</p>
     */
    inline void SetClientParameters(const UpdateConnectionOAuthClientRequestParameters& value) { m_clientParametersHasBeenSet = true; m_clientParameters = value; }

    /**
     * <p>A <code>UpdateConnectionOAuthClientRequestParameters</code> object that
     * contains the client parameters to use for the connection when OAuth is specified
     * as the authorization type.</p>
     */
    inline void SetClientParameters(UpdateConnectionOAuthClientRequestParameters&& value) { m_clientParametersHasBeenSet = true; m_clientParameters = std::move(value); }

    /**
     * <p>A <code>UpdateConnectionOAuthClientRequestParameters</code> object that
     * contains the client parameters to use for the connection when OAuth is specified
     * as the authorization type.</p>
     */
    inline UpdateConnectionOAuthRequestParameters& WithClientParameters(const UpdateConnectionOAuthClientRequestParameters& value) { SetClientParameters(value); return *this;}

    /**
     * <p>A <code>UpdateConnectionOAuthClientRequestParameters</code> object that
     * contains the client parameters to use for the connection when OAuth is specified
     * as the authorization type.</p>
     */
    inline UpdateConnectionOAuthRequestParameters& WithClientParameters(UpdateConnectionOAuthClientRequestParameters&& value) { SetClientParameters(std::move(value)); return *this;}


    /**
     * <p>The URL to the authorization endpoint when OAuth is specified as the
     * authorization type.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const{ return m_authorizationEndpoint; }

    /**
     * <p>The URL to the authorization endpoint when OAuth is specified as the
     * authorization type.</p>
     */
    inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }

    /**
     * <p>The URL to the authorization endpoint when OAuth is specified as the
     * authorization type.</p>
     */
    inline void SetAuthorizationEndpoint(const Aws::String& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = value; }

    /**
     * <p>The URL to the authorization endpoint when OAuth is specified as the
     * authorization type.</p>
     */
    inline void SetAuthorizationEndpoint(Aws::String&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::move(value); }

    /**
     * <p>The URL to the authorization endpoint when OAuth is specified as the
     * authorization type.</p>
     */
    inline void SetAuthorizationEndpoint(const char* value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint.assign(value); }

    /**
     * <p>The URL to the authorization endpoint when OAuth is specified as the
     * authorization type.</p>
     */
    inline UpdateConnectionOAuthRequestParameters& WithAuthorizationEndpoint(const Aws::String& value) { SetAuthorizationEndpoint(value); return *this;}

    /**
     * <p>The URL to the authorization endpoint when OAuth is specified as the
     * authorization type.</p>
     */
    inline UpdateConnectionOAuthRequestParameters& WithAuthorizationEndpoint(Aws::String&& value) { SetAuthorizationEndpoint(std::move(value)); return *this;}

    /**
     * <p>The URL to the authorization endpoint when OAuth is specified as the
     * authorization type.</p>
     */
    inline UpdateConnectionOAuthRequestParameters& WithAuthorizationEndpoint(const char* value) { SetAuthorizationEndpoint(value); return *this;}


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
    inline UpdateConnectionOAuthRequestParameters& WithHttpMethod(const ConnectionOAuthHttpMethod& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The method used to connect to the HTTP endpoint.</p>
     */
    inline UpdateConnectionOAuthRequestParameters& WithHttpMethod(ConnectionOAuthHttpMethod&& value) { SetHttpMethod(std::move(value)); return *this;}


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
    inline UpdateConnectionOAuthRequestParameters& WithOAuthHttpParameters(const ConnectionHttpParameters& value) { SetOAuthHttpParameters(value); return *this;}

    /**
     * <p>The additional HTTP parameters used for the OAuth authorization request.</p>
     */
    inline UpdateConnectionOAuthRequestParameters& WithOAuthHttpParameters(ConnectionHttpParameters&& value) { SetOAuthHttpParameters(std::move(value)); return *this;}

  private:

    UpdateConnectionOAuthClientRequestParameters m_clientParameters;
    bool m_clientParametersHasBeenSet;

    Aws::String m_authorizationEndpoint;
    bool m_authorizationEndpointHasBeenSet;

    ConnectionOAuthHttpMethod m_httpMethod;
    bool m_httpMethodHasBeenSet;

    ConnectionHttpParameters m_oAuthHttpParameters;
    bool m_oAuthHttpParametersHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
