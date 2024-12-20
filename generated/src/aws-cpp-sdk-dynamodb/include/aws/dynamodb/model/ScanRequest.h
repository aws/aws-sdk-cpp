/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/Key.h>
#include <aws/dynamodb/model/Condition.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class ScanRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API ScanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Scan"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline ScanRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline ScanRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline ScanRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetAttributesToGet() const{ return m_attributesToGet; }
    inline bool AttributesToGetHasBeenSet() const { return m_attributesToGetHasBeenSet; }
    inline void SetAttributesToGet(const Aws::Vector<Aws::String>& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = value; }
    inline void SetAttributesToGet(Aws::Vector<Aws::String>&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = std::move(value); }
    inline ScanRequest& WithAttributesToGet(const Aws::Vector<Aws::String>& value) { SetAttributesToGet(value); return *this;}
    inline ScanRequest& WithAttributesToGet(Aws::Vector<Aws::String>&& value) { SetAttributesToGet(std::move(value)); return *this;}
    inline ScanRequest& AddAttributesToGet(const Aws::String& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    inline ScanRequest& AddAttributesToGet(Aws::String&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(std::move(value)); return *this; }
    inline ScanRequest& AddAttributesToGet(const char* value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ScanRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(bool value) { m_countHasBeenSet = true; m_count = value; }
    inline ScanRequest& WithCount(bool value) { SetCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Condition>& GetScanFilter() const{ return m_scanFilter; }
    inline bool ScanFilterHasBeenSet() const { return m_scanFilterHasBeenSet; }
    inline void SetScanFilter(const Aws::Map<Aws::String, Condition>& value) { m_scanFilterHasBeenSet = true; m_scanFilter = value; }
    inline void SetScanFilter(Aws::Map<Aws::String, Condition>&& value) { m_scanFilterHasBeenSet = true; m_scanFilter = std::move(value); }
    inline ScanRequest& WithScanFilter(const Aws::Map<Aws::String, Condition>& value) { SetScanFilter(value); return *this;}
    inline ScanRequest& WithScanFilter(Aws::Map<Aws::String, Condition>&& value) { SetScanFilter(std::move(value)); return *this;}
    inline ScanRequest& AddScanFilter(const Aws::String& key, const Condition& value) { m_scanFilterHasBeenSet = true; m_scanFilter.emplace(key, value); return *this; }
    inline ScanRequest& AddScanFilter(Aws::String&& key, const Condition& value) { m_scanFilterHasBeenSet = true; m_scanFilter.emplace(std::move(key), value); return *this; }
    inline ScanRequest& AddScanFilter(const Aws::String& key, Condition&& value) { m_scanFilterHasBeenSet = true; m_scanFilter.emplace(key, std::move(value)); return *this; }
    inline ScanRequest& AddScanFilter(Aws::String&& key, Condition&& value) { m_scanFilterHasBeenSet = true; m_scanFilter.emplace(std::move(key), std::move(value)); return *this; }
    inline ScanRequest& AddScanFilter(const char* key, Condition&& value) { m_scanFilterHasBeenSet = true; m_scanFilter.emplace(key, std::move(value)); return *this; }
    inline ScanRequest& AddScanFilter(const char* key, const Condition& value) { m_scanFilterHasBeenSet = true; m_scanFilter.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Key& GetExclusiveStartKey() const{ return m_exclusiveStartKey; }
    inline bool ExclusiveStartKeyHasBeenSet() const { return m_exclusiveStartKeyHasBeenSet; }
    inline void SetExclusiveStartKey(const Key& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey = value; }
    inline void SetExclusiveStartKey(Key&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey = std::move(value); }
    inline ScanRequest& WithExclusiveStartKey(const Key& value) { SetExclusiveStartKey(value); return *this;}
    inline ScanRequest& WithExclusiveStartKey(Key&& value) { SetExclusiveStartKey(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributesToGet;
    bool m_attributesToGetHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    bool m_count;
    bool m_countHasBeenSet = false;

    Aws::Map<Aws::String, Condition> m_scanFilter;
    bool m_scanFilterHasBeenSet = false;

    Key m_exclusiveStartKey;
    bool m_exclusiveStartKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
