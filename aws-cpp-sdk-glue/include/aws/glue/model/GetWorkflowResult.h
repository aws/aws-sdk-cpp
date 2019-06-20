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
  class AWS_GLUE_API GetWorkflowResult
  {
  public:
    GetWorkflowResult();
    GetWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
