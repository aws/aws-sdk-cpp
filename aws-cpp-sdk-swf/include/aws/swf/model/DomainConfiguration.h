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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{

  /**
   * <p>Contains the configuration settings of a domain.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DomainConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API DomainConfiguration
  {
  public:
    DomainConfiguration();
    DomainConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DomainConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The retention period for workflow executions in this domain.</p>
     */
    inline const Aws::String& GetWorkflowExecutionRetentionPeriodInDays() const{ return m_workflowExecutionRetentionPeriodInDays; }

    /**
     * <p>The retention period for workflow executions in this domain.</p>
     */
    inline bool WorkflowExecutionRetentionPeriodInDaysHasBeenSet() const { return m_workflowExecutionRetentionPeriodInDaysHasBeenSet; }

    /**
     * <p>The retention period for workflow executions in this domain.</p>
     */
    inline void SetWorkflowExecutionRetentionPeriodInDays(const Aws::String& value) { m_workflowExecutionRetentionPeriodInDaysHasBeenSet = true; m_workflowExecutionRetentionPeriodInDays = value; }

    /**
     * <p>The retention period for workflow executions in this domain.</p>
     */
    inline void SetWorkflowExecutionRetentionPeriodInDays(Aws::String&& value) { m_workflowExecutionRetentionPeriodInDaysHasBeenSet = true; m_workflowExecutionRetentionPeriodInDays = std::move(value); }

    /**
     * <p>The retention period for workflow executions in this domain.</p>
     */
    inline void SetWorkflowExecutionRetentionPeriodInDays(const char* value) { m_workflowExecutionRetentionPeriodInDaysHasBeenSet = true; m_workflowExecutionRetentionPeriodInDays.assign(value); }

    /**
     * <p>The retention period for workflow executions in this domain.</p>
     */
    inline DomainConfiguration& WithWorkflowExecutionRetentionPeriodInDays(const Aws::String& value) { SetWorkflowExecutionRetentionPeriodInDays(value); return *this;}

    /**
     * <p>The retention period for workflow executions in this domain.</p>
     */
    inline DomainConfiguration& WithWorkflowExecutionRetentionPeriodInDays(Aws::String&& value) { SetWorkflowExecutionRetentionPeriodInDays(std::move(value)); return *this;}

    /**
     * <p>The retention period for workflow executions in this domain.</p>
     */
    inline DomainConfiguration& WithWorkflowExecutionRetentionPeriodInDays(const char* value) { SetWorkflowExecutionRetentionPeriodInDays(value); return *this;}

  private:

    Aws::String m_workflowExecutionRetentionPeriodInDays;
    bool m_workflowExecutionRetentionPeriodInDaysHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
