/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class UpdateAnomalyDetectorResult
  {
  public:
    AWS_LOOKOUTMETRICS_API UpdateAnomalyDetectorResult();
    AWS_LOOKOUTMETRICS_API UpdateAnomalyDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API UpdateAnomalyDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the updated detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }

    /**
     * <p>The ARN of the updated detector.</p>
     */
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArn = value; }

    /**
     * <p>The ARN of the updated detector.</p>
     */
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArn = std::move(value); }

    /**
     * <p>The ARN of the updated detector.</p>
     */
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArn.assign(value); }

    /**
     * <p>The ARN of the updated detector.</p>
     */
    inline UpdateAnomalyDetectorResult& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>The ARN of the updated detector.</p>
     */
    inline UpdateAnomalyDetectorResult& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the updated detector.</p>
     */
    inline UpdateAnomalyDetectorResult& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAnomalyDetectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAnomalyDetectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAnomalyDetectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_anomalyDetectorArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
