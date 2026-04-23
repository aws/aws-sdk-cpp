/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Amazon Device Messaging channel definition.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ADMChannelRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ADMChannelRequest
  {
  public:
    ADMChannelRequest();
    ADMChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    ADMChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Client ID that you obtained from the Amazon App Distribution Portal.
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * The Client ID that you obtained from the Amazon App Distribution Portal.
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * The Client ID that you obtained from the Amazon App Distribution Portal.
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * The Client ID that you obtained from the Amazon App Distribution Portal.
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * The Client ID that you obtained from the Amazon App Distribution Portal.
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * The Client ID that you obtained from the Amazon App Distribution Portal.
     */
    inline ADMChannelRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * The Client ID that you obtained from the Amazon App Distribution Portal.
     */
    inline ADMChannelRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * The Client ID that you obtained from the Amazon App Distribution Portal.
     */
    inline ADMChannelRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * The Client Secret that you obtained from the Amazon App Distribution Portal.
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }

    /**
     * The Client Secret that you obtained from the Amazon App Distribution Portal.
     */
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }

    /**
     * The Client Secret that you obtained from the Amazon App Distribution Portal.
     */
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }

    /**
     * The Client Secret that you obtained from the Amazon App Distribution Portal.
     */
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }

    /**
     * The Client Secret that you obtained from the Amazon App Distribution Portal.
     */
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }

    /**
     * The Client Secret that you obtained from the Amazon App Distribution Portal.
     */
    inline ADMChannelRequest& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}

    /**
     * The Client Secret that you obtained from the Amazon App Distribution Portal.
     */
    inline ADMChannelRequest& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}

    /**
     * The Client Secret that you obtained from the Amazon App Distribution Portal.
     */
    inline ADMChannelRequest& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}


    /**
     * Indicates whether or not the channel is enabled for sending messages.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * Indicates whether or not the channel is enabled for sending messages.
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * Indicates whether or not the channel is enabled for sending messages.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * Indicates whether or not the channel is enabled for sending messages.
     */
    inline ADMChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
