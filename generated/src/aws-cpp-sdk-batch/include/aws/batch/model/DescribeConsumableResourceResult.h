/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{
  class DescribeConsumableResourceResult
  {
  public:
    AWS_BATCH_API DescribeConsumableResourceResult() = default;
    AWS_BATCH_API DescribeConsumableResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API DescribeConsumableResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the consumable resource.</p>
     */
    inline const Aws::String& GetConsumableResourceName() const { return m_consumableResourceName; }
    template<typename ConsumableResourceNameT = Aws::String>
    void SetConsumableResourceName(ConsumableResourceNameT&& value) { m_consumableResourceNameHasBeenSet = true; m_consumableResourceName = std::forward<ConsumableResourceNameT>(value); }
    template<typename ConsumableResourceNameT = Aws::String>
    DescribeConsumableResourceResult& WithConsumableResourceName(ConsumableResourceNameT&& value) { SetConsumableResourceName(std::forward<ConsumableResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the consumable resource.</p>
     */
    inline const Aws::String& GetConsumableResourceArn() const { return m_consumableResourceArn; }
    template<typename ConsumableResourceArnT = Aws::String>
    void SetConsumableResourceArn(ConsumableResourceArnT&& value) { m_consumableResourceArnHasBeenSet = true; m_consumableResourceArn = std::forward<ConsumableResourceArnT>(value); }
    template<typename ConsumableResourceArnT = Aws::String>
    DescribeConsumableResourceResult& WithConsumableResourceArn(ConsumableResourceArnT&& value) { SetConsumableResourceArn(std::forward<ConsumableResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of the consumable resource that is available.</p>
     */
    inline long long GetTotalQuantity() const { return m_totalQuantity; }
    inline void SetTotalQuantity(long long value) { m_totalQuantityHasBeenSet = true; m_totalQuantity = value; }
    inline DescribeConsumableResourceResult& WithTotalQuantity(long long value) { SetTotalQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of the consumable resource that is currently in use.</p>
     */
    inline long long GetInUseQuantity() const { return m_inUseQuantity; }
    inline void SetInUseQuantity(long long value) { m_inUseQuantityHasBeenSet = true; m_inUseQuantity = value; }
    inline DescribeConsumableResourceResult& WithInUseQuantity(long long value) { SetInUseQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of the consumable resource that is currently available to use.</p>
     */
    inline long long GetAvailableQuantity() const { return m_availableQuantity; }
    inline void SetAvailableQuantity(long long value) { m_availableQuantityHasBeenSet = true; m_availableQuantity = value; }
    inline DescribeConsumableResourceResult& WithAvailableQuantity(long long value) { SetAvailableQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the resource is available to be re-used after a job
     * completes. Can be one of: </p> <ul> <li> <p> <code>REPLENISHABLE</code> </p>
     * </li> <li> <p> <code>NON_REPLENISHABLE</code> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    DescribeConsumableResourceResult& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the consumable resource was
     * created.</p>
     */
    inline long long GetCreatedAt() const { return m_createdAt; }
    inline void SetCreatedAt(long long value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline DescribeConsumableResourceResult& WithCreatedAt(long long value) { SetCreatedAt(value); return *this;}
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
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeConsumableResourceResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeConsumableResourceResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConsumableResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_consumableResourceName;
    bool m_consumableResourceNameHasBeenSet = false;

    Aws::String m_consumableResourceArn;
    bool m_consumableResourceArnHasBeenSet = false;

    long long m_totalQuantity{0};
    bool m_totalQuantityHasBeenSet = false;

    long long m_inUseQuantity{0};
    bool m_inUseQuantityHasBeenSet = false;

    long long m_availableQuantity{0};
    bool m_availableQuantityHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    long long m_createdAt{0};
    bool m_createdAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
