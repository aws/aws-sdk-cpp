/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/FilterAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/FilterCriteria.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class CreateFilterRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API CreateFilterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFilter"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Defines the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline FilterAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(FilterAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline CreateFilterRequest& WithAction(FilterAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the filter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateFilterRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the criteria to be used in the filter for querying findings.</p>
     */
    inline const FilterCriteria& GetFilterCriteria() const { return m_filterCriteria; }
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }
    template<typename FilterCriteriaT = FilterCriteria>
    void SetFilterCriteria(FilterCriteriaT&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::forward<FilterCriteriaT>(value); }
    template<typename FilterCriteriaT = FilterCriteria>
    CreateFilterRequest& WithFilterCriteria(FilterCriteriaT&& value) { SetFilterCriteria(std::forward<FilterCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the filter. Minimum length of 3. Maximum length of 64. Valid
     * characters include alphanumeric characters, dot (.), underscore (_), and dash
     * (-). Spaces are not allowed.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateFilterRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags for the filter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateFilterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateFilterRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The reason for creating the filter.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    CreateFilterRequest& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    FilterAction m_action{FilterAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
