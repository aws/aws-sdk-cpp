﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/TransactGetItem.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class TransactGetItemsRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API TransactGetItemsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TransactGetItems"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An ordered array of up to 100 <code>TransactGetItem</code> objects, each of
     * which contains a <code>Get</code> structure.</p>
     */
    inline const Aws::Vector<TransactGetItem>& GetTransactItems() const{ return m_transactItems; }

    /**
     * <p>An ordered array of up to 100 <code>TransactGetItem</code> objects, each of
     * which contains a <code>Get</code> structure.</p>
     */
    inline bool TransactItemsHasBeenSet() const { return m_transactItemsHasBeenSet; }

    /**
     * <p>An ordered array of up to 100 <code>TransactGetItem</code> objects, each of
     * which contains a <code>Get</code> structure.</p>
     */
    inline void SetTransactItems(const Aws::Vector<TransactGetItem>& value) { m_transactItemsHasBeenSet = true; m_transactItems = value; }

    /**
     * <p>An ordered array of up to 100 <code>TransactGetItem</code> objects, each of
     * which contains a <code>Get</code> structure.</p>
     */
    inline void SetTransactItems(Aws::Vector<TransactGetItem>&& value) { m_transactItemsHasBeenSet = true; m_transactItems = std::move(value); }

    /**
     * <p>An ordered array of up to 100 <code>TransactGetItem</code> objects, each of
     * which contains a <code>Get</code> structure.</p>
     */
    inline TransactGetItemsRequest& WithTransactItems(const Aws::Vector<TransactGetItem>& value) { SetTransactItems(value); return *this;}

    /**
     * <p>An ordered array of up to 100 <code>TransactGetItem</code> objects, each of
     * which contains a <code>Get</code> structure.</p>
     */
    inline TransactGetItemsRequest& WithTransactItems(Aws::Vector<TransactGetItem>&& value) { SetTransactItems(std::move(value)); return *this;}

    /**
     * <p>An ordered array of up to 100 <code>TransactGetItem</code> objects, each of
     * which contains a <code>Get</code> structure.</p>
     */
    inline TransactGetItemsRequest& AddTransactItems(const TransactGetItem& value) { m_transactItemsHasBeenSet = true; m_transactItems.push_back(value); return *this; }

    /**
     * <p>An ordered array of up to 100 <code>TransactGetItem</code> objects, each of
     * which contains a <code>Get</code> structure.</p>
     */
    inline TransactGetItemsRequest& AddTransactItems(TransactGetItem&& value) { m_transactItemsHasBeenSet = true; m_transactItems.push_back(std::move(value)); return *this; }


    /**
     * <p>A value of <code>TOTAL</code> causes consumed capacity information to be
     * returned, and a value of <code>NONE</code> prevents that information from being
     * returned. No other value is valid.</p>
     */
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }

    /**
     * <p>A value of <code>TOTAL</code> causes consumed capacity information to be
     * returned, and a value of <code>NONE</code> prevents that information from being
     * returned. No other value is valid.</p>
     */
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }

    /**
     * <p>A value of <code>TOTAL</code> causes consumed capacity information to be
     * returned, and a value of <code>NONE</code> prevents that information from being
     * returned. No other value is valid.</p>
     */
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    /**
     * <p>A value of <code>TOTAL</code> causes consumed capacity information to be
     * returned, and a value of <code>NONE</code> prevents that information from being
     * returned. No other value is valid.</p>
     */
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = std::move(value); }

    /**
     * <p>A value of <code>TOTAL</code> causes consumed capacity information to be
     * returned, and a value of <code>NONE</code> prevents that information from being
     * returned. No other value is valid.</p>
     */
    inline TransactGetItemsRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}

    /**
     * <p>A value of <code>TOTAL</code> causes consumed capacity information to be
     * returned, and a value of <code>NONE</code> prevents that information from being
     * returned. No other value is valid.</p>
     */
    inline TransactGetItemsRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(std::move(value)); return *this;}

  private:

    Aws::Vector<TransactGetItem> m_transactItems;
    bool m_transactItemsHasBeenSet = false;

    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
