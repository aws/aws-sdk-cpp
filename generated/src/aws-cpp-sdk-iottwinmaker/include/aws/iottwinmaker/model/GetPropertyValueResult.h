﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/PropertyLatestValue.h>
#include <aws/iottwinmaker/model/DataValue.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class GetPropertyValueResult
  {
  public:
    AWS_IOTTWINMAKER_API GetPropertyValueResult();
    AWS_IOTTWINMAKER_API GetPropertyValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API GetPropertyValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that maps strings to the properties and latest property values in
     * the response. Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, PropertyLatestValue>& GetPropertyValues() const{ return m_propertyValues; }
    inline void SetPropertyValues(const Aws::Map<Aws::String, PropertyLatestValue>& value) { m_propertyValues = value; }
    inline void SetPropertyValues(Aws::Map<Aws::String, PropertyLatestValue>&& value) { m_propertyValues = std::move(value); }
    inline GetPropertyValueResult& WithPropertyValues(const Aws::Map<Aws::String, PropertyLatestValue>& value) { SetPropertyValues(value); return *this;}
    inline GetPropertyValueResult& WithPropertyValues(Aws::Map<Aws::String, PropertyLatestValue>&& value) { SetPropertyValues(std::move(value)); return *this;}
    inline GetPropertyValueResult& AddPropertyValues(const Aws::String& key, const PropertyLatestValue& value) { m_propertyValues.emplace(key, value); return *this; }
    inline GetPropertyValueResult& AddPropertyValues(Aws::String&& key, const PropertyLatestValue& value) { m_propertyValues.emplace(std::move(key), value); return *this; }
    inline GetPropertyValueResult& AddPropertyValues(const Aws::String& key, PropertyLatestValue&& value) { m_propertyValues.emplace(key, std::move(value)); return *this; }
    inline GetPropertyValueResult& AddPropertyValues(Aws::String&& key, PropertyLatestValue&& value) { m_propertyValues.emplace(std::move(key), std::move(value)); return *this; }
    inline GetPropertyValueResult& AddPropertyValues(const char* key, PropertyLatestValue&& value) { m_propertyValues.emplace(key, std::move(value)); return *this; }
    inline GetPropertyValueResult& AddPropertyValues(const char* key, const PropertyLatestValue& value) { m_propertyValues.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetPropertyValueResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetPropertyValueResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetPropertyValueResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A table of property values.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>>& GetTabularPropertyValues() const{ return m_tabularPropertyValues; }
    inline void SetTabularPropertyValues(const Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>>& value) { m_tabularPropertyValues = value; }
    inline void SetTabularPropertyValues(Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>>&& value) { m_tabularPropertyValues = std::move(value); }
    inline GetPropertyValueResult& WithTabularPropertyValues(const Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>>& value) { SetTabularPropertyValues(value); return *this;}
    inline GetPropertyValueResult& WithTabularPropertyValues(Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>>&& value) { SetTabularPropertyValues(std::move(value)); return *this;}
    inline GetPropertyValueResult& AddTabularPropertyValues(const Aws::Vector<Aws::Map<Aws::String, DataValue>>& value) { m_tabularPropertyValues.push_back(value); return *this; }
    inline GetPropertyValueResult& AddTabularPropertyValues(Aws::Vector<Aws::Map<Aws::String, DataValue>>&& value) { m_tabularPropertyValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPropertyValueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPropertyValueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPropertyValueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, PropertyLatestValue> m_propertyValues;

    Aws::String m_nextToken;

    Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>> m_tabularPropertyValues;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
