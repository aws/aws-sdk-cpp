﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/JobDetails.h>

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
   * <p>Represents the output of a get job details action.</p>
   */
  class AWS_CODEPIPELINE_API GetJobDetailsResult
  {
  public:
    GetJobDetailsResult();
    GetJobDetailsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetJobDetailsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The details of the job.</p> <note> <p>If AWSSessionCredentials is used, a
     * long-running job can call GetJobDetails again to obtain new credentials.</p>
     * </note>
     */
    inline const JobDetails& GetJobDetails() const{ return m_jobDetails; }

    /**
     * <p>The details of the job.</p> <note> <p>If AWSSessionCredentials is used, a
     * long-running job can call GetJobDetails again to obtain new credentials.</p>
     * </note>
     */
    inline void SetJobDetails(const JobDetails& value) { m_jobDetails = value; }

    /**
     * <p>The details of the job.</p> <note> <p>If AWSSessionCredentials is used, a
     * long-running job can call GetJobDetails again to obtain new credentials.</p>
     * </note>
     */
    inline void SetJobDetails(JobDetails&& value) { m_jobDetails = value; }

    /**
     * <p>The details of the job.</p> <note> <p>If AWSSessionCredentials is used, a
     * long-running job can call GetJobDetails again to obtain new credentials.</p>
     * </note>
     */
    inline GetJobDetailsResult& WithJobDetails(const JobDetails& value) { SetJobDetails(value); return *this;}

    /**
     * <p>The details of the job.</p> <note> <p>If AWSSessionCredentials is used, a
     * long-running job can call GetJobDetails again to obtain new credentials.</p>
     * </note>
     */
    inline GetJobDetailsResult& WithJobDetails(JobDetails&& value) { SetJobDetails(value); return *this;}

  private:
    JobDetails m_jobDetails;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
