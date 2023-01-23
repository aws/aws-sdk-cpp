/**
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


    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<EventsDetectionJobProperties>& GetEventsDetectionJobPropertiesList() const{ return m_eventsDetectionJobPropertiesList; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline void SetEventsDetectionJobPropertiesList(const Aws::Vector<EventsDetectionJobProperties>& value) { m_eventsDetectionJobPropertiesList = value; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline void SetEventsDetectionJobPropertiesList(Aws::Vector<EventsDetectionJobProperties>&& value) { m_eventsDetectionJobPropertiesList = std::move(value); }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListEventsDetectionJobsResult& WithEventsDetectionJobPropertiesList(const Aws::Vector<EventsDetectionJobProperties>& value) { SetEventsDetectionJobPropertiesList(value); return *this;}

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListEventsDetectionJobsResult& WithEventsDetectionJobPropertiesList(Aws::Vector<EventsDetectionJobProperties>&& value) { SetEventsDetectionJobPropertiesList(std::move(value)); return *this;}

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListEventsDetectionJobsResult& AddEventsDetectionJobPropertiesList(const EventsDetectionJobProperties& value) { m_eventsDetectionJobPropertiesList.push_back(value); return *this; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListEventsDetectionJobsResult& AddEventsDetectionJobPropertiesList(EventsDetectionJobProperties&& value) { m_eventsDetectionJobPropertiesList.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEventsDetectionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEventsDetectionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEventsDetectionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EventsDetectionJobProperties> m_eventsDetectionJobPropertiesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
