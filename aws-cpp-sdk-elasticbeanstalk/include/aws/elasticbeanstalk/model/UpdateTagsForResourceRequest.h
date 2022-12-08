/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   */
  class UpdateTagsForResourceRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API UpdateTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTagsForResource"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the resouce to be updated.</p> <p>Must be
     * the ARN of an Elastic Beanstalk resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resouce to be updated.</p> <p>Must be
     * the ARN of an Elastic Beanstalk resource.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resouce to be updated.</p> <p>Must be
     * the ARN of an Elastic Beanstalk resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resouce to be updated.</p> <p>Must be
     * the ARN of an Elastic Beanstalk resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resouce to be updated.</p> <p>Must be
     * the ARN of an Elastic Beanstalk resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resouce to be updated.</p> <p>Must be
     * the ARN of an Elastic Beanstalk resource.</p>
     */
    inline UpdateTagsForResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resouce to be updated.</p> <p>Must be
     * the ARN of an Elastic Beanstalk resource.</p>
     */
    inline UpdateTagsForResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resouce to be updated.</p> <p>Must be
     * the ARN of an Elastic Beanstalk resource.</p>
     */
    inline UpdateTagsForResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>A list of tags to add or update. If a key of an existing tag is added, the
     * tag's value is updated.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline const Aws::Vector<Tag>& GetTagsToAdd() const{ return m_tagsToAdd; }

    /**
     * <p>A list of tags to add or update. If a key of an existing tag is added, the
     * tag's value is updated.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline bool TagsToAddHasBeenSet() const { return m_tagsToAddHasBeenSet; }

    /**
     * <p>A list of tags to add or update. If a key of an existing tag is added, the
     * tag's value is updated.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline void SetTagsToAdd(const Aws::Vector<Tag>& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = value; }

    /**
     * <p>A list of tags to add or update. If a key of an existing tag is added, the
     * tag's value is updated.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline void SetTagsToAdd(Aws::Vector<Tag>&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = std::move(value); }

    /**
     * <p>A list of tags to add or update. If a key of an existing tag is added, the
     * tag's value is updated.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline UpdateTagsForResourceRequest& WithTagsToAdd(const Aws::Vector<Tag>& value) { SetTagsToAdd(value); return *this;}

    /**
     * <p>A list of tags to add or update. If a key of an existing tag is added, the
     * tag's value is updated.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline UpdateTagsForResourceRequest& WithTagsToAdd(Aws::Vector<Tag>&& value) { SetTagsToAdd(std::move(value)); return *this;}

    /**
     * <p>A list of tags to add or update. If a key of an existing tag is added, the
     * tag's value is updated.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline UpdateTagsForResourceRequest& AddTagsToAdd(const Tag& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.push_back(value); return *this; }

    /**
     * <p>A list of tags to add or update. If a key of an existing tag is added, the
     * tag's value is updated.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline UpdateTagsForResourceRequest& AddTagsToAdd(Tag&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of tag keys to remove. If a tag key doesn't exist, it is silently
     * ignored.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagsToRemove() const{ return m_tagsToRemove; }

    /**
     * <p>A list of tag keys to remove. If a tag key doesn't exist, it is silently
     * ignored.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline bool TagsToRemoveHasBeenSet() const { return m_tagsToRemoveHasBeenSet; }

    /**
     * <p>A list of tag keys to remove. If a tag key doesn't exist, it is silently
     * ignored.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline void SetTagsToRemove(const Aws::Vector<Aws::String>& value) { m_tagsToRemoveHasBeenSet = true; m_tagsToRemove = value; }

    /**
     * <p>A list of tag keys to remove. If a tag key doesn't exist, it is silently
     * ignored.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline void SetTagsToRemove(Aws::Vector<Aws::String>&& value) { m_tagsToRemoveHasBeenSet = true; m_tagsToRemove = std::move(value); }

    /**
     * <p>A list of tag keys to remove. If a tag key doesn't exist, it is silently
     * ignored.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline UpdateTagsForResourceRequest& WithTagsToRemove(const Aws::Vector<Aws::String>& value) { SetTagsToRemove(value); return *this;}

    /**
     * <p>A list of tag keys to remove. If a tag key doesn't exist, it is silently
     * ignored.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline UpdateTagsForResourceRequest& WithTagsToRemove(Aws::Vector<Aws::String>&& value) { SetTagsToRemove(std::move(value)); return *this;}

    /**
     * <p>A list of tag keys to remove. If a tag key doesn't exist, it is silently
     * ignored.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline UpdateTagsForResourceRequest& AddTagsToRemove(const Aws::String& value) { m_tagsToRemoveHasBeenSet = true; m_tagsToRemove.push_back(value); return *this; }

    /**
     * <p>A list of tag keys to remove. If a tag key doesn't exist, it is silently
     * ignored.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline UpdateTagsForResourceRequest& AddTagsToRemove(Aws::String&& value) { m_tagsToRemoveHasBeenSet = true; m_tagsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of tag keys to remove. If a tag key doesn't exist, it is silently
     * ignored.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline UpdateTagsForResourceRequest& AddTagsToRemove(const char* value) { m_tagsToRemoveHasBeenSet = true; m_tagsToRemove.push_back(value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Tag> m_tagsToAdd;
    bool m_tagsToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagsToRemove;
    bool m_tagsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
