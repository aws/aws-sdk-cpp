/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class CreateConsumableResourceRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API CreateConsumableResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConsumableResource"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the consumable resource. Must be unique.</p>
     */
    inline const Aws::String& GetConsumableResourceName() const{ return m_consumableResourceName; }
    inline bool ConsumableResourceNameHasBeenSet() const { return m_consumableResourceNameHasBeenSet; }
    inline void SetConsumableResourceName(const Aws::String& value) { m_consumableResourceNameHasBeenSet = true; m_consumableResourceName = value; }
    inline void SetConsumableResourceName(Aws::String&& value) { m_consumableResourceNameHasBeenSet = true; m_consumableResourceName = std::move(value); }
    inline void SetConsumableResourceName(const char* value) { m_consumableResourceNameHasBeenSet = true; m_consumableResourceName.assign(value); }
    inline CreateConsumableResourceRequest& WithConsumableResourceName(const Aws::String& value) { SetConsumableResourceName(value); return *this;}
    inline CreateConsumableResourceRequest& WithConsumableResourceName(Aws::String&& value) { SetConsumableResourceName(std::move(value)); return *this;}
    inline CreateConsumableResourceRequest& WithConsumableResourceName(const char* value) { SetConsumableResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of the consumable resource that is available. Must be
     * non-negative.</p>
     */
    inline long long GetTotalQuantity() const{ return m_totalQuantity; }
    inline bool TotalQuantityHasBeenSet() const { return m_totalQuantityHasBeenSet; }
    inline void SetTotalQuantity(long long value) { m_totalQuantityHasBeenSet = true; m_totalQuantity = value; }
    inline CreateConsumableResourceRequest& WithTotalQuantity(long long value) { SetTotalQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the resource is available to be re-used after a job
     * completes. Can be one of: </p> <ul> <li> <p> <code>REPLENISHABLE</code>
     * (default)</p> </li> <li> <p> <code>NON_REPLENISHABLE</code> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline CreateConsumableResourceRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline CreateConsumableResourceRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline CreateConsumableResourceRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that you apply to the consumable resource to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateConsumableResourceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateConsumableResourceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateConsumableResourceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateConsumableResourceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateConsumableResourceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateConsumableResourceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateConsumableResourceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateConsumableResourceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateConsumableResourceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_consumableResourceName;
    bool m_consumableResourceNameHasBeenSet = false;

    long long m_totalQuantity;
    bool m_totalQuantityHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
