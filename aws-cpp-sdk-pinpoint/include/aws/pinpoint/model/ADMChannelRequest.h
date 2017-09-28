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
    ADMChannelRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    ADMChannelRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Client ID as gotten from Amazon
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * Client ID as gotten from Amazon
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * Client ID as gotten from Amazon
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * Client ID as gotten from Amazon
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * Client ID as gotten from Amazon
     */
    inline ADMChannelRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * Client ID as gotten from Amazon
     */
    inline ADMChannelRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * Client ID as gotten from Amazon
     */
    inline ADMChannelRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * Client secret as gotten from Amazon
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }

    /**
     * Client secret as gotten from Amazon
     */
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }

    /**
     * Client secret as gotten from Amazon
     */
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }

    /**
     * Client secret as gotten from Amazon
     */
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }

    /**
     * Client secret as gotten from Amazon
     */
    inline ADMChannelRequest& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}

    /**
     * Client secret as gotten from Amazon
     */
    inline ADMChannelRequest& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}

    /**
     * Client secret as gotten from Amazon
     */
    inline ADMChannelRequest& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}


    /**
     * If the channel is enabled for sending messages.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * If the channel is enabled for sending messages.
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
