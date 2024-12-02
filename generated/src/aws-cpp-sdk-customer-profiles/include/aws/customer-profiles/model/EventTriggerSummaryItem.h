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
   * <p>The summary of the event trigger.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/EventTriggerSummaryItem">AWS
   * API Reference</a></p>
   */
  class EventTriggerSummaryItem
  {
  public:
    AWS_CUSTOMERPROFILES_API EventTriggerSummaryItem();
    AWS_CUSTOMERPROFILES_API EventTriggerSummaryItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API EventTriggerSummaryItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }
    inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = value; }
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = std::move(value); }
    inline void SetObjectTypeName(const char* value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName.assign(value); }
    inline EventTriggerSummaryItem& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}
    inline EventTriggerSummaryItem& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}
    inline EventTriggerSummaryItem& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the event trigger.</p>
     */
    inline const Aws::String& GetEventTriggerName() const{ return m_eventTriggerName; }
    inline bool EventTriggerNameHasBeenSet() const { return m_eventTriggerNameHasBeenSet; }
    inline void SetEventTriggerName(const Aws::String& value) { m_eventTriggerNameHasBeenSet = true; m_eventTriggerName = value; }
    inline void SetEventTriggerName(Aws::String&& value) { m_eventTriggerNameHasBeenSet = true; m_eventTriggerName = std::move(value); }
    inline void SetEventTriggerName(const char* value) { m_eventTriggerNameHasBeenSet = true; m_eventTriggerName.assign(value); }
    inline EventTriggerSummaryItem& WithEventTriggerName(const Aws::String& value) { SetEventTriggerName(value); return *this;}
    inline EventTriggerSummaryItem& WithEventTriggerName(Aws::String&& value) { SetEventTriggerName(std::move(value)); return *this;}
    inline EventTriggerSummaryItem& WithEventTriggerName(const char* value) { SetEventTriggerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the event trigger.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline EventTriggerSummaryItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline EventTriggerSummaryItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline EventTriggerSummaryItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the event trigger was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline EventTriggerSummaryItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline EventTriggerSummaryItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the event trigger was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline EventTriggerSummaryItem& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline EventTriggerSummaryItem& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs to apply to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline EventTriggerSummaryItem& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline EventTriggerSummaryItem& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline EventTriggerSummaryItem& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline EventTriggerSummaryItem& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline EventTriggerSummaryItem& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline EventTriggerSummaryItem& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline EventTriggerSummaryItem& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline EventTriggerSummaryItem& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline EventTriggerSummaryItem& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_objectTypeName;
    bool m_objectTypeNameHasBeenSet = false;

    Aws::String m_eventTriggerName;
    bool m_eventTriggerNameHasBeenSet = false;

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
