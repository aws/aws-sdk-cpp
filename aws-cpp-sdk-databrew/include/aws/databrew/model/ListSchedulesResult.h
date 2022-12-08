/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/Schedule.h>
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
namespace GlueDataBrew
{
namespace Model
{
  class ListSchedulesResult
  {
  public:
    AWS_GLUEDATABREW_API ListSchedulesResult();
    AWS_GLUEDATABREW_API ListSchedulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API ListSchedulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of schedules that are defined.</p>
     */
    inline const Aws::Vector<Schedule>& GetSchedules() const{ return m_schedules; }

    /**
     * <p>A list of schedules that are defined.</p>
     */
    inline void SetSchedules(const Aws::Vector<Schedule>& value) { m_schedules = value; }

    /**
     * <p>A list of schedules that are defined.</p>
     */
    inline void SetSchedules(Aws::Vector<Schedule>&& value) { m_schedules = std::move(value); }

    /**
     * <p>A list of schedules that are defined.</p>
     */
    inline ListSchedulesResult& WithSchedules(const Aws::Vector<Schedule>& value) { SetSchedules(value); return *this;}

    /**
     * <p>A list of schedules that are defined.</p>
     */
    inline ListSchedulesResult& WithSchedules(Aws::Vector<Schedule>&& value) { SetSchedules(std::move(value)); return *this;}

    /**
     * <p>A list of schedules that are defined.</p>
     */
    inline ListSchedulesResult& AddSchedules(const Schedule& value) { m_schedules.push_back(value); return *this; }

    /**
     * <p>A list of schedules that are defined.</p>
     */
    inline ListSchedulesResult& AddSchedules(Schedule&& value) { m_schedules.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListSchedulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListSchedulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListSchedulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Schedule> m_schedules;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
