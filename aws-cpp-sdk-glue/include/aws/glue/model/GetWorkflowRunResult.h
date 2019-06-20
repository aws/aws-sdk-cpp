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
  class AWS_GLUE_API GetWorkflowRunResult
  {
  public:
    GetWorkflowRunResult();
    GetWorkflowRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetWorkflowRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested workflow run metadata.</p>
     */
    inline const WorkflowRun& GetRun() const{ return m_run; }

    /**
     * <p>The requested workflow run metadata.</p>
     */
    inline void SetRun(const WorkflowRun& value) { m_run = value; }

    /**
     * <p>The requested workflow run metadata.</p>
     */
    inline void SetRun(WorkflowRun&& value) { m_run = std::move(value); }

    /**
     * <p>The requested workflow run metadata.</p>
     */
    inline GetWorkflowRunResult& WithRun(const WorkflowRun& value) { SetRun(value); return *this;}

    /**
     * <p>The requested workflow run metadata.</p>
     */
    inline GetWorkflowRunResult& WithRun(WorkflowRun&& value) { SetRun(std::move(value)); return *this;}

  private:

    WorkflowRun m_run;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
