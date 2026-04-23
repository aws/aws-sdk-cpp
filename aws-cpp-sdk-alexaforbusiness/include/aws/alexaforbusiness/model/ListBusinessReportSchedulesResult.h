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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/BusinessReportSchedule.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class AWS_ALEXAFORBUSINESS_API ListBusinessReportSchedulesResult
  {
  public:
    ListBusinessReportSchedulesResult();
    ListBusinessReportSchedulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListBusinessReportSchedulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The schedule of the reports.</p>
     */
    inline const Aws::Vector<BusinessReportSchedule>& GetBusinessReportSchedules() const{ return m_businessReportSchedules; }

    /**
     * <p>The schedule of the reports.</p>
     */
    inline void SetBusinessReportSchedules(const Aws::Vector<BusinessReportSchedule>& value) { m_businessReportSchedules = value; }

    /**
     * <p>The schedule of the reports.</p>
     */
    inline void SetBusinessReportSchedules(Aws::Vector<BusinessReportSchedule>&& value) { m_businessReportSchedules = std::move(value); }

    /**
     * <p>The schedule of the reports.</p>
     */
    inline ListBusinessReportSchedulesResult& WithBusinessReportSchedules(const Aws::Vector<BusinessReportSchedule>& value) { SetBusinessReportSchedules(value); return *this;}

    /**
     * <p>The schedule of the reports.</p>
     */
    inline ListBusinessReportSchedulesResult& WithBusinessReportSchedules(Aws::Vector<BusinessReportSchedule>&& value) { SetBusinessReportSchedules(std::move(value)); return *this;}

    /**
     * <p>The schedule of the reports.</p>
     */
    inline ListBusinessReportSchedulesResult& AddBusinessReportSchedules(const BusinessReportSchedule& value) { m_businessReportSchedules.push_back(value); return *this; }

    /**
     * <p>The schedule of the reports.</p>
     */
    inline ListBusinessReportSchedulesResult& AddBusinessReportSchedules(BusinessReportSchedule&& value) { m_businessReportSchedules.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to list the remaining schedules from the previous API
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to list the remaining schedules from the previous API
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to list the remaining schedules from the previous API
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to list the remaining schedules from the previous API
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to list the remaining schedules from the previous API
     * call.</p>
     */
    inline ListBusinessReportSchedulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to list the remaining schedules from the previous API
     * call.</p>
     */
    inline ListBusinessReportSchedulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to list the remaining schedules from the previous API
     * call.</p>
     */
    inline ListBusinessReportSchedulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BusinessReportSchedule> m_businessReportSchedules;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
