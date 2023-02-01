/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/DAXRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DAX
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public DAXRequest
  {
  public:
    AWS_DAX_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_DAX_API Aws::String SerializePayload() const override;

    AWS_DAX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the DAX resource from which the tags should be removed.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the DAX resource from which the tags should be removed.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the DAX resource from which the tags should be removed.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the DAX resource from which the tags should be removed.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the DAX resource from which the tags should be removed.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the DAX resource from which the tags should be removed.</p>
     */
    inline UntagResourceRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the DAX resource from which the tags should be removed.</p>
     */
    inline UntagResourceRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the DAX resource from which the tags should be removed.</p>
     */
    inline UntagResourceRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>A list of tag keys. If the DAX cluster has any tags with these keys, then the
     * tags are removed from the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A list of tag keys. If the DAX cluster has any tags with these keys, then the
     * tags are removed from the cluster.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>A list of tag keys. If the DAX cluster has any tags with these keys, then the
     * tags are removed from the cluster.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A list of tag keys. If the DAX cluster has any tags with these keys, then the
     * tags are removed from the cluster.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>A list of tag keys. If the DAX cluster has any tags with these keys, then the
     * tags are removed from the cluster.</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A list of tag keys. If the DAX cluster has any tags with these keys, then the
     * tags are removed from the cluster.</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>A list of tag keys. If the DAX cluster has any tags with these keys, then the
     * tags are removed from the cluster.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A list of tag keys. If the DAX cluster has any tags with these keys, then the
     * tags are removed from the cluster.</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of tag keys. If the DAX cluster has any tags with these keys, then the
     * tags are removed from the cluster.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
