/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/model/MetricsName.h>
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
namespace Kinesis
{
namespace Model
{
  /**
   * <p>Represents the output for <a>EnableEnhancedMonitoring</a> and
   * <a>DisableEnhancedMonitoring</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/EnhancedMonitoringOutput">AWS
   * API Reference</a></p>
   */
  class DisableEnhancedMonitoringResult
  {
  public:
    AWS_KINESIS_API DisableEnhancedMonitoringResult() = default;
    AWS_KINESIS_API DisableEnhancedMonitoringResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API DisableEnhancedMonitoringResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the Kinesis data stream.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    DisableEnhancedMonitoringResult& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the current state of the metrics that are in the enhanced state
     * before the operation.</p>
     */
    inline const Aws::Vector<MetricsName>& GetCurrentShardLevelMetrics() const { return m_currentShardLevelMetrics; }
    template<typename CurrentShardLevelMetricsT = Aws::Vector<MetricsName>>
    void SetCurrentShardLevelMetrics(CurrentShardLevelMetricsT&& value) { m_currentShardLevelMetricsHasBeenSet = true; m_currentShardLevelMetrics = std::forward<CurrentShardLevelMetricsT>(value); }
    template<typename CurrentShardLevelMetricsT = Aws::Vector<MetricsName>>
    DisableEnhancedMonitoringResult& WithCurrentShardLevelMetrics(CurrentShardLevelMetricsT&& value) { SetCurrentShardLevelMetrics(std::forward<CurrentShardLevelMetricsT>(value)); return *this;}
    inline DisableEnhancedMonitoringResult& AddCurrentShardLevelMetrics(MetricsName value) { m_currentShardLevelMetricsHasBeenSet = true; m_currentShardLevelMetrics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the list of all the metrics that would be in the enhanced state
     * after the operation.</p>
     */
    inline const Aws::Vector<MetricsName>& GetDesiredShardLevelMetrics() const { return m_desiredShardLevelMetrics; }
    template<typename DesiredShardLevelMetricsT = Aws::Vector<MetricsName>>
    void SetDesiredShardLevelMetrics(DesiredShardLevelMetricsT&& value) { m_desiredShardLevelMetricsHasBeenSet = true; m_desiredShardLevelMetrics = std::forward<DesiredShardLevelMetricsT>(value); }
    template<typename DesiredShardLevelMetricsT = Aws::Vector<MetricsName>>
    DisableEnhancedMonitoringResult& WithDesiredShardLevelMetrics(DesiredShardLevelMetricsT&& value) { SetDesiredShardLevelMetrics(std::forward<DesiredShardLevelMetricsT>(value)); return *this;}
    inline DisableEnhancedMonitoringResult& AddDesiredShardLevelMetrics(MetricsName value) { m_desiredShardLevelMetricsHasBeenSet = true; m_desiredShardLevelMetrics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    DisableEnhancedMonitoringResult& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisableEnhancedMonitoringResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::Vector<MetricsName> m_currentShardLevelMetrics;
    bool m_currentShardLevelMetricsHasBeenSet = false;

    Aws::Vector<MetricsName> m_desiredShardLevelMetrics;
    bool m_desiredShardLevelMetricsHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
