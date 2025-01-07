/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/model/UpdateConnectionBasicAuthRequestParameters.h>
#include <aws/eventbridge/model/UpdateConnectionOAuthRequestParameters.h>
#include <aws/eventbridge/model/UpdateConnectionApiKeyAuthRequestParameters.h>
#include <aws/eventbridge/model/ConnectionHttpParameters.h>
#include <aws/eventbridge/model/ConnectivityResourceParameters.h>
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
   * <p>Contains the additional parameters to use for the connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/UpdateConnectionAuthRequestParameters">AWS
   * API Reference</a></p>
   */
  class UpdateConnectionAuthRequestParameters
  {
  public:
    AWS_EVENTBRIDGE_API UpdateConnectionAuthRequestParameters();
    AWS_EVENTBRIDGE_API UpdateConnectionAuthRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API UpdateConnectionAuthRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization parameters for Basic authorization.</p>
     */
    inline const UpdateConnectionBasicAuthRequestParameters& GetBasicAuthParameters() const{ return m_basicAuthParameters; }
    inline bool BasicAuthParametersHasBeenSet() const { return m_basicAuthParametersHasBeenSet; }
    inline void SetBasicAuthParameters(const UpdateConnectionBasicAuthRequestParameters& value) { m_basicAuthParametersHasBeenSet = true; m_basicAuthParameters = value; }
    inline void SetBasicAuthParameters(UpdateConnectionBasicAuthRequestParameters&& value) { m_basicAuthParametersHasBeenSet = true; m_basicAuthParameters = std::move(value); }
    inline UpdateConnectionAuthRequestParameters& WithBasicAuthParameters(const UpdateConnectionBasicAuthRequestParameters& value) { SetBasicAuthParameters(value); return *this;}
    inline UpdateConnectionAuthRequestParameters& WithBasicAuthParameters(UpdateConnectionBasicAuthRequestParameters&& value) { SetBasicAuthParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization parameters for OAuth authorization.</p>
     */
    inline const UpdateConnectionOAuthRequestParameters& GetOAuthParameters() const{ return m_oAuthParameters; }
    inline bool OAuthParametersHasBeenSet() const { return m_oAuthParametersHasBeenSet; }
    inline void SetOAuthParameters(const UpdateConnectionOAuthRequestParameters& value) { m_oAuthParametersHasBeenSet = true; m_oAuthParameters = value; }
    inline void SetOAuthParameters(UpdateConnectionOAuthRequestParameters&& value) { m_oAuthParametersHasBeenSet = true; m_oAuthParameters = std::move(value); }
    inline UpdateConnectionAuthRequestParameters& WithOAuthParameters(const UpdateConnectionOAuthRequestParameters& value) { SetOAuthParameters(value); return *this;}
    inline UpdateConnectionAuthRequestParameters& WithOAuthParameters(UpdateConnectionOAuthRequestParameters&& value) { SetOAuthParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization parameters for API key authorization.</p>
     */
    inline const UpdateConnectionApiKeyAuthRequestParameters& GetApiKeyAuthParameters() const{ return m_apiKeyAuthParameters; }
    inline bool ApiKeyAuthParametersHasBeenSet() const { return m_apiKeyAuthParametersHasBeenSet; }
    inline void SetApiKeyAuthParameters(const UpdateConnectionApiKeyAuthRequestParameters& value) { m_apiKeyAuthParametersHasBeenSet = true; m_apiKeyAuthParameters = value; }
    inline void SetApiKeyAuthParameters(UpdateConnectionApiKeyAuthRequestParameters&& value) { m_apiKeyAuthParametersHasBeenSet = true; m_apiKeyAuthParameters = std::move(value); }
    inline UpdateConnectionAuthRequestParameters& WithApiKeyAuthParameters(const UpdateConnectionApiKeyAuthRequestParameters& value) { SetApiKeyAuthParameters(value); return *this;}
    inline UpdateConnectionAuthRequestParameters& WithApiKeyAuthParameters(UpdateConnectionApiKeyAuthRequestParameters&& value) { SetApiKeyAuthParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional parameters to use for the connection.</p>
     */
    inline const ConnectionHttpParameters& GetInvocationHttpParameters() const{ return m_invocationHttpParameters; }
    inline bool InvocationHttpParametersHasBeenSet() const { return m_invocationHttpParametersHasBeenSet; }
    inline void SetInvocationHttpParameters(const ConnectionHttpParameters& value) { m_invocationHttpParametersHasBeenSet = true; m_invocationHttpParameters = value; }
    inline void SetInvocationHttpParameters(ConnectionHttpParameters&& value) { m_invocationHttpParametersHasBeenSet = true; m_invocationHttpParameters = std::move(value); }
    inline UpdateConnectionAuthRequestParameters& WithInvocationHttpParameters(const ConnectionHttpParameters& value) { SetInvocationHttpParameters(value); return *this;}
    inline UpdateConnectionAuthRequestParameters& WithInvocationHttpParameters(ConnectionHttpParameters&& value) { SetInvocationHttpParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specify a private OAuth endpoint, the parameters for EventBridge to
     * use when authenticating against the endpoint.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-target-connection-auth.html">Authorization
     * methods for connections</a> in the <i> <i>Amazon EventBridge User Guide</i>
     * </i>.</p>
     */
    inline const ConnectivityResourceParameters& GetConnectivityParameters() const{ return m_connectivityParameters; }
    inline bool ConnectivityParametersHasBeenSet() const { return m_connectivityParametersHasBeenSet; }
    inline void SetConnectivityParameters(const ConnectivityResourceParameters& value) { m_connectivityParametersHasBeenSet = true; m_connectivityParameters = value; }
    inline void SetConnectivityParameters(ConnectivityResourceParameters&& value) { m_connectivityParametersHasBeenSet = true; m_connectivityParameters = std::move(value); }
    inline UpdateConnectionAuthRequestParameters& WithConnectivityParameters(const ConnectivityResourceParameters& value) { SetConnectivityParameters(value); return *this;}
    inline UpdateConnectionAuthRequestParameters& WithConnectivityParameters(ConnectivityResourceParameters&& value) { SetConnectivityParameters(std::move(value)); return *this;}
    ///@}
  private:

    UpdateConnectionBasicAuthRequestParameters m_basicAuthParameters;
    bool m_basicAuthParametersHasBeenSet = false;

    UpdateConnectionOAuthRequestParameters m_oAuthParameters;
    bool m_oAuthParametersHasBeenSet = false;

    UpdateConnectionApiKeyAuthRequestParameters m_apiKeyAuthParameters;
    bool m_apiKeyAuthParametersHasBeenSet = false;

    ConnectionHttpParameters m_invocationHttpParameters;
    bool m_invocationHttpParametersHasBeenSet = false;

    ConnectivityResourceParameters m_connectivityParameters;
    bool m_connectivityParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
