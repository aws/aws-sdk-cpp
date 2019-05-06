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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/TaggableResourceType.h>
#include <aws/machinelearning/model/Tag.h>
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class AWS_MACHINELEARNING_API AddTagsRequest : public MachineLearningRequest
  {
  public:
    AddTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTags"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The key-value pairs to use to create tags. If you specify a key without
     * specifying a value, Amazon ML creates a tag with the specified key and a value
     * of null.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pairs to use to create tags. If you specify a key without
     * specifying a value, Amazon ML creates a tag with the specified key and a value
     * of null.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pairs to use to create tags. If you specify a key without
     * specifying a value, Amazon ML creates a tag with the specified key and a value
     * of null.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pairs to use to create tags. If you specify a key without
     * specifying a value, Amazon ML creates a tag with the specified key and a value
     * of null.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pairs to use to create tags. If you specify a key without
     * specifying a value, Amazon ML creates a tag with the specified key and a value
     * of null.</p>
     */
    inline AddTagsRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pairs to use to create tags. If you specify a key without
     * specifying a value, Amazon ML creates a tag with the specified key and a value
     * of null.</p>
     */
    inline AddTagsRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pairs to use to create tags. If you specify a key without
     * specifying a value, Amazon ML creates a tag with the specified key and a value
     * of null.</p>
     */
    inline AddTagsRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pairs to use to create tags. If you specify a key without
     * specifying a value, Amazon ML creates a tag with the specified key and a value
     * of null.</p>
     */
    inline AddTagsRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the ML object to tag. For example, <code>exampleModelId</code>.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the ML object to tag. For example, <code>exampleModelId</code>.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the ML object to tag. For example, <code>exampleModelId</code>.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the ML object to tag. For example, <code>exampleModelId</code>.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the ML object to tag. For example, <code>exampleModelId</code>.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the ML object to tag. For example, <code>exampleModelId</code>.</p>
     */
    inline AddTagsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the ML object to tag. For example, <code>exampleModelId</code>.</p>
     */
    inline AddTagsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the ML object to tag. For example, <code>exampleModelId</code>.</p>
     */
    inline AddTagsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The type of the ML object to tag. </p>
     */
    inline const TaggableResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the ML object to tag. </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the ML object to tag. </p>
     */
    inline void SetResourceType(const TaggableResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the ML object to tag. </p>
     */
    inline void SetResourceType(TaggableResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the ML object to tag. </p>
     */
    inline AddTagsRequest& WithResourceType(const TaggableResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the ML object to tag. </p>
     */
    inline AddTagsRequest& WithResourceType(TaggableResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    TaggableResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
