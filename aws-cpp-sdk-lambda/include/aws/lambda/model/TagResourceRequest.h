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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API TagResourceRequest : public LambdaRequest
  {
  public:
    TagResourceRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN (Amazon Resource Name) of the Lambda function.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The ARN (Amazon Resource Name) of the Lambda function.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the Lambda function.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the Lambda function.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the Lambda function.</p>
     */
    inline TagResourceRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the Lambda function.</p>
     */
    inline TagResourceRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the Lambda function.</p>
     */
    inline TagResourceRequest& WithResource(const char* value) { SetResource(value); return *this;}

    /**
     * <p>The list of tags (key-value pairs) you are assigning to the Lambda
     * function.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags (key-value pairs) you are assigning to the Lambda
     * function.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags (key-value pairs) you are assigning to the Lambda
     * function.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags (key-value pairs) you are assigning to the Lambda
     * function.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags (key-value pairs) you are assigning to the Lambda
     * function.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags (key-value pairs) you are assigning to the Lambda
     * function.</p>
     */
    inline TagResourceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tags (key-value pairs) you are assigning to the Lambda
     * function.</p>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags (key-value pairs) you are assigning to the Lambda
     * function.</p>
     */
    inline TagResourceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags (key-value pairs) you are assigning to the Lambda
     * function.</p>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tags (key-value pairs) you are assigning to the Lambda
     * function.</p>
     */
    inline TagResourceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags (key-value pairs) you are assigning to the Lambda
     * function.</p>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags (key-value pairs) you are assigning to the Lambda
     * function.</p>
     */
    inline TagResourceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:
    Aws::String m_resource;
    bool m_resourceHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
