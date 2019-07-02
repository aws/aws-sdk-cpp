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
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/MediaStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediastore/model/Tag.h>
#include <utility>

namespace Aws
{
namespace MediaStore
{
namespace Model
{

  /**
   */
  class AWS_MEDIASTORE_API TagResourceRequest : public MediaStoreRequest
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
     * <p>The Amazon Resource Name (ARN) for the container. </p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The Amazon Resource Name (ARN) for the container. </p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the container. </p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the container. </p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the container. </p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the container. </p>
     */
    inline TagResourceRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the container. </p>
     */
    inline TagResourceRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the container. </p>
     */
    inline TagResourceRequest& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>An array of key:value pairs that you want to add to the container. You need
     * to specify only the tags that you want to add or update. For example, suppose a
     * container already has two tags (customer:CompanyA and priority:High). You want
     * to change the priority tag and also add a third tag (type:Contract). For
     * TagResource, you specify the following tags: priority:Medium, type:Contract. The
     * result is that your container has three tags: customer:CompanyA,
     * priority:Medium, and type:Contract.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key:value pairs that you want to add to the container. You need
     * to specify only the tags that you want to add or update. For example, suppose a
     * container already has two tags (customer:CompanyA and priority:High). You want
     * to change the priority tag and also add a third tag (type:Contract). For
     * TagResource, you specify the following tags: priority:Medium, type:Contract. The
     * result is that your container has three tags: customer:CompanyA,
     * priority:Medium, and type:Contract.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key:value pairs that you want to add to the container. You need
     * to specify only the tags that you want to add or update. For example, suppose a
     * container already has two tags (customer:CompanyA and priority:High). You want
     * to change the priority tag and also add a third tag (type:Contract). For
     * TagResource, you specify the following tags: priority:Medium, type:Contract. The
     * result is that your container has three tags: customer:CompanyA,
     * priority:Medium, and type:Contract.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key:value pairs that you want to add to the container. You need
     * to specify only the tags that you want to add or update. For example, suppose a
     * container already has two tags (customer:CompanyA and priority:High). You want
     * to change the priority tag and also add a third tag (type:Contract). For
     * TagResource, you specify the following tags: priority:Medium, type:Contract. The
     * result is that your container has three tags: customer:CompanyA,
     * priority:Medium, and type:Contract.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key:value pairs that you want to add to the container. You need
     * to specify only the tags that you want to add or update. For example, suppose a
     * container already has two tags (customer:CompanyA and priority:High). You want
     * to change the priority tag and also add a third tag (type:Contract). For
     * TagResource, you specify the following tags: priority:Medium, type:Contract. The
     * result is that your container has three tags: customer:CompanyA,
     * priority:Medium, and type:Contract.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key:value pairs that you want to add to the container. You need
     * to specify only the tags that you want to add or update. For example, suppose a
     * container already has two tags (customer:CompanyA and priority:High). You want
     * to change the priority tag and also add a third tag (type:Contract). For
     * TagResource, you specify the following tags: priority:Medium, type:Contract. The
     * result is that your container has three tags: customer:CompanyA,
     * priority:Medium, and type:Contract.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key:value pairs that you want to add to the container. You need
     * to specify only the tags that you want to add or update. For example, suppose a
     * container already has two tags (customer:CompanyA and priority:High). You want
     * to change the priority tag and also add a third tag (type:Contract). For
     * TagResource, you specify the following tags: priority:Medium, type:Contract. The
     * result is that your container has three tags: customer:CompanyA,
     * priority:Medium, and type:Contract.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key:value pairs that you want to add to the container. You need
     * to specify only the tags that you want to add or update. For example, suppose a
     * container already has two tags (customer:CompanyA and priority:High). You want
     * to change the priority tag and also add a third tag (type:Contract). For
     * TagResource, you specify the following tags: priority:Medium, type:Contract. The
     * result is that your container has three tags: customer:CompanyA,
     * priority:Medium, and type:Contract.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
