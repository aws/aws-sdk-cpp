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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/EventTracker.h>
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
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API DescribeEventTrackerResult
  {
  public:
    DescribeEventTrackerResult();
    DescribeEventTrackerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEventTrackerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the event tracker.</p>
     */
    inline const EventTracker& GetEventTracker() const{ return m_eventTracker; }

    /**
     * <p>An object that describes the event tracker.</p>
     */
    inline void SetEventTracker(const EventTracker& value) { m_eventTracker = value; }

    /**
     * <p>An object that describes the event tracker.</p>
     */
    inline void SetEventTracker(EventTracker&& value) { m_eventTracker = std::move(value); }

    /**
     * <p>An object that describes the event tracker.</p>
     */
    inline DescribeEventTrackerResult& WithEventTracker(const EventTracker& value) { SetEventTracker(value); return *this;}

    /**
     * <p>An object that describes the event tracker.</p>
     */
    inline DescribeEventTrackerResult& WithEventTracker(EventTracker&& value) { SetEventTracker(std::move(value)); return *this;}

  private:

    EventTracker m_eventTracker;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
