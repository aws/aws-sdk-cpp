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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API TagResourceRequest : public OpsWorksRequest
  {
  public:
    TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>A map that contains tag keys and tag values that are attached to a stack or
     * layer.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The key can
     * be a maximum of 127 characters, and can contain only Unicode letters, numbers,
     * or separators, or the following special characters: <code>+ - = . _ : /</code>
     * </p> </li> <li> <p>The value can be a maximum 255 characters, and contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing white spaces
     * are trimmed from both the key and value.</p> </li> <li> <p>A maximum of 40 tags
     * is allowed for any resource.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to a stack or
     * layer.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The key can
     * be a maximum of 127 characters, and can contain only Unicode letters, numbers,
     * or separators, or the following special characters: <code>+ - = . _ : /</code>
     * </p> </li> <li> <p>The value can be a maximum 255 characters, and contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing white spaces
     * are trimmed from both the key and value.</p> </li> <li> <p>A maximum of 40 tags
     * is allowed for any resource.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to a stack or
     * layer.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The key can
     * be a maximum of 127 characters, and can contain only Unicode letters, numbers,
     * or separators, or the following special characters: <code>+ - = . _ : /</code>
     * </p> </li> <li> <p>The value can be a maximum 255 characters, and contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing white spaces
     * are trimmed from both the key and value.</p> </li> <li> <p>A maximum of 40 tags
     * is allowed for any resource.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to a stack or
     * layer.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The key can
     * be a maximum of 127 characters, and can contain only Unicode letters, numbers,
     * or separators, or the following special characters: <code>+ - = . _ : /</code>
     * </p> </li> <li> <p>The value can be a maximum 255 characters, and contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing white spaces
     * are trimmed from both the key and value.</p> </li> <li> <p>A maximum of 40 tags
     * is allowed for any resource.</p> </li> </ul>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to a stack or
     * layer.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The key can
     * be a maximum of 127 characters, and can contain only Unicode letters, numbers,
     * or separators, or the following special characters: <code>+ - = . _ : /</code>
     * </p> </li> <li> <p>The value can be a maximum 255 characters, and contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing white spaces
     * are trimmed from both the key and value.</p> </li> <li> <p>A maximum of 40 tags
     * is allowed for any resource.</p> </li> </ul>
     */
    inline TagResourceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to a stack or
     * layer.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The key can
     * be a maximum of 127 characters, and can contain only Unicode letters, numbers,
     * or separators, or the following special characters: <code>+ - = . _ : /</code>
     * </p> </li> <li> <p>The value can be a maximum 255 characters, and contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing white spaces
     * are trimmed from both the key and value.</p> </li> <li> <p>A maximum of 40 tags
     * is allowed for any resource.</p> </li> </ul>
     */
    inline TagResourceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to a stack or
     * layer.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The key can
     * be a maximum of 127 characters, and can contain only Unicode letters, numbers,
     * or separators, or the following special characters: <code>+ - = . _ : /</code>
     * </p> </li> <li> <p>The value can be a maximum 255 characters, and contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing white spaces
     * are trimmed from both the key and value.</p> </li> <li> <p>A maximum of 40 tags
     * is allowed for any resource.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to a stack or
     * layer.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The key can
     * be a maximum of 127 characters, and can contain only Unicode letters, numbers,
     * or separators, or the following special characters: <code>+ - = . _ : /</code>
     * </p> </li> <li> <p>The value can be a maximum 255 characters, and contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing white spaces
     * are trimmed from both the key and value.</p> </li> <li> <p>A maximum of 40 tags
     * is allowed for any resource.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to a stack or
     * layer.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The key can
     * be a maximum of 127 characters, and can contain only Unicode letters, numbers,
     * or separators, or the following special characters: <code>+ - = . _ : /</code>
     * </p> </li> <li> <p>The value can be a maximum 255 characters, and contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing white spaces
     * are trimmed from both the key and value.</p> </li> <li> <p>A maximum of 40 tags
     * is allowed for any resource.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to a stack or
     * layer.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The key can
     * be a maximum of 127 characters, and can contain only Unicode letters, numbers,
     * or separators, or the following special characters: <code>+ - = . _ : /</code>
     * </p> </li> <li> <p>The value can be a maximum 255 characters, and contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing white spaces
     * are trimmed from both the key and value.</p> </li> <li> <p>A maximum of 40 tags
     * is allowed for any resource.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to a stack or
     * layer.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The key can
     * be a maximum of 127 characters, and can contain only Unicode letters, numbers,
     * or separators, or the following special characters: <code>+ - = . _ : /</code>
     * </p> </li> <li> <p>The value can be a maximum 255 characters, and contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing white spaces
     * are trimmed from both the key and value.</p> </li> <li> <p>A maximum of 40 tags
     * is allowed for any resource.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to a stack or
     * layer.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The key can
     * be a maximum of 127 characters, and can contain only Unicode letters, numbers,
     * or separators, or the following special characters: <code>+ - = . _ : /</code>
     * </p> </li> <li> <p>The value can be a maximum 255 characters, and contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing white spaces
     * are trimmed from both the key and value.</p> </li> <li> <p>A maximum of 40 tags
     * is allowed for any resource.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to a stack or
     * layer.</p> <ul> <li> <p>The key cannot be empty.</p> </li> <li> <p>The key can
     * be a maximum of 127 characters, and can contain only Unicode letters, numbers,
     * or separators, or the following special characters: <code>+ - = . _ : /</code>
     * </p> </li> <li> <p>The value can be a maximum 255 characters, and contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p> </li> <li> <p>Leading and trailing white spaces
     * are trimmed from both the key and value.</p> </li> <li> <p>A maximum of 40 tags
     * is allowed for any resource.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
