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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API AddTagsRequest : public SageMakerRequest
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
     * <p>The Amazon Resource Name (ARN) of the resource that you want to tag.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to tag.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to tag.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to tag.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to tag.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to tag.</p>
     */
    inline AddTagsRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to tag.</p>
     */
    inline AddTagsRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to tag.</p>
     */
    inline AddTagsRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>An array of <code>Tag</code> objects. Each tag is a key-value pair. Only the
     * <code>key</code> parameter is required. If you don't specify a value, Amazon
     * SageMaker sets the value to an empty string. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of <code>Tag</code> objects. Each tag is a key-value pair. Only the
     * <code>key</code> parameter is required. If you don't specify a value, Amazon
     * SageMaker sets the value to an empty string. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of <code>Tag</code> objects. Each tag is a key-value pair. Only the
     * <code>key</code> parameter is required. If you don't specify a value, Amazon
     * SageMaker sets the value to an empty string. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of <code>Tag</code> objects. Each tag is a key-value pair. Only the
     * <code>key</code> parameter is required. If you don't specify a value, Amazon
     * SageMaker sets the value to an empty string. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of <code>Tag</code> objects. Each tag is a key-value pair. Only the
     * <code>key</code> parameter is required. If you don't specify a value, Amazon
     * SageMaker sets the value to an empty string. </p>
     */
    inline AddTagsRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of <code>Tag</code> objects. Each tag is a key-value pair. Only the
     * <code>key</code> parameter is required. If you don't specify a value, Amazon
     * SageMaker sets the value to an empty string. </p>
     */
    inline AddTagsRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Tag</code> objects. Each tag is a key-value pair. Only the
     * <code>key</code> parameter is required. If you don't specify a value, Amazon
     * SageMaker sets the value to an empty string. </p>
     */
    inline AddTagsRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of <code>Tag</code> objects. Each tag is a key-value pair. Only the
     * <code>key</code> parameter is required. If you don't specify a value, Amazon
     * SageMaker sets the value to an empty string. </p>
     */
    inline AddTagsRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
