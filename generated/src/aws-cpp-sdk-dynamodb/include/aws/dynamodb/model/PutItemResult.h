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
  class PutItemResult
  {
  public:
    AWS_DYNAMODB_API PutItemResult();
    AWS_DYNAMODB_API PutItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API PutItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Map<Aws::String, AttributeValue>& GetAttributes() const{ return m_attributes; }
    inline void SetAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_attributes = std::move(value); }
    inline PutItemResult& WithAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetAttributes(value); return *this;}
    inline PutItemResult& WithAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetAttributes(std::move(value)); return *this;}
    inline PutItemResult& AddAttributes(const Aws::String& key, const AttributeValue& value) { m_attributes.emplace(key, value); return *this; }
    inline PutItemResult& AddAttributes(Aws::String&& key, const AttributeValue& value) { m_attributes.emplace(std::move(key), value); return *this; }
    inline PutItemResult& AddAttributes(const Aws::String& key, AttributeValue&& value) { m_attributes.emplace(key, std::move(value)); return *this; }
    inline PutItemResult& AddAttributes(Aws::String&& key, AttributeValue&& value) { m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline PutItemResult& AddAttributes(const char* key, AttributeValue&& value) { m_attributes.emplace(key, std::move(value)); return *this; }
    inline PutItemResult& AddAttributes(const char* key, const AttributeValue& value) { m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline double GetConsumedCapacityUnits() const{ return m_consumedCapacityUnits; }
    inline void SetConsumedCapacityUnits(double value) { m_consumedCapacityUnits = value; }
    inline PutItemResult& WithConsumedCapacityUnits(double value) { SetConsumedCapacityUnits(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, AttributeValue> m_attributes;

    double m_consumedCapacityUnits;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
