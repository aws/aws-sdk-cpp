/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/Key.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class ScanResult
  {
  public:
    AWS_DYNAMODB_API ScanResult();
    AWS_DYNAMODB_API ScanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ScanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { m_items = std::move(value); }
    inline ScanResult& WithItems(const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { SetItems(value); return *this;}
    inline ScanResult& WithItems(Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { SetItems(std::move(value)); return *this;}
    inline ScanResult& AddItems(const Aws::Map<Aws::String, AttributeValue>& value) { m_items.push_back(value); return *this; }
    inline ScanResult& AddItems(Aws::Map<Aws::String, AttributeValue>&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline int GetCount() const{ return m_count; }
    inline void SetCount(int value) { m_count = value; }
    inline ScanResult& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    
    inline int GetScannedCount() const{ return m_scannedCount; }
    inline void SetScannedCount(int value) { m_scannedCount = value; }
    inline ScanResult& WithScannedCount(int value) { SetScannedCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Key& GetLastEvaluatedKey() const{ return m_lastEvaluatedKey; }
    inline void SetLastEvaluatedKey(const Key& value) { m_lastEvaluatedKey = value; }
    inline void SetLastEvaluatedKey(Key&& value) { m_lastEvaluatedKey = std::move(value); }
    inline ScanResult& WithLastEvaluatedKey(const Key& value) { SetLastEvaluatedKey(value); return *this;}
    inline ScanResult& WithLastEvaluatedKey(Key&& value) { SetLastEvaluatedKey(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline double GetConsumedCapacityUnits() const{ return m_consumedCapacityUnits; }
    inline void SetConsumedCapacityUnits(double value) { m_consumedCapacityUnits = value; }
    inline ScanResult& WithConsumedCapacityUnits(double value) { SetConsumedCapacityUnits(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ScanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ScanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ScanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Map<Aws::String, AttributeValue>> m_items;

    int m_count;

    int m_scannedCount;

    Key m_lastEvaluatedKey;

    double m_consumedCapacityUnits;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
