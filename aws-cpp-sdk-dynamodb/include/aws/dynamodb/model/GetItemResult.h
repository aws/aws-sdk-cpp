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
   * <p>Represents the output of a <i>GetItem</i> operation.</p>
   */
  class AWS_DYNAMODB_API GetItemResult
  {
  public:
    GetItemResult();
    GetItemResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetItemResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, as specified by
     * <i>AttributesToGet</i>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const{ return m_item; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, as specified by
     * <i>AttributesToGet</i>.</p>
     */
    inline void SetItem(const Aws::Map<Aws::String, AttributeValue>& value) { m_item = value; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, as specified by
     * <i>AttributesToGet</i>.</p>
     */
    inline void SetItem(Aws::Map<Aws::String, AttributeValue>&& value) { m_item = value; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, as specified by
     * <i>AttributesToGet</i>.</p>
     */
    inline GetItemResult& WithItem(const Aws::Map<Aws::String, AttributeValue>& value) { SetItem(value); return *this;}

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, as specified by
     * <i>AttributesToGet</i>.</p>
     */
    inline GetItemResult& WithItem(Aws::Map<Aws::String, AttributeValue>&& value) { SetItem(value); return *this;}

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, as specified by
     * <i>AttributesToGet</i>.</p>
     */
    inline GetItemResult& AddItem(const Aws::String& key, const AttributeValue& value) { m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, as specified by
     * <i>AttributesToGet</i>.</p>
     */
    inline GetItemResult& AddItem(Aws::String&& key, const AttributeValue& value) { m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, as specified by
     * <i>AttributesToGet</i>.</p>
     */
    inline GetItemResult& AddItem(const Aws::String& key, AttributeValue&& value) { m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, as specified by
     * <i>AttributesToGet</i>.</p>
     */
    inline GetItemResult& AddItem(Aws::String&& key, AttributeValue&& value) { m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, as specified by
     * <i>AttributesToGet</i>.</p>
     */
    inline GetItemResult& AddItem(const char* key, AttributeValue&& value) { m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, as specified by
     * <i>AttributesToGet</i>.</p>
     */
    inline GetItemResult& AddItem(const char* key, const AttributeValue& value) { m_item[key] = value; return *this; }

    
    inline const ConsumedCapacity& GetConsumedCapacity() const{ return m_consumedCapacity; }

    
    inline void SetConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity = value; }

    
    inline void SetConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity = value; }

    
    inline GetItemResult& WithConsumedCapacity(const ConsumedCapacity& value) { SetConsumedCapacity(value); return *this;}

    
    inline GetItemResult& WithConsumedCapacity(ConsumedCapacity&& value) { SetConsumedCapacity(value); return *this;}

  private:
    Aws::Map<Aws::String, AttributeValue> m_item;
    ConsumedCapacity m_consumedCapacity;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
