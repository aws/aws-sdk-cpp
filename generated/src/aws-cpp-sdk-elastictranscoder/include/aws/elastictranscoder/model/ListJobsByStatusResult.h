/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Job.h>
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
namespace ElasticTranscoder
{
namespace Model
{
  /**
   * <p> The <code>ListJobsByStatusResponse</code> structure. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListJobsByStatusResponse">AWS
   * API Reference</a></p>
   */
  class ListJobsByStatusResult
  {
  public:
    AWS_ELASTICTRANSCODER_API ListJobsByStatusResult();
    AWS_ELASTICTRANSCODER_API ListJobsByStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICTRANSCODER_API ListJobsByStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Job</code> objects that have the specified status.</p>
     */
    inline const Aws::Vector<Job>& GetJobs() const{ return m_jobs; }

    /**
     * <p>An array of <code>Job</code> objects that have the specified status.</p>
     */
    inline void SetJobs(const Aws::Vector<Job>& value) { m_jobs = value; }

    /**
     * <p>An array of <code>Job</code> objects that have the specified status.</p>
     */
    inline void SetJobs(Aws::Vector<Job>&& value) { m_jobs = std::move(value); }

    /**
     * <p>An array of <code>Job</code> objects that have the specified status.</p>
     */
    inline ListJobsByStatusResult& WithJobs(const Aws::Vector<Job>& value) { SetJobs(value); return *this;}

    /**
     * <p>An array of <code>Job</code> objects that have the specified status.</p>
     */
    inline ListJobsByStatusResult& WithJobs(Aws::Vector<Job>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Job</code> objects that have the specified status.</p>
     */
    inline ListJobsByStatusResult& AddJobs(const Job& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>An array of <code>Job</code> objects that have the specified status.</p>
     */
    inline ListJobsByStatusResult& AddJobs(Job&& value) { m_jobs.push_back(std::move(value)); return *this; }


    /**
     * <p> A value that you use to access the second and subsequent pages of results,
     * if any. When the jobs in the specified pipeline fit on one page or when you've
     * reached the last page of results, the value of <code>NextPageToken</code> is
     * <code>null</code>. </p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p> A value that you use to access the second and subsequent pages of results,
     * if any. When the jobs in the specified pipeline fit on one page or when you've
     * reached the last page of results, the value of <code>NextPageToken</code> is
     * <code>null</code>. </p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p> A value that you use to access the second and subsequent pages of results,
     * if any. When the jobs in the specified pipeline fit on one page or when you've
     * reached the last page of results, the value of <code>NextPageToken</code> is
     * <code>null</code>. </p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p> A value that you use to access the second and subsequent pages of results,
     * if any. When the jobs in the specified pipeline fit on one page or when you've
     * reached the last page of results, the value of <code>NextPageToken</code> is
     * <code>null</code>. </p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p> A value that you use to access the second and subsequent pages of results,
     * if any. When the jobs in the specified pipeline fit on one page or when you've
     * reached the last page of results, the value of <code>NextPageToken</code> is
     * <code>null</code>. </p>
     */
    inline ListJobsByStatusResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p> A value that you use to access the second and subsequent pages of results,
     * if any. When the jobs in the specified pipeline fit on one page or when you've
     * reached the last page of results, the value of <code>NextPageToken</code> is
     * <code>null</code>. </p>
     */
    inline ListJobsByStatusResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p> A value that you use to access the second and subsequent pages of results,
     * if any. When the jobs in the specified pipeline fit on one page or when you've
     * reached the last page of results, the value of <code>NextPageToken</code> is
     * <code>null</code>. </p>
     */
    inline ListJobsByStatusResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<Job> m_jobs;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
