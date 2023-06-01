/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The details of a single calculated attribute definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListCalculatedAttributeDefinitionItem">AWS
   * API Reference</a></p>
   */
  class ListCalculatedAttributeDefinitionItem
  {
  public:
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributeDefinitionItem();
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributeDefinitionItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributeDefinitionItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline const Aws::String& GetCalculatedAttributeName() const{ return m_calculatedAttributeName; }

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline bool CalculatedAttributeNameHasBeenSet() const { return m_calculatedAttributeNameHasBeenSet; }

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline void SetCalculatedAttributeName(const Aws::String& value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName = value; }

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline void SetCalculatedAttributeName(Aws::String&& value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName = std::move(value); }

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline void SetCalculatedAttributeName(const char* value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName.assign(value); }

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithCalculatedAttributeName(const Aws::String& value) { SetCalculatedAttributeName(value); return *this;}

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithCalculatedAttributeName(Aws::String&& value) { SetCalculatedAttributeName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithCalculatedAttributeName(const char* value) { SetCalculatedAttributeName(value); return *this;}


    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The threshold for the calculated attribute.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the calculated attribute definition was most recently
     * edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The timestamp of when the calculated attribute definition was most recently
     * edited.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the calculated attribute definition was most recently
     * edited.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The timestamp of when the calculated attribute definition was most recently
     * edited.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the calculated attribute definition was most recently
     * edited.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the calculated attribute definition was most recently
     * edited.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline ListCalculatedAttributeDefinitionItem& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_calculatedAttributeName;
    bool m_calculatedAttributeNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
