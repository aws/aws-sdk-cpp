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
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   */
  class AWS_RESOURCEGROUPSTAGGINGAPI_API TagResourcesRequest : public ResourceGroupsTaggingAPIRequest
  {
  public:
    TagResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResources"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to tag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceARNList() const{ return m_resourceARNList; }

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to tag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline bool ResourceARNListHasBeenSet() const { return m_resourceARNListHasBeenSet; }

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to tag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetResourceARNList(const Aws::Vector<Aws::String>& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList = value; }

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to tag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetResourceARNList(Aws::Vector<Aws::String>&& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList = std::move(value); }

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to tag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline TagResourcesRequest& WithResourceARNList(const Aws::Vector<Aws::String>& value) { SetResourceARNList(value); return *this;}

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to tag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline TagResourcesRequest& WithResourceARNList(Aws::Vector<Aws::String>&& value) { SetResourceARNList(std::move(value)); return *this;}

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to tag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline TagResourcesRequest& AddResourceARNList(const Aws::String& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(value); return *this; }

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to tag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline TagResourcesRequest& AddResourceARNList(Aws::String&& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to tag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline TagResourcesRequest& AddResourceARNList(const char* value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(value); return *this; }


    /**
     * <p>The tags that you want to add to the specified resources. A tag consists of a
     * key and a value that you define.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that you want to add to the specified resources. A tag consists of a
     * key and a value that you define.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that you want to add to the specified resources. A tag consists of a
     * key and a value that you define.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that you want to add to the specified resources. A tag consists of a
     * key and a value that you define.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that you want to add to the specified resources. A tag consists of a
     * key and a value that you define.</p>
     */
    inline TagResourcesRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that you want to add to the specified resources. A tag consists of a
     * key and a value that you define.</p>
     */
    inline TagResourcesRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that you want to add to the specified resources. A tag consists of a
     * key and a value that you define.</p>
     */
    inline TagResourcesRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags that you want to add to the specified resources. A tag consists of a
     * key and a value that you define.</p>
     */
    inline TagResourcesRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that you want to add to the specified resources. A tag consists of a
     * key and a value that you define.</p>
     */
    inline TagResourcesRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that you want to add to the specified resources. A tag consists of a
     * key and a value that you define.</p>
     */
    inline TagResourcesRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that you want to add to the specified resources. A tag consists of a
     * key and a value that you define.</p>
     */
    inline TagResourcesRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that you want to add to the specified resources. A tag consists of a
     * key and a value that you define.</p>
     */
    inline TagResourcesRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that you want to add to the specified resources. A tag consists of a
     * key and a value that you define.</p>
     */
    inline TagResourcesRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_resourceARNList;
    bool m_resourceARNListHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
