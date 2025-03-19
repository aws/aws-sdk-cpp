/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the sign-in credentials for the container image registry of an
   * Amazon Lightsail account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ContainerServiceRegistryLogin">AWS
   * API Reference</a></p>
   */
  class ContainerServiceRegistryLogin
  {
  public:
    AWS_LIGHTSAIL_API ContainerServiceRegistryLogin() = default;
    AWS_LIGHTSAIL_API ContainerServiceRegistryLogin(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerServiceRegistryLogin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container service registry username to use to push container images to
     * the container image registry of a Lightsail account.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    ContainerServiceRegistryLogin& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container service registry password to use to push container images to
     * the container image registry of a Lightsail account</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    ContainerServiceRegistryLogin& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the container image registry sign-in credentials
     * expire.</p> <p>The log in credentials expire 12 hours after they are created, at
     * which point you will need to create a new set of log in credentials using the
     * <code>CreateContainerServiceRegistryLogin</code> action.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    void SetExpiresAt(ExpiresAtT&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::forward<ExpiresAtT>(value); }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    ContainerServiceRegistryLogin& WithExpiresAt(ExpiresAtT&& value) { SetExpiresAt(std::forward<ExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address to use to push container images to the container image registry
     * of a Lightsail account.</p>
     */
    inline const Aws::String& GetRegistry() const { return m_registry; }
    inline bool RegistryHasBeenSet() const { return m_registryHasBeenSet; }
    template<typename RegistryT = Aws::String>
    void SetRegistry(RegistryT&& value) { m_registryHasBeenSet = true; m_registry = std::forward<RegistryT>(value); }
    template<typename RegistryT = Aws::String>
    ContainerServiceRegistryLogin& WithRegistry(RegistryT&& value) { SetRegistry(std::forward<RegistryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt{};
    bool m_expiresAtHasBeenSet = false;

    Aws::String m_registry;
    bool m_registryHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
