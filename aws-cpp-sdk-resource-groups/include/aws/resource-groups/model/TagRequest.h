/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class AWS_RESOURCEGROUPS_API TagRequest : public ResourceGroupsRequest
  {
  public:
    TagRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Tag"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the resource to which to add tags.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the resource to which to add tags.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the resource to which to add tags.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the resource to which to add tags.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the resource to which to add tags.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the resource to which to add tags.</p>
     */
    inline TagRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the resource to which to add tags.</p>
     */
    inline TagRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource to which to add tags.</p>
     */
    inline TagRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The tags to add to the specified resource. A tag is a string-to-string map of
     * key-value pairs. Tag keys can have a maximum character length of 128 characters,
     * and tag values can have a maximum length of 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the specified resource. A tag is a string-to-string map of
     * key-value pairs. Tag keys can have a maximum character length of 128 characters,
     * and tag values can have a maximum length of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add to the specified resource. A tag is a string-to-string map of
     * key-value pairs. Tag keys can have a maximum character length of 128 characters,
     * and tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the specified resource. A tag is a string-to-string map of
     * key-value pairs. Tag keys can have a maximum character length of 128 characters,
     * and tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add to the specified resource. A tag is a string-to-string map of
     * key-value pairs. Tag keys can have a maximum character length of 128 characters,
     * and tag values can have a maximum length of 256 characters.</p>
     */
    inline TagRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the specified resource. A tag is a string-to-string map of
     * key-value pairs. Tag keys can have a maximum character length of 128 characters,
     * and tag values can have a maximum length of 256 characters.</p>
     */
    inline TagRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the specified resource. A tag is a string-to-string map of
     * key-value pairs. Tag keys can have a maximum character length of 128 characters,
     * and tag values can have a maximum length of 256 characters.</p>
     */
    inline TagRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to add to the specified resource. A tag is a string-to-string map of
     * key-value pairs. Tag keys can have a maximum character length of 128 characters,
     * and tag values can have a maximum length of 256 characters.</p>
     */
    inline TagRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to add to the specified resource. A tag is a string-to-string map of
     * key-value pairs. Tag keys can have a maximum character length of 128 characters,
     * and tag values can have a maximum length of 256 characters.</p>
     */
    inline TagRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to add to the specified resource. A tag is a string-to-string map of
     * key-value pairs. Tag keys can have a maximum character length of 128 characters,
     * and tag values can have a maximum length of 256 characters.</p>
     */
    inline TagRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to add to the specified resource. A tag is a string-to-string map of
     * key-value pairs. Tag keys can have a maximum character length of 128 characters,
     * and tag values can have a maximum length of 256 characters.</p>
     */
    inline TagRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to add to the specified resource. A tag is a string-to-string map of
     * key-value pairs. Tag keys can have a maximum character length of 128 characters,
     * and tag values can have a maximum length of 256 characters.</p>
     */
    inline TagRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to add to the specified resource. A tag is a string-to-string map of
     * key-value pairs. Tag keys can have a maximum character length of 128 characters,
     * and tag values can have a maximum length of 256 characters.</p>
     */
    inline TagRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
