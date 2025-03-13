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
    AWS_IOTTWINMAKER_API GetPropertyValueResult() = default;
    AWS_IOTTWINMAKER_API GetPropertyValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API GetPropertyValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that maps strings to the properties and latest property values in
     * the response. Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, PropertyLatestValue>& GetPropertyValues() const { return m_propertyValues; }
    template<typename PropertyValuesT = Aws::Map<Aws::String, PropertyLatestValue>>
    void SetPropertyValues(PropertyValuesT&& value) { m_propertyValuesHasBeenSet = true; m_propertyValues = std::forward<PropertyValuesT>(value); }
    template<typename PropertyValuesT = Aws::Map<Aws::String, PropertyLatestValue>>
    GetPropertyValueResult& WithPropertyValues(PropertyValuesT&& value) { SetPropertyValues(std::forward<PropertyValuesT>(value)); return *this;}
    template<typename PropertyValuesKeyT = Aws::String, typename PropertyValuesValueT = PropertyLatestValue>
    GetPropertyValueResult& AddPropertyValues(PropertyValuesKeyT&& key, PropertyValuesValueT&& value) {
      m_propertyValuesHasBeenSet = true; m_propertyValues.emplace(std::forward<PropertyValuesKeyT>(key), std::forward<PropertyValuesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetPropertyValueResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A table of property values.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>>& GetTabularPropertyValues() const { return m_tabularPropertyValues; }
    template<typename TabularPropertyValuesT = Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>>>
    void SetTabularPropertyValues(TabularPropertyValuesT&& value) { m_tabularPropertyValuesHasBeenSet = true; m_tabularPropertyValues = std::forward<TabularPropertyValuesT>(value); }
    template<typename TabularPropertyValuesT = Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>>>
    GetPropertyValueResult& WithTabularPropertyValues(TabularPropertyValuesT&& value) { SetTabularPropertyValues(std::forward<TabularPropertyValuesT>(value)); return *this;}
    template<typename TabularPropertyValuesT = Aws::Vector<Aws::Map<Aws::String, DataValue>>>
    GetPropertyValueResult& AddTabularPropertyValues(TabularPropertyValuesT&& value) { m_tabularPropertyValuesHasBeenSet = true; m_tabularPropertyValues.emplace_back(std::forward<TabularPropertyValuesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPropertyValueResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, PropertyLatestValue> m_propertyValues;
    bool m_propertyValuesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::Map<Aws::String, DataValue>>> m_tabularPropertyValues;
    bool m_tabularPropertyValuesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
