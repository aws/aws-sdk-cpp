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
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/ReturnItemCollectionMetrics.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/TransactWriteItem.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class AWS_DYNAMODB_API TransactWriteItemsRequest : public DynamoDBRequest
  {
  public:
    TransactWriteItemsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TransactWriteItems"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An ordered array of up to 25 <code>TransactWriteItem</code> objects, each of
     * which contains a <code>ConditionCheck</code>, <code>Put</code>,
     * <code>Update</code>, or <code>Delete</code> object. These can operate on items
     * in different tables, but the tables must reside in the same AWS account and
     * Region, and no two of them can operate on the same item. </p>
     */
    inline const Aws::Vector<TransactWriteItem>& GetTransactItems() const{ return m_transactItems; }

    /**
     * <p>An ordered array of up to 25 <code>TransactWriteItem</code> objects, each of
     * which contains a <code>ConditionCheck</code>, <code>Put</code>,
     * <code>Update</code>, or <code>Delete</code> object. These can operate on items
     * in different tables, but the tables must reside in the same AWS account and
     * Region, and no two of them can operate on the same item. </p>
     */
    inline bool TransactItemsHasBeenSet() const { return m_transactItemsHasBeenSet; }

    /**
     * <p>An ordered array of up to 25 <code>TransactWriteItem</code> objects, each of
     * which contains a <code>ConditionCheck</code>, <code>Put</code>,
     * <code>Update</code>, or <code>Delete</code> object. These can operate on items
     * in different tables, but the tables must reside in the same AWS account and
     * Region, and no two of them can operate on the same item. </p>
     */
    inline void SetTransactItems(const Aws::Vector<TransactWriteItem>& value) { m_transactItemsHasBeenSet = true; m_transactItems = value; }

    /**
     * <p>An ordered array of up to 25 <code>TransactWriteItem</code> objects, each of
     * which contains a <code>ConditionCheck</code>, <code>Put</code>,
     * <code>Update</code>, or <code>Delete</code> object. These can operate on items
     * in different tables, but the tables must reside in the same AWS account and
     * Region, and no two of them can operate on the same item. </p>
     */
    inline void SetTransactItems(Aws::Vector<TransactWriteItem>&& value) { m_transactItemsHasBeenSet = true; m_transactItems = std::move(value); }

    /**
     * <p>An ordered array of up to 25 <code>TransactWriteItem</code> objects, each of
     * which contains a <code>ConditionCheck</code>, <code>Put</code>,
     * <code>Update</code>, or <code>Delete</code> object. These can operate on items
     * in different tables, but the tables must reside in the same AWS account and
     * Region, and no two of them can operate on the same item. </p>
     */
    inline TransactWriteItemsRequest& WithTransactItems(const Aws::Vector<TransactWriteItem>& value) { SetTransactItems(value); return *this;}

    /**
     * <p>An ordered array of up to 25 <code>TransactWriteItem</code> objects, each of
     * which contains a <code>ConditionCheck</code>, <code>Put</code>,
     * <code>Update</code>, or <code>Delete</code> object. These can operate on items
     * in different tables, but the tables must reside in the same AWS account and
     * Region, and no two of them can operate on the same item. </p>
     */
    inline TransactWriteItemsRequest& WithTransactItems(Aws::Vector<TransactWriteItem>&& value) { SetTransactItems(std::move(value)); return *this;}

    /**
     * <p>An ordered array of up to 25 <code>TransactWriteItem</code> objects, each of
     * which contains a <code>ConditionCheck</code>, <code>Put</code>,
     * <code>Update</code>, or <code>Delete</code> object. These can operate on items
     * in different tables, but the tables must reside in the same AWS account and
     * Region, and no two of them can operate on the same item. </p>
     */
    inline TransactWriteItemsRequest& AddTransactItems(const TransactWriteItem& value) { m_transactItemsHasBeenSet = true; m_transactItems.push_back(value); return *this; }

    /**
     * <p>An ordered array of up to 25 <code>TransactWriteItem</code> objects, each of
     * which contains a <code>ConditionCheck</code>, <code>Put</code>,
     * <code>Update</code>, or <code>Delete</code> object. These can operate on items
     * in different tables, but the tables must reside in the same AWS account and
     * Region, and no two of them can operate on the same item. </p>
     */
    inline TransactWriteItemsRequest& AddTransactItems(TransactWriteItem&& value) { m_transactItemsHasBeenSet = true; m_transactItems.push_back(std::move(value)); return *this; }


    
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }

    
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }

    
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = std::move(value); }

    
    inline TransactWriteItemsRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}

    
    inline TransactWriteItemsRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(std::move(value)); return *this;}


    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections (if
     * any), that were modified during the operation and are returned in the response.
     * If set to <code>NONE</code> (the default), no statistics are returned. </p>
     */
    inline const ReturnItemCollectionMetrics& GetReturnItemCollectionMetrics() const{ return m_returnItemCollectionMetrics; }

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections (if
     * any), that were modified during the operation and are returned in the response.
     * If set to <code>NONE</code> (the default), no statistics are returned. </p>
     */
    inline bool ReturnItemCollectionMetricsHasBeenSet() const { return m_returnItemCollectionMetricsHasBeenSet; }

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections (if
     * any), that were modified during the operation and are returned in the response.
     * If set to <code>NONE</code> (the default), no statistics are returned. </p>
     */
    inline void SetReturnItemCollectionMetrics(const ReturnItemCollectionMetrics& value) { m_returnItemCollectionMetricsHasBeenSet = true; m_returnItemCollectionMetrics = value; }

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections (if
     * any), that were modified during the operation and are returned in the response.
     * If set to <code>NONE</code> (the default), no statistics are returned. </p>
     */
    inline void SetReturnItemCollectionMetrics(ReturnItemCollectionMetrics&& value) { m_returnItemCollectionMetricsHasBeenSet = true; m_returnItemCollectionMetrics = std::move(value); }

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections (if
     * any), that were modified during the operation and are returned in the response.
     * If set to <code>NONE</code> (the default), no statistics are returned. </p>
     */
    inline TransactWriteItemsRequest& WithReturnItemCollectionMetrics(const ReturnItemCollectionMetrics& value) { SetReturnItemCollectionMetrics(value); return *this;}

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections (if
     * any), that were modified during the operation and are returned in the response.
     * If set to <code>NONE</code> (the default), no statistics are returned. </p>
     */
    inline TransactWriteItemsRequest& WithReturnItemCollectionMetrics(ReturnItemCollectionMetrics&& value) { SetReturnItemCollectionMetrics(std::move(value)); return *this;}


    /**
     * <p>Providing a <code>ClientRequestToken</code> makes the call to
     * <code>TransactWriteItems</code> idempotent, meaning that multiple identical
     * calls have the same effect as one single call.</p> <p>Although multiple
     * identical calls using the same client request token produce the same result on
     * the server (no side effects), the responses to the calls might not be the same.
     * If the <code>ReturnConsumedCapacity&gt;</code> parameter is set, then the
     * initial <code>TransactWriteItems</code> call returns the amount of write
     * capacity units consumed in making the changes. Subsequent
     * <code>TransactWriteItems</code> calls with the same client token return the
     * number of read capacity units consumed in reading the item.</p> <p>A client
     * request token is valid for 10 minutes after the first request that uses it is
     * completed. After 10 minutes, any request with the same client token is treated
     * as a new request. Do not resubmit the same request with the same client token
     * for more than 10 minutes, or the result might not be idempotent.</p> <p>If you
     * submit a request with the same client token but a change in other parameters
     * within the 10-minute idempotency window, DynamoDB returns an
     * <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Providing a <code>ClientRequestToken</code> makes the call to
     * <code>TransactWriteItems</code> idempotent, meaning that multiple identical
     * calls have the same effect as one single call.</p> <p>Although multiple
     * identical calls using the same client request token produce the same result on
     * the server (no side effects), the responses to the calls might not be the same.
     * If the <code>ReturnConsumedCapacity&gt;</code> parameter is set, then the
     * initial <code>TransactWriteItems</code> call returns the amount of write
     * capacity units consumed in making the changes. Subsequent
     * <code>TransactWriteItems</code> calls with the same client token return the
     * number of read capacity units consumed in reading the item.</p> <p>A client
     * request token is valid for 10 minutes after the first request that uses it is
     * completed. After 10 minutes, any request with the same client token is treated
     * as a new request. Do not resubmit the same request with the same client token
     * for more than 10 minutes, or the result might not be idempotent.</p> <p>If you
     * submit a request with the same client token but a change in other parameters
     * within the 10-minute idempotency window, DynamoDB returns an
     * <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Providing a <code>ClientRequestToken</code> makes the call to
     * <code>TransactWriteItems</code> idempotent, meaning that multiple identical
     * calls have the same effect as one single call.</p> <p>Although multiple
     * identical calls using the same client request token produce the same result on
     * the server (no side effects), the responses to the calls might not be the same.
     * If the <code>ReturnConsumedCapacity&gt;</code> parameter is set, then the
     * initial <code>TransactWriteItems</code> call returns the amount of write
     * capacity units consumed in making the changes. Subsequent
     * <code>TransactWriteItems</code> calls with the same client token return the
     * number of read capacity units consumed in reading the item.</p> <p>A client
     * request token is valid for 10 minutes after the first request that uses it is
     * completed. After 10 minutes, any request with the same client token is treated
     * as a new request. Do not resubmit the same request with the same client token
     * for more than 10 minutes, or the result might not be idempotent.</p> <p>If you
     * submit a request with the same client token but a change in other parameters
     * within the 10-minute idempotency window, DynamoDB returns an
     * <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Providing a <code>ClientRequestToken</code> makes the call to
     * <code>TransactWriteItems</code> idempotent, meaning that multiple identical
     * calls have the same effect as one single call.</p> <p>Although multiple
     * identical calls using the same client request token produce the same result on
     * the server (no side effects), the responses to the calls might not be the same.
     * If the <code>ReturnConsumedCapacity&gt;</code> parameter is set, then the
     * initial <code>TransactWriteItems</code> call returns the amount of write
     * capacity units consumed in making the changes. Subsequent
     * <code>TransactWriteItems</code> calls with the same client token return the
     * number of read capacity units consumed in reading the item.</p> <p>A client
     * request token is valid for 10 minutes after the first request that uses it is
     * completed. After 10 minutes, any request with the same client token is treated
     * as a new request. Do not resubmit the same request with the same client token
     * for more than 10 minutes, or the result might not be idempotent.</p> <p>If you
     * submit a request with the same client token but a change in other parameters
     * within the 10-minute idempotency window, DynamoDB returns an
     * <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Providing a <code>ClientRequestToken</code> makes the call to
     * <code>TransactWriteItems</code> idempotent, meaning that multiple identical
     * calls have the same effect as one single call.</p> <p>Although multiple
     * identical calls using the same client request token produce the same result on
     * the server (no side effects), the responses to the calls might not be the same.
     * If the <code>ReturnConsumedCapacity&gt;</code> parameter is set, then the
     * initial <code>TransactWriteItems</code> call returns the amount of write
     * capacity units consumed in making the changes. Subsequent
     * <code>TransactWriteItems</code> calls with the same client token return the
     * number of read capacity units consumed in reading the item.</p> <p>A client
     * request token is valid for 10 minutes after the first request that uses it is
     * completed. After 10 minutes, any request with the same client token is treated
     * as a new request. Do not resubmit the same request with the same client token
     * for more than 10 minutes, or the result might not be idempotent.</p> <p>If you
     * submit a request with the same client token but a change in other parameters
     * within the 10-minute idempotency window, DynamoDB returns an
     * <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Providing a <code>ClientRequestToken</code> makes the call to
     * <code>TransactWriteItems</code> idempotent, meaning that multiple identical
     * calls have the same effect as one single call.</p> <p>Although multiple
     * identical calls using the same client request token produce the same result on
     * the server (no side effects), the responses to the calls might not be the same.
     * If the <code>ReturnConsumedCapacity&gt;</code> parameter is set, then the
     * initial <code>TransactWriteItems</code> call returns the amount of write
     * capacity units consumed in making the changes. Subsequent
     * <code>TransactWriteItems</code> calls with the same client token return the
     * number of read capacity units consumed in reading the item.</p> <p>A client
     * request token is valid for 10 minutes after the first request that uses it is
     * completed. After 10 minutes, any request with the same client token is treated
     * as a new request. Do not resubmit the same request with the same client token
     * for more than 10 minutes, or the result might not be idempotent.</p> <p>If you
     * submit a request with the same client token but a change in other parameters
     * within the 10-minute idempotency window, DynamoDB returns an
     * <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline TransactWriteItemsRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Providing a <code>ClientRequestToken</code> makes the call to
     * <code>TransactWriteItems</code> idempotent, meaning that multiple identical
     * calls have the same effect as one single call.</p> <p>Although multiple
     * identical calls using the same client request token produce the same result on
     * the server (no side effects), the responses to the calls might not be the same.
     * If the <code>ReturnConsumedCapacity&gt;</code> parameter is set, then the
     * initial <code>TransactWriteItems</code> call returns the amount of write
     * capacity units consumed in making the changes. Subsequent
     * <code>TransactWriteItems</code> calls with the same client token return the
     * number of read capacity units consumed in reading the item.</p> <p>A client
     * request token is valid for 10 minutes after the first request that uses it is
     * completed. After 10 minutes, any request with the same client token is treated
     * as a new request. Do not resubmit the same request with the same client token
     * for more than 10 minutes, or the result might not be idempotent.</p> <p>If you
     * submit a request with the same client token but a change in other parameters
     * within the 10-minute idempotency window, DynamoDB returns an
     * <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline TransactWriteItemsRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Providing a <code>ClientRequestToken</code> makes the call to
     * <code>TransactWriteItems</code> idempotent, meaning that multiple identical
     * calls have the same effect as one single call.</p> <p>Although multiple
     * identical calls using the same client request token produce the same result on
     * the server (no side effects), the responses to the calls might not be the same.
     * If the <code>ReturnConsumedCapacity&gt;</code> parameter is set, then the
     * initial <code>TransactWriteItems</code> call returns the amount of write
     * capacity units consumed in making the changes. Subsequent
     * <code>TransactWriteItems</code> calls with the same client token return the
     * number of read capacity units consumed in reading the item.</p> <p>A client
     * request token is valid for 10 minutes after the first request that uses it is
     * completed. After 10 minutes, any request with the same client token is treated
     * as a new request. Do not resubmit the same request with the same client token
     * for more than 10 minutes, or the result might not be idempotent.</p> <p>If you
     * submit a request with the same client token but a change in other parameters
     * within the 10-minute idempotency window, DynamoDB returns an
     * <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline TransactWriteItemsRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::Vector<TransactWriteItem> m_transactItems;
    bool m_transactItemsHasBeenSet;

    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet;

    ReturnItemCollectionMetrics m_returnItemCollectionMetrics;
    bool m_returnItemCollectionMetricsHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
