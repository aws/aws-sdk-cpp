/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class CreateGraphRequest : public DetectiveRequest
  {
  public:
    AWS_DETECTIVE_API CreateGraphRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGraph"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    /**
     * <p>The tags to assign to the new behavior graph. You can add up to 50 tags. For
     * each tag, you provide the tag key and the tag value. Each tag key can contain up
     * to 128 characters. Each tag value can contain up to 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the new behavior graph. You can add up to 50 tags. For
     * each tag, you provide the tag key and the tag value. Each tag key can contain up
     * to 128 characters. Each tag value can contain up to 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the new behavior graph. You can add up to 50 tags. For
     * each tag, you provide the tag key and the tag value. Each tag key can contain up
     * to 128 characters. Each tag value can contain up to 256 characters.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the new behavior graph. You can add up to 50 tags. For
     * each tag, you provide the tag key and the tag value. Each tag key can contain up
     * to 128 characters. Each tag value can contain up to 256 characters.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the new behavior graph. You can add up to 50 tags. For
     * each tag, you provide the tag key and the tag value. Each tag key can contain up
     * to 128 characters. Each tag value can contain up to 256 characters.</p>
     */
    inline CreateGraphRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the new behavior graph. You can add up to 50 tags. For
     * each tag, you provide the tag key and the tag value. Each tag key can contain up
     * to 128 characters. Each tag value can contain up to 256 characters.</p>
     */
    inline CreateGraphRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the new behavior graph. You can add up to 50 tags. For
     * each tag, you provide the tag key and the tag value. Each tag key can contain up
     * to 128 characters. Each tag value can contain up to 256 characters.</p>
     */
    inline CreateGraphRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to assign to the new behavior graph. You can add up to 50 tags. For
     * each tag, you provide the tag key and the tag value. Each tag key can contain up
     * to 128 characters. Each tag value can contain up to 256 characters.</p>
     */
    inline CreateGraphRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the new behavior graph. You can add up to 50 tags. For
     * each tag, you provide the tag key and the tag value. Each tag key can contain up
     * to 128 characters. Each tag value can contain up to 256 characters.</p>
     */
    inline CreateGraphRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the new behavior graph. You can add up to 50 tags. For
     * each tag, you provide the tag key and the tag value. Each tag key can contain up
     * to 128 characters. Each tag value can contain up to 256 characters.</p>
     */
    inline CreateGraphRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the new behavior graph. You can add up to 50 tags. For
     * each tag, you provide the tag key and the tag value. Each tag key can contain up
     * to 128 characters. Each tag value can contain up to 256 characters.</p>
     */
    inline CreateGraphRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the new behavior graph. You can add up to 50 tags. For
     * each tag, you provide the tag key and the tag value. Each tag key can contain up
     * to 128 characters. Each tag value can contain up to 256 characters.</p>
     */
    inline CreateGraphRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the new behavior graph. You can add up to 50 tags. For
     * each tag, you provide the tag key and the tag value. Each tag key can contain up
     * to 128 characters. Each tag value can contain up to 256 characters.</p>
     */
    inline CreateGraphRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
