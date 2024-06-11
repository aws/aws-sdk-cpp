﻿/**
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
    AWS_CLOUDTRAIL_API GetEventSelectorsResult();
    AWS_CLOUDTRAIL_API GetEventSelectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GetEventSelectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The specified trail ARN that has the event selectors.</p>
     */
    inline const Aws::String& GetTrailARN() const{ return m_trailARN; }
    inline void SetTrailARN(const Aws::String& value) { m_trailARN = value; }
    inline void SetTrailARN(Aws::String&& value) { m_trailARN = std::move(value); }
    inline void SetTrailARN(const char* value) { m_trailARN.assign(value); }
    inline GetEventSelectorsResult& WithTrailARN(const Aws::String& value) { SetTrailARN(value); return *this;}
    inline GetEventSelectorsResult& WithTrailARN(Aws::String&& value) { SetTrailARN(std::move(value)); return *this;}
    inline GetEventSelectorsResult& WithTrailARN(const char* value) { SetTrailARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event selectors that are configured for the trail.</p>
     */
    inline const Aws::Vector<EventSelector>& GetEventSelectors() const{ return m_eventSelectors; }
    inline void SetEventSelectors(const Aws::Vector<EventSelector>& value) { m_eventSelectors = value; }
    inline void SetEventSelectors(Aws::Vector<EventSelector>&& value) { m_eventSelectors = std::move(value); }
    inline GetEventSelectorsResult& WithEventSelectors(const Aws::Vector<EventSelector>& value) { SetEventSelectors(value); return *this;}
    inline GetEventSelectorsResult& WithEventSelectors(Aws::Vector<EventSelector>&& value) { SetEventSelectors(std::move(value)); return *this;}
    inline GetEventSelectorsResult& AddEventSelectors(const EventSelector& value) { m_eventSelectors.push_back(value); return *this; }
    inline GetEventSelectorsResult& AddEventSelectors(EventSelector&& value) { m_eventSelectors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The advanced event selectors that are configured for the trail. </p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const{ return m_advancedEventSelectors; }
    inline void SetAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { m_advancedEventSelectors = value; }
    inline void SetAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { m_advancedEventSelectors = std::move(value); }
    inline GetEventSelectorsResult& WithAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { SetAdvancedEventSelectors(value); return *this;}
    inline GetEventSelectorsResult& WithAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { SetAdvancedEventSelectors(std::move(value)); return *this;}
    inline GetEventSelectorsResult& AddAdvancedEventSelectors(const AdvancedEventSelector& value) { m_advancedEventSelectors.push_back(value); return *this; }
    inline GetEventSelectorsResult& AddAdvancedEventSelectors(AdvancedEventSelector&& value) { m_advancedEventSelectors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEventSelectorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEventSelectorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEventSelectorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_trailARN;

    Aws::Vector<EventSelector> m_eventSelectors;

    Aws::Vector<AdvancedEventSelector> m_advancedEventSelectors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
