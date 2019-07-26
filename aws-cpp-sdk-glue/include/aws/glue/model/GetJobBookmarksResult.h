/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/JobBookmarkEntry.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API GetJobBookmarksResult
  {
  public:
    GetJobBookmarksResult();
    GetJobBookmarksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetJobBookmarksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of job bookmark entries that defines a point that a job can resume
     * processing.</p>
     */
    inline const Aws::Vector<JobBookmarkEntry>& GetJobBookmarkEntries() const{ return m_jobBookmarkEntries; }

    /**
     * <p>A list of job bookmark entries that defines a point that a job can resume
     * processing.</p>
     */
    inline void SetJobBookmarkEntries(const Aws::Vector<JobBookmarkEntry>& value) { m_jobBookmarkEntries = value; }

    /**
     * <p>A list of job bookmark entries that defines a point that a job can resume
     * processing.</p>
     */
    inline void SetJobBookmarkEntries(Aws::Vector<JobBookmarkEntry>&& value) { m_jobBookmarkEntries = std::move(value); }

    /**
     * <p>A list of job bookmark entries that defines a point that a job can resume
     * processing.</p>
     */
    inline GetJobBookmarksResult& WithJobBookmarkEntries(const Aws::Vector<JobBookmarkEntry>& value) { SetJobBookmarkEntries(value); return *this;}

    /**
     * <p>A list of job bookmark entries that defines a point that a job can resume
     * processing.</p>
     */
    inline GetJobBookmarksResult& WithJobBookmarkEntries(Aws::Vector<JobBookmarkEntry>&& value) { SetJobBookmarkEntries(std::move(value)); return *this;}

    /**
     * <p>A list of job bookmark entries that defines a point that a job can resume
     * processing.</p>
     */
    inline GetJobBookmarksResult& AddJobBookmarkEntries(const JobBookmarkEntry& value) { m_jobBookmarkEntries.push_back(value); return *this; }

    /**
     * <p>A list of job bookmark entries that defines a point that a job can resume
     * processing.</p>
     */
    inline GetJobBookmarksResult& AddJobBookmarkEntries(JobBookmarkEntry&& value) { m_jobBookmarkEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, which has a value of 1 if all the entries are returned,
     * or &gt; 1 if not all requested job runs have been returned.</p>
     */
    inline int GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, which has a value of 1 if all the entries are returned,
     * or &gt; 1 if not all requested job runs have been returned.</p>
     */
    inline void SetNextToken(int value) { m_nextToken = value; }

    /**
     * <p>A continuation token, which has a value of 1 if all the entries are returned,
     * or &gt; 1 if not all requested job runs have been returned.</p>
     */
    inline GetJobBookmarksResult& WithNextToken(int value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<JobBookmarkEntry> m_jobBookmarkEntries;

    int m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
