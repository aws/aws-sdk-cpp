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
    AWS_INSPECTOR2_API CreateFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFilter"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>Defines the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline const FilterAction& GetAction() const{ return m_action; }

    /**
     * <p>Defines the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Defines the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline void SetAction(const FilterAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Defines the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline void SetAction(FilterAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Defines the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline CreateFilterRequest& WithAction(const FilterAction& value) { SetAction(value); return *this;}

    /**
     * <p>Defines the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline CreateFilterRequest& WithAction(FilterAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>A description of the filter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the filter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the filter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the filter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the filter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the filter.</p>
     */
    inline CreateFilterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the filter.</p>
     */
    inline CreateFilterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the filter.</p>
     */
    inline CreateFilterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Defines the criteria to be used in the filter for querying findings.</p>
     */
    inline const FilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>Defines the criteria to be used in the filter for querying findings.</p>
     */
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }

    /**
     * <p>Defines the criteria to be used in the filter for querying findings.</p>
     */
    inline void SetFilterCriteria(const FilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }

    /**
     * <p>Defines the criteria to be used in the filter for querying findings.</p>
     */
    inline void SetFilterCriteria(FilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }

    /**
     * <p>Defines the criteria to be used in the filter for querying findings.</p>
     */
    inline CreateFilterRequest& WithFilterCriteria(const FilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>Defines the criteria to be used in the filter for querying findings.</p>
     */
    inline CreateFilterRequest& WithFilterCriteria(FilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>The name of the filter. Minimum length of 3. Maximum length of 64. Valid
     * characters include alphanumeric characters, dot (.), underscore (_), and dash
     * (-). Spaces are not allowed.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter. Minimum length of 3. Maximum length of 64. Valid
     * characters include alphanumeric characters, dot (.), underscore (_), and dash
     * (-). Spaces are not allowed.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter. Minimum length of 3. Maximum length of 64. Valid
     * characters include alphanumeric characters, dot (.), underscore (_), and dash
     * (-). Spaces are not allowed.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter. Minimum length of 3. Maximum length of 64. Valid
     * characters include alphanumeric characters, dot (.), underscore (_), and dash
     * (-). Spaces are not allowed.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter. Minimum length of 3. Maximum length of 64. Valid
     * characters include alphanumeric characters, dot (.), underscore (_), and dash
     * (-). Spaces are not allowed.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the filter. Minimum length of 3. Maximum length of 64. Valid
     * characters include alphanumeric characters, dot (.), underscore (_), and dash
     * (-). Spaces are not allowed.</p>
     */
    inline CreateFilterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter. Minimum length of 3. Maximum length of 64. Valid
     * characters include alphanumeric characters, dot (.), underscore (_), and dash
     * (-). Spaces are not allowed.</p>
     */
    inline CreateFilterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the filter. Minimum length of 3. Maximum length of 64. Valid
     * characters include alphanumeric characters, dot (.), underscore (_), and dash
     * (-). Spaces are not allowed.</p>
     */
    inline CreateFilterRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The reason for creating the filter.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for creating the filter.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for creating the filter.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for creating the filter.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for creating the filter.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for creating the filter.</p>
     */
    inline CreateFilterRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for creating the filter.</p>
     */
    inline CreateFilterRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for creating the filter.</p>
     */
    inline CreateFilterRequest& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>A list of tags for the filter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags for the filter.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags for the filter.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags for the filter.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags for the filter.</p>
     */
    inline CreateFilterRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags for the filter.</p>
     */
    inline CreateFilterRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags for the filter.</p>
     */
    inline CreateFilterRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags for the filter.</p>
     */
    inline CreateFilterRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags for the filter.</p>
     */
    inline CreateFilterRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags for the filter.</p>
     */
    inline CreateFilterRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags for the filter.</p>
     */
    inline CreateFilterRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags for the filter.</p>
     */
    inline CreateFilterRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags for the filter.</p>
     */
    inline CreateFilterRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    FilterAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
