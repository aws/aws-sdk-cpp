/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>Describes Apple social federation configurations for allowing your app users
   * to sign in using OAuth.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/BackendAuthAppleProviderConfig">AWS
   * API Reference</a></p>
   */
  class BackendAuthAppleProviderConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API BackendAuthAppleProviderConfig();
    AWS_AMPLIFYBACKEND_API BackendAuthAppleProviderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API BackendAuthAppleProviderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the client_id (also called Services ID) that comes from Apple.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>Describes the client_id (also called Services ID) that comes from Apple.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>Describes the client_id (also called Services ID) that comes from Apple.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>Describes the client_id (also called Services ID) that comes from Apple.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>Describes the client_id (also called Services ID) that comes from Apple.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>Describes the client_id (also called Services ID) that comes from Apple.</p>
     */
    inline BackendAuthAppleProviderConfig& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>Describes the client_id (also called Services ID) that comes from Apple.</p>
     */
    inline BackendAuthAppleProviderConfig& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>Describes the client_id (also called Services ID) that comes from Apple.</p>
     */
    inline BackendAuthAppleProviderConfig& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>Describes the key_id that comes from Apple.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Describes the key_id that comes from Apple.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>Describes the key_id that comes from Apple.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Describes the key_id that comes from Apple.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Describes the key_id that comes from Apple.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Describes the key_id that comes from Apple.</p>
     */
    inline BackendAuthAppleProviderConfig& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Describes the key_id that comes from Apple.</p>
     */
    inline BackendAuthAppleProviderConfig& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Describes the key_id that comes from Apple.</p>
     */
    inline BackendAuthAppleProviderConfig& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Describes the private_key that comes from Apple.</p>
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }

    /**
     * <p>Describes the private_key that comes from Apple.</p>
     */
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }

    /**
     * <p>Describes the private_key that comes from Apple.</p>
     */
    inline void SetPrivateKey(const Aws::String& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }

    /**
     * <p>Describes the private_key that comes from Apple.</p>
     */
    inline void SetPrivateKey(Aws::String&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::move(value); }

    /**
     * <p>Describes the private_key that comes from Apple.</p>
     */
    inline void SetPrivateKey(const char* value) { m_privateKeyHasBeenSet = true; m_privateKey.assign(value); }

    /**
     * <p>Describes the private_key that comes from Apple.</p>
     */
    inline BackendAuthAppleProviderConfig& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}

    /**
     * <p>Describes the private_key that comes from Apple.</p>
     */
    inline BackendAuthAppleProviderConfig& WithPrivateKey(Aws::String&& value) { SetPrivateKey(std::move(value)); return *this;}

    /**
     * <p>Describes the private_key that comes from Apple.</p>
     */
    inline BackendAuthAppleProviderConfig& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}


    /**
     * <p>Describes the team_id that comes from Apple.</p>
     */
    inline const Aws::String& GetTeamId() const{ return m_teamId; }

    /**
     * <p>Describes the team_id that comes from Apple.</p>
     */
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }

    /**
     * <p>Describes the team_id that comes from Apple.</p>
     */
    inline void SetTeamId(const Aws::String& value) { m_teamIdHasBeenSet = true; m_teamId = value; }

    /**
     * <p>Describes the team_id that comes from Apple.</p>
     */
    inline void SetTeamId(Aws::String&& value) { m_teamIdHasBeenSet = true; m_teamId = std::move(value); }

    /**
     * <p>Describes the team_id that comes from Apple.</p>
     */
    inline void SetTeamId(const char* value) { m_teamIdHasBeenSet = true; m_teamId.assign(value); }

    /**
     * <p>Describes the team_id that comes from Apple.</p>
     */
    inline BackendAuthAppleProviderConfig& WithTeamId(const Aws::String& value) { SetTeamId(value); return *this;}

    /**
     * <p>Describes the team_id that comes from Apple.</p>
     */
    inline BackendAuthAppleProviderConfig& WithTeamId(Aws::String&& value) { SetTeamId(std::move(value)); return *this;}

    /**
     * <p>Describes the team_id that comes from Apple.</p>
     */
    inline BackendAuthAppleProviderConfig& WithTeamId(const char* value) { SetTeamId(value); return *this;}

  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet = false;

    Aws::String m_teamId;
    bool m_teamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
