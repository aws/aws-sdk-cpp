/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudhsm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   */
  class AddTagsToResourceRequest : public CloudHSMRequest
  {
  public:
    AWS_CLOUDHSM_API AddTagsToResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTagsToResource"; }

    AWS_CLOUDHSM_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource to tag.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource to tag.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource to tag.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource to tag.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource to tag.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource to tag.</p>
     */
    inline AddTagsToResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource to tag.</p>
     */
    inline AddTagsToResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS CloudHSM resource to tag.</p>
     */
    inline AddTagsToResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>One or more tags.</p>
     */
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    /**
     * <p>One or more tags.</p>
     */
    inline AddTagsToResourceRequest& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline AddTagsToResourceRequest& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline AddTagsToResourceRequest& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline AddTagsToResourceRequest& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
