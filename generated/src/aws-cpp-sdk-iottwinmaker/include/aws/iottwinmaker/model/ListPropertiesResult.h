/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/PropertySummary.h>
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
  class ListPropertiesResult
  {
  public:
    AWS_IOTTWINMAKER_API ListPropertiesResult() = default;
    AWS_IOTTWINMAKER_API ListPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects that contain information about the properties.</p>
     */
    inline const Aws::Vector<PropertySummary>& GetPropertySummaries() const { return m_propertySummaries; }
    template<typename PropertySummariesT = Aws::Vector<PropertySummary>>
    void SetPropertySummaries(PropertySummariesT&& value) { m_propertySummariesHasBeenSet = true; m_propertySummaries = std::forward<PropertySummariesT>(value); }
    template<typename PropertySummariesT = Aws::Vector<PropertySummary>>
    ListPropertiesResult& WithPropertySummaries(PropertySummariesT&& value) { SetPropertySummaries(std::forward<PropertySummariesT>(value)); return *this;}
    template<typename PropertySummariesT = PropertySummary>
    ListPropertiesResult& AddPropertySummaries(PropertySummariesT&& value) { m_propertySummariesHasBeenSet = true; m_propertySummaries.emplace_back(std::forward<PropertySummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of property results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPropertiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPropertiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PropertySummary> m_propertySummaries;
    bool m_propertySummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
