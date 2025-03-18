/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/EventSelector.h>
#include <aws/cloudtrail/model/AdvancedEventSelector.h>
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
namespace CloudTrail
{
namespace Model
{
  class GetEventSelectorsResult
  {
  public:
    AWS_CLOUDTRAIL_API GetEventSelectorsResult() = default;
    AWS_CLOUDTRAIL_API GetEventSelectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GetEventSelectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The specified trail ARN that has the event selectors.</p>
     */
    inline const Aws::String& GetTrailARN() const { return m_trailARN; }
    template<typename TrailARNT = Aws::String>
    void SetTrailARN(TrailARNT&& value) { m_trailARNHasBeenSet = true; m_trailARN = std::forward<TrailARNT>(value); }
    template<typename TrailARNT = Aws::String>
    GetEventSelectorsResult& WithTrailARN(TrailARNT&& value) { SetTrailARN(std::forward<TrailARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event selectors that are configured for the trail.</p>
     */
    inline const Aws::Vector<EventSelector>& GetEventSelectors() const { return m_eventSelectors; }
    template<typename EventSelectorsT = Aws::Vector<EventSelector>>
    void SetEventSelectors(EventSelectorsT&& value) { m_eventSelectorsHasBeenSet = true; m_eventSelectors = std::forward<EventSelectorsT>(value); }
    template<typename EventSelectorsT = Aws::Vector<EventSelector>>
    GetEventSelectorsResult& WithEventSelectors(EventSelectorsT&& value) { SetEventSelectors(std::forward<EventSelectorsT>(value)); return *this;}
    template<typename EventSelectorsT = EventSelector>
    GetEventSelectorsResult& AddEventSelectors(EventSelectorsT&& value) { m_eventSelectorsHasBeenSet = true; m_eventSelectors.emplace_back(std::forward<EventSelectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The advanced event selectors that are configured for the trail. </p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const { return m_advancedEventSelectors; }
    template<typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
    void SetAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = std::forward<AdvancedEventSelectorsT>(value); }
    template<typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
    GetEventSelectorsResult& WithAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { SetAdvancedEventSelectors(std::forward<AdvancedEventSelectorsT>(value)); return *this;}
    template<typename AdvancedEventSelectorsT = AdvancedEventSelector>
    GetEventSelectorsResult& AddAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.emplace_back(std::forward<AdvancedEventSelectorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEventSelectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trailARN;
    bool m_trailARNHasBeenSet = false;

    Aws::Vector<EventSelector> m_eventSelectors;
    bool m_eventSelectorsHasBeenSet = false;

    Aws::Vector<AdvancedEventSelector> m_advancedEventSelectors;
    bool m_advancedEventSelectorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
