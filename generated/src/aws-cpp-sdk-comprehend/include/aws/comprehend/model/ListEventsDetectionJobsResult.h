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
    AWS_COMPREHEND_API ListEventsDetectionJobsResult();
    AWS_COMPREHEND_API ListEventsDetectionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListEventsDetectionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<EventsDetectionJobProperties>& GetEventsDetectionJobPropertiesList() const{ return m_eventsDetectionJobPropertiesList; }
    inline void SetEventsDetectionJobPropertiesList(const Aws::Vector<EventsDetectionJobProperties>& value) { m_eventsDetectionJobPropertiesList = value; }
    inline void SetEventsDetectionJobPropertiesList(Aws::Vector<EventsDetectionJobProperties>&& value) { m_eventsDetectionJobPropertiesList = std::move(value); }
    inline ListEventsDetectionJobsResult& WithEventsDetectionJobPropertiesList(const Aws::Vector<EventsDetectionJobProperties>& value) { SetEventsDetectionJobPropertiesList(value); return *this;}
    inline ListEventsDetectionJobsResult& WithEventsDetectionJobPropertiesList(Aws::Vector<EventsDetectionJobProperties>&& value) { SetEventsDetectionJobPropertiesList(std::move(value)); return *this;}
    inline ListEventsDetectionJobsResult& AddEventsDetectionJobPropertiesList(const EventsDetectionJobProperties& value) { m_eventsDetectionJobPropertiesList.push_back(value); return *this; }
    inline ListEventsDetectionJobsResult& AddEventsDetectionJobPropertiesList(EventsDetectionJobProperties&& value) { m_eventsDetectionJobPropertiesList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEventsDetectionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEventsDetectionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEventsDetectionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEventsDetectionJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEventsDetectionJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEventsDetectionJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EventsDetectionJobProperties> m_eventsDetectionJobPropertiesList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
