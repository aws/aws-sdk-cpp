/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/LogEvent.h>
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
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API GetRelationalDatabaseLogEventsResult
  {
  public:
    GetRelationalDatabaseLogEventsResult();
    GetRelationalDatabaseLogEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRelationalDatabaseLogEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object describing the result of your get relational database log events
     * request.</p>
     */
    inline const Aws::Vector<LogEvent>& GetResourceLogEvents() const{ return m_resourceLogEvents; }

    /**
     * <p>An object describing the result of your get relational database log events
     * request.</p>
     */
    inline void SetResourceLogEvents(const Aws::Vector<LogEvent>& value) { m_resourceLogEvents = value; }

    /**
     * <p>An object describing the result of your get relational database log events
     * request.</p>
     */
    inline void SetResourceLogEvents(Aws::Vector<LogEvent>&& value) { m_resourceLogEvents = std::move(value); }

    /**
     * <p>An object describing the result of your get relational database log events
     * request.</p>
     */
    inline GetRelationalDatabaseLogEventsResult& WithResourceLogEvents(const Aws::Vector<LogEvent>& value) { SetResourceLogEvents(value); return *this;}

    /**
     * <p>An object describing the result of your get relational database log events
     * request.</p>
     */
    inline GetRelationalDatabaseLogEventsResult& WithResourceLogEvents(Aws::Vector<LogEvent>&& value) { SetResourceLogEvents(std::move(value)); return *this;}

    /**
     * <p>An object describing the result of your get relational database log events
     * request.</p>
     */
    inline GetRelationalDatabaseLogEventsResult& AddResourceLogEvents(const LogEvent& value) { m_resourceLogEvents.push_back(value); return *this; }

    /**
     * <p>An object describing the result of your get relational database log events
     * request.</p>
     */
    inline GetRelationalDatabaseLogEventsResult& AddResourceLogEvents(LogEvent&& value) { m_resourceLogEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for advancing to the previous page of results from your get
     * relational database log events request.</p>
     */
    inline const Aws::String& GetNextBackwardToken() const{ return m_nextBackwardToken; }

    /**
     * <p>A token used for advancing to the previous page of results from your get
     * relational database log events request.</p>
     */
    inline void SetNextBackwardToken(const Aws::String& value) { m_nextBackwardToken = value; }

    /**
     * <p>A token used for advancing to the previous page of results from your get
     * relational database log events request.</p>
     */
    inline void SetNextBackwardToken(Aws::String&& value) { m_nextBackwardToken = std::move(value); }

    /**
     * <p>A token used for advancing to the previous page of results from your get
     * relational database log events request.</p>
     */
    inline void SetNextBackwardToken(const char* value) { m_nextBackwardToken.assign(value); }

    /**
     * <p>A token used for advancing to the previous page of results from your get
     * relational database log events request.</p>
     */
    inline GetRelationalDatabaseLogEventsResult& WithNextBackwardToken(const Aws::String& value) { SetNextBackwardToken(value); return *this;}

    /**
     * <p>A token used for advancing to the previous page of results from your get
     * relational database log events request.</p>
     */
    inline GetRelationalDatabaseLogEventsResult& WithNextBackwardToken(Aws::String&& value) { SetNextBackwardToken(std::move(value)); return *this;}

    /**
     * <p>A token used for advancing to the previous page of results from your get
     * relational database log events request.</p>
     */
    inline GetRelationalDatabaseLogEventsResult& WithNextBackwardToken(const char* value) { SetNextBackwardToken(value); return *this;}


    /**
     * <p>A token used for advancing to the next page of results from your get
     * relational database log events request.</p>
     */
    inline const Aws::String& GetNextForwardToken() const{ return m_nextForwardToken; }

    /**
     * <p>A token used for advancing to the next page of results from your get
     * relational database log events request.</p>
     */
    inline void SetNextForwardToken(const Aws::String& value) { m_nextForwardToken = value; }

    /**
     * <p>A token used for advancing to the next page of results from your get
     * relational database log events request.</p>
     */
    inline void SetNextForwardToken(Aws::String&& value) { m_nextForwardToken = std::move(value); }

    /**
     * <p>A token used for advancing to the next page of results from your get
     * relational database log events request.</p>
     */
    inline void SetNextForwardToken(const char* value) { m_nextForwardToken.assign(value); }

    /**
     * <p>A token used for advancing to the next page of results from your get
     * relational database log events request.</p>
     */
    inline GetRelationalDatabaseLogEventsResult& WithNextForwardToken(const Aws::String& value) { SetNextForwardToken(value); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your get
     * relational database log events request.</p>
     */
    inline GetRelationalDatabaseLogEventsResult& WithNextForwardToken(Aws::String&& value) { SetNextForwardToken(std::move(value)); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your get
     * relational database log events request.</p>
     */
    inline GetRelationalDatabaseLogEventsResult& WithNextForwardToken(const char* value) { SetNextForwardToken(value); return *this;}

  private:

    Aws::Vector<LogEvent> m_resourceLogEvents;

    Aws::String m_nextBackwardToken;

    Aws::String m_nextForwardToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
