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
    AWS_ELASTICBEANSTALK_API UpdateTagsForResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTagsForResource"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resouce to be updated.</p> <p>Must be
     * the ARN of an Elastic Beanstalk resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    UpdateTagsForResourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to add or update. If a key of an existing tag is added, the
     * tag's value is updated.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline const Aws::Vector<Tag>& GetTagsToAdd() const { return m_tagsToAdd; }
    inline bool TagsToAddHasBeenSet() const { return m_tagsToAddHasBeenSet; }
    template<typename TagsToAddT = Aws::Vector<Tag>>
    void SetTagsToAdd(TagsToAddT&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = std::forward<TagsToAddT>(value); }
    template<typename TagsToAddT = Aws::Vector<Tag>>
    UpdateTagsForResourceRequest& WithTagsToAdd(TagsToAddT&& value) { SetTagsToAdd(std::forward<TagsToAddT>(value)); return *this;}
    template<typename TagsToAddT = Tag>
    UpdateTagsForResourceRequest& AddTagsToAdd(TagsToAddT&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.emplace_back(std::forward<TagsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tag keys to remove. If a tag key doesn't exist, it is silently
     * ignored.</p> <p>Specify at least one of these parameters:
     * <code>TagsToAdd</code>, <code>TagsToRemove</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagsToRemove() const { return m_tagsToRemove; }
    inline bool TagsToRemoveHasBeenSet() const { return m_tagsToRemoveHasBeenSet; }
    template<typename TagsToRemoveT = Aws::Vector<Aws::String>>
    void SetTagsToRemove(TagsToRemoveT&& value) { m_tagsToRemoveHasBeenSet = true; m_tagsToRemove = std::forward<TagsToRemoveT>(value); }
    template<typename TagsToRemoveT = Aws::Vector<Aws::String>>
    UpdateTagsForResourceRequest& WithTagsToRemove(TagsToRemoveT&& value) { SetTagsToRemove(std::forward<TagsToRemoveT>(value)); return *this;}
    template<typename TagsToRemoveT = Aws::String>
    UpdateTagsForResourceRequest& AddTagsToRemove(TagsToRemoveT&& value) { m_tagsToRemoveHasBeenSet = true; m_tagsToRemove.emplace_back(std::forward<TagsToRemoveT>(value)); return *this; }
    ///@}
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
