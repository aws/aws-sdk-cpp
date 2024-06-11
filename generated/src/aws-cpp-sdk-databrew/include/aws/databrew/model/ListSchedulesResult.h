﻿/**
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


    ///@{
    /**
     * <p>A list of schedules that are defined.</p>
     */
    inline const Aws::Vector<Schedule>& GetSchedules() const{ return m_schedules; }
    inline void SetSchedules(const Aws::Vector<Schedule>& value) { m_schedules = value; }
    inline void SetSchedules(Aws::Vector<Schedule>&& value) { m_schedules = std::move(value); }
    inline ListSchedulesResult& WithSchedules(const Aws::Vector<Schedule>& value) { SetSchedules(value); return *this;}
    inline ListSchedulesResult& WithSchedules(Aws::Vector<Schedule>&& value) { SetSchedules(std::move(value)); return *this;}
    inline ListSchedulesResult& AddSchedules(const Schedule& value) { m_schedules.push_back(value); return *this; }
    inline ListSchedulesResult& AddSchedules(Schedule&& value) { m_schedules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSchedulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSchedulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSchedulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSchedulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSchedulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSchedulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Schedule> m_schedules;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
