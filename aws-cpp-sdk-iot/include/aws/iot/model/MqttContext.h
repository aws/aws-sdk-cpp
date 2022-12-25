/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Specifies the MQTT context to use for the test authorizer
   * request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/MqttContext">AWS API
   * Reference</a></p>
   */
  class MqttContext
  {
  public:
    AWS_IOT_API MqttContext();
    AWS_IOT_API MqttContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MqttContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the <code>username</code> key in an MQTT authorization
     * request.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The value of the <code>username</code> key in an MQTT authorization
     * request.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The value of the <code>username</code> key in an MQTT authorization
     * request.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The value of the <code>username</code> key in an MQTT authorization
     * request.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The value of the <code>username</code> key in an MQTT authorization
     * request.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The value of the <code>username</code> key in an MQTT authorization
     * request.</p>
     */
    inline MqttContext& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The value of the <code>username</code> key in an MQTT authorization
     * request.</p>
     */
    inline MqttContext& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The value of the <code>username</code> key in an MQTT authorization
     * request.</p>
     */
    inline MqttContext& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The value of the <code>password</code> key in an MQTT authorization
     * request.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPassword() const{ return m_password; }

    /**
     * <p>The value of the <code>password</code> key in an MQTT authorization
     * request.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The value of the <code>password</code> key in an MQTT authorization
     * request.</p>
     */
    inline void SetPassword(const Aws::Utils::ByteBuffer& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The value of the <code>password</code> key in an MQTT authorization
     * request.</p>
     */
    inline void SetPassword(Aws::Utils::ByteBuffer&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The value of the <code>password</code> key in an MQTT authorization
     * request.</p>
     */
    inline MqttContext& WithPassword(const Aws::Utils::ByteBuffer& value) { SetPassword(value); return *this;}

    /**
     * <p>The value of the <code>password</code> key in an MQTT authorization
     * request.</p>
     */
    inline MqttContext& WithPassword(Aws::Utils::ByteBuffer&& value) { SetPassword(std::move(value)); return *this;}


    /**
     * <p>The value of the <code>clientId</code> key in an MQTT authorization
     * request.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The value of the <code>clientId</code> key in an MQTT authorization
     * request.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The value of the <code>clientId</code> key in an MQTT authorization
     * request.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The value of the <code>clientId</code> key in an MQTT authorization
     * request.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The value of the <code>clientId</code> key in an MQTT authorization
     * request.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The value of the <code>clientId</code> key in an MQTT authorization
     * request.</p>
     */
    inline MqttContext& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The value of the <code>clientId</code> key in an MQTT authorization
     * request.</p>
     */
    inline MqttContext& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The value of the <code>clientId</code> key in an MQTT authorization
     * request.</p>
     */
    inline MqttContext& WithClientId(const char* value) { SetClientId(value); return *this;}

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Utils::ByteBuffer m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
