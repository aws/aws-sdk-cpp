/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AttributeValue.h>
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
  class GetItemResult
  {
  public:
    AWS_DYNAMODB_API GetItemResult();
    AWS_DYNAMODB_API GetItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API GetItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const{ return m_item; }
    inline void SetItem(const Aws::Map<Aws::String, AttributeValue>& value) { m_item = value; }
    inline void SetItem(Aws::Map<Aws::String, AttributeValue>&& value) { m_item = std::move(value); }
    inline GetItemResult& WithItem(const Aws::Map<Aws::String, AttributeValue>& value) { SetItem(value); return *this;}
    inline GetItemResult& WithItem(Aws::Map<Aws::String, AttributeValue>&& value) { SetItem(std::move(value)); return *this;}
    inline GetItemResult& AddItem(const Aws::String& key, const AttributeValue& value) { m_item.emplace(key, value); return *this; }
    inline GetItemResult& AddItem(Aws::String&& key, const AttributeValue& value) { m_item.emplace(std::move(key), value); return *this; }
    inline GetItemResult& AddItem(const Aws::String& key, AttributeValue&& value) { m_item.emplace(key, std::move(value)); return *this; }
    inline GetItemResult& AddItem(Aws::String&& key, AttributeValue&& value) { m_item.emplace(std::move(key), std::move(value)); return *this; }
    inline GetItemResult& AddItem(const char* key, AttributeValue&& value) { m_item.emplace(key, std::move(value)); return *this; }
    inline GetItemResult& AddItem(const char* key, const AttributeValue& value) { m_item.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline double GetConsumedCapacityUnits() const{ return m_consumedCapacityUnits; }
    inline void SetConsumedCapacityUnits(double value) { m_consumedCapacityUnits = value; }
    inline GetItemResult& WithConsumedCapacityUnits(double value) { SetConsumedCapacityUnits(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, AttributeValue> m_item;

    double m_consumedCapacityUnits;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
