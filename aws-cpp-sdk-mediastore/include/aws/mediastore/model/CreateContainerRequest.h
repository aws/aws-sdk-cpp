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
  class AWS_MEDIASTORE_API CreateContainerRequest : public MediaStoreRequest
  {
  public:
    CreateContainerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContainer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the container. The name must be from 1 to 255 characters.
     * Container names must be unique to your AWS account within a specific region. As
     * an example, you could create a container named <code>movies</code> in every
     * region, as long as you don’t have an existing container with that name.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The name for the container. The name must be from 1 to 255 characters.
     * Container names must be unique to your AWS account within a specific region. As
     * an example, you could create a container named <code>movies</code> in every
     * region, as long as you don’t have an existing container with that name.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The name for the container. The name must be from 1 to 255 characters.
     * Container names must be unique to your AWS account within a specific region. As
     * an example, you could create a container named <code>movies</code> in every
     * region, as long as you don’t have an existing container with that name.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name for the container. The name must be from 1 to 255 characters.
     * Container names must be unique to your AWS account within a specific region. As
     * an example, you could create a container named <code>movies</code> in every
     * region, as long as you don’t have an existing container with that name.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The name for the container. The name must be from 1 to 255 characters.
     * Container names must be unique to your AWS account within a specific region. As
     * an example, you could create a container named <code>movies</code> in every
     * region, as long as you don’t have an existing container with that name.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The name for the container. The name must be from 1 to 255 characters.
     * Container names must be unique to your AWS account within a specific region. As
     * an example, you could create a container named <code>movies</code> in every
     * region, as long as you don’t have an existing container with that name.</p>
     */
    inline CreateContainerRequest& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The name for the container. The name must be from 1 to 255 characters.
     * Container names must be unique to your AWS account within a specific region. As
     * an example, you could create a container named <code>movies</code> in every
     * region, as long as you don’t have an existing container with that name.</p>
     */
    inline CreateContainerRequest& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The name for the container. The name must be from 1 to 255 characters.
     * Container names must be unique to your AWS account within a specific region. As
     * an example, you could create a container named <code>movies</code> in every
     * region, as long as you don’t have an existing container with that name.</p>
     */
    inline CreateContainerRequest& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>An array of key:value pairs that you define. These values can be anything
     * that you want. Typically, the tag key represents a category (such as
     * "environment") and the tag value represents a specific value within that
     * category (such as "test," "development," or "production"). You can add up to 50
     * tags to each container. For more information about tagging, including naming and
     * usage conventions, see <a
     * href="https://aws.amazon.com/documentation/mediastore/tagging">Tagging Resources
     * in MediaStore</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key:value pairs that you define. These values can be anything
     * that you want. Typically, the tag key represents a category (such as
     * "environment") and the tag value represents a specific value within that
     * category (such as "test," "development," or "production"). You can add up to 50
     * tags to each container. For more information about tagging, including naming and
     * usage conventions, see <a
     * href="https://aws.amazon.com/documentation/mediastore/tagging">Tagging Resources
     * in MediaStore</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key:value pairs that you define. These values can be anything
     * that you want. Typically, the tag key represents a category (such as
     * "environment") and the tag value represents a specific value within that
     * category (such as "test," "development," or "production"). You can add up to 50
     * tags to each container. For more information about tagging, including naming and
     * usage conventions, see <a
     * href="https://aws.amazon.com/documentation/mediastore/tagging">Tagging Resources
     * in MediaStore</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key:value pairs that you define. These values can be anything
     * that you want. Typically, the tag key represents a category (such as
     * "environment") and the tag value represents a specific value within that
     * category (such as "test," "development," or "production"). You can add up to 50
     * tags to each container. For more information about tagging, including naming and
     * usage conventions, see <a
     * href="https://aws.amazon.com/documentation/mediastore/tagging">Tagging Resources
     * in MediaStore</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key:value pairs that you define. These values can be anything
     * that you want. Typically, the tag key represents a category (such as
     * "environment") and the tag value represents a specific value within that
     * category (such as "test," "development," or "production"). You can add up to 50
     * tags to each container. For more information about tagging, including naming and
     * usage conventions, see <a
     * href="https://aws.amazon.com/documentation/mediastore/tagging">Tagging Resources
     * in MediaStore</a>.</p>
     */
    inline CreateContainerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key:value pairs that you define. These values can be anything
     * that you want. Typically, the tag key represents a category (such as
     * "environment") and the tag value represents a specific value within that
     * category (such as "test," "development," or "production"). You can add up to 50
     * tags to each container. For more information about tagging, including naming and
     * usage conventions, see <a
     * href="https://aws.amazon.com/documentation/mediastore/tagging">Tagging Resources
     * in MediaStore</a>.</p>
     */
    inline CreateContainerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key:value pairs that you define. These values can be anything
     * that you want. Typically, the tag key represents a category (such as
     * "environment") and the tag value represents a specific value within that
     * category (such as "test," "development," or "production"). You can add up to 50
     * tags to each container. For more information about tagging, including naming and
     * usage conventions, see <a
     * href="https://aws.amazon.com/documentation/mediastore/tagging">Tagging Resources
     * in MediaStore</a>.</p>
     */
    inline CreateContainerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key:value pairs that you define. These values can be anything
     * that you want. Typically, the tag key represents a category (such as
     * "environment") and the tag value represents a specific value within that
     * category (such as "test," "development," or "production"). You can add up to 50
     * tags to each container. For more information about tagging, including naming and
     * usage conventions, see <a
     * href="https://aws.amazon.com/documentation/mediastore/tagging">Tagging Resources
     * in MediaStore</a>.</p>
     */
    inline CreateContainerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
