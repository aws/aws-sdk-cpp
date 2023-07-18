﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/macie2/model/FindingsFilterAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/FindingCriteria.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class AWS_MACIE2_API CreateFindingsFilterRequest : public Macie2Request
  {
  public:
    CreateFindingsFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFindingsFilter"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The action to perform on findings that meet the filter criteria
     * (findingCriteria). Valid values are: ARCHIVE, suppress (automatically archive)
     * the findings; and, NOOP, don't perform any action on the findings.</p>
     */
    inline const FindingsFilterAction& GetAction() const{ return m_action; }

    /**
     * <p>The action to perform on findings that meet the filter criteria
     * (findingCriteria). Valid values are: ARCHIVE, suppress (automatically archive)
     * the findings; and, NOOP, don't perform any action on the findings.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to perform on findings that meet the filter criteria
     * (findingCriteria). Valid values are: ARCHIVE, suppress (automatically archive)
     * the findings; and, NOOP, don't perform any action on the findings.</p>
     */
    inline void SetAction(const FindingsFilterAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to perform on findings that meet the filter criteria
     * (findingCriteria). Valid values are: ARCHIVE, suppress (automatically archive)
     * the findings; and, NOOP, don't perform any action on the findings.</p>
     */
    inline void SetAction(FindingsFilterAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to perform on findings that meet the filter criteria
     * (findingCriteria). Valid values are: ARCHIVE, suppress (automatically archive)
     * the findings; and, NOOP, don't perform any action on the findings.</p>
     */
    inline CreateFindingsFilterRequest& WithAction(const FindingsFilterAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action to perform on findings that meet the filter criteria
     * (findingCriteria). Valid values are: ARCHIVE, suppress (automatically archive)
     * the findings; and, NOOP, don't perform any action on the findings.</p>
     */
    inline CreateFindingsFilterRequest& WithAction(FindingsFilterAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateFindingsFilterRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateFindingsFilterRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateFindingsFilterRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A custom description of the filter. The description can contain as many as
     * 512 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the description of a filter. Other users of your account might
     * be able to see this description, depending on the actions that they're allowed
     * to perform in Amazon Macie.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A custom description of the filter. The description can contain as many as
     * 512 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the description of a filter. Other users of your account might
     * be able to see this description, depending on the actions that they're allowed
     * to perform in Amazon Macie.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A custom description of the filter. The description can contain as many as
     * 512 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the description of a filter. Other users of your account might
     * be able to see this description, depending on the actions that they're allowed
     * to perform in Amazon Macie.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A custom description of the filter. The description can contain as many as
     * 512 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the description of a filter. Other users of your account might
     * be able to see this description, depending on the actions that they're allowed
     * to perform in Amazon Macie.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A custom description of the filter. The description can contain as many as
     * 512 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the description of a filter. Other users of your account might
     * be able to see this description, depending on the actions that they're allowed
     * to perform in Amazon Macie.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A custom description of the filter. The description can contain as many as
     * 512 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the description of a filter. Other users of your account might
     * be able to see this description, depending on the actions that they're allowed
     * to perform in Amazon Macie.</p>
     */
    inline CreateFindingsFilterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A custom description of the filter. The description can contain as many as
     * 512 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the description of a filter. Other users of your account might
     * be able to see this description, depending on the actions that they're allowed
     * to perform in Amazon Macie.</p>
     */
    inline CreateFindingsFilterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description of the filter. The description can contain as many as
     * 512 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the description of a filter. Other users of your account might
     * be able to see this description, depending on the actions that they're allowed
     * to perform in Amazon Macie.</p>
     */
    inline CreateFindingsFilterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The criteria to use to filter findings.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }

    /**
     * <p>The criteria to use to filter findings.</p>
     */
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }

    /**
     * <p>The criteria to use to filter findings.</p>
     */
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = value; }

    /**
     * <p>The criteria to use to filter findings.</p>
     */
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::move(value); }

    /**
     * <p>The criteria to use to filter findings.</p>
     */
    inline CreateFindingsFilterRequest& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}

    /**
     * <p>The criteria to use to filter findings.</p>
     */
    inline CreateFindingsFilterRequest& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}


    /**
     * <p>A custom name for the filter. The name must contain at least 3 characters and
     * can contain as many as 64 characters.</p> <p>We strongly recommend that you
     * avoid including any sensitive data in the name of a filter. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A custom name for the filter. The name must contain at least 3 characters and
     * can contain as many as 64 characters.</p> <p>We strongly recommend that you
     * avoid including any sensitive data in the name of a filter. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A custom name for the filter. The name must contain at least 3 characters and
     * can contain as many as 64 characters.</p> <p>We strongly recommend that you
     * avoid including any sensitive data in the name of a filter. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A custom name for the filter. The name must contain at least 3 characters and
     * can contain as many as 64 characters.</p> <p>We strongly recommend that you
     * avoid including any sensitive data in the name of a filter. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A custom name for the filter. The name must contain at least 3 characters and
     * can contain as many as 64 characters.</p> <p>We strongly recommend that you
     * avoid including any sensitive data in the name of a filter. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A custom name for the filter. The name must contain at least 3 characters and
     * can contain as many as 64 characters.</p> <p>We strongly recommend that you
     * avoid including any sensitive data in the name of a filter. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline CreateFindingsFilterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A custom name for the filter. The name must contain at least 3 characters and
     * can contain as many as 64 characters.</p> <p>We strongly recommend that you
     * avoid including any sensitive data in the name of a filter. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline CreateFindingsFilterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A custom name for the filter. The name must contain at least 3 characters and
     * can contain as many as 64 characters.</p> <p>We strongly recommend that you
     * avoid including any sensitive data in the name of a filter. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline CreateFindingsFilterRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The position of the filter in the list of saved filters on the Amazon Macie
     * console. This value also determines the order in which the filter is applied to
     * findings, relative to other filters that are also applied to the findings.</p>
     */
    inline int GetPosition() const{ return m_position; }

    /**
     * <p>The position of the filter in the list of saved filters on the Amazon Macie
     * console. This value also determines the order in which the filter is applied to
     * findings, relative to other filters that are also applied to the findings.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>The position of the filter in the list of saved filters on the Amazon Macie
     * console. This value also determines the order in which the filter is applied to
     * findings, relative to other filters that are also applied to the findings.</p>
     */
    inline void SetPosition(int value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The position of the filter in the list of saved filters on the Amazon Macie
     * console. This value also determines the order in which the filter is applied to
     * findings, relative to other filters that are also applied to the findings.</p>
     */
    inline CreateFindingsFilterRequest& WithPosition(int value) { SetPosition(value); return *this;}


    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * filter.</p> <p>A findings filter can have a maximum of 50 tags. Each tag
     * consists of a tag key and an associated tag value. The maximum length of a tag
     * key is 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * filter.</p> <p>A findings filter can have a maximum of 50 tags. Each tag
     * consists of a tag key and an associated tag value. The maximum length of a tag
     * key is 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * filter.</p> <p>A findings filter can have a maximum of 50 tags. Each tag
     * consists of a tag key and an associated tag value. The maximum length of a tag
     * key is 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * filter.</p> <p>A findings filter can have a maximum of 50 tags. Each tag
     * consists of a tag key and an associated tag value. The maximum length of a tag
     * key is 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * filter.</p> <p>A findings filter can have a maximum of 50 tags. Each tag
     * consists of a tag key and an associated tag value. The maximum length of a tag
     * key is 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateFindingsFilterRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * filter.</p> <p>A findings filter can have a maximum of 50 tags. Each tag
     * consists of a tag key and an associated tag value. The maximum length of a tag
     * key is 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateFindingsFilterRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * filter.</p> <p>A findings filter can have a maximum of 50 tags. Each tag
     * consists of a tag key and an associated tag value. The maximum length of a tag
     * key is 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateFindingsFilterRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * filter.</p> <p>A findings filter can have a maximum of 50 tags. Each tag
     * consists of a tag key and an associated tag value. The maximum length of a tag
     * key is 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateFindingsFilterRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * filter.</p> <p>A findings filter can have a maximum of 50 tags. Each tag
     * consists of a tag key and an associated tag value. The maximum length of a tag
     * key is 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateFindingsFilterRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * filter.</p> <p>A findings filter can have a maximum of 50 tags. Each tag
     * consists of a tag key and an associated tag value. The maximum length of a tag
     * key is 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateFindingsFilterRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * filter.</p> <p>A findings filter can have a maximum of 50 tags. Each tag
     * consists of a tag key and an associated tag value. The maximum length of a tag
     * key is 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateFindingsFilterRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * filter.</p> <p>A findings filter can have a maximum of 50 tags. Each tag
     * consists of a tag key and an associated tag value. The maximum length of a tag
     * key is 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateFindingsFilterRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * filter.</p> <p>A findings filter can have a maximum of 50 tags. Each tag
     * consists of a tag key and an associated tag value. The maximum length of a tag
     * key is 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateFindingsFilterRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    FindingsFilterAction m_action;
    bool m_actionHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_position;
    bool m_positionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
