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
    AWS_CLOUDWATCHLOGS_API ListAnomaliesResult() = default;
    AWS_CLOUDWATCHLOGS_API ListAnomaliesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API ListAnomaliesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures, where each structure contains information about one
     * anomaly that a log anomaly detector has found.</p>
     */
    inline const Aws::Vector<Anomaly>& GetAnomalies() const { return m_anomalies; }
    template<typename AnomaliesT = Aws::Vector<Anomaly>>
    void SetAnomalies(AnomaliesT&& value) { m_anomaliesHasBeenSet = true; m_anomalies = std::forward<AnomaliesT>(value); }
    template<typename AnomaliesT = Aws::Vector<Anomaly>>
    ListAnomaliesResult& WithAnomalies(AnomaliesT&& value) { SetAnomalies(std::forward<AnomaliesT>(value)); return *this;}
    template<typename AnomaliesT = Anomaly>
    ListAnomaliesResult& AddAnomalies(AnomaliesT&& value) { m_anomaliesHasBeenSet = true; m_anomalies.emplace_back(std::forward<AnomaliesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnomaliesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnomaliesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Anomaly> m_anomalies;
    bool m_anomaliesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
