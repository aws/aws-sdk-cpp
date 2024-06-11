/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/model/ConnectionBasicAuthResponseParameters.h>
#include <aws/events/model/ConnectionOAuthResponseParameters.h>
#include <aws/events/model/ConnectionApiKeyAuthResponseParameters.h>
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
   * <p>Contains the authorization parameters to use for the
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ConnectionAuthResponseParameters">AWS
   * API Reference</a></p>
   */
  class ConnectionAuthResponseParameters
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ConnectionAuthResponseParameters();
    AWS_CLOUDWATCHEVENTS_API ConnectionAuthResponseParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API ConnectionAuthResponseParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization parameters for Basic authorization.</p>
     */
    inline const ConnectionBasicAuthResponseParameters& GetBasicAuthParameters() const{ return m_basicAuthParameters; }
    inline bool BasicAuthParametersHasBeenSet() const { return m_basicAuthParametersHasBeenSet; }
    inline void SetBasicAuthParameters(const ConnectionBasicAuthResponseParameters& value) { m_basicAuthParametersHasBeenSet = true; m_basicAuthParameters = value; }
    inline void SetBasicAuthParameters(ConnectionBasicAuthResponseParameters&& value) { m_basicAuthParametersHasBeenSet = true; m_basicAuthParameters = std::move(value); }
    inline ConnectionAuthResponseParameters& WithBasicAuthParameters(const ConnectionBasicAuthResponseParameters& value) { SetBasicAuthParameters(value); return *this;}
    inline ConnectionAuthResponseParameters& WithBasicAuthParameters(ConnectionBasicAuthResponseParameters&& value) { SetBasicAuthParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth parameters to use for authorization.</p>
     */
    inline const ConnectionOAuthResponseParameters& GetOAuthParameters() const{ return m_oAuthParameters; }
    inline bool OAuthParametersHasBeenSet() const { return m_oAuthParametersHasBeenSet; }
    inline void SetOAuthParameters(const ConnectionOAuthResponseParameters& value) { m_oAuthParametersHasBeenSet = true; m_oAuthParameters = value; }
    inline void SetOAuthParameters(ConnectionOAuthResponseParameters&& value) { m_oAuthParametersHasBeenSet = true; m_oAuthParameters = std::move(value); }
    inline ConnectionAuthResponseParameters& WithOAuthParameters(const ConnectionOAuthResponseParameters& value) { SetOAuthParameters(value); return *this;}
    inline ConnectionAuthResponseParameters& WithOAuthParameters(ConnectionOAuthResponseParameters&& value) { SetOAuthParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API Key parameters to use for authorization.</p>
     */
    inline const ConnectionApiKeyAuthResponseParameters& GetApiKeyAuthParameters() const{ return m_apiKeyAuthParameters; }
    inline bool ApiKeyAuthParametersHasBeenSet() const { return m_apiKeyAuthParametersHasBeenSet; }
    inline void SetApiKeyAuthParameters(const ConnectionApiKeyAuthResponseParameters& value) { m_apiKeyAuthParametersHasBeenSet = true; m_apiKeyAuthParameters = value; }
    inline void SetApiKeyAuthParameters(ConnectionApiKeyAuthResponseParameters&& value) { m_apiKeyAuthParametersHasBeenSet = true; m_apiKeyAuthParameters = std::move(value); }
    inline ConnectionAuthResponseParameters& WithApiKeyAuthParameters(const ConnectionApiKeyAuthResponseParameters& value) { SetApiKeyAuthParameters(value); return *this;}
    inline ConnectionAuthResponseParameters& WithApiKeyAuthParameters(ConnectionApiKeyAuthResponseParameters&& value) { SetApiKeyAuthParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional parameters for the connection that are passed through with every
     * invocation to the HTTP endpoint.</p>
     */
    inline const ConnectionHttpParameters& GetInvocationHttpParameters() const{ return m_invocationHttpParameters; }
    inline bool InvocationHttpParametersHasBeenSet() const { return m_invocationHttpParametersHasBeenSet; }
    inline void SetInvocationHttpParameters(const ConnectionHttpParameters& value) { m_invocationHttpParametersHasBeenSet = true; m_invocationHttpParameters = value; }
    inline void SetInvocationHttpParameters(ConnectionHttpParameters&& value) { m_invocationHttpParametersHasBeenSet = true; m_invocationHttpParameters = std::move(value); }
    inline ConnectionAuthResponseParameters& WithInvocationHttpParameters(const ConnectionHttpParameters& value) { SetInvocationHttpParameters(value); return *this;}
    inline ConnectionAuthResponseParameters& WithInvocationHttpParameters(ConnectionHttpParameters&& value) { SetInvocationHttpParameters(std::move(value)); return *this;}
    ///@}
  private:

    ConnectionBasicAuthResponseParameters m_basicAuthParameters;
    bool m_basicAuthParametersHasBeenSet = false;

    ConnectionOAuthResponseParameters m_oAuthParameters;
    bool m_oAuthParametersHasBeenSet = false;

    ConnectionApiKeyAuthResponseParameters m_apiKeyAuthParameters;
    bool m_apiKeyAuthParametersHasBeenSet = false;

    ConnectionHttpParameters m_invocationHttpParameters;
    bool m_invocationHttpParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
