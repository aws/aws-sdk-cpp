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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/Activity.h>
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
namespace WorkDocs
{
namespace Model
{
  class AWS_WORKDOCS_API DescribeActivitiesResult
  {
  public:
    DescribeActivitiesResult();
    DescribeActivitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeActivitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline const Aws::Vector<Activity>& GetUserActivities() const{ return m_userActivities; }

    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline void SetUserActivities(const Aws::Vector<Activity>& value) { m_userActivities = value; }

    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline void SetUserActivities(Aws::Vector<Activity>&& value) { m_userActivities = std::move(value); }

    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline DescribeActivitiesResult& WithUserActivities(const Aws::Vector<Activity>& value) { SetUserActivities(value); return *this;}

    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline DescribeActivitiesResult& WithUserActivities(Aws::Vector<Activity>&& value) { SetUserActivities(std::move(value)); return *this;}

    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline DescribeActivitiesResult& AddUserActivities(const Activity& value) { m_userActivities.push_back(value); return *this; }

    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline DescribeActivitiesResult& AddUserActivities(Activity&& value) { m_userActivities.push_back(std::move(value)); return *this; }


    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline DescribeActivitiesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline DescribeActivitiesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline DescribeActivitiesResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<Activity> m_userActivities;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
