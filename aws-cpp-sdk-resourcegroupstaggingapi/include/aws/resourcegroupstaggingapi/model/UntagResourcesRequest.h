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
  class AWS_RESOURCEGROUPSTAGGINGAPI_API UntagResourcesRequest : public ResourceGroupsTaggingAPIRequest
  {
  public:
    UntagResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResources"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to untag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceARNList() const{ return m_resourceARNList; }

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to untag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline bool ResourceARNListHasBeenSet() const { return m_resourceARNListHasBeenSet; }

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to untag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetResourceARNList(const Aws::Vector<Aws::String>& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList = value; }

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to untag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline void SetResourceARNList(Aws::Vector<Aws::String>&& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList = std::move(value); }

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to untag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline UntagResourcesRequest& WithResourceARNList(const Aws::Vector<Aws::String>& value) { SetResourceARNList(value); return *this;}

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to untag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline UntagResourcesRequest& WithResourceARNList(Aws::Vector<Aws::String>&& value) { SetResourceARNList(std::move(value)); return *this;}

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to untag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline UntagResourcesRequest& AddResourceARNList(const Aws::String& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(value); return *this; }

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to untag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline UntagResourcesRequest& AddResourceARNList(Aws::String&& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of ARNs. An ARN (Amazon Resource Name) uniquely identifies a resource.
     * You can specify a minimum of 1 and a maximum of 20 ARNs (resources) to untag. An
     * ARN can be set to a maximum of 1600 characters. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a> in the <i>AWS General
     * Reference</i>.</p>
     */
    inline UntagResourcesRequest& AddResourceARNList(const char* value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(value); return *this; }


    /**
     * <p>A list of the tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A list of the tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>A list of the tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A list of the tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>A list of the tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline UntagResourcesRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A list of the tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline UntagResourcesRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>A list of the tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline UntagResourcesRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A list of the tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline UntagResourcesRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline UntagResourcesRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_resourceARNList;
    bool m_resourceARNListHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
