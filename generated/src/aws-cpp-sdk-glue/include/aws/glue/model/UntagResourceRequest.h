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
    AWS_GLUE_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which to remove the
     * tags.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which to remove the
     * tags.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which to remove the
     * tags.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which to remove the
     * tags.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which to remove the
     * tags.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which to remove the
     * tags.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which to remove the
     * tags.</p>
     */
    inline UntagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which to remove the
     * tags.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Tags to remove from this resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagsToRemove() const{ return m_tagsToRemove; }

    /**
     * <p>Tags to remove from this resource.</p>
     */
    inline bool TagsToRemoveHasBeenSet() const { return m_tagsToRemoveHasBeenSet; }

    /**
     * <p>Tags to remove from this resource.</p>
     */
    inline void SetTagsToRemove(const Aws::Vector<Aws::String>& value) { m_tagsToRemoveHasBeenSet = true; m_tagsToRemove = value; }

    /**
     * <p>Tags to remove from this resource.</p>
     */
    inline void SetTagsToRemove(Aws::Vector<Aws::String>&& value) { m_tagsToRemoveHasBeenSet = true; m_tagsToRemove = std::move(value); }

    /**
     * <p>Tags to remove from this resource.</p>
     */
    inline UntagResourceRequest& WithTagsToRemove(const Aws::Vector<Aws::String>& value) { SetTagsToRemove(value); return *this;}

    /**
     * <p>Tags to remove from this resource.</p>
     */
    inline UntagResourceRequest& WithTagsToRemove(Aws::Vector<Aws::String>&& value) { SetTagsToRemove(std::move(value)); return *this;}

    /**
     * <p>Tags to remove from this resource.</p>
     */
    inline UntagResourceRequest& AddTagsToRemove(const Aws::String& value) { m_tagsToRemoveHasBeenSet = true; m_tagsToRemove.push_back(value); return *this; }

    /**
     * <p>Tags to remove from this resource.</p>
     */
    inline UntagResourceRequest& AddTagsToRemove(Aws::String&& value) { m_tagsToRemoveHasBeenSet = true; m_tagsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>Tags to remove from this resource.</p>
     */
    inline UntagResourceRequest& AddTagsToRemove(const char* value) { m_tagsToRemoveHasBeenSet = true; m_tagsToRemove.push_back(value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagsToRemove;
    bool m_tagsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
