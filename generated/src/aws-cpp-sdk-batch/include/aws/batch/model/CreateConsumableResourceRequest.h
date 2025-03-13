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
    AWS_BATCH_API CreateConsumableResourceRequest() = default;

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
    inline const Aws::String& GetConsumableResourceName() const { return m_consumableResourceName; }
    inline bool ConsumableResourceNameHasBeenSet() const { return m_consumableResourceNameHasBeenSet; }
    template<typename ConsumableResourceNameT = Aws::String>
    void SetConsumableResourceName(ConsumableResourceNameT&& value) { m_consumableResourceNameHasBeenSet = true; m_consumableResourceName = std::forward<ConsumableResourceNameT>(value); }
    template<typename ConsumableResourceNameT = Aws::String>
    CreateConsumableResourceRequest& WithConsumableResourceName(ConsumableResourceNameT&& value) { SetConsumableResourceName(std::forward<ConsumableResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of the consumable resource that is available. Must be
     * non-negative.</p>
     */
    inline long long GetTotalQuantity() const { return m_totalQuantity; }
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
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    CreateConsumableResourceRequest& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that you apply to the consumable resource to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateConsumableResourceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateConsumableResourceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_consumableResourceName;
    bool m_consumableResourceNameHasBeenSet = false;

    long long m_totalQuantity{0};
    bool m_totalQuantityHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
