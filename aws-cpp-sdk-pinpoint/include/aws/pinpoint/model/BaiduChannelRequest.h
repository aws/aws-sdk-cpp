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
   * <p>Specifies the status and settings of the Baidu (Baidu Cloud Push) channel for
   * an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/BaiduChannelRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API BaiduChannelRequest
  {
  public:
    BaiduChannelRequest();
    BaiduChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    BaiduChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline const Aws::String& GetApiKey() const{ return m_apiKey; }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetApiKey(const Aws::String& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetApiKey(Aws::String&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::move(value); }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetApiKey(const char* value) { m_apiKeyHasBeenSet = true; m_apiKey.assign(value); }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelRequest& WithApiKey(const Aws::String& value) { SetApiKey(value); return *this;}

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelRequest& WithApiKey(Aws::String&& value) { SetApiKey(std::move(value)); return *this;}

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelRequest& WithApiKey(const char* value) { SetApiKey(value); return *this;}


    /**
     * <p>Specifies whether to enable the Baidu channel for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether to enable the Baidu channel for the application.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable the Baidu channel for the application.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether to enable the Baidu channel for the application.</p>
     */
    inline BaiduChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline const Aws::String& GetSecretKey() const{ return m_secretKey; }

    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline bool SecretKeyHasBeenSet() const { return m_secretKeyHasBeenSet; }

    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetSecretKey(const Aws::String& value) { m_secretKeyHasBeenSet = true; m_secretKey = value; }

    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetSecretKey(Aws::String&& value) { m_secretKeyHasBeenSet = true; m_secretKey = std::move(value); }

    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetSecretKey(const char* value) { m_secretKeyHasBeenSet = true; m_secretKey.assign(value); }

    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelRequest& WithSecretKey(const Aws::String& value) { SetSecretKey(value); return *this;}

    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelRequest& WithSecretKey(Aws::String&& value) { SetSecretKey(std::move(value)); return *this;}

    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelRequest& WithSecretKey(const char* value) { SetSecretKey(value); return *this;}

  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_secretKey;
    bool m_secretKeyHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
