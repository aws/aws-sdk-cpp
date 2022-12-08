/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamesparks/model/Section.h>
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
namespace GameSparks
{
namespace Model
{

  /**
   * <p>Details about the game configuration.</p> <p> The game configuration is
   * organized into named sections, where the schema of each section is defined by an
   * extension. The schema for these sections can be retrieved using the
   * <code>GetExtensionVersion</code> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GameConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class GameConfigurationDetails
  {
  public:
    AWS_GAMESPARKS_API GameConfigurationDetails();
    AWS_GAMESPARKS_API GameConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API GameConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date when the game was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The date when the game was created.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The date when the game was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The date when the game was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The date when the game was created.</p>
     */
    inline GameConfigurationDetails& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date when the game was created.</p>
     */
    inline GameConfigurationDetails& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The date when the game was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The date when the game was last modified.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The date when the game was last modified.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The date when the game was last modified.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The date when the game was last modified.</p>
     */
    inline GameConfigurationDetails& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The date when the game was last modified.</p>
     */
    inline GameConfigurationDetails& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>Configuration data, organized by section name.</p>
     */
    inline const Aws::Map<Aws::String, Section>& GetSections() const{ return m_sections; }

    /**
     * <p>Configuration data, organized by section name.</p>
     */
    inline bool SectionsHasBeenSet() const { return m_sectionsHasBeenSet; }

    /**
     * <p>Configuration data, organized by section name.</p>
     */
    inline void SetSections(const Aws::Map<Aws::String, Section>& value) { m_sectionsHasBeenSet = true; m_sections = value; }

    /**
     * <p>Configuration data, organized by section name.</p>
     */
    inline void SetSections(Aws::Map<Aws::String, Section>&& value) { m_sectionsHasBeenSet = true; m_sections = std::move(value); }

    /**
     * <p>Configuration data, organized by section name.</p>
     */
    inline GameConfigurationDetails& WithSections(const Aws::Map<Aws::String, Section>& value) { SetSections(value); return *this;}

    /**
     * <p>Configuration data, organized by section name.</p>
     */
    inline GameConfigurationDetails& WithSections(Aws::Map<Aws::String, Section>&& value) { SetSections(std::move(value)); return *this;}

    /**
     * <p>Configuration data, organized by section name.</p>
     */
    inline GameConfigurationDetails& AddSections(const Aws::String& key, const Section& value) { m_sectionsHasBeenSet = true; m_sections.emplace(key, value); return *this; }

    /**
     * <p>Configuration data, organized by section name.</p>
     */
    inline GameConfigurationDetails& AddSections(Aws::String&& key, const Section& value) { m_sectionsHasBeenSet = true; m_sections.emplace(std::move(key), value); return *this; }

    /**
     * <p>Configuration data, organized by section name.</p>
     */
    inline GameConfigurationDetails& AddSections(const Aws::String& key, Section&& value) { m_sectionsHasBeenSet = true; m_sections.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configuration data, organized by section name.</p>
     */
    inline GameConfigurationDetails& AddSections(Aws::String&& key, Section&& value) { m_sectionsHasBeenSet = true; m_sections.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Configuration data, organized by section name.</p>
     */
    inline GameConfigurationDetails& AddSections(const char* key, Section&& value) { m_sectionsHasBeenSet = true; m_sections.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configuration data, organized by section name.</p>
     */
    inline GameConfigurationDetails& AddSections(const char* key, const Section& value) { m_sectionsHasBeenSet = true; m_sections.emplace(key, value); return *this; }

  private:

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::Map<Aws::String, Section> m_sections;
    bool m_sectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
