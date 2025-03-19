/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the Basic authorization parameters to use for the
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/CreateConnectionOAuthClientRequestParameters">AWS
   * API Reference</a></p>
   */
  class CreateConnectionOAuthClientRequestParameters
  {
  public:
    AWS_CLOUDWATCHEVENTS_API CreateConnectionOAuthClientRequestParameters() = default;
    AWS_CLOUDWATCHEVENTS_API CreateConnectionOAuthClientRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API CreateConnectionOAuthClientRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The client ID to use for OAuth authorization for the connection.</p>
     */
    inline const Aws::String& GetClientID() const { return m_clientID; }
    inline bool ClientIDHasBeenSet() const { return m_clientIDHasBeenSet; }
    template<typename ClientIDT = Aws::String>
    void SetClientID(ClientIDT&& value) { m_clientIDHasBeenSet = true; m_clientID = std::forward<ClientIDT>(value); }
    template<typename ClientIDT = Aws::String>
    CreateConnectionOAuthClientRequestParameters& WithClientID(ClientIDT&& value) { SetClientID(std::forward<ClientIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client secret associated with the client ID to use for OAuth
     * authorization for the connection.</p>
     */
    inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    template<typename ClientSecretT = Aws::String>
    void SetClientSecret(ClientSecretT&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::forward<ClientSecretT>(value); }
    template<typename ClientSecretT = Aws::String>
    CreateConnectionOAuthClientRequestParameters& WithClientSecret(ClientSecretT&& value) { SetClientSecret(std::forward<ClientSecretT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientID;
    bool m_clientIDHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
