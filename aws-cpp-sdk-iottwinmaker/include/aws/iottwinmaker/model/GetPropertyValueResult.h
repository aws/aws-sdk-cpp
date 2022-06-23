/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/PropertyLatestValue.h>
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
  class AWS_IOTTWINMAKER_API GetPropertyValueResult
  {
  public:
    GetPropertyValueResult();
    GetPropertyValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPropertyValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::Map<Aws::String, PropertyLatestValue> m_propertyValues;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
