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
   * <p>Contains the OAuth authorization parameters to use for the
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UpdateConnectionOAuthClientRequestParameters">AWS
   * API Reference</a></p>
   */
  class UpdateConnectionOAuthClientRequestParameters
  {
  public:
    AWS_CLOUDWATCHEVENTS_API UpdateConnectionOAuthClientRequestParameters();
    AWS_CLOUDWATCHEVENTS_API UpdateConnectionOAuthClientRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API UpdateConnectionOAuthClientRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The client ID to use for OAuth authorization.</p>
     */
    inline const Aws::String& GetClientID() const{ return m_clientID; }
    inline bool ClientIDHasBeenSet() const { return m_clientIDHasBeenSet; }
    inline void SetClientID(const Aws::String& value) { m_clientIDHasBeenSet = true; m_clientID = value; }
    inline void SetClientID(Aws::String&& value) { m_clientIDHasBeenSet = true; m_clientID = std::move(value); }
    inline void SetClientID(const char* value) { m_clientIDHasBeenSet = true; m_clientID.assign(value); }
    inline UpdateConnectionOAuthClientRequestParameters& WithClientID(const Aws::String& value) { SetClientID(value); return *this;}
    inline UpdateConnectionOAuthClientRequestParameters& WithClientID(Aws::String&& value) { SetClientID(std::move(value)); return *this;}
    inline UpdateConnectionOAuthClientRequestParameters& WithClientID(const char* value) { SetClientID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client secret assciated with the client ID to use for OAuth
     * authorization.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }
    inline UpdateConnectionOAuthClientRequestParameters& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}
    inline UpdateConnectionOAuthClientRequestParameters& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}
    inline UpdateConnectionOAuthClientRequestParameters& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}
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
