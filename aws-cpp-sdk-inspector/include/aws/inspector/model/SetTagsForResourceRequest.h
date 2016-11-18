﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/Tag.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API SetTagsForResourceRequest : public InspectorRequest
  {
  public:
    SetTagsForResourceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARN of the assessment that you want to set tags to.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the assessment that you want to set tags to.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the assessment that you want to set tags to.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the assessment that you want to set tags to.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the assessment that you want to set tags to.</p>
     */
    inline SetTagsForResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the assessment that you want to set tags to.</p>
     */
    inline SetTagsForResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the assessment that you want to set tags to.</p>
     */
    inline SetTagsForResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

    /**
     * <p>A collection of key and value pairs that you want to set to an
     * assessment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of key and value pairs that you want to set to an
     * assessment.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of key and value pairs that you want to set to an
     * assessment.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of key and value pairs that you want to set to an
     * assessment.</p>
     */
    inline SetTagsForResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of key and value pairs that you want to set to an
     * assessment.</p>
     */
    inline SetTagsForResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of key and value pairs that you want to set to an
     * assessment.</p>
     */
    inline SetTagsForResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A collection of key and value pairs that you want to set to an
     * assessment.</p>
     */
    inline SetTagsForResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
