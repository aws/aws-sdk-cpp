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
  class AWS_GLUE_API TagResourceRequest : public GlueRequest
  {
  public:
    TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the AWS Glue resource to which to add the tags. For more
     * information about AWS Glue resource ARNs, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html#aws-glue-api-regex-aws-glue-arn-id">AWS
     * Glue ARN string pattern</a>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the AWS Glue resource to which to add the tags. For more
     * information about AWS Glue resource ARNs, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html#aws-glue-api-regex-aws-glue-arn-id">AWS
     * Glue ARN string pattern</a>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the AWS Glue resource to which to add the tags. For more
     * information about AWS Glue resource ARNs, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html#aws-glue-api-regex-aws-glue-arn-id">AWS
     * Glue ARN string pattern</a>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the AWS Glue resource to which to add the tags. For more
     * information about AWS Glue resource ARNs, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html#aws-glue-api-regex-aws-glue-arn-id">AWS
     * Glue ARN string pattern</a>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the AWS Glue resource to which to add the tags. For more
     * information about AWS Glue resource ARNs, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html#aws-glue-api-regex-aws-glue-arn-id">AWS
     * Glue ARN string pattern</a>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the AWS Glue resource to which to add the tags. For more
     * information about AWS Glue resource ARNs, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html#aws-glue-api-regex-aws-glue-arn-id">AWS
     * Glue ARN string pattern</a>.</p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the AWS Glue resource to which to add the tags. For more
     * information about AWS Glue resource ARNs, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html#aws-glue-api-regex-aws-glue-arn-id">AWS
     * Glue ARN string pattern</a>.</p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS Glue resource to which to add the tags. For more
     * information about AWS Glue resource ARNs, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-common.html#aws-glue-api-regex-aws-glue-arn-id">AWS
     * Glue ARN string pattern</a>.</p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Tags to add to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTagsToAdd() const{ return m_tagsToAdd; }

    /**
     * <p>Tags to add to this resource.</p>
     */
    inline bool TagsToAddHasBeenSet() const { return m_tagsToAddHasBeenSet; }

    /**
     * <p>Tags to add to this resource.</p>
     */
    inline void SetTagsToAdd(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = value; }

    /**
     * <p>Tags to add to this resource.</p>
     */
    inline void SetTagsToAdd(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = std::move(value); }

    /**
     * <p>Tags to add to this resource.</p>
     */
    inline TagResourceRequest& WithTagsToAdd(const Aws::Map<Aws::String, Aws::String>& value) { SetTagsToAdd(value); return *this;}

    /**
     * <p>Tags to add to this resource.</p>
     */
    inline TagResourceRequest& WithTagsToAdd(Aws::Map<Aws::String, Aws::String>&& value) { SetTagsToAdd(std::move(value)); return *this;}

    /**
     * <p>Tags to add to this resource.</p>
     */
    inline TagResourceRequest& AddTagsToAdd(const Aws::String& key, const Aws::String& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.emplace(key, value); return *this; }

    /**
     * <p>Tags to add to this resource.</p>
     */
    inline TagResourceRequest& AddTagsToAdd(Aws::String&& key, const Aws::String& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to add to this resource.</p>
     */
    inline TagResourceRequest& AddTagsToAdd(const Aws::String& key, Aws::String&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to add to this resource.</p>
     */
    inline TagResourceRequest& AddTagsToAdd(Aws::String&& key, Aws::String&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags to add to this resource.</p>
     */
    inline TagResourceRequest& AddTagsToAdd(const char* key, Aws::String&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to add to this resource.</p>
     */
    inline TagResourceRequest& AddTagsToAdd(Aws::String&& key, const char* value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to add to this resource.</p>
     */
    inline TagResourceRequest& AddTagsToAdd(const char* key, const char* value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.emplace(key, value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tagsToAdd;
    bool m_tagsToAddHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
