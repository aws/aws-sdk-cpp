/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UntagResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which to remove the
     * tags.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    UntagResourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to remove from this resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagsToRemove() const { return m_tagsToRemove; }
    inline bool TagsToRemoveHasBeenSet() const { return m_tagsToRemoveHasBeenSet; }
    template<typename TagsToRemoveT = Aws::Vector<Aws::String>>
    void SetTagsToRemove(TagsToRemoveT&& value) { m_tagsToRemoveHasBeenSet = true; m_tagsToRemove = std::forward<TagsToRemoveT>(value); }
    template<typename TagsToRemoveT = Aws::Vector<Aws::String>>
    UntagResourceRequest& WithTagsToRemove(TagsToRemoveT&& value) { SetTagsToRemove(std::forward<TagsToRemoveT>(value)); return *this;}
    template<typename TagsToRemoveT = Aws::String>
    UntagResourceRequest& AddTagsToRemove(TagsToRemoveT&& value) { m_tagsToRemoveHasBeenSet = true; m_tagsToRemove.emplace_back(std::forward<TagsToRemoveT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagsToRemove;
    bool m_tagsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
