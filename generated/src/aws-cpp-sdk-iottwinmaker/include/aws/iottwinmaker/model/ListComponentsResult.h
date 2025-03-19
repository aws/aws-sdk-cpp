/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/ComponentSummary.h>
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
  class ListComponentsResult
  {
  public:
    AWS_IOTTWINMAKER_API ListComponentsResult() = default;
    AWS_IOTTWINMAKER_API ListComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects that contain information about the components.</p>
     */
    inline const Aws::Vector<ComponentSummary>& GetComponentSummaries() const { return m_componentSummaries; }
    template<typename ComponentSummariesT = Aws::Vector<ComponentSummary>>
    void SetComponentSummaries(ComponentSummariesT&& value) { m_componentSummariesHasBeenSet = true; m_componentSummaries = std::forward<ComponentSummariesT>(value); }
    template<typename ComponentSummariesT = Aws::Vector<ComponentSummary>>
    ListComponentsResult& WithComponentSummaries(ComponentSummariesT&& value) { SetComponentSummaries(std::forward<ComponentSummariesT>(value)); return *this;}
    template<typename ComponentSummariesT = ComponentSummary>
    ListComponentsResult& AddComponentSummaries(ComponentSummariesT&& value) { m_componentSummariesHasBeenSet = true; m_componentSummaries.emplace_back(std::forward<ComponentSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of component results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListComponentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListComponentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComponentSummary> m_componentSummaries;
    bool m_componentSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
