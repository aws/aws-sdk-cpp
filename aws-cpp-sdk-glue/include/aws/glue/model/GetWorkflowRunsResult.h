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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/WorkflowRun.h>
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
  class AWS_GLUE_API GetWorkflowRunsResult
  {
  public:
    GetWorkflowRunsResult();
    GetWorkflowRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetWorkflowRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of workflow run metadata objects.</p>
     */
    inline const Aws::Vector<WorkflowRun>& GetRuns() const{ return m_runs; }

    /**
     * <p>A list of workflow run metadata objects.</p>
     */
    inline void SetRuns(const Aws::Vector<WorkflowRun>& value) { m_runs = value; }

    /**
     * <p>A list of workflow run metadata objects.</p>
     */
    inline void SetRuns(Aws::Vector<WorkflowRun>&& value) { m_runs = std::move(value); }

    /**
     * <p>A list of workflow run metadata objects.</p>
     */
    inline GetWorkflowRunsResult& WithRuns(const Aws::Vector<WorkflowRun>& value) { SetRuns(value); return *this;}

    /**
     * <p>A list of workflow run metadata objects.</p>
     */
    inline GetWorkflowRunsResult& WithRuns(Aws::Vector<WorkflowRun>&& value) { SetRuns(std::move(value)); return *this;}

    /**
     * <p>A list of workflow run metadata objects.</p>
     */
    inline GetWorkflowRunsResult& AddRuns(const WorkflowRun& value) { m_runs.push_back(value); return *this; }

    /**
     * <p>A list of workflow run metadata objects.</p>
     */
    inline GetWorkflowRunsResult& AddRuns(WorkflowRun&& value) { m_runs.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if not all requested workflow runs have been
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if not all requested workflow runs have been
     * returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if not all requested workflow runs have been
     * returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if not all requested workflow runs have been
     * returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if not all requested workflow runs have been
     * returned.</p>
     */
    inline GetWorkflowRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if not all requested workflow runs have been
     * returned.</p>
     */
    inline GetWorkflowRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if not all requested workflow runs have been
     * returned.</p>
     */
    inline GetWorkflowRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<WorkflowRun> m_runs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
