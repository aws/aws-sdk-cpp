/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetAutomationExecutionRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetAutomationExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAutomationExecution"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by StartAutomationExecution when the execution of an
     * Automation runbook is initiated.</p>
     */
    inline const Aws::String& GetAutomationExecutionId() const{ return m_automationExecutionId; }

    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by StartAutomationExecution when the execution of an
     * Automation runbook is initiated.</p>
     */
    inline bool AutomationExecutionIdHasBeenSet() const { return m_automationExecutionIdHasBeenSet; }

    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by StartAutomationExecution when the execution of an
     * Automation runbook is initiated.</p>
     */
    inline void SetAutomationExecutionId(const Aws::String& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = value; }

    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by StartAutomationExecution when the execution of an
     * Automation runbook is initiated.</p>
     */
    inline void SetAutomationExecutionId(Aws::String&& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = std::move(value); }

    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by StartAutomationExecution when the execution of an
     * Automation runbook is initiated.</p>
     */
    inline void SetAutomationExecutionId(const char* value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId.assign(value); }

    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by StartAutomationExecution when the execution of an
     * Automation runbook is initiated.</p>
     */
    inline GetAutomationExecutionRequest& WithAutomationExecutionId(const Aws::String& value) { SetAutomationExecutionId(value); return *this;}

    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by StartAutomationExecution when the execution of an
     * Automation runbook is initiated.</p>
     */
    inline GetAutomationExecutionRequest& WithAutomationExecutionId(Aws::String&& value) { SetAutomationExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by StartAutomationExecution when the execution of an
     * Automation runbook is initiated.</p>
     */
    inline GetAutomationExecutionRequest& WithAutomationExecutionId(const char* value) { SetAutomationExecutionId(value); return *this;}

  private:

    Aws::String m_automationExecutionId;
    bool m_automationExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
