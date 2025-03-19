/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/PropertyValueHistory.h>
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
  class GetPropertyValueHistoryResult
  {
  public:
    AWS_IOTTWINMAKER_API GetPropertyValueHistoryResult() = default;
    AWS_IOTTWINMAKER_API GetPropertyValueHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API GetPropertyValueHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that maps strings to the property definitions in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Vector<PropertyValueHistory>& GetPropertyValues() const { return m_propertyValues; }
    template<typename PropertyValuesT = Aws::Vector<PropertyValueHistory>>
    void SetPropertyValues(PropertyValuesT&& value) { m_propertyValuesHasBeenSet = true; m_propertyValues = std::forward<PropertyValuesT>(value); }
    template<typename PropertyValuesT = Aws::Vector<PropertyValueHistory>>
    GetPropertyValueHistoryResult& WithPropertyValues(PropertyValuesT&& value) { SetPropertyValues(std::forward<PropertyValuesT>(value)); return *this;}
    template<typename PropertyValuesT = PropertyValueHistory>
    GetPropertyValueHistoryResult& AddPropertyValues(PropertyValuesT&& value) { m_propertyValuesHasBeenSet = true; m_propertyValues.emplace_back(std::forward<PropertyValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetPropertyValueHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPropertyValueHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PropertyValueHistory> m_propertyValues;
    bool m_propertyValuesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
