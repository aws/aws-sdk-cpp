/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/model/ConnectionBasicAuthResponseParameters.h>
#include <aws/eventbridge/model/ConnectionOAuthResponseParameters.h>
#include <aws/eventbridge/model/ConnectionApiKeyAuthResponseParameters.h>
#include <aws/eventbridge/model/ConnectionHttpParameters.h>
#include <aws/eventbridge/model/DescribeConnectionConnectivityParameters.h>
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
   * <p>Tthe authorization parameters to use for the connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ConnectionAuthResponseParameters">AWS
   * API Reference</a></p>
   */
  class ConnectionAuthResponseParameters
  {
  public:
    AWS_EVENTBRIDGE_API ConnectionAuthResponseParameters();
    AWS_EVENTBRIDGE_API ConnectionAuthResponseParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API ConnectionAuthResponseParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


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

    ///@{
    /**
     * <p>For private OAuth authentication endpoints. The parameters EventBridge uses
     * to authenticate against the endpoint.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-target-connection-auth.html">Authorization
     * methods for connections</a> in the <i> <i>Amazon EventBridge User Guide</i>
     * </i>.</p>
     */
    inline const DescribeConnectionConnectivityParameters& GetConnectivityParameters() const{ return m_connectivityParameters; }
    inline bool ConnectivityParametersHasBeenSet() const { return m_connectivityParametersHasBeenSet; }
    inline void SetConnectivityParameters(const DescribeConnectionConnectivityParameters& value) { m_connectivityParametersHasBeenSet = true; m_connectivityParameters = value; }
    inline void SetConnectivityParameters(DescribeConnectionConnectivityParameters&& value) { m_connectivityParametersHasBeenSet = true; m_connectivityParameters = std::move(value); }
    inline ConnectionAuthResponseParameters& WithConnectivityParameters(const DescribeConnectionConnectivityParameters& value) { SetConnectivityParameters(value); return *this;}
    inline ConnectionAuthResponseParameters& WithConnectivityParameters(DescribeConnectionConnectivityParameters&& value) { SetConnectivityParameters(std::move(value)); return *this;}
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

    DescribeConnectionConnectivityParameters m_connectivityParameters;
    bool m_connectivityParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
