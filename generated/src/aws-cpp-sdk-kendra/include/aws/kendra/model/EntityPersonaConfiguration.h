/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/Persona.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information for users or groups in your IAM
   * Identity Center identity source for access to your Amazon Kendra experience.
   * Specific permissions are defined for each user or group once they are granted
   * access to your Amazon Kendra experience.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/EntityPersonaConfiguration">AWS
   * API Reference</a></p>
   */
  class EntityPersonaConfiguration
  {
  public:
    AWS_KENDRA_API EntityPersonaConfiguration();
    AWS_KENDRA_API EntityPersonaConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API EntityPersonaConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline EntityPersonaConfiguration& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline EntityPersonaConfiguration& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline EntityPersonaConfiguration& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The persona that defines the specific permissions of the user or group in
     * your IAM Identity Center identity source. The available personas or access roles
     * are <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline const Persona& GetPersona() const{ return m_persona; }

    /**
     * <p>The persona that defines the specific permissions of the user or group in
     * your IAM Identity Center identity source. The available personas or access roles
     * are <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline bool PersonaHasBeenSet() const { return m_personaHasBeenSet; }

    /**
     * <p>The persona that defines the specific permissions of the user or group in
     * your IAM Identity Center identity source. The available personas or access roles
     * are <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline void SetPersona(const Persona& value) { m_personaHasBeenSet = true; m_persona = value; }

    /**
     * <p>The persona that defines the specific permissions of the user or group in
     * your IAM Identity Center identity source. The available personas or access roles
     * are <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline void SetPersona(Persona&& value) { m_personaHasBeenSet = true; m_persona = std::move(value); }

    /**
     * <p>The persona that defines the specific permissions of the user or group in
     * your IAM Identity Center identity source. The available personas or access roles
     * are <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline EntityPersonaConfiguration& WithPersona(const Persona& value) { SetPersona(value); return *this;}

    /**
     * <p>The persona that defines the specific permissions of the user or group in
     * your IAM Identity Center identity source. The available personas or access roles
     * are <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline EntityPersonaConfiguration& WithPersona(Persona&& value) { SetPersona(std::move(value)); return *this;}

  private:

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Persona m_persona;
    bool m_personaHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
