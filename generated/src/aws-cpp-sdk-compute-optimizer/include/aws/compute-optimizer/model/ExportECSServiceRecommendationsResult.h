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
  class ExportECSServiceRecommendationsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ExportECSServiceRecommendationsResult();
    AWS_COMPUTEOPTIMIZER_API ExportECSServiceRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API ExportECSServiceRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The identification number of the export job. </p> <p>To view the status of
     * an export job, use the <a>DescribeRecommendationExportJobs</a> action and
     * specify the job ID. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p> The identification number of the export job. </p> <p>To view the status of
     * an export job, use the <a>DescribeRecommendationExportJobs</a> action and
     * specify the job ID. </p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p> The identification number of the export job. </p> <p>To view the status of
     * an export job, use the <a>DescribeRecommendationExportJobs</a> action and
     * specify the job ID. </p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p> The identification number of the export job. </p> <p>To view the status of
     * an export job, use the <a>DescribeRecommendationExportJobs</a> action and
     * specify the job ID. </p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p> The identification number of the export job. </p> <p>To view the status of
     * an export job, use the <a>DescribeRecommendationExportJobs</a> action and
     * specify the job ID. </p>
     */
    inline ExportECSServiceRecommendationsResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p> The identification number of the export job. </p> <p>To view the status of
     * an export job, use the <a>DescribeRecommendationExportJobs</a> action and
     * specify the job ID. </p>
     */
    inline ExportECSServiceRecommendationsResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p> The identification number of the export job. </p> <p>To view the status of
     * an export job, use the <a>DescribeRecommendationExportJobs</a> action and
     * specify the job ID. </p>
     */
    inline ExportECSServiceRecommendationsResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const S3Destination& GetS3Destination() const{ return m_s3Destination; }

    
    inline void SetS3Destination(const S3Destination& value) { m_s3Destination = value; }

    
    inline void SetS3Destination(S3Destination&& value) { m_s3Destination = std::move(value); }

    
    inline ExportECSServiceRecommendationsResult& WithS3Destination(const S3Destination& value) { SetS3Destination(value); return *this;}

    
    inline ExportECSServiceRecommendationsResult& WithS3Destination(S3Destination&& value) { SetS3Destination(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;

    S3Destination m_s3Destination;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
