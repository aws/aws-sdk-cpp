﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/AnomalyMonitor.h>
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
namespace CostExplorer
{
namespace Model
{
  class GetAnomalyMonitorsResult
  {
  public:
    AWS_COSTEXPLORER_API GetAnomalyMonitorsResult();
    AWS_COSTEXPLORER_API GetAnomalyMonitorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetAnomalyMonitorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of cost anomaly monitors that includes the detailed metadata for each
     * monitor. </p>
     */
    inline const Aws::Vector<AnomalyMonitor>& GetAnomalyMonitors() const{ return m_anomalyMonitors; }
    inline void SetAnomalyMonitors(const Aws::Vector<AnomalyMonitor>& value) { m_anomalyMonitors = value; }
    inline void SetAnomalyMonitors(Aws::Vector<AnomalyMonitor>&& value) { m_anomalyMonitors = std::move(value); }
    inline GetAnomalyMonitorsResult& WithAnomalyMonitors(const Aws::Vector<AnomalyMonitor>& value) { SetAnomalyMonitors(value); return *this;}
    inline GetAnomalyMonitorsResult& WithAnomalyMonitors(Aws::Vector<AnomalyMonitor>&& value) { SetAnomalyMonitors(std::move(value)); return *this;}
    inline GetAnomalyMonitorsResult& AddAnomalyMonitors(const AnomalyMonitor& value) { m_anomalyMonitors.push_back(value); return *this; }
    inline GetAnomalyMonitorsResult& AddAnomalyMonitors(AnomalyMonitor&& value) { m_anomalyMonitors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetAnomalyMonitorsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetAnomalyMonitorsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetAnomalyMonitorsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAnomalyMonitorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAnomalyMonitorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAnomalyMonitorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AnomalyMonitor> m_anomalyMonitors;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
