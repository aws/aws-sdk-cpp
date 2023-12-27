/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/AnomalyDetector.h>
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
  class ListLogAnomalyDetectorsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API ListLogAnomalyDetectorsResult();
    AWS_CLOUDWATCHLOGS_API ListLogAnomalyDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API ListLogAnomalyDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures, where each structure in the array contains
     * information about one anomaly detector.</p>
     */
    inline const Aws::Vector<AnomalyDetector>& GetAnomalyDetectors() const{ return m_anomalyDetectors; }

    /**
     * <p>An array of structures, where each structure in the array contains
     * information about one anomaly detector.</p>
     */
    inline void SetAnomalyDetectors(const Aws::Vector<AnomalyDetector>& value) { m_anomalyDetectors = value; }

    /**
     * <p>An array of structures, where each structure in the array contains
     * information about one anomaly detector.</p>
     */
    inline void SetAnomalyDetectors(Aws::Vector<AnomalyDetector>&& value) { m_anomalyDetectors = std::move(value); }

    /**
     * <p>An array of structures, where each structure in the array contains
     * information about one anomaly detector.</p>
     */
    inline ListLogAnomalyDetectorsResult& WithAnomalyDetectors(const Aws::Vector<AnomalyDetector>& value) { SetAnomalyDetectors(value); return *this;}

    /**
     * <p>An array of structures, where each structure in the array contains
     * information about one anomaly detector.</p>
     */
    inline ListLogAnomalyDetectorsResult& WithAnomalyDetectors(Aws::Vector<AnomalyDetector>&& value) { SetAnomalyDetectors(std::move(value)); return *this;}

    /**
     * <p>An array of structures, where each structure in the array contains
     * information about one anomaly detector.</p>
     */
    inline ListLogAnomalyDetectorsResult& AddAnomalyDetectors(const AnomalyDetector& value) { m_anomalyDetectors.push_back(value); return *this; }

    /**
     * <p>An array of structures, where each structure in the array contains
     * information about one anomaly detector.</p>
     */
    inline ListLogAnomalyDetectorsResult& AddAnomalyDetectors(AnomalyDetector&& value) { m_anomalyDetectors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListLogAnomalyDetectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListLogAnomalyDetectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListLogAnomalyDetectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListLogAnomalyDetectorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListLogAnomalyDetectorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListLogAnomalyDetectorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AnomalyDetector> m_anomalyDetectors;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
