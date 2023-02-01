/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Contains the Basic authorization parameters to use for the
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/CreateConnectionOAuthClientRequestParameters">AWS
   * API Reference</a></p>
   */
  class CreateConnectionOAuthClientRequestParameters
  {
  public:
    AWS_EVENTBRIDGE_API CreateConnectionOAuthClientRequestParameters();
    AWS_EVENTBRIDGE_API CreateConnectionOAuthClientRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API CreateConnectionOAuthClientRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The client ID to use for OAuth authorization for the connection.</p>
     */
    inline const Aws::String& GetClientID() const{ return m_clientID; }

    /**
     * <p>The client ID to use for OAuth authorization for the connection.</p>
     */
    inline bool ClientIDHasBeenSet() const { return m_clientIDHasBeenSet; }

    /**
     * <p>The client ID to use for OAuth authorization for the connection.</p>
     */
    inline void SetClientID(const Aws::String& value) { m_clientIDHasBeenSet = true; m_clientID = value; }

    /**
     * <p>The client ID to use for OAuth authorization for the connection.</p>
     */
    inline void SetClientID(Aws::String&& value) { m_clientIDHasBeenSet = true; m_clientID = std::move(value); }

    /**
     * <p>The client ID to use for OAuth authorization for the connection.</p>
     */
    inline void SetClientID(const char* value) { m_clientIDHasBeenSet = true; m_clientID.assign(value); }

    /**
     * <p>The client ID to use for OAuth authorization for the connection.</p>
     */
    inline CreateConnectionOAuthClientRequestParameters& WithClientID(const Aws::String& value) { SetClientID(value); return *this;}

    /**
     * <p>The client ID to use for OAuth authorization for the connection.</p>
     */
    inline CreateConnectionOAuthClientRequestParameters& WithClientID(Aws::String&& value) { SetClientID(std::move(value)); return *this;}

    /**
     * <p>The client ID to use for OAuth authorization for the connection.</p>
     */
    inline CreateConnectionOAuthClientRequestParameters& WithClientID(const char* value) { SetClientID(value); return *this;}


    /**
     * <p>The client secret associated with the client ID to use for OAuth
     * authorization for the connection.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }

    /**
     * <p>The client secret associated with the client ID to use for OAuth
     * authorization for the connection.</p>
     */
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }

    /**
     * <p>The client secret associated with the client ID to use for OAuth
     * authorization for the connection.</p>
     */
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }

    /**
     * <p>The client secret associated with the client ID to use for OAuth
     * authorization for the connection.</p>
     */
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }

    /**
     * <p>The client secret associated with the client ID to use for OAuth
     * authorization for the connection.</p>
     */
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }

    /**
     * <p>The client secret associated with the client ID to use for OAuth
     * authorization for the connection.</p>
     */
    inline CreateConnectionOAuthClientRequestParameters& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}

    /**
     * <p>The client secret associated with the client ID to use for OAuth
     * authorization for the connection.</p>
     */
    inline CreateConnectionOAuthClientRequestParameters& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}

    /**
     * <p>The client secret associated with the client ID to use for OAuth
     * authorization for the connection.</p>
     */
    inline CreateConnectionOAuthClientRequestParameters& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}

  private:

    Aws::String m_clientID;
    bool m_clientIDHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
