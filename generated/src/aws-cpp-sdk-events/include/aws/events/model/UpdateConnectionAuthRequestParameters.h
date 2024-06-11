/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/model/UpdateConnectionBasicAuthRequestParameters.h>
#include <aws/events/model/UpdateConnectionOAuthRequestParameters.h>
#include <aws/events/model/UpdateConnectionApiKeyAuthRequestParameters.h>
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
   * <p>Contains the additional parameters to use for the connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UpdateConnectionAuthRequestParameters">AWS
   * API Reference</a></p>
   */
  class UpdateConnectionAuthRequestParameters
  {
  public:
    AWS_CLOUDWATCHEVENTS_API UpdateConnectionAuthRequestParameters();
    AWS_CLOUDWATCHEVENTS_API UpdateConnectionAuthRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API UpdateConnectionAuthRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>UpdateConnectionBasicAuthRequestParameters</code> object that
     * contains the authorization parameters for Basic authorization.</p>
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
     * <p>A <code>UpdateConnectionOAuthRequestParameters</code> object that contains
     * the authorization parameters for OAuth authorization.</p>
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
     * <p>A <code>UpdateConnectionApiKeyAuthRequestParameters</code> object that
     * contains the authorization parameters for API key authorization.</p>
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
     * <p>A <code>ConnectionHttpParameters</code> object that contains the additional
     * parameters to use for the connection.</p>
     */
    inline const ConnectionHttpParameters& GetInvocationHttpParameters() const{ return m_invocationHttpParameters; }
    inline bool InvocationHttpParametersHasBeenSet() const { return m_invocationHttpParametersHasBeenSet; }
    inline void SetInvocationHttpParameters(const ConnectionHttpParameters& value) { m_invocationHttpParametersHasBeenSet = true; m_invocationHttpParameters = value; }
    inline void SetInvocationHttpParameters(ConnectionHttpParameters&& value) { m_invocationHttpParametersHasBeenSet = true; m_invocationHttpParameters = std::move(value); }
    inline UpdateConnectionAuthRequestParameters& WithInvocationHttpParameters(const ConnectionHttpParameters& value) { SetInvocationHttpParameters(value); return *this;}
    inline UpdateConnectionAuthRequestParameters& WithInvocationHttpParameters(ConnectionHttpParameters&& value) { SetInvocationHttpParameters(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
