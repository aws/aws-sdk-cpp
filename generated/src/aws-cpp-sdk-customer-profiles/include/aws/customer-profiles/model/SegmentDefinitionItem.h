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
   * <p>Object holding the segment definition fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/SegmentDefinitionItem">AWS
   * API Reference</a></p>
   */
  class SegmentDefinitionItem
  {
  public:
    AWS_CUSTOMERPROFILES_API SegmentDefinitionItem() = default;
    AWS_CUSTOMERPROFILES_API SegmentDefinitionItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API SegmentDefinitionItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the segment definition.</p>
     */
    inline const Aws::String& GetSegmentDefinitionName() const { return m_segmentDefinitionName; }
    inline bool SegmentDefinitionNameHasBeenSet() const { return m_segmentDefinitionNameHasBeenSet; }
    template<typename SegmentDefinitionNameT = Aws::String>
    void SetSegmentDefinitionName(SegmentDefinitionNameT&& value) { m_segmentDefinitionNameHasBeenSet = true; m_segmentDefinitionName = std::forward<SegmentDefinitionNameT>(value); }
    template<typename SegmentDefinitionNameT = Aws::String>
    SegmentDefinitionItem& WithSegmentDefinitionName(SegmentDefinitionNameT&& value) { SetSegmentDefinitionName(std::forward<SegmentDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Display name of the segment definition.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    SegmentDefinitionItem& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the segment definition.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SegmentDefinitionItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arn of the segment definition.</p>
     */
    inline const Aws::String& GetSegmentDefinitionArn() const { return m_segmentDefinitionArn; }
    inline bool SegmentDefinitionArnHasBeenSet() const { return m_segmentDefinitionArnHasBeenSet; }
    template<typename SegmentDefinitionArnT = Aws::String>
    void SetSegmentDefinitionArn(SegmentDefinitionArnT&& value) { m_segmentDefinitionArnHasBeenSet = true; m_segmentDefinitionArn = std::forward<SegmentDefinitionArnT>(value); }
    template<typename SegmentDefinitionArnT = Aws::String>
    SegmentDefinitionItem& WithSegmentDefinitionArn(SegmentDefinitionArnT&& value) { SetSegmentDefinitionArn(std::forward<SegmentDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the segment definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SegmentDefinitionItem& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags belonging to the segment definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    SegmentDefinitionItem& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    SegmentDefinitionItem& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_segmentDefinitionName;
    bool m_segmentDefinitionNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_segmentDefinitionArn;
    bool m_segmentDefinitionArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
