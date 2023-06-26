/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/internetmonitor/model/Monitor.h>
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
namespace InternetMonitor
{
namespace Model
{
  class ListMonitorsResult
  {
  public:
    AWS_INTERNETMONITOR_API ListMonitorsResult();
    AWS_INTERNETMONITOR_API ListMonitorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API ListMonitorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of monitors.</p>
     */
    inline const Aws::Vector<Monitor>& GetMonitors() const{ return m_monitors; }

    /**
     * <p>A list of monitors.</p>
     */
    inline void SetMonitors(const Aws::Vector<Monitor>& value) { m_monitors = value; }

    /**
     * <p>A list of monitors.</p>
     */
    inline void SetMonitors(Aws::Vector<Monitor>&& value) { m_monitors = std::move(value); }

    /**
     * <p>A list of monitors.</p>
     */
    inline ListMonitorsResult& WithMonitors(const Aws::Vector<Monitor>& value) { SetMonitors(value); return *this;}

    /**
     * <p>A list of monitors.</p>
     */
    inline ListMonitorsResult& WithMonitors(Aws::Vector<Monitor>&& value) { SetMonitors(std::move(value)); return *this;}

    /**
     * <p>A list of monitors.</p>
     */
    inline ListMonitorsResult& AddMonitors(const Monitor& value) { m_monitors.push_back(value); return *this; }

    /**
     * <p>A list of monitors.</p>
     */
    inline ListMonitorsResult& AddMonitors(Monitor&& value) { m_monitors.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListMonitorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListMonitorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListMonitorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMonitorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMonitorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMonitorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Monitor> m_monitors;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
