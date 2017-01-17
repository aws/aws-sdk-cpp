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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ThirdPartyJob.h>

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
   * <p>Represents the output of a poll for third party jobs action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PollForThirdPartyJobsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API PollForThirdPartyJobsResult
  {
  public:
    PollForThirdPartyJobsResult();
    PollForThirdPartyJobsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PollForThirdPartyJobsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the jobs to take action on.</p>
     */
    inline const Aws::Vector<ThirdPartyJob>& GetJobs() const{ return m_jobs; }

    /**
     * <p>Information about the jobs to take action on.</p>
     */
    inline void SetJobs(const Aws::Vector<ThirdPartyJob>& value) { m_jobs = value; }

    /**
     * <p>Information about the jobs to take action on.</p>
     */
    inline void SetJobs(Aws::Vector<ThirdPartyJob>&& value) { m_jobs = value; }

    /**
     * <p>Information about the jobs to take action on.</p>
     */
    inline PollForThirdPartyJobsResult& WithJobs(const Aws::Vector<ThirdPartyJob>& value) { SetJobs(value); return *this;}

    /**
     * <p>Information about the jobs to take action on.</p>
     */
    inline PollForThirdPartyJobsResult& WithJobs(Aws::Vector<ThirdPartyJob>&& value) { SetJobs(value); return *this;}

    /**
     * <p>Information about the jobs to take action on.</p>
     */
    inline PollForThirdPartyJobsResult& AddJobs(const ThirdPartyJob& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>Information about the jobs to take action on.</p>
     */
    inline PollForThirdPartyJobsResult& AddJobs(ThirdPartyJob&& value) { m_jobs.push_back(value); return *this; }

  private:
    Aws::Vector<ThirdPartyJob> m_jobs;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
