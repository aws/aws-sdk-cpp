/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateLogAnomalyDetectorResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API CreateLogAnomalyDetectorResult();
    AWS_CLOUDWATCHLOGS_API CreateLogAnomalyDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API CreateLogAnomalyDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the log anomaly detector that you just created.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }

    /**
     * <p>The ARN of the log anomaly detector that you just created.</p>
     */
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArn = value; }

    /**
     * <p>The ARN of the log anomaly detector that you just created.</p>
     */
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArn = std::move(value); }

    /**
     * <p>The ARN of the log anomaly detector that you just created.</p>
     */
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArn.assign(value); }

    /**
     * <p>The ARN of the log anomaly detector that you just created.</p>
     */
    inline CreateLogAnomalyDetectorResult& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>The ARN of the log anomaly detector that you just created.</p>
     */
    inline CreateLogAnomalyDetectorResult& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the log anomaly detector that you just created.</p>
     */
    inline CreateLogAnomalyDetectorResult& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateLogAnomalyDetectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateLogAnomalyDetectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateLogAnomalyDetectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_anomalyDetectorArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
