/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/alexaforbusiness/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class CreateSkillGroupRequest : public AlexaForBusinessRequest
  {
  public:
    AWS_ALEXAFORBUSINESS_API CreateSkillGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSkillGroup"; }

    AWS_ALEXAFORBUSINESS_API Aws::String SerializePayload() const override;

    AWS_ALEXAFORBUSINESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the skill group.</p>
     */
    inline const Aws::String& GetSkillGroupName() const{ return m_skillGroupName; }

    /**
     * <p>The name for the skill group.</p>
     */
    inline bool SkillGroupNameHasBeenSet() const { return m_skillGroupNameHasBeenSet; }

    /**
     * <p>The name for the skill group.</p>
     */
    inline void SetSkillGroupName(const Aws::String& value) { m_skillGroupNameHasBeenSet = true; m_skillGroupName = value; }

    /**
     * <p>The name for the skill group.</p>
     */
    inline void SetSkillGroupName(Aws::String&& value) { m_skillGroupNameHasBeenSet = true; m_skillGroupName = std::move(value); }

    /**
     * <p>The name for the skill group.</p>
     */
    inline void SetSkillGroupName(const char* value) { m_skillGroupNameHasBeenSet = true; m_skillGroupName.assign(value); }

    /**
     * <p>The name for the skill group.</p>
     */
    inline CreateSkillGroupRequest& WithSkillGroupName(const Aws::String& value) { SetSkillGroupName(value); return *this;}

    /**
     * <p>The name for the skill group.</p>
     */
    inline CreateSkillGroupRequest& WithSkillGroupName(Aws::String&& value) { SetSkillGroupName(std::move(value)); return *this;}

    /**
     * <p>The name for the skill group.</p>
     */
    inline CreateSkillGroupRequest& WithSkillGroupName(const char* value) { SetSkillGroupName(value); return *this;}


    /**
     * <p>The description for the skill group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the skill group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the skill group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the skill group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the skill group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the skill group.</p>
     */
    inline CreateSkillGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the skill group.</p>
     */
    inline CreateSkillGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the skill group.</p>
     */
    inline CreateSkillGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline CreateSkillGroupRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline CreateSkillGroupRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, user-specified identifier for this request that ensures
     * idempotency. </p>
     */
    inline CreateSkillGroupRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The tags for the skill group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the skill group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the skill group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the skill group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the skill group.</p>
     */
    inline CreateSkillGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the skill group.</p>
     */
    inline CreateSkillGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the skill group.</p>
     */
    inline CreateSkillGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the skill group.</p>
     */
    inline CreateSkillGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_skillGroupName;
    bool m_skillGroupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
