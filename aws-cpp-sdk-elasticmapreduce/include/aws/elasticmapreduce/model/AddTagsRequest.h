/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/Tag.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>This input identifies an Amazon EMR resource and a list of tags to
   * attach.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddTagsInput">AWS
   * API Reference</a></p>
   */
  class AddTagsRequest : public EMRRequest
  {
  public:
    AWS_EMR_API AddTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTags"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. For example,
     * a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. For example,
     * a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. For example,
     * a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. For example,
     * a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. For example,
     * a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. For example,
     * a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline AddTagsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. For example,
     * a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline AddTagsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The Amazon EMR resource identifier to which tags will be added. For example,
     * a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline AddTagsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>A list of tags to associate with a resource. Tags are user-defined key-value
     * pairs that consist of a required key string with a maximum of 128 characters,
     * and an optional value string with a maximum of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to associate with a resource. Tags are user-defined key-value
     * pairs that consist of a required key string with a maximum of 128 characters,
     * and an optional value string with a maximum of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to associate with a resource. Tags are user-defined key-value
     * pairs that consist of a required key string with a maximum of 128 characters,
     * and an optional value string with a maximum of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to associate with a resource. Tags are user-defined key-value
     * pairs that consist of a required key string with a maximum of 128 characters,
     * and an optional value string with a maximum of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to associate with a resource. Tags are user-defined key-value
     * pairs that consist of a required key string with a maximum of 128 characters,
     * and an optional value string with a maximum of 256 characters.</p>
     */
    inline AddTagsRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to associate with a resource. Tags are user-defined key-value
     * pairs that consist of a required key string with a maximum of 128 characters,
     * and an optional value string with a maximum of 256 characters.</p>
     */
    inline AddTagsRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to associate with a resource. Tags are user-defined key-value
     * pairs that consist of a required key string with a maximum of 128 characters,
     * and an optional value string with a maximum of 256 characters.</p>
     */
    inline AddTagsRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to associate with a resource. Tags are user-defined key-value
     * pairs that consist of a required key string with a maximum of 128 characters,
     * and an optional value string with a maximum of 256 characters.</p>
     */
    inline AddTagsRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
