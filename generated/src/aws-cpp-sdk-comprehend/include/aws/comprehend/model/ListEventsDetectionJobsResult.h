﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/EventsDetectionJobProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class ListEventsDetectionJobsResult
  {
  public:
    AWS_COMPREHEND_API ListEventsDetectionJobsResult() = default;
    AWS_COMPREHEND_API ListEventsDetectionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListEventsDetectionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<EventsDetectionJobProperties>& GetEventsDetectionJobPropertiesList() const { return m_eventsDetectionJobPropertiesList; }
    template<typename EventsDetectionJobPropertiesListT = Aws::Vector<EventsDetectionJobProperties>>
    void SetEventsDetectionJobPropertiesList(EventsDetectionJobPropertiesListT&& value) { m_eventsDetectionJobPropertiesListHasBeenSet = true; m_eventsDetectionJobPropertiesList = std::forward<EventsDetectionJobPropertiesListT>(value); }
    template<typename EventsDetectionJobPropertiesListT = Aws::Vector<EventsDetectionJobProperties>>
    ListEventsDetectionJobsResult& WithEventsDetectionJobPropertiesList(EventsDetectionJobPropertiesListT&& value) { SetEventsDetectionJobPropertiesList(std::forward<EventsDetectionJobPropertiesListT>(value)); return *this;}
    template<typename EventsDetectionJobPropertiesListT = EventsDetectionJobProperties>
    ListEventsDetectionJobsResult& AddEventsDetectionJobPropertiesList(EventsDetectionJobPropertiesListT&& value) { m_eventsDetectionJobPropertiesListHasBeenSet = true; m_eventsDetectionJobPropertiesList.emplace_back(std::forward<EventsDetectionJobPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEventsDetectionJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventsDetectionJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventsDetectionJobProperties> m_eventsDetectionJobPropertiesList;
    bool m_eventsDetectionJobPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
