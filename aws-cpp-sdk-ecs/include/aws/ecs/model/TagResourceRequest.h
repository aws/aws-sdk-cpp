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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API TagResourceRequest : public ECSRequest
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
     * <p>The Amazon Resource Name (ARN) of the resource to which to add tags.
     * Currently, the supported resources are Amazon ECS tasks, services, task
     * definitions, clusters, and container instances.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which to add tags.
     * Currently, the supported resources are Amazon ECS tasks, services, task
     * definitions, clusters, and container instances.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which to add tags.
     * Currently, the supported resources are Amazon ECS tasks, services, task
     * definitions, clusters, and container instances.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which to add tags.
     * Currently, the supported resources are Amazon ECS tasks, services, task
     * definitions, clusters, and container instances.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which to add tags.
     * Currently, the supported resources are Amazon ECS tasks, services, task
     * definitions, clusters, and container instances.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which to add tags.
     * Currently, the supported resources are Amazon ECS tasks, services, task
     * definitions, clusters, and container instances.</p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which to add tags.
     * Currently, the supported resources are Amazon ECS tasks, services, task
     * definitions, clusters, and container instances.</p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which to add tags.
     * Currently, the supported resources are Amazon ECS tasks, services, task
     * definitions, clusters, and container instances.</p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters, and tag values can
     * have a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters, and tag values can
     * have a maximum length of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters, and tag values can
     * have a maximum length of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters, and tag values can
     * have a maximum length of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters, and tag values can
     * have a maximum length of 256 characters.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters, and tag values can
     * have a maximum length of 256 characters.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters, and tag values can
     * have a maximum length of 256 characters.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters, and tag values can
     * have a maximum length of 256 characters.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
