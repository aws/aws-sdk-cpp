/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/model/CreateConnectionBasicAuthRequestParameters.h>
#include <aws/eventbridge/model/CreateConnectionOAuthRequestParameters.h>
#include <aws/eventbridge/model/CreateConnectionApiKeyAuthRequestParameters.h>
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
   * <p>Contains the authorization parameters for the connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/CreateConnectionAuthRequestParameters">AWS
   * API Reference</a></p>
   */
  class AWS_EVENTBRIDGE_API CreateConnectionAuthRequestParameters
  {
  public:
    CreateConnectionAuthRequestParameters();
    CreateConnectionAuthRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    CreateConnectionAuthRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>CreateConnectionBasicAuthRequestParameters</code> object that
     * contains the Basic authorization parameters to use for the connection.</p>
     */
    inline const CreateConnectionBasicAuthRequestParameters& GetBasicAuthParameters() const{ return m_basicAuthParameters; }

    /**
     * <p>A <code>CreateConnectionBasicAuthRequestParameters</code> object that
     * contains the Basic authorization parameters to use for the connection.</p>
     */
    inline bool BasicAuthParametersHasBeenSet() const { return m_basicAuthParametersHasBeenSet; }

    /**
     * <p>A <code>CreateConnectionBasicAuthRequestParameters</code> object that
     * contains the Basic authorization parameters to use for the connection.</p>
     */
    inline void SetBasicAuthParameters(const CreateConnectionBasicAuthRequestParameters& value) { m_basicAuthParametersHasBeenSet = true; m_basicAuthParameters = value; }

    /**
     * <p>A <code>CreateConnectionBasicAuthRequestParameters</code> object that
     * contains the Basic authorization parameters to use for the connection.</p>
     */
    inline void SetBasicAuthParameters(CreateConnectionBasicAuthRequestParameters&& value) { m_basicAuthParametersHasBeenSet = true; m_basicAuthParameters = std::move(value); }

    /**
     * <p>A <code>CreateConnectionBasicAuthRequestParameters</code> object that
     * contains the Basic authorization parameters to use for the connection.</p>
     */
    inline CreateConnectionAuthRequestParameters& WithBasicAuthParameters(const CreateConnectionBasicAuthRequestParameters& value) { SetBasicAuthParameters(value); return *this;}

    /**
     * <p>A <code>CreateConnectionBasicAuthRequestParameters</code> object that
     * contains the Basic authorization parameters to use for the connection.</p>
     */
    inline CreateConnectionAuthRequestParameters& WithBasicAuthParameters(CreateConnectionBasicAuthRequestParameters&& value) { SetBasicAuthParameters(std::move(value)); return *this;}


    /**
     * <p>A <code>CreateConnectionOAuthRequestParameters</code> object that contains
     * the OAuth authorization parameters to use for the connection.</p>
     */
    inline const CreateConnectionOAuthRequestParameters& GetOAuthParameters() const{ return m_oAuthParameters; }

    /**
     * <p>A <code>CreateConnectionOAuthRequestParameters</code> object that contains
     * the OAuth authorization parameters to use for the connection.</p>
     */
    inline bool OAuthParametersHasBeenSet() const { return m_oAuthParametersHasBeenSet; }

    /**
     * <p>A <code>CreateConnectionOAuthRequestParameters</code> object that contains
     * the OAuth authorization parameters to use for the connection.</p>
     */
    inline void SetOAuthParameters(const CreateConnectionOAuthRequestParameters& value) { m_oAuthParametersHasBeenSet = true; m_oAuthParameters = value; }

    /**
     * <p>A <code>CreateConnectionOAuthRequestParameters</code> object that contains
     * the OAuth authorization parameters to use for the connection.</p>
     */
    inline void SetOAuthParameters(CreateConnectionOAuthRequestParameters&& value) { m_oAuthParametersHasBeenSet = true; m_oAuthParameters = std::move(value); }

    /**
     * <p>A <code>CreateConnectionOAuthRequestParameters</code> object that contains
     * the OAuth authorization parameters to use for the connection.</p>
     */
    inline CreateConnectionAuthRequestParameters& WithOAuthParameters(const CreateConnectionOAuthRequestParameters& value) { SetOAuthParameters(value); return *this;}

    /**
     * <p>A <code>CreateConnectionOAuthRequestParameters</code> object that contains
     * the OAuth authorization parameters to use for the connection.</p>
     */
    inline CreateConnectionAuthRequestParameters& WithOAuthParameters(CreateConnectionOAuthRequestParameters&& value) { SetOAuthParameters(std::move(value)); return *this;}


    /**
     * <p>A <code>CreateConnectionApiKeyAuthRequestParameters</code> object that
     * contains the API key authorization parameters to use for the connection.</p>
     */
    inline const CreateConnectionApiKeyAuthRequestParameters& GetApiKeyAuthParameters() const{ return m_apiKeyAuthParameters; }

    /**
     * <p>A <code>CreateConnectionApiKeyAuthRequestParameters</code> object that
     * contains the API key authorization parameters to use for the connection.</p>
     */
    inline bool ApiKeyAuthParametersHasBeenSet() const { return m_apiKeyAuthParametersHasBeenSet; }

    /**
     * <p>A <code>CreateConnectionApiKeyAuthRequestParameters</code> object that
     * contains the API key authorization parameters to use for the connection.</p>
     */
    inline void SetApiKeyAuthParameters(const CreateConnectionApiKeyAuthRequestParameters& value) { m_apiKeyAuthParametersHasBeenSet = true; m_apiKeyAuthParameters = value; }

    /**
     * <p>A <code>CreateConnectionApiKeyAuthRequestParameters</code> object that
     * contains the API key authorization parameters to use for the connection.</p>
     */
    inline void SetApiKeyAuthParameters(CreateConnectionApiKeyAuthRequestParameters&& value) { m_apiKeyAuthParametersHasBeenSet = true; m_apiKeyAuthParameters = std::move(value); }

    /**
     * <p>A <code>CreateConnectionApiKeyAuthRequestParameters</code> object that
     * contains the API key authorization parameters to use for the connection.</p>
     */
    inline CreateConnectionAuthRequestParameters& WithApiKeyAuthParameters(const CreateConnectionApiKeyAuthRequestParameters& value) { SetApiKeyAuthParameters(value); return *this;}

    /**
     * <p>A <code>CreateConnectionApiKeyAuthRequestParameters</code> object that
     * contains the API key authorization parameters to use for the connection.</p>
     */
    inline CreateConnectionAuthRequestParameters& WithApiKeyAuthParameters(CreateConnectionApiKeyAuthRequestParameters&& value) { SetApiKeyAuthParameters(std::move(value)); return *this;}


    /**
     * <p>A <code>ConnectionHttpParameters</code> object that contains the API key
     * authorization parameters to use for the connection. Note that if you include
     * additional parameters for the target of a rule via <code>HttpParameters</code>,
     * including query strings, the parameters added for the connection take
     * precedence.</p>
     */
    inline const ConnectionHttpParameters& GetInvocationHttpParameters() const{ return m_invocationHttpParameters; }

    /**
     * <p>A <code>ConnectionHttpParameters</code> object that contains the API key
     * authorization parameters to use for the connection. Note that if you include
     * additional parameters for the target of a rule via <code>HttpParameters</code>,
     * including query strings, the parameters added for the connection take
     * precedence.</p>
     */
    inline bool InvocationHttpParametersHasBeenSet() const { return m_invocationHttpParametersHasBeenSet; }

    /**
     * <p>A <code>ConnectionHttpParameters</code> object that contains the API key
     * authorization parameters to use for the connection. Note that if you include
     * additional parameters for the target of a rule via <code>HttpParameters</code>,
     * including query strings, the parameters added for the connection take
     * precedence.</p>
     */
    inline void SetInvocationHttpParameters(const ConnectionHttpParameters& value) { m_invocationHttpParametersHasBeenSet = true; m_invocationHttpParameters = value; }

    /**
     * <p>A <code>ConnectionHttpParameters</code> object that contains the API key
     * authorization parameters to use for the connection. Note that if you include
     * additional parameters for the target of a rule via <code>HttpParameters</code>,
     * including query strings, the parameters added for the connection take
     * precedence.</p>
     */
    inline void SetInvocationHttpParameters(ConnectionHttpParameters&& value) { m_invocationHttpParametersHasBeenSet = true; m_invocationHttpParameters = std::move(value); }

    /**
     * <p>A <code>ConnectionHttpParameters</code> object that contains the API key
     * authorization parameters to use for the connection. Note that if you include
     * additional parameters for the target of a rule via <code>HttpParameters</code>,
     * including query strings, the parameters added for the connection take
     * precedence.</p>
     */
    inline CreateConnectionAuthRequestParameters& WithInvocationHttpParameters(const ConnectionHttpParameters& value) { SetInvocationHttpParameters(value); return *this;}

    /**
     * <p>A <code>ConnectionHttpParameters</code> object that contains the API key
     * authorization parameters to use for the connection. Note that if you include
     * additional parameters for the target of a rule via <code>HttpParameters</code>,
     * including query strings, the parameters added for the connection take
     * precedence.</p>
     */
    inline CreateConnectionAuthRequestParameters& WithInvocationHttpParameters(ConnectionHttpParameters&& value) { SetInvocationHttpParameters(std::move(value)); return *this;}

  private:

    CreateConnectionBasicAuthRequestParameters m_basicAuthParameters;
    bool m_basicAuthParametersHasBeenSet;

    CreateConnectionOAuthRequestParameters m_oAuthParameters;
    bool m_oAuthParametersHasBeenSet;

    CreateConnectionApiKeyAuthRequestParameters m_apiKeyAuthParameters;
    bool m_apiKeyAuthParametersHasBeenSet;

    ConnectionHttpParameters m_invocationHttpParameters;
    bool m_invocationHttpParametersHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
