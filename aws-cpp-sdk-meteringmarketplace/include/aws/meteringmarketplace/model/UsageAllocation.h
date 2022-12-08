/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/meteringmarketplace/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MarketplaceMetering
{
namespace Model
{

  /**
   * <p>Usage allocations allow you to split usage into buckets by tags.</p> <p>Each
   * <code>UsageAllocation</code> indicates the usage quantity for a specific set of
   * tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/UsageAllocation">AWS
   * API Reference</a></p>
   */
  class UsageAllocation
  {
  public:
    AWS_MARKETPLACEMETERING_API UsageAllocation();
    AWS_MARKETPLACEMETERING_API UsageAllocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEMETERING_API UsageAllocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEMETERING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total quantity allocated to this bucket of usage.</p>
     */
    inline int GetAllocatedUsageQuantity() const{ return m_allocatedUsageQuantity; }

    /**
     * <p>The total quantity allocated to this bucket of usage.</p>
     */
    inline bool AllocatedUsageQuantityHasBeenSet() const { return m_allocatedUsageQuantityHasBeenSet; }

    /**
     * <p>The total quantity allocated to this bucket of usage.</p>
     */
    inline void SetAllocatedUsageQuantity(int value) { m_allocatedUsageQuantityHasBeenSet = true; m_allocatedUsageQuantity = value; }

    /**
     * <p>The total quantity allocated to this bucket of usage.</p>
     */
    inline UsageAllocation& WithAllocatedUsageQuantity(int value) { SetAllocatedUsageQuantity(value); return *this;}


    /**
     * <p>The set of tags that define the bucket of usage. For the bucket of items with
     * no tags, this parameter can be left out.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The set of tags that define the bucket of usage. For the bucket of items with
     * no tags, this parameter can be left out.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The set of tags that define the bucket of usage. For the bucket of items with
     * no tags, this parameter can be left out.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The set of tags that define the bucket of usage. For the bucket of items with
     * no tags, this parameter can be left out.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The set of tags that define the bucket of usage. For the bucket of items with
     * no tags, this parameter can be left out.</p>
     */
    inline UsageAllocation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The set of tags that define the bucket of usage. For the bucket of items with
     * no tags, this parameter can be left out.</p>
     */
    inline UsageAllocation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The set of tags that define the bucket of usage. For the bucket of items with
     * no tags, this parameter can be left out.</p>
     */
    inline UsageAllocation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The set of tags that define the bucket of usage. For the bucket of items with
     * no tags, this parameter can be left out.</p>
     */
    inline UsageAllocation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    int m_allocatedUsageQuantity;
    bool m_allocatedUsageQuantityHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
