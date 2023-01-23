/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>This input identifies an Amazon EMR resource and a list of tags to
   * remove.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveTagsInput">AWS
   * API Reference</a></p>
   */
  class RemoveTagsRequest : public EMRRequest
  {
  public:
    AWS_EMR_API RemoveTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTags"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon EMR resource identifier from which tags will be removed. For
     * example, a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The Amazon EMR resource identifier from which tags will be removed. For
     * example, a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The Amazon EMR resource identifier from which tags will be removed. For
     * example, a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The Amazon EMR resource identifier from which tags will be removed. For
     * example, a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The Amazon EMR resource identifier from which tags will be removed. For
     * example, a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The Amazon EMR resource identifier from which tags will be removed. For
     * example, a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline RemoveTagsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The Amazon EMR resource identifier from which tags will be removed. For
     * example, a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline RemoveTagsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The Amazon EMR resource identifier from which tags will be removed. For
     * example, a cluster identifier or an Amazon EMR Studio ID.</p>
     */
    inline RemoveTagsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>A list of tag keys to remove from the resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A list of tag keys to remove from the resource.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>A list of tag keys to remove from the resource.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A list of tag keys to remove from the resource.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>A list of tag keys to remove from the resource.</p>
     */
    inline RemoveTagsRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A list of tag keys to remove from the resource.</p>
     */
    inline RemoveTagsRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>A list of tag keys to remove from the resource.</p>
     */
    inline RemoveTagsRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A list of tag keys to remove from the resource.</p>
     */
    inline RemoveTagsRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of tag keys to remove from the resource.</p>
     */
    inline RemoveTagsRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
