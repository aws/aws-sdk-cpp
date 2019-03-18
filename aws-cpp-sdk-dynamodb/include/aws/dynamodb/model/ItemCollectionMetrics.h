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
  class AWS_DYNAMODB_API ItemCollectionMetrics
  {
  public:
    ItemCollectionMetrics();
    ItemCollectionMetrics(Aws::Utils::Json::JsonView jsonValue);
    ItemCollectionMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The partition key value of the item collection. This value is the same as the
     * partition key value of the item.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItemCollectionKey() const{ return m_itemCollectionKey; }

    /**
     * <p>The partition key value of the item collection. This value is the same as the
     * partition key value of the item.</p>
     */
    inline bool ItemCollectionKeyHasBeenSet() const { return m_itemCollectionKeyHasBeenSet; }

    /**
     * <p>The partition key value of the item collection. This value is the same as the
     * partition key value of the item.</p>
     */
    inline void SetItemCollectionKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_itemCollectionKeyHasBeenSet = true; m_itemCollectionKey = value; }

    /**
     * <p>The partition key value of the item collection. This value is the same as the
     * partition key value of the item.</p>
     */
    inline void SetItemCollectionKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_itemCollectionKeyHasBeenSet = true; m_itemCollectionKey = std::move(value); }

    /**
     * <p>The partition key value of the item collection. This value is the same as the
     * partition key value of the item.</p>
     */
    inline ItemCollectionMetrics& WithItemCollectionKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetItemCollectionKey(value); return *this;}

    /**
     * <p>The partition key value of the item collection. This value is the same as the
     * partition key value of the item.</p>
     */
    inline ItemCollectionMetrics& WithItemCollectionKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetItemCollectionKey(std::move(value)); return *this;}

    /**
     * <p>The partition key value of the item collection. This value is the same as the
     * partition key value of the item.</p>
     */
    inline ItemCollectionMetrics& AddItemCollectionKey(const Aws::String& key, const AttributeValue& value) { m_itemCollectionKeyHasBeenSet = true; m_itemCollectionKey.emplace(key, value); return *this; }

    /**
     * <p>The partition key value of the item collection. This value is the same as the
     * partition key value of the item.</p>
     */
    inline ItemCollectionMetrics& AddItemCollectionKey(Aws::String&& key, const AttributeValue& value) { m_itemCollectionKeyHasBeenSet = true; m_itemCollectionKey.emplace(std::move(key), value); return *this; }

    /**
     * <p>The partition key value of the item collection. This value is the same as the
     * partition key value of the item.</p>
     */
    inline ItemCollectionMetrics& AddItemCollectionKey(const Aws::String& key, AttributeValue&& value) { m_itemCollectionKeyHasBeenSet = true; m_itemCollectionKey.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The partition key value of the item collection. This value is the same as the
     * partition key value of the item.</p>
     */
    inline ItemCollectionMetrics& AddItemCollectionKey(Aws::String&& key, AttributeValue&& value) { m_itemCollectionKeyHasBeenSet = true; m_itemCollectionKey.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The partition key value of the item collection. This value is the same as the
     * partition key value of the item.</p>
     */
    inline ItemCollectionMetrics& AddItemCollectionKey(const char* key, AttributeValue&& value) { m_itemCollectionKeyHasBeenSet = true; m_itemCollectionKey.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The partition key value of the item collection. This value is the same as the
     * partition key value of the item.</p>
     */
    inline ItemCollectionMetrics& AddItemCollectionKey(const char* key, const AttributeValue& value) { m_itemCollectionKeyHasBeenSet = true; m_itemCollectionKey.emplace(key, value); return *this; }


    /**
     * <p>An estimate of item collection size, in gigabytes. This value is a
     * two-element array containing a lower bound and an upper bound for the estimate.
     * The estimate includes the size of all the items in the table, plus the size of
     * all attributes projected into all of the local secondary indexes on that table.
     * Use this estimate to measure whether a local secondary index is approaching its
     * size limit.</p> <p>The estimate is subject to change over time; therefore, do
     * not rely on the precision or accuracy of the estimate.</p>
     */
    inline const Aws::Vector<double>& GetSizeEstimateRangeGB() const{ return m_sizeEstimateRangeGB; }

    /**
     * <p>An estimate of item collection size, in gigabytes. This value is a
     * two-element array containing a lower bound and an upper bound for the estimate.
     * The estimate includes the size of all the items in the table, plus the size of
     * all attributes projected into all of the local secondary indexes on that table.
     * Use this estimate to measure whether a local secondary index is approaching its
     * size limit.</p> <p>The estimate is subject to change over time; therefore, do
     * not rely on the precision or accuracy of the estimate.</p>
     */
    inline bool SizeEstimateRangeGBHasBeenSet() const { return m_sizeEstimateRangeGBHasBeenSet; }

    /**
     * <p>An estimate of item collection size, in gigabytes. This value is a
     * two-element array containing a lower bound and an upper bound for the estimate.
     * The estimate includes the size of all the items in the table, plus the size of
     * all attributes projected into all of the local secondary indexes on that table.
     * Use this estimate to measure whether a local secondary index is approaching its
     * size limit.</p> <p>The estimate is subject to change over time; therefore, do
     * not rely on the precision or accuracy of the estimate.</p>
     */
    inline void SetSizeEstimateRangeGB(const Aws::Vector<double>& value) { m_sizeEstimateRangeGBHasBeenSet = true; m_sizeEstimateRangeGB = value; }

    /**
     * <p>An estimate of item collection size, in gigabytes. This value is a
     * two-element array containing a lower bound and an upper bound for the estimate.
     * The estimate includes the size of all the items in the table, plus the size of
     * all attributes projected into all of the local secondary indexes on that table.
     * Use this estimate to measure whether a local secondary index is approaching its
     * size limit.</p> <p>The estimate is subject to change over time; therefore, do
     * not rely on the precision or accuracy of the estimate.</p>
     */
    inline void SetSizeEstimateRangeGB(Aws::Vector<double>&& value) { m_sizeEstimateRangeGBHasBeenSet = true; m_sizeEstimateRangeGB = std::move(value); }

    /**
     * <p>An estimate of item collection size, in gigabytes. This value is a
     * two-element array containing a lower bound and an upper bound for the estimate.
     * The estimate includes the size of all the items in the table, plus the size of
     * all attributes projected into all of the local secondary indexes on that table.
     * Use this estimate to measure whether a local secondary index is approaching its
     * size limit.</p> <p>The estimate is subject to change over time; therefore, do
     * not rely on the precision or accuracy of the estimate.</p>
     */
    inline ItemCollectionMetrics& WithSizeEstimateRangeGB(const Aws::Vector<double>& value) { SetSizeEstimateRangeGB(value); return *this;}

    /**
     * <p>An estimate of item collection size, in gigabytes. This value is a
     * two-element array containing a lower bound and an upper bound for the estimate.
     * The estimate includes the size of all the items in the table, plus the size of
     * all attributes projected into all of the local secondary indexes on that table.
     * Use this estimate to measure whether a local secondary index is approaching its
     * size limit.</p> <p>The estimate is subject to change over time; therefore, do
     * not rely on the precision or accuracy of the estimate.</p>
     */
    inline ItemCollectionMetrics& WithSizeEstimateRangeGB(Aws::Vector<double>&& value) { SetSizeEstimateRangeGB(std::move(value)); return *this;}

    /**
     * <p>An estimate of item collection size, in gigabytes. This value is a
     * two-element array containing a lower bound and an upper bound for the estimate.
     * The estimate includes the size of all the items in the table, plus the size of
     * all attributes projected into all of the local secondary indexes on that table.
     * Use this estimate to measure whether a local secondary index is approaching its
     * size limit.</p> <p>The estimate is subject to change over time; therefore, do
     * not rely on the precision or accuracy of the estimate.</p>
     */
    inline ItemCollectionMetrics& AddSizeEstimateRangeGB(double value) { m_sizeEstimateRangeGBHasBeenSet = true; m_sizeEstimateRangeGB.push_back(value); return *this; }

  private:

    Aws::Map<Aws::String, AttributeValue> m_itemCollectionKey;
    bool m_itemCollectionKeyHasBeenSet;

    Aws::Vector<double> m_sizeEstimateRangeGB;
    bool m_sizeEstimateRangeGBHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
