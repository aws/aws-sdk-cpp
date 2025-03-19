/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AttributeValue.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Information about item collections, if any, that were affected by the
   * operation. <code>ItemCollectionMetrics</code> is only returned if the request
   * asked for it. If the table does not have any local secondary indexes, this
   * information is not returned in the response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ItemCollectionMetrics">AWS
   * API Reference</a></p>
   */
  class ItemCollectionMetrics
  {
  public:
    AWS_DYNAMODB_API ItemCollectionMetrics() = default;
    AWS_DYNAMODB_API ItemCollectionMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ItemCollectionMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The partition key value of the item collection. This value is the same as the
     * partition key value of the item.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItemCollectionKey() const { return m_itemCollectionKey; }
    inline bool ItemCollectionKeyHasBeenSet() const { return m_itemCollectionKeyHasBeenSet; }
    template<typename ItemCollectionKeyT = Aws::Map<Aws::String, AttributeValue>>
    void SetItemCollectionKey(ItemCollectionKeyT&& value) { m_itemCollectionKeyHasBeenSet = true; m_itemCollectionKey = std::forward<ItemCollectionKeyT>(value); }
    template<typename ItemCollectionKeyT = Aws::Map<Aws::String, AttributeValue>>
    ItemCollectionMetrics& WithItemCollectionKey(ItemCollectionKeyT&& value) { SetItemCollectionKey(std::forward<ItemCollectionKeyT>(value)); return *this;}
    template<typename ItemCollectionKeyKeyT = Aws::String, typename ItemCollectionKeyValueT = AttributeValue>
    ItemCollectionMetrics& AddItemCollectionKey(ItemCollectionKeyKeyT&& key, ItemCollectionKeyValueT&& value) {
      m_itemCollectionKeyHasBeenSet = true; m_itemCollectionKey.emplace(std::forward<ItemCollectionKeyKeyT>(key), std::forward<ItemCollectionKeyValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An estimate of item collection size, in gigabytes. This value is a
     * two-element array containing a lower bound and an upper bound for the estimate.
     * The estimate includes the size of all the items in the table, plus the size of
     * all attributes projected into all of the local secondary indexes on that table.
     * Use this estimate to measure whether a local secondary index is approaching its
     * size limit.</p> <p>The estimate is subject to change over time; therefore, do
     * not rely on the precision or accuracy of the estimate.</p>
     */
    inline const Aws::Vector<double>& GetSizeEstimateRangeGB() const { return m_sizeEstimateRangeGB; }
    inline bool SizeEstimateRangeGBHasBeenSet() const { return m_sizeEstimateRangeGBHasBeenSet; }
    template<typename SizeEstimateRangeGBT = Aws::Vector<double>>
    void SetSizeEstimateRangeGB(SizeEstimateRangeGBT&& value) { m_sizeEstimateRangeGBHasBeenSet = true; m_sizeEstimateRangeGB = std::forward<SizeEstimateRangeGBT>(value); }
    template<typename SizeEstimateRangeGBT = Aws::Vector<double>>
    ItemCollectionMetrics& WithSizeEstimateRangeGB(SizeEstimateRangeGBT&& value) { SetSizeEstimateRangeGB(std::forward<SizeEstimateRangeGBT>(value)); return *this;}
    inline ItemCollectionMetrics& AddSizeEstimateRangeGB(double value) { m_sizeEstimateRangeGBHasBeenSet = true; m_sizeEstimateRangeGB.push_back(value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, AttributeValue> m_itemCollectionKey;
    bool m_itemCollectionKeyHasBeenSet = false;

    Aws::Vector<double> m_sizeEstimateRangeGB;
    bool m_sizeEstimateRangeGBHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
