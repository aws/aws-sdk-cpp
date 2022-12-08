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
   * <p>Describes the login information for the container image registry of an Amazon
   * Lightsail account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ContainerServiceRegistryLogin">AWS
   * API Reference</a></p>
   */
  class ContainerServiceRegistryLogin
  {
  public:
    AWS_LIGHTSAIL_API ContainerServiceRegistryLogin();
    AWS_LIGHTSAIL_API ContainerServiceRegistryLogin(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerServiceRegistryLogin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The container service registry username to use to push container images to
     * the container image registry of a Lightsail account.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The container service registry username to use to push container images to
     * the container image registry of a Lightsail account.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The container service registry username to use to push container images to
     * the container image registry of a Lightsail account.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The container service registry username to use to push container images to
     * the container image registry of a Lightsail account.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The container service registry username to use to push container images to
     * the container image registry of a Lightsail account.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The container service registry username to use to push container images to
     * the container image registry of a Lightsail account.</p>
     */
    inline ContainerServiceRegistryLogin& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The container service registry username to use to push container images to
     * the container image registry of a Lightsail account.</p>
     */
    inline ContainerServiceRegistryLogin& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The container service registry username to use to push container images to
     * the container image registry of a Lightsail account.</p>
     */
    inline ContainerServiceRegistryLogin& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The container service registry password to use to push container images to
     * the container image registry of a Lightsail account</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The container service registry password to use to push container images to
     * the container image registry of a Lightsail account</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The container service registry password to use to push container images to
     * the container image registry of a Lightsail account</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The container service registry password to use to push container images to
     * the container image registry of a Lightsail account</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The container service registry password to use to push container images to
     * the container image registry of a Lightsail account</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The container service registry password to use to push container images to
     * the container image registry of a Lightsail account</p>
     */
    inline ContainerServiceRegistryLogin& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The container service registry password to use to push container images to
     * the container image registry of a Lightsail account</p>
     */
    inline ContainerServiceRegistryLogin& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The container service registry password to use to push container images to
     * the container image registry of a Lightsail account</p>
     */
    inline ContainerServiceRegistryLogin& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>The timestamp of when the container image registry username and password
     * expire.</p> <p>The log in credentials expire 12 hours after they are created, at
     * which point you will need to create a new set of log in credentials using the
     * <code>CreateContainerServiceRegistryLogin</code> action.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }

    /**
     * <p>The timestamp of when the container image registry username and password
     * expire.</p> <p>The log in credentials expire 12 hours after they are created, at
     * which point you will need to create a new set of log in credentials using the
     * <code>CreateContainerServiceRegistryLogin</code> action.</p>
     */
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }

    /**
     * <p>The timestamp of when the container image registry username and password
     * expire.</p> <p>The log in credentials expire 12 hours after they are created, at
     * which point you will need to create a new set of log in credentials using the
     * <code>CreateContainerServiceRegistryLogin</code> action.</p>
     */
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAtHasBeenSet = true; m_expiresAt = value; }

    /**
     * <p>The timestamp of when the container image registry username and password
     * expire.</p> <p>The log in credentials expire 12 hours after they are created, at
     * which point you will need to create a new set of log in credentials using the
     * <code>CreateContainerServiceRegistryLogin</code> action.</p>
     */
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::move(value); }

    /**
     * <p>The timestamp of when the container image registry username and password
     * expire.</p> <p>The log in credentials expire 12 hours after they are created, at
     * which point you will need to create a new set of log in credentials using the
     * <code>CreateContainerServiceRegistryLogin</code> action.</p>
     */
    inline ContainerServiceRegistryLogin& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}

    /**
     * <p>The timestamp of when the container image registry username and password
     * expire.</p> <p>The log in credentials expire 12 hours after they are created, at
     * which point you will need to create a new set of log in credentials using the
     * <code>CreateContainerServiceRegistryLogin</code> action.</p>
     */
    inline ContainerServiceRegistryLogin& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}


    /**
     * <p>The address to use to push container images to the container image registry
     * of a Lightsail account.</p>
     */
    inline const Aws::String& GetRegistry() const{ return m_registry; }

    /**
     * <p>The address to use to push container images to the container image registry
     * of a Lightsail account.</p>
     */
    inline bool RegistryHasBeenSet() const { return m_registryHasBeenSet; }

    /**
     * <p>The address to use to push container images to the container image registry
     * of a Lightsail account.</p>
     */
    inline void SetRegistry(const Aws::String& value) { m_registryHasBeenSet = true; m_registry = value; }

    /**
     * <p>The address to use to push container images to the container image registry
     * of a Lightsail account.</p>
     */
    inline void SetRegistry(Aws::String&& value) { m_registryHasBeenSet = true; m_registry = std::move(value); }

    /**
     * <p>The address to use to push container images to the container image registry
     * of a Lightsail account.</p>
     */
    inline void SetRegistry(const char* value) { m_registryHasBeenSet = true; m_registry.assign(value); }

    /**
     * <p>The address to use to push container images to the container image registry
     * of a Lightsail account.</p>
     */
    inline ContainerServiceRegistryLogin& WithRegistry(const Aws::String& value) { SetRegistry(value); return *this;}

    /**
     * <p>The address to use to push container images to the container image registry
     * of a Lightsail account.</p>
     */
    inline ContainerServiceRegistryLogin& WithRegistry(Aws::String&& value) { SetRegistry(std::move(value)); return *this;}

    /**
     * <p>The address to use to push container images to the container image registry
     * of a Lightsail account.</p>
     */
    inline ContainerServiceRegistryLogin& WithRegistry(const char* value) { SetRegistry(value); return *this;}

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt;
    bool m_expiresAtHasBeenSet = false;

    Aws::String m_registry;
    bool m_registryHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
