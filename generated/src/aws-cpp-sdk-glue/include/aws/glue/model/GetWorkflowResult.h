/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Workflow.h>
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
  class GetWorkflowResult
  {
  public:
    AWS_GLUE_API GetWorkflowResult();
    AWS_GLUE_API GetWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The resource metadata for the workflow.</p>
     */
    inline const Workflow& GetWorkflow() const{ return m_workflow; }

    /**
     * <p>The resource metadata for the workflow.</p>
     */
    inline void SetWorkflow(const Workflow& value) { m_workflow = value; }

    /**
     * <p>The resource metadata for the workflow.</p>
     */
    inline void SetWorkflow(Workflow&& value) { m_workflow = std::move(value); }

    /**
     * <p>The resource metadata for the workflow.</p>
     */
    inline GetWorkflowResult& WithWorkflow(const Workflow& value) { SetWorkflow(value); return *this;}

    /**
     * <p>The resource metadata for the workflow.</p>
     */
    inline GetWorkflowResult& WithWorkflow(Workflow&& value) { SetWorkflow(std::move(value)); return *this;}

  private:

    Workflow m_workflow;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
