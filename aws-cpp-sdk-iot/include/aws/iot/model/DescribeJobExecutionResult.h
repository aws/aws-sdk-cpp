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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/JobExecution.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API DescribeJobExecutionResult
  {
  public:
    DescribeJobExecutionResult();
    DescribeJobExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeJobExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the job execution.</p>
     */
    inline const JobExecution& GetExecution() const{ return m_execution; }

    /**
     * <p>Information about the job execution.</p>
     */
    inline void SetExecution(const JobExecution& value) { m_execution = value; }

    /**
     * <p>Information about the job execution.</p>
     */
    inline void SetExecution(JobExecution&& value) { m_execution = std::move(value); }

    /**
     * <p>Information about the job execution.</p>
     */
    inline DescribeJobExecutionResult& WithExecution(const JobExecution& value) { SetExecution(value); return *this;}

    /**
     * <p>Information about the job execution.</p>
     */
    inline DescribeJobExecutionResult& WithExecution(JobExecution&& value) { SetExecution(std::move(value)); return *this;}

  private:

    JobExecution m_execution;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
