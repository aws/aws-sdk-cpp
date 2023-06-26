/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/WorkflowRun.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetWorkflowRunResult
  {
  public:
    AWS_GLUE_API GetWorkflowRunResult();
    AWS_GLUE_API GetWorkflowRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetWorkflowRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetWorkflowRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetWorkflowRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetWorkflowRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    WorkflowRun m_run;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
