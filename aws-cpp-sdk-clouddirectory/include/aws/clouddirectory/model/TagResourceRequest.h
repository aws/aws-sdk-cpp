/*
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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/Tag.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API TagResourceRequest : public CloudDirectoryRequest
  {
  public:
    TagResourceRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>ARN of the resource. Tagging is only supported for directories.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>ARN of the resource. Tagging is only supported for directories.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>ARN of the resource. Tagging is only supported for directories.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>ARN of the resource. Tagging is only supported for directories.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>ARN of the resource. Tagging is only supported for directories.</p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>ARN of the resource. Tagging is only supported for directories.</p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(value); return *this;}

    /**
     * <p>ARN of the resource. Tagging is only supported for directories.</p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

    /**
     * <p>List of tag key value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>List of tag key value pairs.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>List of tag key value pairs.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>List of tag key value pairs.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>List of tag key value pairs.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>List of tag key value pairs.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>List of tag key value pairs.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
