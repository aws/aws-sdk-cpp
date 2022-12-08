/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/JobDetails.h>
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
namespace CodePipeline
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>GetJobDetails</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetJobDetailsOutput">AWS
   * API Reference</a></p>
   */
  class GetJobDetailsResult
  {
  public:
    AWS_CODEPIPELINE_API GetJobDetailsResult();
    AWS_CODEPIPELINE_API GetJobDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API GetJobDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the job.</p>  <p>If AWSSessionCredentials is used, a
     * long-running job can call <code>GetJobDetails</code> again to obtain new
     * credentials.</p> 
     */
    inline const JobDetails& GetJobDetails() const{ return m_jobDetails; }

    /**
     * <p>The details of the job.</p>  <p>If AWSSessionCredentials is used, a
     * long-running job can call <code>GetJobDetails</code> again to obtain new
     * credentials.</p> 
     */
    inline void SetJobDetails(const JobDetails& value) { m_jobDetails = value; }

    /**
     * <p>The details of the job.</p>  <p>If AWSSessionCredentials is used, a
     * long-running job can call <code>GetJobDetails</code> again to obtain new
     * credentials.</p> 
     */
    inline void SetJobDetails(JobDetails&& value) { m_jobDetails = std::move(value); }

    /**
     * <p>The details of the job.</p>  <p>If AWSSessionCredentials is used, a
     * long-running job can call <code>GetJobDetails</code> again to obtain new
     * credentials.</p> 
     */
    inline GetJobDetailsResult& WithJobDetails(const JobDetails& value) { SetJobDetails(value); return *this;}

    /**
     * <p>The details of the job.</p>  <p>If AWSSessionCredentials is used, a
     * long-running job can call <code>GetJobDetails</code> again to obtain new
     * credentials.</p> 
     */
    inline GetJobDetailsResult& WithJobDetails(JobDetails&& value) { SetJobDetails(std::move(value)); return *this;}

  private:

    JobDetails m_jobDetails;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
