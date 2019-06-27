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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ConsumedCapacity.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ItemCollectionMetrics.h>
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
namespace DynamoDB
{
namespace Model
{
  class AWS_DYNAMODB_API TransactWriteItemsResult
  {
  public:
    TransactWriteItemsResult();
    TransactWriteItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TransactWriteItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The capacity units consumed by the entire <code>TransactWriteItems</code>
     * operation. The values of the list are ordered according to the ordering of the
     * <code>TransactItems</code> request parameter. </p>
     */
    inline const Aws::Vector<ConsumedCapacity>& GetConsumedCapacity() const{ return m_consumedCapacity; }

    /**
     * <p>The capacity units consumed by the entire <code>TransactWriteItems</code>
     * operation. The values of the list are ordered according to the ordering of the
     * <code>TransactItems</code> request parameter. </p>
     */
    inline void SetConsumedCapacity(const Aws::Vector<ConsumedCapacity>& value) { m_consumedCapacity = value; }

    /**
     * <p>The capacity units consumed by the entire <code>TransactWriteItems</code>
     * operation. The values of the list are ordered according to the ordering of the
     * <code>TransactItems</code> request parameter. </p>
     */
    inline void SetConsumedCapacity(Aws::Vector<ConsumedCapacity>&& value) { m_consumedCapacity = std::move(value); }

    /**
     * <p>The capacity units consumed by the entire <code>TransactWriteItems</code>
     * operation. The values of the list are ordered according to the ordering of the
     * <code>TransactItems</code> request parameter. </p>
     */
    inline TransactWriteItemsResult& WithConsumedCapacity(const Aws::Vector<ConsumedCapacity>& value) { SetConsumedCapacity(value); return *this;}

    /**
     * <p>The capacity units consumed by the entire <code>TransactWriteItems</code>
     * operation. The values of the list are ordered according to the ordering of the
     * <code>TransactItems</code> request parameter. </p>
     */
    inline TransactWriteItemsResult& WithConsumedCapacity(Aws::Vector<ConsumedCapacity>&& value) { SetConsumedCapacity(std::move(value)); return *this;}

    /**
     * <p>The capacity units consumed by the entire <code>TransactWriteItems</code>
     * operation. The values of the list are ordered according to the ordering of the
     * <code>TransactItems</code> request parameter. </p>
     */
    inline TransactWriteItemsResult& AddConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity.push_back(value); return *this; }

    /**
     * <p>The capacity units consumed by the entire <code>TransactWriteItems</code>
     * operation. The values of the list are ordered according to the ordering of the
     * <code>TransactItems</code> request parameter. </p>
     */
    inline TransactWriteItemsResult& AddConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of tables that were processed by <code>TransactWriteItems</code> and,
     * for each table, information about any item collections that were affected by
     * individual <code>UpdateItem</code>, <code>PutItem</code>, or
     * <code>DeleteItem</code> operations. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>& GetItemCollectionMetrics() const{ return m_itemCollectionMetrics; }

    /**
     * <p>A list of tables that were processed by <code>TransactWriteItems</code> and,
     * for each table, information about any item collections that were affected by
     * individual <code>UpdateItem</code>, <code>PutItem</code>, or
     * <code>DeleteItem</code> operations. </p>
     */
    inline void SetItemCollectionMetrics(const Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>& value) { m_itemCollectionMetrics = value; }

    /**
     * <p>A list of tables that were processed by <code>TransactWriteItems</code> and,
     * for each table, information about any item collections that were affected by
     * individual <code>UpdateItem</code>, <code>PutItem</code>, or
     * <code>DeleteItem</code> operations. </p>
     */
    inline void SetItemCollectionMetrics(Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>&& value) { m_itemCollectionMetrics = std::move(value); }

    /**
     * <p>A list of tables that were processed by <code>TransactWriteItems</code> and,
     * for each table, information about any item collections that were affected by
     * individual <code>UpdateItem</code>, <code>PutItem</code>, or
     * <code>DeleteItem</code> operations. </p>
     */
    inline TransactWriteItemsResult& WithItemCollectionMetrics(const Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>& value) { SetItemCollectionMetrics(value); return *this;}

    /**
     * <p>A list of tables that were processed by <code>TransactWriteItems</code> and,
     * for each table, information about any item collections that were affected by
     * individual <code>UpdateItem</code>, <code>PutItem</code>, or
     * <code>DeleteItem</code> operations. </p>
     */
    inline TransactWriteItemsResult& WithItemCollectionMetrics(Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>&& value) { SetItemCollectionMetrics(std::move(value)); return *this;}

    /**
     * <p>A list of tables that were processed by <code>TransactWriteItems</code> and,
     * for each table, information about any item collections that were affected by
     * individual <code>UpdateItem</code>, <code>PutItem</code>, or
     * <code>DeleteItem</code> operations. </p>
     */
    inline TransactWriteItemsResult& AddItemCollectionMetrics(const Aws::String& key, const Aws::Vector<ItemCollectionMetrics>& value) { m_itemCollectionMetrics.emplace(key, value); return *this; }

    /**
     * <p>A list of tables that were processed by <code>TransactWriteItems</code> and,
     * for each table, information about any item collections that were affected by
     * individual <code>UpdateItem</code>, <code>PutItem</code>, or
     * <code>DeleteItem</code> operations. </p>
     */
    inline TransactWriteItemsResult& AddItemCollectionMetrics(Aws::String&& key, const Aws::Vector<ItemCollectionMetrics>& value) { m_itemCollectionMetrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tables that were processed by <code>TransactWriteItems</code> and,
     * for each table, information about any item collections that were affected by
     * individual <code>UpdateItem</code>, <code>PutItem</code>, or
     * <code>DeleteItem</code> operations. </p>
     */
    inline TransactWriteItemsResult& AddItemCollectionMetrics(const Aws::String& key, Aws::Vector<ItemCollectionMetrics>&& value) { m_itemCollectionMetrics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tables that were processed by <code>TransactWriteItems</code> and,
     * for each table, information about any item collections that were affected by
     * individual <code>UpdateItem</code>, <code>PutItem</code>, or
     * <code>DeleteItem</code> operations. </p>
     */
    inline TransactWriteItemsResult& AddItemCollectionMetrics(Aws::String&& key, Aws::Vector<ItemCollectionMetrics>&& value) { m_itemCollectionMetrics.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tables that were processed by <code>TransactWriteItems</code> and,
     * for each table, information about any item collections that were affected by
     * individual <code>UpdateItem</code>, <code>PutItem</code>, or
     * <code>DeleteItem</code> operations. </p>
     */
    inline TransactWriteItemsResult& AddItemCollectionMetrics(const char* key, Aws::Vector<ItemCollectionMetrics>&& value) { m_itemCollectionMetrics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tables that were processed by <code>TransactWriteItems</code> and,
     * for each table, information about any item collections that were affected by
     * individual <code>UpdateItem</code>, <code>PutItem</code>, or
     * <code>DeleteItem</code> operations. </p>
     */
    inline TransactWriteItemsResult& AddItemCollectionMetrics(const char* key, const Aws::Vector<ItemCollectionMetrics>& value) { m_itemCollectionMetrics.emplace(key, value); return *this; }

  private:

    Aws::Vector<ConsumedCapacity> m_consumedCapacity;

    Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>> m_itemCollectionMetrics;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
