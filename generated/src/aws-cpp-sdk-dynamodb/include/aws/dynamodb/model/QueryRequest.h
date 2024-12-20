/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <aws/dynamodb/model/Condition.h>
#include <aws/dynamodb/model/Key.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class QueryRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API QueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Query"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline QueryRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline QueryRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline QueryRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetAttributesToGet() const{ return m_attributesToGet; }
    inline bool AttributesToGetHasBeenSet() const { return m_attributesToGetHasBeenSet; }
    inline void SetAttributesToGet(const Aws::Vector<Aws::String>& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = value; }
    inline void SetAttributesToGet(Aws::Vector<Aws::String>&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = std::move(value); }
    inline QueryRequest& WithAttributesToGet(const Aws::Vector<Aws::String>& value) { SetAttributesToGet(value); return *this;}
    inline QueryRequest& WithAttributesToGet(Aws::Vector<Aws::String>&& value) { SetAttributesToGet(std::move(value)); return *this;}
    inline QueryRequest& AddAttributesToGet(const Aws::String& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    inline QueryRequest& AddAttributesToGet(Aws::String&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(std::move(value)); return *this; }
    inline QueryRequest& AddAttributesToGet(const char* value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline QueryRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetConsistentRead() const{ return m_consistentRead; }
    inline bool ConsistentReadHasBeenSet() const { return m_consistentReadHasBeenSet; }
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }
    inline QueryRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(bool value) { m_countHasBeenSet = true; m_count = value; }
    inline QueryRequest& WithCount(bool value) { SetCount(value); return *this;}
    ///@}

    ///@{
    
    inline const AttributeValue& GetHashKeyValue() const{ return m_hashKeyValue; }
    inline bool HashKeyValueHasBeenSet() const { return m_hashKeyValueHasBeenSet; }
    inline void SetHashKeyValue(const AttributeValue& value) { m_hashKeyValueHasBeenSet = true; m_hashKeyValue = value; }
    inline void SetHashKeyValue(AttributeValue&& value) { m_hashKeyValueHasBeenSet = true; m_hashKeyValue = std::move(value); }
    inline QueryRequest& WithHashKeyValue(const AttributeValue& value) { SetHashKeyValue(value); return *this;}
    inline QueryRequest& WithHashKeyValue(AttributeValue&& value) { SetHashKeyValue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Condition& GetRangeKeyCondition() const{ return m_rangeKeyCondition; }
    inline bool RangeKeyConditionHasBeenSet() const { return m_rangeKeyConditionHasBeenSet; }
    inline void SetRangeKeyCondition(const Condition& value) { m_rangeKeyConditionHasBeenSet = true; m_rangeKeyCondition = value; }
    inline void SetRangeKeyCondition(Condition&& value) { m_rangeKeyConditionHasBeenSet = true; m_rangeKeyCondition = std::move(value); }
    inline QueryRequest& WithRangeKeyCondition(const Condition& value) { SetRangeKeyCondition(value); return *this;}
    inline QueryRequest& WithRangeKeyCondition(Condition&& value) { SetRangeKeyCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline bool GetScanIndexForward() const{ return m_scanIndexForward; }
    inline bool ScanIndexForwardHasBeenSet() const { return m_scanIndexForwardHasBeenSet; }
    inline void SetScanIndexForward(bool value) { m_scanIndexForwardHasBeenSet = true; m_scanIndexForward = value; }
    inline QueryRequest& WithScanIndexForward(bool value) { SetScanIndexForward(value); return *this;}
    ///@}

    ///@{
    
    inline const Key& GetExclusiveStartKey() const{ return m_exclusiveStartKey; }
    inline bool ExclusiveStartKeyHasBeenSet() const { return m_exclusiveStartKeyHasBeenSet; }
    inline void SetExclusiveStartKey(const Key& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey = value; }
    inline void SetExclusiveStartKey(Key&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey = std::move(value); }
    inline QueryRequest& WithExclusiveStartKey(const Key& value) { SetExclusiveStartKey(value); return *this;}
    inline QueryRequest& WithExclusiveStartKey(Key&& value) { SetExclusiveStartKey(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributesToGet;
    bool m_attributesToGetHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    bool m_consistentRead;
    bool m_consistentReadHasBeenSet = false;

    bool m_count;
    bool m_countHasBeenSet = false;

    AttributeValue m_hashKeyValue;
    bool m_hashKeyValueHasBeenSet = false;

    Condition m_rangeKeyCondition;
    bool m_rangeKeyConditionHasBeenSet = false;

    bool m_scanIndexForward;
    bool m_scanIndexForwardHasBeenSet = false;

    Key m_exclusiveStartKey;
    bool m_exclusiveStartKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
