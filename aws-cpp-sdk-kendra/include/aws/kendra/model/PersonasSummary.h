/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/Persona.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Summary information for users or groups in your IAM Identity Center identity
   * source. This applies to users and groups with specific permissions that define
   * their level of access to your Amazon Kendra experience. You can create an Amazon
   * Kendra experience such as a search application. For more information on creating
   * a search application experience, see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building
   * a search experience with no code</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/PersonasSummary">AWS
   * API Reference</a></p>
   */
  class PersonasSummary
  {
  public:
    AWS_KENDRA_API PersonasSummary();
    AWS_KENDRA_API PersonasSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API PersonasSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline PersonasSummary& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline PersonasSummary& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a user or group in your IAM Identity Center identity
     * source. For example, a user ID could be an email.</p>
     */
    inline PersonasSummary& WithEntityId(const char* value) { SetEntityId(value); return *this;}


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
    inline PersonasSummary& WithPersona(const Persona& value) { SetPersona(value); return *this;}

    /**
     * <p>The persona that defines the specific permissions of the user or group in
     * your IAM Identity Center identity source. The available personas or access roles
     * are <code>Owner</code> and <code>Viewer</code>. For more information on these
     * personas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html#access-search-experience">Providing
     * access to your search page</a>.</p>
     */
    inline PersonasSummary& WithPersona(Persona&& value) { SetPersona(std::move(value)); return *this;}


    /**
     * <p>The date-time the summary information was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date-time the summary information was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date-time the summary information was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date-time the summary information was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date-time the summary information was created.</p>
     */
    inline PersonasSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date-time the summary information was created.</p>
     */
    inline PersonasSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date-time the summary information was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date-time the summary information was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date-time the summary information was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date-time the summary information was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date-time the summary information was last updated.</p>
     */
    inline PersonasSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date-time the summary information was last updated.</p>
     */
    inline PersonasSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Persona m_persona;
    bool m_personaHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
