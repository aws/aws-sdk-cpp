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
    AWS_AMPLIFYBACKEND_API BackendAuthAppleProviderConfig() = default;
    AWS_AMPLIFYBACKEND_API BackendAuthAppleProviderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API BackendAuthAppleProviderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the client_id (also called Services ID) that comes from Apple.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    BackendAuthAppleProviderConfig& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the key_id that comes from Apple.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    BackendAuthAppleProviderConfig& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the private_key that comes from Apple.</p>
     */
    inline const Aws::String& GetPrivateKey() const { return m_privateKey; }
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }
    template<typename PrivateKeyT = Aws::String>
    void SetPrivateKey(PrivateKeyT&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::forward<PrivateKeyT>(value); }
    template<typename PrivateKeyT = Aws::String>
    BackendAuthAppleProviderConfig& WithPrivateKey(PrivateKeyT&& value) { SetPrivateKey(std::forward<PrivateKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the team_id that comes from Apple.</p>
     */
    inline const Aws::String& GetTeamId() const { return m_teamId; }
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }
    template<typename TeamIdT = Aws::String>
    void SetTeamId(TeamIdT&& value) { m_teamIdHasBeenSet = true; m_teamId = std::forward<TeamIdT>(value); }
    template<typename TeamIdT = Aws::String>
    BackendAuthAppleProviderConfig& WithTeamId(TeamIdT&& value) { SetTeamId(std::forward<TeamIdT>(value)); return *this;}
    ///@}
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
