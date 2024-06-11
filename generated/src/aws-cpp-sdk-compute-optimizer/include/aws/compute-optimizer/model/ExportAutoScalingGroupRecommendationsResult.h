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
  class ExportAutoScalingGroupRecommendationsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ExportAutoScalingGroupRecommendationsResult();
    AWS_COMPUTEOPTIMIZER_API ExportAutoScalingGroupRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API ExportAutoScalingGroupRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identification number of the export job.</p> <p>Use the
     * <a>DescribeRecommendationExportJobs</a> action, and specify the job ID to view
     * the status of an export job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline ExportAutoScalingGroupRecommendationsResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline ExportAutoScalingGroupRecommendationsResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline ExportAutoScalingGroupRecommendationsResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the destination Amazon S3 bucket of a
     * recommendations export file.</p>
     */
    inline const S3Destination& GetS3Destination() const{ return m_s3Destination; }
    inline void SetS3Destination(const S3Destination& value) { m_s3Destination = value; }
    inline void SetS3Destination(S3Destination&& value) { m_s3Destination = std::move(value); }
    inline ExportAutoScalingGroupRecommendationsResult& WithS3Destination(const S3Destination& value) { SetS3Destination(value); return *this;}
    inline ExportAutoScalingGroupRecommendationsResult& WithS3Destination(S3Destination&& value) { SetS3Destination(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ExportAutoScalingGroupRecommendationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ExportAutoScalingGroupRecommendationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ExportAutoScalingGroupRecommendationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    S3Destination m_s3Destination;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
