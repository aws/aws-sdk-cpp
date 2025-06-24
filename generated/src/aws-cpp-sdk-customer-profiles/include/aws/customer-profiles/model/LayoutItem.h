/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/LayoutType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The layout object that contains LayoutDefinitionName, Description,
   * DisplayName, IsDefault, LayoutType, Tags, CreatedAt, LastUpdatedAt
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/LayoutItem">AWS
   * API Reference</a></p>
   */
  class LayoutItem
  {
  public:
    AWS_CUSTOMERPROFILES_API LayoutItem() = default;
    AWS_CUSTOMERPROFILES_API LayoutItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API LayoutItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the layout.</p>
     */
    inline const Aws::String& GetLayoutDefinitionName() const { return m_layoutDefinitionName; }
    inline bool LayoutDefinitionNameHasBeenSet() const { return m_layoutDefinitionNameHasBeenSet; }
    template<typename LayoutDefinitionNameT = Aws::String>
    void SetLayoutDefinitionName(LayoutDefinitionNameT&& value) { m_layoutDefinitionNameHasBeenSet = true; m_layoutDefinitionName = std::forward<LayoutDefinitionNameT>(value); }
    template<typename LayoutDefinitionNameT = Aws::String>
    LayoutItem& WithLayoutDefinitionName(LayoutDefinitionNameT&& value) { SetLayoutDefinitionName(std::forward<LayoutDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the layout</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    LayoutItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the layout</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    LayoutItem& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true for a layout, this layout will be used by default to view
     * data. If set to false, then layout will not be used by default but it can be
     * used to view data by explicit selection on UI.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline LayoutItem& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of layout that can be used to view data under customer profiles
     * domain.</p>
     */
    inline LayoutType GetLayoutType() const { return m_layoutType; }
    inline bool LayoutTypeHasBeenSet() const { return m_layoutTypeHasBeenSet; }
    inline void SetLayoutType(LayoutType value) { m_layoutTypeHasBeenSet = true; m_layoutType = value; }
    inline LayoutItem& WithLayoutType(LayoutType value) { SetLayoutType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    LayoutItem& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    LayoutItem& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the layout was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    LayoutItem& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the layout was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    LayoutItem& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_layoutDefinitionName;
    bool m_layoutDefinitionNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;

    LayoutType m_layoutType{LayoutType::NOT_SET};
    bool m_layoutTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
