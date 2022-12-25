/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UntagResourcesRequest : public ResourceGroupsTaggingAPIRequest
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API UntagResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResources"; }

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::String SerializePayload() const override;

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies a list of ARNs of the resources that you want to remove tags
     * from.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceARNList() const{ return m_resourceARNList; }

    /**
     * <p>Specifies a list of ARNs of the resources that you want to remove tags
     * from.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline bool ResourceARNListHasBeenSet() const { return m_resourceARNListHasBeenSet; }

    /**
     * <p>Specifies a list of ARNs of the resources that you want to remove tags
     * from.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetResourceARNList(const Aws::Vector<Aws::String>& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList = value; }

    /**
     * <p>Specifies a list of ARNs of the resources that you want to remove tags
     * from.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetResourceARNList(Aws::Vector<Aws::String>&& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList = std::move(value); }

    /**
     * <p>Specifies a list of ARNs of the resources that you want to remove tags
     * from.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline UntagResourcesRequest& WithResourceARNList(const Aws::Vector<Aws::String>& value) { SetResourceARNList(value); return *this;}

    /**
     * <p>Specifies a list of ARNs of the resources that you want to remove tags
     * from.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline UntagResourcesRequest& WithResourceARNList(Aws::Vector<Aws::String>&& value) { SetResourceARNList(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of ARNs of the resources that you want to remove tags
     * from.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline UntagResourcesRequest& AddResourceARNList(const Aws::String& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(value); return *this; }

    /**
     * <p>Specifies a list of ARNs of the resources that you want to remove tags
     * from.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline UntagResourcesRequest& AddResourceARNList(Aws::String&& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of ARNs of the resources that you want to remove tags
     * from.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline UntagResourcesRequest& AddResourceARNList(const char* value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.push_back(value); return *this; }


    /**
     * <p>Specifies a list of tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>Specifies a list of tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>Specifies a list of tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>Specifies a list of tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>Specifies a list of tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline UntagResourcesRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>Specifies a list of tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline UntagResourcesRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline UntagResourcesRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>Specifies a list of tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline UntagResourcesRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline UntagResourcesRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_resourceARNList;
    bool m_resourceARNListHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
