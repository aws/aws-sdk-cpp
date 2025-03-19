/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/model/CreateConnectionBasicAuthRequestParameters.h>
#include <aws/events/model/CreateConnectionOAuthRequestParameters.h>
#include <aws/events/model/CreateConnectionApiKeyAuthRequestParameters.h>
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
   * <p>Contains the authorization parameters for the connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/CreateConnectionAuthRequestParameters">AWS
   * API Reference</a></p>
   */
  class CreateConnectionAuthRequestParameters
  {
  public:
    AWS_CLOUDWATCHEVENTS_API CreateConnectionAuthRequestParameters() = default;
    AWS_CLOUDWATCHEVENTS_API CreateConnectionAuthRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API CreateConnectionAuthRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>CreateConnectionBasicAuthRequestParameters</code> object that
     * contains the Basic authorization parameters to use for the connection.</p>
     */
    inline const CreateConnectionBasicAuthRequestParameters& GetBasicAuthParameters() const { return m_basicAuthParameters; }
    inline bool BasicAuthParametersHasBeenSet() const { return m_basicAuthParametersHasBeenSet; }
    template<typename BasicAuthParametersT = CreateConnectionBasicAuthRequestParameters>
    void SetBasicAuthParameters(BasicAuthParametersT&& value) { m_basicAuthParametersHasBeenSet = true; m_basicAuthParameters = std::forward<BasicAuthParametersT>(value); }
    template<typename BasicAuthParametersT = CreateConnectionBasicAuthRequestParameters>
    CreateConnectionAuthRequestParameters& WithBasicAuthParameters(BasicAuthParametersT&& value) { SetBasicAuthParameters(std::forward<BasicAuthParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CreateConnectionOAuthRequestParameters</code> object that contains
     * the OAuth authorization parameters to use for the connection.</p>
     */
    inline const CreateConnectionOAuthRequestParameters& GetOAuthParameters() const { return m_oAuthParameters; }
    inline bool OAuthParametersHasBeenSet() const { return m_oAuthParametersHasBeenSet; }
    template<typename OAuthParametersT = CreateConnectionOAuthRequestParameters>
    void SetOAuthParameters(OAuthParametersT&& value) { m_oAuthParametersHasBeenSet = true; m_oAuthParameters = std::forward<OAuthParametersT>(value); }
    template<typename OAuthParametersT = CreateConnectionOAuthRequestParameters>
    CreateConnectionAuthRequestParameters& WithOAuthParameters(OAuthParametersT&& value) { SetOAuthParameters(std::forward<OAuthParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CreateConnectionApiKeyAuthRequestParameters</code> object that
     * contains the API key authorization parameters to use for the connection.</p>
     */
    inline const CreateConnectionApiKeyAuthRequestParameters& GetApiKeyAuthParameters() const { return m_apiKeyAuthParameters; }
    inline bool ApiKeyAuthParametersHasBeenSet() const { return m_apiKeyAuthParametersHasBeenSet; }
    template<typename ApiKeyAuthParametersT = CreateConnectionApiKeyAuthRequestParameters>
    void SetApiKeyAuthParameters(ApiKeyAuthParametersT&& value) { m_apiKeyAuthParametersHasBeenSet = true; m_apiKeyAuthParameters = std::forward<ApiKeyAuthParametersT>(value); }
    template<typename ApiKeyAuthParametersT = CreateConnectionApiKeyAuthRequestParameters>
    CreateConnectionAuthRequestParameters& WithApiKeyAuthParameters(ApiKeyAuthParametersT&& value) { SetApiKeyAuthParameters(std::forward<ApiKeyAuthParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ConnectionHttpParameters</code> object that contains the API key
     * authorization parameters to use for the connection. Note that if you include
     * additional parameters for the target of a rule via <code>HttpParameters</code>,
     * including query strings, the parameters added for the connection take
     * precedence.</p>
     */
    inline const ConnectionHttpParameters& GetInvocationHttpParameters() const { return m_invocationHttpParameters; }
    inline bool InvocationHttpParametersHasBeenSet() const { return m_invocationHttpParametersHasBeenSet; }
    template<typename InvocationHttpParametersT = ConnectionHttpParameters>
    void SetInvocationHttpParameters(InvocationHttpParametersT&& value) { m_invocationHttpParametersHasBeenSet = true; m_invocationHttpParameters = std::forward<InvocationHttpParametersT>(value); }
    template<typename InvocationHttpParametersT = ConnectionHttpParameters>
    CreateConnectionAuthRequestParameters& WithInvocationHttpParameters(InvocationHttpParametersT&& value) { SetInvocationHttpParameters(std::forward<InvocationHttpParametersT>(value)); return *this;}
    ///@}
  private:

    CreateConnectionBasicAuthRequestParameters m_basicAuthParameters;
    bool m_basicAuthParametersHasBeenSet = false;

    CreateConnectionOAuthRequestParameters m_oAuthParameters;
    bool m_oAuthParametersHasBeenSet = false;

    CreateConnectionApiKeyAuthRequestParameters m_apiKeyAuthParameters;
    bool m_apiKeyAuthParametersHasBeenSet = false;

    ConnectionHttpParameters m_invocationHttpParameters;
    bool m_invocationHttpParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
