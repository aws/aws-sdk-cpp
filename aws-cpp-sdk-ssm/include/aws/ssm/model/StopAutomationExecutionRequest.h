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
  class AWS_SSM_API StopAutomationExecutionRequest : public SSMRequest
  {
  public:
    StopAutomationExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopAutomationExecution"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_automationExecutionIdHasBeenSet;

    StopType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
