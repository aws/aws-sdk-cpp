/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TagResourcesRequest : public ResourceGroupsTaggingAPIRequest
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API TagResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResources"; }

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::String SerializePayload() const override;

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the list of ARNs of the resources that you want to apply tags
     * to.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceARNList() const{ return m_resourceARNList; }

    /**
     * <p>Specifies the list of ARNs of the resources that you want to apply tags
     * to.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline bool ResourceARNListHasBeenSet() const { return m_resourceARNListHasBeenSet; }

    /**
     * <p>Specifies the list of ARNs of the resources that you want to apply tags
     * to.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetResourceARNList(const Aws::Vector<Aws::String>& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList = value; }

    /**
     * <p>Specifies the list of ARNs of the resources that you want to apply tags
     * to.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetResourceARNList(Aws::Vector<Aws::String>&& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList = std::move(value); }

    /**
     * <p>Specifies the list of ARNs of the resources that you want to apply tags
     * to.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline TagResourcesRequest& WithResourceARNList(const Aws::Vector<Aws::String>& value) { SetResourceARNList(value); return *this;}

    /**
     * <p>Specifies the list of ARNs of the resources that you want to apply tags
     * to.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline TagResourcesRequest& WithResourceARNList(Aws::Vector<Aws::String>&& value) { SetResourceARNList(std::move(value)); return *this;}

    /**
     * <p>Specifies the list of ARNs of the resources that you want to apply tags
     * to.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline TagResourcesRequest& AddResourceARNList(const Aws::String& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(value); return *this; }

    /**
     * <p>Specifies the list of ARNs of the resources that you want to apply tags
     * to.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline TagResourcesRequest& AddResourceARNList(Aws::String&& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the list of ARNs of the resources that you want to apply tags
     * to.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline TagResourcesRequest& AddResourceARNList(const char* value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(value); return *this; }


    /**
     * <p>Specifies a list of tags that you want to add to the specified resources. A
     * tag consists of a key and a value that you define.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies a list of tags that you want to add to the specified resources. A
     * tag consists of a key and a value that you define.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies a list of tags that you want to add to the specified resources. A
     * tag consists of a key and a value that you define.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies a list of tags that you want to add to the specified resources. A
     * tag consists of a key and a value that you define.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies a list of tags that you want to add to the specified resources. A
     * tag consists of a key and a value that you define.</p>
     */
    inline TagResourcesRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies a list of tags that you want to add to the specified resources. A
     * tag consists of a key and a value that you define.</p>
     */
    inline TagResourcesRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of tags that you want to add to the specified resources. A
     * tag consists of a key and a value that you define.</p>
     */
    inline TagResourcesRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Specifies a list of tags that you want to add to the specified resources. A
     * tag consists of a key and a value that you define.</p>
     */
    inline TagResourcesRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies a list of tags that you want to add to the specified resources. A
     * tag consists of a key and a value that you define.</p>
     */
    inline TagResourcesRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies a list of tags that you want to add to the specified resources. A
     * tag consists of a key and a value that you define.</p>
     */
    inline TagResourcesRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies a list of tags that you want to add to the specified resources. A
     * tag consists of a key and a value that you define.</p>
     */
    inline TagResourcesRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies a list of tags that you want to add to the specified resources. A
     * tag consists of a key and a value that you define.</p>
     */
    inline TagResourcesRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies a list of tags that you want to add to the specified resources. A
     * tag consists of a key and a value that you define.</p>
     */
    inline TagResourcesRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_resourceARNList;
    bool m_resourceARNListHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
