/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/Anomaly.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class ListAnomaliesResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API ListAnomaliesResult();
    AWS_CLOUDWATCHLOGS_API ListAnomaliesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API ListAnomaliesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures, where each structure contains information about one
     * anomaly that a log anomaly detector has found.</p>
     */
    inline const Aws::Vector<Anomaly>& GetAnomalies() const{ return m_anomalies; }

    /**
     * <p>An array of structures, where each structure contains information about one
     * anomaly that a log anomaly detector has found.</p>
     */
    inline void SetAnomalies(const Aws::Vector<Anomaly>& value) { m_anomalies = value; }

    /**
     * <p>An array of structures, where each structure contains information about one
     * anomaly that a log anomaly detector has found.</p>
     */
    inline void SetAnomalies(Aws::Vector<Anomaly>&& value) { m_anomalies = std::move(value); }

    /**
     * <p>An array of structures, where each structure contains information about one
     * anomaly that a log anomaly detector has found.</p>
     */
    inline ListAnomaliesResult& WithAnomalies(const Aws::Vector<Anomaly>& value) { SetAnomalies(value); return *this;}

    /**
     * <p>An array of structures, where each structure contains information about one
     * anomaly that a log anomaly detector has found.</p>
     */
    inline ListAnomaliesResult& WithAnomalies(Aws::Vector<Anomaly>&& value) { SetAnomalies(std::move(value)); return *this;}

    /**
     * <p>An array of structures, where each structure contains information about one
     * anomaly that a log anomaly detector has found.</p>
     */
    inline ListAnomaliesResult& AddAnomalies(const Anomaly& value) { m_anomalies.push_back(value); return *this; }

    /**
     * <p>An array of structures, where each structure contains information about one
     * anomaly that a log anomaly detector has found.</p>
     */
    inline ListAnomaliesResult& AddAnomalies(Anomaly&& value) { m_anomalies.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListAnomaliesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListAnomaliesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListAnomaliesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAnomaliesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAnomaliesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAnomaliesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Anomaly> m_anomalies;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
