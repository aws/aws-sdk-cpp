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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/JobMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Snowball
{
namespace Model
{
  class AWS_SNOWBALL_API DescribeJobResult
  {
  public:
    DescribeJobResult();
    DescribeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a specific job, including shipping information, job status,
     * and other important metadata.</p>
     */
    inline const JobMetadata& GetJobMetadata() const{ return m_jobMetadata; }

    /**
     * <p>Information about a specific job, including shipping information, job status,
     * and other important metadata.</p>
     */
    inline void SetJobMetadata(const JobMetadata& value) { m_jobMetadata = value; }

    /**
     * <p>Information about a specific job, including shipping information, job status,
     * and other important metadata.</p>
     */
    inline void SetJobMetadata(JobMetadata&& value) { m_jobMetadata = std::move(value); }

    /**
     * <p>Information about a specific job, including shipping information, job status,
     * and other important metadata.</p>
     */
    inline DescribeJobResult& WithJobMetadata(const JobMetadata& value) { SetJobMetadata(value); return *this;}

    /**
     * <p>Information about a specific job, including shipping information, job status,
     * and other important metadata.</p>
     */
    inline DescribeJobResult& WithJobMetadata(JobMetadata&& value) { SetJobMetadata(std::move(value)); return *this;}


    /**
     * <p>Information about a specific job part (in the case of an export job),
     * including shipping information, job status, and other important metadata.</p>
     */
    inline const Aws::Vector<JobMetadata>& GetSubJobMetadata() const{ return m_subJobMetadata; }

    /**
     * <p>Information about a specific job part (in the case of an export job),
     * including shipping information, job status, and other important metadata.</p>
     */
    inline void SetSubJobMetadata(const Aws::Vector<JobMetadata>& value) { m_subJobMetadata = value; }

    /**
     * <p>Information about a specific job part (in the case of an export job),
     * including shipping information, job status, and other important metadata.</p>
     */
    inline void SetSubJobMetadata(Aws::Vector<JobMetadata>&& value) { m_subJobMetadata = std::move(value); }

    /**
     * <p>Information about a specific job part (in the case of an export job),
     * including shipping information, job status, and other important metadata.</p>
     */
    inline DescribeJobResult& WithSubJobMetadata(const Aws::Vector<JobMetadata>& value) { SetSubJobMetadata(value); return *this;}

    /**
     * <p>Information about a specific job part (in the case of an export job),
     * including shipping information, job status, and other important metadata.</p>
     */
    inline DescribeJobResult& WithSubJobMetadata(Aws::Vector<JobMetadata>&& value) { SetSubJobMetadata(std::move(value)); return *this;}

    /**
     * <p>Information about a specific job part (in the case of an export job),
     * including shipping information, job status, and other important metadata.</p>
     */
    inline DescribeJobResult& AddSubJobMetadata(const JobMetadata& value) { m_subJobMetadata.push_back(value); return *this; }

    /**
     * <p>Information about a specific job part (in the case of an export job),
     * including shipping information, job status, and other important metadata.</p>
     */
    inline DescribeJobResult& AddSubJobMetadata(JobMetadata&& value) { m_subJobMetadata.push_back(std::move(value)); return *this; }

  private:

    JobMetadata m_jobMetadata;

    Aws::Vector<JobMetadata> m_subJobMetadata;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
