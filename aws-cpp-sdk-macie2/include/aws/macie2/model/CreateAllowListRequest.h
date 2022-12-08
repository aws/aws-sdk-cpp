/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/AllowListCriteria.h>
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
  class CreateAllowListRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API CreateAllowListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAllowList"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


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
    inline CreateAllowListRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateAllowListRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateAllowListRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression (regex) that defines a text pattern to
     * ignore.</p>
     */
    inline const AllowListCriteria& GetCriteria() const{ return m_criteria; }

    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression (regex) that defines a text pattern to
     * ignore.</p>
     */
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }

    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression (regex) that defines a text pattern to
     * ignore.</p>
     */
    inline void SetCriteria(const AllowListCriteria& value) { m_criteriaHasBeenSet = true; m_criteria = value; }

    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression (regex) that defines a text pattern to
     * ignore.</p>
     */
    inline void SetCriteria(AllowListCriteria&& value) { m_criteriaHasBeenSet = true; m_criteria = std::move(value); }

    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression (regex) that defines a text pattern to
     * ignore.</p>
     */
    inline CreateAllowListRequest& WithCriteria(const AllowListCriteria& value) { SetCriteria(value); return *this;}

    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression (regex) that defines a text pattern to
     * ignore.</p>
     */
    inline CreateAllowListRequest& WithCriteria(AllowListCriteria&& value) { SetCriteria(std::move(value)); return *this;}


    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline CreateAllowListRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline CreateAllowListRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline CreateAllowListRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline CreateAllowListRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline CreateAllowListRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline CreateAllowListRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the allow
     * list.</p> <p>An allow list can have a maximum of 50 tags. Each tag consists of a
     * tag key and an associated tag value. The maximum length of a tag key is 128
     * characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the allow
     * list.</p> <p>An allow list can have a maximum of 50 tags. Each tag consists of a
     * tag key and an associated tag value. The maximum length of a tag key is 128
     * characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the allow
     * list.</p> <p>An allow list can have a maximum of 50 tags. Each tag consists of a
     * tag key and an associated tag value. The maximum length of a tag key is 128
     * characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the allow
     * list.</p> <p>An allow list can have a maximum of 50 tags. Each tag consists of a
     * tag key and an associated tag value. The maximum length of a tag key is 128
     * characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the allow
     * list.</p> <p>An allow list can have a maximum of 50 tags. Each tag consists of a
     * tag key and an associated tag value. The maximum length of a tag key is 128
     * characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateAllowListRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the allow
     * list.</p> <p>An allow list can have a maximum of 50 tags. Each tag consists of a
     * tag key and an associated tag value. The maximum length of a tag key is 128
     * characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateAllowListRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the allow
     * list.</p> <p>An allow list can have a maximum of 50 tags. Each tag consists of a
     * tag key and an associated tag value. The maximum length of a tag key is 128
     * characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateAllowListRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the allow
     * list.</p> <p>An allow list can have a maximum of 50 tags. Each tag consists of a
     * tag key and an associated tag value. The maximum length of a tag key is 128
     * characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateAllowListRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the allow
     * list.</p> <p>An allow list can have a maximum of 50 tags. Each tag consists of a
     * tag key and an associated tag value. The maximum length of a tag key is 128
     * characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateAllowListRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the allow
     * list.</p> <p>An allow list can have a maximum of 50 tags. Each tag consists of a
     * tag key and an associated tag value. The maximum length of a tag key is 128
     * characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateAllowListRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the allow
     * list.</p> <p>An allow list can have a maximum of 50 tags. Each tag consists of a
     * tag key and an associated tag value. The maximum length of a tag key is 128
     * characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateAllowListRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the allow
     * list.</p> <p>An allow list can have a maximum of 50 tags. Each tag consists of a
     * tag key and an associated tag value. The maximum length of a tag key is 128
     * characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateAllowListRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the allow
     * list.</p> <p>An allow list can have a maximum of 50 tags. Each tag consists of a
     * tag key and an associated tag value. The maximum length of a tag key is 128
     * characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateAllowListRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    AllowListCriteria m_criteria;
    bool m_criteriaHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
