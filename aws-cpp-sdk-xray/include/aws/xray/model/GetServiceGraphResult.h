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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/Service.h>
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
namespace XRay
{
namespace Model
{
  class AWS_XRAY_API GetServiceGraphResult
  {
  public:
    GetServiceGraphResult();
    GetServiceGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetServiceGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The start of the time frame for which the graph was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time frame for which the graph was generated.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The start of the time frame for which the graph was generated.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The start of the time frame for which the graph was generated.</p>
     */
    inline GetServiceGraphResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time frame for which the graph was generated.</p>
     */
    inline GetServiceGraphResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time frame for which the graph was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time frame for which the graph was generated.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>The end of the time frame for which the graph was generated.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>The end of the time frame for which the graph was generated.</p>
     */
    inline GetServiceGraphResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time frame for which the graph was generated.</p>
     */
    inline GetServiceGraphResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The services that have processed a traced request during the specified time
     * frame.</p>
     */
    inline const Aws::Vector<Service>& GetServices() const{ return m_services; }

    /**
     * <p>The services that have processed a traced request during the specified time
     * frame.</p>
     */
    inline void SetServices(const Aws::Vector<Service>& value) { m_services = value; }

    /**
     * <p>The services that have processed a traced request during the specified time
     * frame.</p>
     */
    inline void SetServices(Aws::Vector<Service>&& value) { m_services = std::move(value); }

    /**
     * <p>The services that have processed a traced request during the specified time
     * frame.</p>
     */
    inline GetServiceGraphResult& WithServices(const Aws::Vector<Service>& value) { SetServices(value); return *this;}

    /**
     * <p>The services that have processed a traced request during the specified time
     * frame.</p>
     */
    inline GetServiceGraphResult& WithServices(Aws::Vector<Service>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>The services that have processed a traced request during the specified time
     * frame.</p>
     */
    inline GetServiceGraphResult& AddServices(const Service& value) { m_services.push_back(value); return *this; }

    /**
     * <p>The services that have processed a traced request during the specified time
     * frame.</p>
     */
    inline GetServiceGraphResult& AddServices(Service&& value) { m_services.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag indicating whether the group's filter expression has been consistent,
     * or if the returned service graph may show traces from an older version of the
     * group's filter expression.</p>
     */
    inline bool GetContainsOldGroupVersions() const{ return m_containsOldGroupVersions; }

    /**
     * <p>A flag indicating whether the group's filter expression has been consistent,
     * or if the returned service graph may show traces from an older version of the
     * group's filter expression.</p>
     */
    inline void SetContainsOldGroupVersions(bool value) { m_containsOldGroupVersions = value; }

    /**
     * <p>A flag indicating whether the group's filter expression has been consistent,
     * or if the returned service graph may show traces from an older version of the
     * group's filter expression.</p>
     */
    inline GetServiceGraphResult& WithContainsOldGroupVersions(bool value) { SetContainsOldGroupVersions(value); return *this;}


    /**
     * <p>Pagination token. Not used.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetServiceGraphResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetServiceGraphResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetServiceGraphResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Vector<Service> m_services;

    bool m_containsOldGroupVersions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
