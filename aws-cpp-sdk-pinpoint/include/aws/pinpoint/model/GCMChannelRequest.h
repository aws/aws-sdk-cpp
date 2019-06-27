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
   * <p>Specifies the status and settings of the GCM channel for an application. This
   * channel enables Amazon Pinpoint to send push notifications through the Firebase
   * Cloud Messaging (FCM), formerly Google Cloud Messaging (GCM),
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GCMChannelRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API GCMChannelRequest
  {
  public:
    GCMChannelRequest();
    GCMChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    GCMChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The API key, also referred to as a <i>server key</i>, that you received from
     * Google to communicate with Google services.</p>
     */
    inline const Aws::String& GetApiKey() const{ return m_apiKey; }

    /**
     * <p>The API key, also referred to as a <i>server key</i>, that you received from
     * Google to communicate with Google services.</p>
     */
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }

    /**
     * <p>The API key, also referred to as a <i>server key</i>, that you received from
     * Google to communicate with Google services.</p>
     */
    inline void SetApiKey(const Aws::String& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }

    /**
     * <p>The API key, also referred to as a <i>server key</i>, that you received from
     * Google to communicate with Google services.</p>
     */
    inline void SetApiKey(Aws::String&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::move(value); }

    /**
     * <p>The API key, also referred to as a <i>server key</i>, that you received from
     * Google to communicate with Google services.</p>
     */
    inline void SetApiKey(const char* value) { m_apiKeyHasBeenSet = true; m_apiKey.assign(value); }

    /**
     * <p>The API key, also referred to as a <i>server key</i>, that you received from
     * Google to communicate with Google services.</p>
     */
    inline GCMChannelRequest& WithApiKey(const Aws::String& value) { SetApiKey(value); return *this;}

    /**
     * <p>The API key, also referred to as a <i>server key</i>, that you received from
     * Google to communicate with Google services.</p>
     */
    inline GCMChannelRequest& WithApiKey(Aws::String&& value) { SetApiKey(std::move(value)); return *this;}

    /**
     * <p>The API key, also referred to as a <i>server key</i>, that you received from
     * Google to communicate with Google services.</p>
     */
    inline GCMChannelRequest& WithApiKey(const char* value) { SetApiKey(value); return *this;}


    /**
     * <p>Specifies whether to enable the GCM channel for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether to enable the GCM channel for the application.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable the GCM channel for the application.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether to enable the GCM channel for the application.</p>
     */
    inline GCMChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
