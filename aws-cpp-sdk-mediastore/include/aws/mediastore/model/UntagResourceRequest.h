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
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/MediaStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MediaStore
{
namespace Model
{

  /**
   */
  class AWS_MEDIASTORE_API UntagResourceRequest : public MediaStoreRequest
  {
  public:
    UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) for the container.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The Amazon Resource Name (ARN) for the container.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the container.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the container.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the container.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the container.</p>
     */
    inline UntagResourceRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the container.</p>
     */
    inline UntagResourceRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the container.</p>
     */
    inline UntagResourceRequest& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>A comma-separated list of keys for tags that you want to remove from the
     * container. For example, if your container has two tags (customer:CompanyA and
     * priority:High) and you want to remove one of the tags (priority:High), you
     * specify the key for the tag that you want to remove (priority).</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A comma-separated list of keys for tags that you want to remove from the
     * container. For example, if your container has two tags (customer:CompanyA and
     * priority:High) and you want to remove one of the tags (priority:High), you
     * specify the key for the tag that you want to remove (priority).</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>A comma-separated list of keys for tags that you want to remove from the
     * container. For example, if your container has two tags (customer:CompanyA and
     * priority:High) and you want to remove one of the tags (priority:High), you
     * specify the key for the tag that you want to remove (priority).</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A comma-separated list of keys for tags that you want to remove from the
     * container. For example, if your container has two tags (customer:CompanyA and
     * priority:High) and you want to remove one of the tags (priority:High), you
     * specify the key for the tag that you want to remove (priority).</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>A comma-separated list of keys for tags that you want to remove from the
     * container. For example, if your container has two tags (customer:CompanyA and
     * priority:High) and you want to remove one of the tags (priority:High), you
     * specify the key for the tag that you want to remove (priority).</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A comma-separated list of keys for tags that you want to remove from the
     * container. For example, if your container has two tags (customer:CompanyA and
     * priority:High) and you want to remove one of the tags (priority:High), you
     * specify the key for the tag that you want to remove (priority).</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of keys for tags that you want to remove from the
     * container. For example, if your container has two tags (customer:CompanyA and
     * priority:High) and you want to remove one of the tags (priority:High), you
     * specify the key for the tag that you want to remove (priority).</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A comma-separated list of keys for tags that you want to remove from the
     * container. For example, if your container has two tags (customer:CompanyA and
     * priority:High) and you want to remove one of the tags (priority:High), you
     * specify the key for the tag that you want to remove (priority).</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A comma-separated list of keys for tags that you want to remove from the
     * container. For example, if your container has two tags (customer:CompanyA and
     * priority:High) and you want to remove one of the tags (priority:High), you
     * specify the key for the tag that you want to remove (priority).</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
