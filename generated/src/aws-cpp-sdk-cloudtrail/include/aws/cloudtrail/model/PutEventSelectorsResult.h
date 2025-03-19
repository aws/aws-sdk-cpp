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
  class PutEventSelectorsResult
  {
  public:
    AWS_CLOUDTRAIL_API PutEventSelectorsResult() = default;
    AWS_CLOUDTRAIL_API PutEventSelectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API PutEventSelectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * following is the format of a trail ARN.</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline const Aws::String& GetTrailARN() const { return m_trailARN; }
    template<typename TrailARNT = Aws::String>
    void SetTrailARN(TrailARNT&& value) { m_trailARNHasBeenSet = true; m_trailARN = std::forward<TrailARNT>(value); }
    template<typename TrailARNT = Aws::String>
    PutEventSelectorsResult& WithTrailARN(TrailARNT&& value) { SetTrailARN(std::forward<TrailARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the event selectors configured for your trail.</p>
     */
    inline const Aws::Vector<EventSelector>& GetEventSelectors() const { return m_eventSelectors; }
    template<typename EventSelectorsT = Aws::Vector<EventSelector>>
    void SetEventSelectors(EventSelectorsT&& value) { m_eventSelectorsHasBeenSet = true; m_eventSelectors = std::forward<EventSelectorsT>(value); }
    template<typename EventSelectorsT = Aws::Vector<EventSelector>>
    PutEventSelectorsResult& WithEventSelectors(EventSelectorsT&& value) { SetEventSelectors(std::forward<EventSelectorsT>(value)); return *this;}
    template<typename EventSelectorsT = EventSelector>
    PutEventSelectorsResult& AddEventSelectors(EventSelectorsT&& value) { m_eventSelectorsHasBeenSet = true; m_eventSelectors.emplace_back(std::forward<EventSelectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the advanced event selectors configured for your trail.</p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const { return m_advancedEventSelectors; }
    template<typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
    void SetAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = std::forward<AdvancedEventSelectorsT>(value); }
    template<typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
    PutEventSelectorsResult& WithAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { SetAdvancedEventSelectors(std::forward<AdvancedEventSelectorsT>(value)); return *this;}
    template<typename AdvancedEventSelectorsT = AdvancedEventSelector>
    PutEventSelectorsResult& AddAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.emplace_back(std::forward<AdvancedEventSelectorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutEventSelectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
