/**
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


    /**
     * <p>An object that maps strings to the properties and latest property values in
     * the response. Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, PropertyLatestValue>& GetPropertyValues() const{ return m_propertyValues; }

    /**
     * <p>An object that maps strings to the properties and latest property values in
     * the response. Each string in the mapping must be unique to this object.</p>
     */
    inline void SetPropertyValues(const Aws::Map<Aws::String, PropertyLatestValue>& value) { m_propertyValues = value; }

    /**
     * <p>An object that maps strings to the properties and latest property values in
     * the response. Each string in the mapping must be unique to this object.</p>
     */
    inline void SetPropertyValues(Aws::Map<Aws::String, PropertyLatestValue>&& value) { m_propertyValues = std::move(value); }

    /**
     * <p>An object that maps strings to the properties and latest property values in
     * the response. Each string in the mapping must be unique to this object.</p>
     */
    inline GetPropertyValueResult& WithPropertyValues(const Aws::Map<Aws::String, PropertyLatestValue>& value) { SetPropertyValues(value); return *this;}

    /**
     * <p>An object that maps strings to the properties and latest property values in
     * the response. Each string in the mapping must be unique to this object.</p>
     */
    inline GetPropertyValueResult& WithPropertyValues(Aws::Map<Aws::String, PropertyLatestValue>&& value) { SetPropertyValues(std::move(value)); return *this;}

    /**
     * <p>An object that maps strings to the properties and latest property values in
     * the response. Each string in the mapping must be unique to this object.</p>
     */
    inline GetPropertyValueResult& AddPropertyValues(const Aws::String& key, const PropertyLatestValue& value) { m_propertyValues.emplace(key, value); return *this; }

    /**
     * <p>An object that maps strings to the properties and latest property values in
     * the response. Each string in the mapping must be unique to this object.</p>
     */
    inline GetPropertyValueResult& AddPropertyValues(Aws::String&& key, const PropertyLatestValue& value) { m_propertyValues.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that maps strings to the properties and latest property values in
     * the response. Each string in the mapping must be unique to this object.</p>
     */
    inline GetPropertyValueResult& AddPropertyValues(const Aws::String& key, PropertyLatestValue&& value) { m_propertyValues.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the properties and latest property values in
     * the response. Each string in the mapping must be unique to this object.</p>
     */
    inline GetPropertyValueResult& AddPropertyValues(Aws::String&& key, PropertyLatestValue&& value) { m_propertyValues.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the properties and latest property values in
     * the response. Each string in the mapping must be unique to this object.</p>
     */
    inline GetPropertyValueResult& AddPropertyValues(const char* key, PropertyLatestValue&& value) { m_propertyValues.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the properties and latest property values in
     * the response. Each string in the mapping must be unique to this object.</p>
     */
    inline GetPropertyValueResult& AddPropertyValues(const char* key, const PropertyLatestValue& value) { m_propertyValues.emplace(key, value); return *this; }


    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline GetPropertyValueResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline GetPropertyValueResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline GetPropertyValueResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A table of property values.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>>& GetTabularPropertyValues() const{ return m_tabularPropertyValues; }

    /**
     * <p>A table of property values.</p>
     */
    inline void SetTabularPropertyValues(const Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>>& value) { m_tabularPropertyValues = value; }

    /**
     * <p>A table of property values.</p>
     */
    inline void SetTabularPropertyValues(Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>>&& value) { m_tabularPropertyValues = std::move(value); }

    /**
     * <p>A table of property values.</p>
     */
    inline GetPropertyValueResult& WithTabularPropertyValues(const Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>>& value) { SetTabularPropertyValues(value); return *this;}

    /**
     * <p>A table of property values.</p>
     */
    inline GetPropertyValueResult& WithTabularPropertyValues(Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>>&& value) { SetTabularPropertyValues(std::move(value)); return *this;}

    /**
     * <p>A table of property values.</p>
     */
    inline GetPropertyValueResult& AddTabularPropertyValues(const Aws::Vector<Aws::Map<Aws::String, DataValue>>& value) { m_tabularPropertyValues.push_back(value); return *this; }

    /**
     * <p>A table of property values.</p>
     */
    inline GetPropertyValueResult& AddTabularPropertyValues(Aws::Vector<Aws::Map<Aws::String, DataValue>>&& value) { m_tabularPropertyValues.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Aws::String, PropertyLatestValue> m_propertyValues;

    Aws::String m_nextToken;

    Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>> m_tabularPropertyValues;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
