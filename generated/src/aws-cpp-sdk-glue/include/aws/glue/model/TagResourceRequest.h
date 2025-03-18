/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API TagResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the Glue resource to which to add the tags. For more information
     * about Glue resource ARNs, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html#aws-glue-api-regex-aws-glue-arn-id">Glue
     * ARN string pattern</a>.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    TagResourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to add to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTagsToAdd() const { return m_tagsToAdd; }
    inline bool TagsToAddHasBeenSet() const { return m_tagsToAddHasBeenSet; }
    template<typename TagsToAddT = Aws::Map<Aws::String, Aws::String>>
    void SetTagsToAdd(TagsToAddT&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = std::forward<TagsToAddT>(value); }
    template<typename TagsToAddT = Aws::Map<Aws::String, Aws::String>>
    TagResourceRequest& WithTagsToAdd(TagsToAddT&& value) { SetTagsToAdd(std::forward<TagsToAddT>(value)); return *this;}
    template<typename TagsToAddKeyT = Aws::String, typename TagsToAddValueT = Aws::String>
    TagResourceRequest& AddTagsToAdd(TagsToAddKeyT&& key, TagsToAddValueT&& value) {
      m_tagsToAddHasBeenSet = true; m_tagsToAdd.emplace(std::forward<TagsToAddKeyT>(key), std::forward<TagsToAddValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tagsToAdd;
    bool m_tagsToAddHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
