/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/model/ConsumedCapacity.h>
#include <aws/dynamodb/model/ItemCollectionMetrics.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AttributeValue.h>

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
  /**
   * <p>Represents the output of an <i>UpdateItem</i> operation.</p>
   */
  class AWS_DYNAMODB_API UpdateItemResult
  {
  public:
    UpdateItemResult();
    UpdateItemResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateItemResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A map of attribute values as they appeared before the <i>UpdateItem</i>
     * operation. This map only appears if <i>ReturnValues</i> was specified as
     * something other than <code>NONE</code> in the request. Each element represents
     * one attribute.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of attribute values as they appeared before the <i>UpdateItem</i>
     * operation. This map only appears if <i>ReturnValues</i> was specified as
     * something other than <code>NONE</code> in the request. Each element represents
     * one attribute.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_attributes = value; }

    /**
     * <p>A map of attribute values as they appeared before the <i>UpdateItem</i>
     * operation. This map only appears if <i>ReturnValues</i> was specified as
     * something other than <code>NONE</code> in the request. Each element represents
     * one attribute.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_attributes = value; }

    /**
     * <p>A map of attribute values as they appeared before the <i>UpdateItem</i>
     * operation. This map only appears if <i>ReturnValues</i> was specified as
     * something other than <code>NONE</code> in the request. Each element represents
     * one attribute.</p>
     */
    inline UpdateItemResult& WithAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attribute values as they appeared before the <i>UpdateItem</i>
     * operation. This map only appears if <i>ReturnValues</i> was specified as
     * something other than <code>NONE</code> in the request. Each element represents
     * one attribute.</p>
     */
    inline UpdateItemResult& WithAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attribute values as they appeared before the <i>UpdateItem</i>
     * operation. This map only appears if <i>ReturnValues</i> was specified as
     * something other than <code>NONE</code> in the request. Each element represents
     * one attribute.</p>
     */
    inline UpdateItemResult& AddAttributes(const Aws::String& key, const AttributeValue& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attribute values as they appeared before the <i>UpdateItem</i>
     * operation. This map only appears if <i>ReturnValues</i> was specified as
     * something other than <code>NONE</code> in the request. Each element represents
     * one attribute.</p>
     */
    inline UpdateItemResult& AddAttributes(Aws::String&& key, const AttributeValue& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attribute values as they appeared before the <i>UpdateItem</i>
     * operation. This map only appears if <i>ReturnValues</i> was specified as
     * something other than <code>NONE</code> in the request. Each element represents
     * one attribute.</p>
     */
    inline UpdateItemResult& AddAttributes(const Aws::String& key, AttributeValue&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attribute values as they appeared before the <i>UpdateItem</i>
     * operation. This map only appears if <i>ReturnValues</i> was specified as
     * something other than <code>NONE</code> in the request. Each element represents
     * one attribute.</p>
     */
    inline UpdateItemResult& AddAttributes(Aws::String&& key, AttributeValue&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attribute values as they appeared before the <i>UpdateItem</i>
     * operation. This map only appears if <i>ReturnValues</i> was specified as
     * something other than <code>NONE</code> in the request. Each element represents
     * one attribute.</p>
     */
    inline UpdateItemResult& AddAttributes(const char* key, AttributeValue&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attribute values as they appeared before the <i>UpdateItem</i>
     * operation. This map only appears if <i>ReturnValues</i> was specified as
     * something other than <code>NONE</code> in the request. Each element represents
     * one attribute.</p>
     */
    inline UpdateItemResult& AddAttributes(const char* key, const AttributeValue& value) { m_attributes[key] = value; return *this; }

    
    inline const ConsumedCapacity& GetConsumedCapacity() const{ return m_consumedCapacity; }

    
    inline void SetConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity = value; }

    
    inline void SetConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity = value; }

    
    inline UpdateItemResult& WithConsumedCapacity(const ConsumedCapacity& value) { SetConsumedCapacity(value); return *this;}

    
    inline UpdateItemResult& WithConsumedCapacity(ConsumedCapacity&& value) { SetConsumedCapacity(value); return *this;}

    
    inline const ItemCollectionMetrics& GetItemCollectionMetrics() const{ return m_itemCollectionMetrics; }

    
    inline void SetItemCollectionMetrics(const ItemCollectionMetrics& value) { m_itemCollectionMetrics = value; }

    
    inline void SetItemCollectionMetrics(ItemCollectionMetrics&& value) { m_itemCollectionMetrics = value; }

    
    inline UpdateItemResult& WithItemCollectionMetrics(const ItemCollectionMetrics& value) { SetItemCollectionMetrics(value); return *this;}

    
    inline UpdateItemResult& WithItemCollectionMetrics(ItemCollectionMetrics&& value) { SetItemCollectionMetrics(value); return *this;}

  private:
    Aws::Map<Aws::String, AttributeValue> m_attributes;
    ConsumedCapacity m_consumedCapacity;
    ItemCollectionMetrics m_itemCollectionMetrics;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
