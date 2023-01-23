/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ThirdPartyJob.h>
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
   * <p>Represents the output of a <code>PollForThirdPartyJobs</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PollForThirdPartyJobsOutput">AWS
   * API Reference</a></p>
   */
  class PollForThirdPartyJobsResult
  {
  public:
    AWS_CODEPIPELINE_API PollForThirdPartyJobsResult();
    AWS_CODEPIPELINE_API PollForThirdPartyJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API PollForThirdPartyJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetJobs(Aws::Vector<ThirdPartyJob>&& value) { m_jobs = std::move(value); }

    /**
     * <p>Information about the jobs to take action on.</p>
     */
    inline PollForThirdPartyJobsResult& WithJobs(const Aws::Vector<ThirdPartyJob>& value) { SetJobs(value); return *this;}

    /**
     * <p>Information about the jobs to take action on.</p>
     */
    inline PollForThirdPartyJobsResult& WithJobs(Aws::Vector<ThirdPartyJob>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>Information about the jobs to take action on.</p>
     */
    inline PollForThirdPartyJobsResult& AddJobs(const ThirdPartyJob& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>Information about the jobs to take action on.</p>
     */
    inline PollForThirdPartyJobsResult& AddJobs(ThirdPartyJob&& value) { m_jobs.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ThirdPartyJob> m_jobs;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
