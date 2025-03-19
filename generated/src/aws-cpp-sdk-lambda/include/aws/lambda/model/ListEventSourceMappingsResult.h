/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/EventSourceMappingConfiguration.h>
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
namespace Lambda
{
namespace Model
{
  class ListEventSourceMappingsResult
  {
  public:
    AWS_LAMBDA_API ListEventSourceMappingsResult() = default;
    AWS_LAMBDA_API ListEventSourceMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API ListEventSourceMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token that's returned when the response doesn't contain all
     * event source mappings.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListEventSourceMappingsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of event source mappings.</p>
     */
    inline const Aws::Vector<EventSourceMappingConfiguration>& GetEventSourceMappings() const { return m_eventSourceMappings; }
    template<typename EventSourceMappingsT = Aws::Vector<EventSourceMappingConfiguration>>
    void SetEventSourceMappings(EventSourceMappingsT&& value) { m_eventSourceMappingsHasBeenSet = true; m_eventSourceMappings = std::forward<EventSourceMappingsT>(value); }
    template<typename EventSourceMappingsT = Aws::Vector<EventSourceMappingConfiguration>>
    ListEventSourceMappingsResult& WithEventSourceMappings(EventSourceMappingsT&& value) { SetEventSourceMappings(std::forward<EventSourceMappingsT>(value)); return *this;}
    template<typename EventSourceMappingsT = EventSourceMappingConfiguration>
    ListEventSourceMappingsResult& AddEventSourceMappings(EventSourceMappingsT&& value) { m_eventSourceMappingsHasBeenSet = true; m_eventSourceMappings.emplace_back(std::forward<EventSourceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventSourceMappingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<EventSourceMappingConfiguration> m_eventSourceMappings;
    bool m_eventSourceMappingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
