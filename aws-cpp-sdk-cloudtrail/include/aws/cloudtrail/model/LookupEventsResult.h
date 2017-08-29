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
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/Event.h>
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
  /**
   * <p>Contains a response to a LookupEvents action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/LookupEventsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API LookupEventsResult
  {
  public:
    LookupEventsResult();
    LookupEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    LookupEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of events returned based on the lookup attributes specified and the
     * CloudTrail event. The events list is sorted by time. The most recent event is
     * listed first.</p>
     */
    inline const Aws::Vector<Event>& GetEvents() const{ return m_events; }

    /**
     * <p>A list of events returned based on the lookup attributes specified and the
     * CloudTrail event. The events list is sorted by time. The most recent event is
     * listed first.</p>
     */
    inline void SetEvents(const Aws::Vector<Event>& value) { m_events = value; }

    /**
     * <p>A list of events returned based on the lookup attributes specified and the
     * CloudTrail event. The events list is sorted by time. The most recent event is
     * listed first.</p>
     */
    inline void SetEvents(Aws::Vector<Event>&& value) { m_events = std::move(value); }

    /**
     * <p>A list of events returned based on the lookup attributes specified and the
     * CloudTrail event. The events list is sorted by time. The most recent event is
     * listed first.</p>
     */
    inline LookupEventsResult& WithEvents(const Aws::Vector<Event>& value) { SetEvents(value); return *this;}

    /**
     * <p>A list of events returned based on the lookup attributes specified and the
     * CloudTrail event. The events list is sorted by time. The most recent event is
     * listed first.</p>
     */
    inline LookupEventsResult& WithEvents(Aws::Vector<Event>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>A list of events returned based on the lookup attributes specified and the
     * CloudTrail event. The events list is sorted by time. The most recent event is
     * listed first.</p>
     */
    inline LookupEventsResult& AddEvents(const Event& value) { m_events.push_back(value); return *this; }

    /**
     * <p>A list of events returned based on the lookup attributes specified and the
     * CloudTrail event. The events list is sorted by time. The most recent event is
     * listed first.</p>
     */
    inline LookupEventsResult& AddEvents(Event&& value) { m_events.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline LookupEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline LookupEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline LookupEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Event> m_events;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
