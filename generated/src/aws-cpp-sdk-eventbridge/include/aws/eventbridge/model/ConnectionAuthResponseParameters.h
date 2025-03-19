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
    AWS_EVENTBRIDGE_API ConnectionAuthResponseParameters() = default;
    AWS_EVENTBRIDGE_API ConnectionAuthResponseParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API ConnectionAuthResponseParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization parameters for Basic authorization.</p>
     */
    inline const ConnectionBasicAuthResponseParameters& GetBasicAuthParameters() const { return m_basicAuthParameters; }
    inline bool BasicAuthParametersHasBeenSet() const { return m_basicAuthParametersHasBeenSet; }
    template<typename BasicAuthParametersT = ConnectionBasicAuthResponseParameters>
    void SetBasicAuthParameters(BasicAuthParametersT&& value) { m_basicAuthParametersHasBeenSet = true; m_basicAuthParameters = std::forward<BasicAuthParametersT>(value); }
    template<typename BasicAuthParametersT = ConnectionBasicAuthResponseParameters>
    ConnectionAuthResponseParameters& WithBasicAuthParameters(BasicAuthParametersT&& value) { SetBasicAuthParameters(std::forward<BasicAuthParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth parameters to use for authorization.</p>
     */
    inline const ConnectionOAuthResponseParameters& GetOAuthParameters() const { return m_oAuthParameters; }
    inline bool OAuthParametersHasBeenSet() const { return m_oAuthParametersHasBeenSet; }
    template<typename OAuthParametersT = ConnectionOAuthResponseParameters>
    void SetOAuthParameters(OAuthParametersT&& value) { m_oAuthParametersHasBeenSet = true; m_oAuthParameters = std::forward<OAuthParametersT>(value); }
    template<typename OAuthParametersT = ConnectionOAuthResponseParameters>
    ConnectionAuthResponseParameters& WithOAuthParameters(OAuthParametersT&& value) { SetOAuthParameters(std::forward<OAuthParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API Key parameters to use for authorization.</p>
     */
    inline const ConnectionApiKeyAuthResponseParameters& GetApiKeyAuthParameters() const { return m_apiKeyAuthParameters; }
    inline bool ApiKeyAuthParametersHasBeenSet() const { return m_apiKeyAuthParametersHasBeenSet; }
    template<typename ApiKeyAuthParametersT = ConnectionApiKeyAuthResponseParameters>
    void SetApiKeyAuthParameters(ApiKeyAuthParametersT&& value) { m_apiKeyAuthParametersHasBeenSet = true; m_apiKeyAuthParameters = std::forward<ApiKeyAuthParametersT>(value); }
    template<typename ApiKeyAuthParametersT = ConnectionApiKeyAuthResponseParameters>
    ConnectionAuthResponseParameters& WithApiKeyAuthParameters(ApiKeyAuthParametersT&& value) { SetApiKeyAuthParameters(std::forward<ApiKeyAuthParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional parameters for the connection that are passed through with every
     * invocation to the HTTP endpoint.</p>
     */
    inline const ConnectionHttpParameters& GetInvocationHttpParameters() const { return m_invocationHttpParameters; }
    inline bool InvocationHttpParametersHasBeenSet() const { return m_invocationHttpParametersHasBeenSet; }
    template<typename InvocationHttpParametersT = ConnectionHttpParameters>
    void SetInvocationHttpParameters(InvocationHttpParametersT&& value) { m_invocationHttpParametersHasBeenSet = true; m_invocationHttpParameters = std::forward<InvocationHttpParametersT>(value); }
    template<typename InvocationHttpParametersT = ConnectionHttpParameters>
    ConnectionAuthResponseParameters& WithInvocationHttpParameters(InvocationHttpParametersT&& value) { SetInvocationHttpParameters(std::forward<InvocationHttpParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For private OAuth authentication endpoints. The parameters EventBridge uses
     * to authenticate against the endpoint.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-target-connection-auth.html">Authorization
     * methods for connections</a> in the <i> <i>Amazon EventBridge User Guide</i>
     * </i>.</p>
     */
    inline const DescribeConnectionConnectivityParameters& GetConnectivityParameters() const { return m_connectivityParameters; }
    inline bool ConnectivityParametersHasBeenSet() const { return m_connectivityParametersHasBeenSet; }
    template<typename ConnectivityParametersT = DescribeConnectionConnectivityParameters>
    void SetConnectivityParameters(ConnectivityParametersT&& value) { m_connectivityParametersHasBeenSet = true; m_connectivityParameters = std::forward<ConnectivityParametersT>(value); }
    template<typename ConnectivityParametersT = DescribeConnectionConnectivityParameters>
    ConnectionAuthResponseParameters& WithConnectivityParameters(ConnectivityParametersT&& value) { SetConnectivityParameters(std::forward<ConnectivityParametersT>(value)); return *this;}
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
