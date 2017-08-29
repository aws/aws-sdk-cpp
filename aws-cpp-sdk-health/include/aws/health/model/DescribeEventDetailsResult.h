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
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/health/model/EventDetails.h>
#include <aws/health/model/EventDetailsErrorItem.h>
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
namespace Health
{
namespace Model
{
  class AWS_HEALTH_API DescribeEventDetailsResult
  {
  public:
    DescribeEventDetailsResult();
    DescribeEventDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEventDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline const Aws::Vector<EventDetails>& GetSuccessfulSet() const{ return m_successfulSet; }

    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline void SetSuccessfulSet(const Aws::Vector<EventDetails>& value) { m_successfulSet = value; }

    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline void SetSuccessfulSet(Aws::Vector<EventDetails>&& value) { m_successfulSet = std::move(value); }

    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline DescribeEventDetailsResult& WithSuccessfulSet(const Aws::Vector<EventDetails>& value) { SetSuccessfulSet(value); return *this;}

    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline DescribeEventDetailsResult& WithSuccessfulSet(Aws::Vector<EventDetails>&& value) { SetSuccessfulSet(std::move(value)); return *this;}

    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline DescribeEventDetailsResult& AddSuccessfulSet(const EventDetails& value) { m_successfulSet.push_back(value); return *this; }

    /**
     * <p>Information about the events that could be retrieved.</p>
     */
    inline DescribeEventDetailsResult& AddSuccessfulSet(EventDetails&& value) { m_successfulSet.push_back(std::move(value)); return *this; }


    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline const Aws::Vector<EventDetailsErrorItem>& GetFailedSet() const{ return m_failedSet; }

    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline void SetFailedSet(const Aws::Vector<EventDetailsErrorItem>& value) { m_failedSet = value; }

    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline void SetFailedSet(Aws::Vector<EventDetailsErrorItem>&& value) { m_failedSet = std::move(value); }

    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline DescribeEventDetailsResult& WithFailedSet(const Aws::Vector<EventDetailsErrorItem>& value) { SetFailedSet(value); return *this;}

    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline DescribeEventDetailsResult& WithFailedSet(Aws::Vector<EventDetailsErrorItem>&& value) { SetFailedSet(std::move(value)); return *this;}

    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline DescribeEventDetailsResult& AddFailedSet(const EventDetailsErrorItem& value) { m_failedSet.push_back(value); return *this; }

    /**
     * <p>Error messages for any events that could not be retrieved.</p>
     */
    inline DescribeEventDetailsResult& AddFailedSet(EventDetailsErrorItem&& value) { m_failedSet.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EventDetails> m_successfulSet;

    Aws::Vector<EventDetailsErrorItem> m_failedSet;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
