/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/S3Destination.h>
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
namespace ComputeOptimizer
{
namespace Model
{
  class ExportIdleRecommendationsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ExportIdleRecommendationsResult();
    AWS_COMPUTEOPTIMIZER_API ExportIdleRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API ExportIdleRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The identification number of the export job. </p> <p>To view the status of
     * an export job, use the <a>DescribeRecommendationExportJobs</a> action and
     * specify the job ID. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline ExportIdleRecommendationsResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline ExportIdleRecommendationsResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline ExportIdleRecommendationsResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    
    inline const S3Destination& GetS3Destination() const{ return m_s3Destination; }
    inline void SetS3Destination(const S3Destination& value) { m_s3Destination = value; }
    inline void SetS3Destination(S3Destination&& value) { m_s3Destination = std::move(value); }
    inline ExportIdleRecommendationsResult& WithS3Destination(const S3Destination& value) { SetS3Destination(value); return *this;}
    inline ExportIdleRecommendationsResult& WithS3Destination(S3Destination&& value) { SetS3Destination(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ExportIdleRecommendationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ExportIdleRecommendationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ExportIdleRecommendationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    S3Destination m_s3Destination;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
