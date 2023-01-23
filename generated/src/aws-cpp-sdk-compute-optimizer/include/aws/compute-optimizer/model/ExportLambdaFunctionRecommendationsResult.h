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
  class ExportLambdaFunctionRecommendationsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ExportLambdaFunctionRecommendationsResult();
    AWS_COMPUTEOPTIMIZER_API ExportLambdaFunctionRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API ExportLambdaFunctionRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identification number of the export job.</p> <p>Use the
     * <a>DescribeRecommendationExportJobs</a> action, and specify the job ID to view
     * the status of an export job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identification number of the export job.</p> <p>Use the
     * <a>DescribeRecommendationExportJobs</a> action, and specify the job ID to view
     * the status of an export job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The identification number of the export job.</p> <p>Use the
     * <a>DescribeRecommendationExportJobs</a> action, and specify the job ID to view
     * the status of an export job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The identification number of the export job.</p> <p>Use the
     * <a>DescribeRecommendationExportJobs</a> action, and specify the job ID to view
     * the status of an export job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The identification number of the export job.</p> <p>Use the
     * <a>DescribeRecommendationExportJobs</a> action, and specify the job ID to view
     * the status of an export job.</p>
     */
    inline ExportLambdaFunctionRecommendationsResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identification number of the export job.</p> <p>Use the
     * <a>DescribeRecommendationExportJobs</a> action, and specify the job ID to view
     * the status of an export job.</p>
     */
    inline ExportLambdaFunctionRecommendationsResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identification number of the export job.</p> <p>Use the
     * <a>DescribeRecommendationExportJobs</a> action, and specify the job ID to view
     * the status of an export job.</p>
     */
    inline ExportLambdaFunctionRecommendationsResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const S3Destination& GetS3Destination() const{ return m_s3Destination; }

    
    inline void SetS3Destination(const S3Destination& value) { m_s3Destination = value; }

    
    inline void SetS3Destination(S3Destination&& value) { m_s3Destination = std::move(value); }

    
    inline ExportLambdaFunctionRecommendationsResult& WithS3Destination(const S3Destination& value) { SetS3Destination(value); return *this;}

    
    inline ExportLambdaFunctionRecommendationsResult& WithS3Destination(S3Destination&& value) { SetS3Destination(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;

    S3Destination m_s3Destination;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
