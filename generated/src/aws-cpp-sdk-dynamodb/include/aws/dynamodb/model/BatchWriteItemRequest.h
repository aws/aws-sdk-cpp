/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/ReturnItemCollectionMetrics.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/WriteRequest.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>BatchWriteItem</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchWriteItemInput">AWS
   * API Reference</a></p>
   */
  class BatchWriteItemRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API BatchWriteItemRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchWriteItem"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;
    AWS_DYNAMODB_API Aws::Vector<Aws::String> GetOperationContextParams() const;

    ///@{
    /**
     * <p>A map of one or more table names or table ARNs and, for each table, a list of
     * operations to be performed (<code>DeleteRequest</code> or
     * <code>PutRequest</code>). Each element in the map consists of the following:</p>
     * <ul> <li> <p> <code>DeleteRequest</code> - Perform a <code>DeleteItem</code>
     * operation on the specified item. The item to be deleted is identified by a
     * <code>Key</code> subelement:</p> <ul> <li> <p> <code>Key</code> - A map of
     * primary key attribute values that uniquely identify the item. Each entry in this
     * map consists of an attribute name and an attribute value. For each primary key,
     * you must provide <i>all</i> of the key attributes. For example, with a simple
     * primary key, you only need to provide a value for the partition key. For a
     * composite primary key, you must provide values for <i>both</i> the partition key
     * and the sort key.</p> </li> </ul> </li> <li> <p> <code>PutRequest</code> -
     * Perform a <code>PutItem</code> operation on the specified item. The item to be
     * put is identified by an <code>Item</code> subelement:</p> <ul> <li> <p>
     * <code>Item</code> - A map of attributes and their values. Each entry in this map
     * consists of an attribute name and an attribute value. Attribute values must not
     * be null; string and binary type attributes must have lengths greater than zero;
     * and set type attributes must not be empty. Requests that contain empty values
     * are rejected with a <code>ValidationException</code> exception.</p> <p>If you
     * specify any attributes that are part of an index key, then the data types for
     * those attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<WriteRequest>>& GetRequestItems() const { return m_requestItems; }
    inline bool RequestItemsHasBeenSet() const { return m_requestItemsHasBeenSet; }
    template<typename RequestItemsT = Aws::Map<Aws::String, Aws::Vector<WriteRequest>>>
    void SetRequestItems(RequestItemsT&& value) { m_requestItemsHasBeenSet = true; m_requestItems = std::forward<RequestItemsT>(value); }
    template<typename RequestItemsT = Aws::Map<Aws::String, Aws::Vector<WriteRequest>>>
    BatchWriteItemRequest& WithRequestItems(RequestItemsT&& value) { SetRequestItems(std::forward<RequestItemsT>(value)); return *this;}
    template<typename RequestItemsKeyT = Aws::String, typename RequestItemsValueT = Aws::Vector<WriteRequest>>
    BatchWriteItemRequest& AddRequestItems(RequestItemsKeyT&& key, RequestItemsValueT&& value) {
      m_requestItemsHasBeenSet = true; m_requestItems.emplace(std::forward<RequestItemsKeyT>(key), std::forward<RequestItemsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline ReturnConsumedCapacity GetReturnConsumedCapacity() const { return m_returnConsumedCapacity; }
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }
    inline BatchWriteItemRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity value) { SetReturnConsumedCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline ReturnItemCollectionMetrics GetReturnItemCollectionMetrics() const { return m_returnItemCollectionMetrics; }
    inline bool ReturnItemCollectionMetricsHasBeenSet() const { return m_returnItemCollectionMetricsHasBeenSet; }
    inline void SetReturnItemCollectionMetrics(ReturnItemCollectionMetrics value) { m_returnItemCollectionMetricsHasBeenSet = true; m_returnItemCollectionMetrics = value; }
    inline BatchWriteItemRequest& WithReturnItemCollectionMetrics(ReturnItemCollectionMetrics value) { SetReturnItemCollectionMetrics(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<WriteRequest>> m_requestItems;
    bool m_requestItemsHasBeenSet = false;

    ReturnConsumedCapacity m_returnConsumedCapacity{ReturnConsumedCapacity::NOT_SET};
    bool m_returnConsumedCapacityHasBeenSet = false;

    ReturnItemCollectionMetrics m_returnItemCollectionMetrics{ReturnItemCollectionMetrics::NOT_SET};
    bool m_returnItemCollectionMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
