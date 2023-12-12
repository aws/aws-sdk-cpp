/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/Workflow.h>
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
namespace imagebuilder
{
namespace Model
{
  class GetWorkflowResult
  {
  public:
    AWS_IMAGEBUILDER_API GetWorkflowResult();
    AWS_IMAGEBUILDER_API GetWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The workflow resource specified in the request.</p>
     */
    inline const Workflow& GetWorkflow() const{ return m_workflow; }

    /**
     * <p>The workflow resource specified in the request.</p>
     */
    inline void SetWorkflow(const Workflow& value) { m_workflow = value; }

    /**
     * <p>The workflow resource specified in the request.</p>
     */
    inline void SetWorkflow(Workflow&& value) { m_workflow = std::move(value); }

    /**
     * <p>The workflow resource specified in the request.</p>
     */
    inline GetWorkflowResult& WithWorkflow(const Workflow& value) { SetWorkflow(value); return *this;}

    /**
     * <p>The workflow resource specified in the request.</p>
     */
    inline GetWorkflowResult& WithWorkflow(Workflow&& value) { SetWorkflow(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Workflow m_workflow;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
