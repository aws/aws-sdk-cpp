/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/StopType.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class StopAutomationExecutionRequest : public SSMRequest
  {
  public:
    AWS_SSM_API StopAutomationExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopAutomationExecution"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The execution ID of the Automation to stop.</p>
     */
    inline const Aws::String& GetAutomationExecutionId() const{ return m_automationExecutionId; }

    /**
     * <p>The execution ID of the Automation to stop.</p>
     */
    inline bool AutomationExecutionIdHasBeenSet() const { return m_automationExecutionIdHasBeenSet; }

    /**
     * <p>The execution ID of the Automation to stop.</p>
     */
    inline void SetAutomationExecutionId(const Aws::String& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = value; }

    /**
     * <p>The execution ID of the Automation to stop.</p>
     */
    inline void SetAutomationExecutionId(Aws::String&& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = std::move(value); }

    /**
     * <p>The execution ID of the Automation to stop.</p>
     */
    inline void SetAutomationExecutionId(const char* value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId.assign(value); }

    /**
     * <p>The execution ID of the Automation to stop.</p>
     */
    inline StopAutomationExecutionRequest& WithAutomationExecutionId(const Aws::String& value) { SetAutomationExecutionId(value); return *this;}

    /**
     * <p>The execution ID of the Automation to stop.</p>
     */
    inline StopAutomationExecutionRequest& WithAutomationExecutionId(Aws::String&& value) { SetAutomationExecutionId(std::move(value)); return *this;}

    /**
     * <p>The execution ID of the Automation to stop.</p>
     */
    inline StopAutomationExecutionRequest& WithAutomationExecutionId(const char* value) { SetAutomationExecutionId(value); return *this;}


    /**
     * <p>The stop request type. Valid types include the following: Cancel and
     * Complete. The default type is Cancel.</p>
     */
    inline const StopType& GetType() const{ return m_type; }

    /**
     * <p>The stop request type. Valid types include the following: Cancel and
     * Complete. The default type is Cancel.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The stop request type. Valid types include the following: Cancel and
     * Complete. The default type is Cancel.</p>
     */
    inline void SetType(const StopType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The stop request type. Valid types include the following: Cancel and
     * Complete. The default type is Cancel.</p>
     */
    inline void SetType(StopType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The stop request type. Valid types include the following: Cancel and
     * Complete. The default type is Cancel.</p>
     */
    inline StopAutomationExecutionRequest& WithType(const StopType& value) { SetType(value); return *this;}

    /**
     * <p>The stop request type. Valid types include the following: Cancel and
     * Complete. The default type is Cancel.</p>
     */
    inline StopAutomationExecutionRequest& WithType(StopType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_automationExecutionId;
    bool m_automationExecutionIdHasBeenSet = false;

    StopType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
