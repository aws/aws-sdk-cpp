/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API GetAutomationExecutionRequest : public SSMRequest
  {
  public:
    GetAutomationExecutionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by <code>StartAutomationExecution</code> when the
     * execution of an Automation document is initiated.</p>
     */
    inline const Aws::String& GetAutomationExecutionId() const{ return m_automationExecutionId; }

    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by <code>StartAutomationExecution</code> when the
     * execution of an Automation document is initiated.</p>
     */
    inline void SetAutomationExecutionId(const Aws::String& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = value; }

    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by <code>StartAutomationExecution</code> when the
     * execution of an Automation document is initiated.</p>
     */
    inline void SetAutomationExecutionId(Aws::String&& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = value; }

    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by <code>StartAutomationExecution</code> when the
     * execution of an Automation document is initiated.</p>
     */
    inline void SetAutomationExecutionId(const char* value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId.assign(value); }

    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by <code>StartAutomationExecution</code> when the
     * execution of an Automation document is initiated.</p>
     */
    inline GetAutomationExecutionRequest& WithAutomationExecutionId(const Aws::String& value) { SetAutomationExecutionId(value); return *this;}

    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by <code>StartAutomationExecution</code> when the
     * execution of an Automation document is initiated.</p>
     */
    inline GetAutomationExecutionRequest& WithAutomationExecutionId(Aws::String&& value) { SetAutomationExecutionId(value); return *this;}

    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by <code>StartAutomationExecution</code> when the
     * execution of an Automation document is initiated.</p>
     */
    inline GetAutomationExecutionRequest& WithAutomationExecutionId(const char* value) { SetAutomationExecutionId(value); return *this;}

  private:
    Aws::String m_automationExecutionId;
    bool m_automationExecutionIdHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
