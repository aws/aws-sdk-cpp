/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/MaintenanceWindowRunCommandParameters.h>
#include <aws/ssm/model/MaintenanceWindowAutomationParameters.h>
#include <aws/ssm/model/MaintenanceWindowStepFunctionsParameters.h>
#include <aws/ssm/model/MaintenanceWindowLambdaParameters.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The parameters for task execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowTaskInvocationParameters">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindowTaskInvocationParameters
  {
  public:
    AWS_SSM_API MaintenanceWindowTaskInvocationParameters();
    AWS_SSM_API MaintenanceWindowTaskInvocationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowTaskInvocationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parameters for a <code>RUN_COMMAND</code> task type.</p>
     */
    inline const MaintenanceWindowRunCommandParameters& GetRunCommand() const{ return m_runCommand; }

    /**
     * <p>The parameters for a <code>RUN_COMMAND</code> task type.</p>
     */
    inline bool RunCommandHasBeenSet() const { return m_runCommandHasBeenSet; }

    /**
     * <p>The parameters for a <code>RUN_COMMAND</code> task type.</p>
     */
    inline void SetRunCommand(const MaintenanceWindowRunCommandParameters& value) { m_runCommandHasBeenSet = true; m_runCommand = value; }

    /**
     * <p>The parameters for a <code>RUN_COMMAND</code> task type.</p>
     */
    inline void SetRunCommand(MaintenanceWindowRunCommandParameters&& value) { m_runCommandHasBeenSet = true; m_runCommand = std::move(value); }

    /**
     * <p>The parameters for a <code>RUN_COMMAND</code> task type.</p>
     */
    inline MaintenanceWindowTaskInvocationParameters& WithRunCommand(const MaintenanceWindowRunCommandParameters& value) { SetRunCommand(value); return *this;}

    /**
     * <p>The parameters for a <code>RUN_COMMAND</code> task type.</p>
     */
    inline MaintenanceWindowTaskInvocationParameters& WithRunCommand(MaintenanceWindowRunCommandParameters&& value) { SetRunCommand(std::move(value)); return *this;}


    /**
     * <p>The parameters for an <code>AUTOMATION</code> task type.</p>
     */
    inline const MaintenanceWindowAutomationParameters& GetAutomation() const{ return m_automation; }

    /**
     * <p>The parameters for an <code>AUTOMATION</code> task type.</p>
     */
    inline bool AutomationHasBeenSet() const { return m_automationHasBeenSet; }

    /**
     * <p>The parameters for an <code>AUTOMATION</code> task type.</p>
     */
    inline void SetAutomation(const MaintenanceWindowAutomationParameters& value) { m_automationHasBeenSet = true; m_automation = value; }

    /**
     * <p>The parameters for an <code>AUTOMATION</code> task type.</p>
     */
    inline void SetAutomation(MaintenanceWindowAutomationParameters&& value) { m_automationHasBeenSet = true; m_automation = std::move(value); }

    /**
     * <p>The parameters for an <code>AUTOMATION</code> task type.</p>
     */
    inline MaintenanceWindowTaskInvocationParameters& WithAutomation(const MaintenanceWindowAutomationParameters& value) { SetAutomation(value); return *this;}

    /**
     * <p>The parameters for an <code>AUTOMATION</code> task type.</p>
     */
    inline MaintenanceWindowTaskInvocationParameters& WithAutomation(MaintenanceWindowAutomationParameters&& value) { SetAutomation(std::move(value)); return *this;}


    /**
     * <p>The parameters for a <code>STEP_FUNCTIONS</code> task type.</p>
     */
    inline const MaintenanceWindowStepFunctionsParameters& GetStepFunctions() const{ return m_stepFunctions; }

    /**
     * <p>The parameters for a <code>STEP_FUNCTIONS</code> task type.</p>
     */
    inline bool StepFunctionsHasBeenSet() const { return m_stepFunctionsHasBeenSet; }

    /**
     * <p>The parameters for a <code>STEP_FUNCTIONS</code> task type.</p>
     */
    inline void SetStepFunctions(const MaintenanceWindowStepFunctionsParameters& value) { m_stepFunctionsHasBeenSet = true; m_stepFunctions = value; }

    /**
     * <p>The parameters for a <code>STEP_FUNCTIONS</code> task type.</p>
     */
    inline void SetStepFunctions(MaintenanceWindowStepFunctionsParameters&& value) { m_stepFunctionsHasBeenSet = true; m_stepFunctions = std::move(value); }

    /**
     * <p>The parameters for a <code>STEP_FUNCTIONS</code> task type.</p>
     */
    inline MaintenanceWindowTaskInvocationParameters& WithStepFunctions(const MaintenanceWindowStepFunctionsParameters& value) { SetStepFunctions(value); return *this;}

    /**
     * <p>The parameters for a <code>STEP_FUNCTIONS</code> task type.</p>
     */
    inline MaintenanceWindowTaskInvocationParameters& WithStepFunctions(MaintenanceWindowStepFunctionsParameters&& value) { SetStepFunctions(std::move(value)); return *this;}


    /**
     * <p>The parameters for a <code>LAMBDA</code> task type.</p>
     */
    inline const MaintenanceWindowLambdaParameters& GetLambda() const{ return m_lambda; }

    /**
     * <p>The parameters for a <code>LAMBDA</code> task type.</p>
     */
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }

    /**
     * <p>The parameters for a <code>LAMBDA</code> task type.</p>
     */
    inline void SetLambda(const MaintenanceWindowLambdaParameters& value) { m_lambdaHasBeenSet = true; m_lambda = value; }

    /**
     * <p>The parameters for a <code>LAMBDA</code> task type.</p>
     */
    inline void SetLambda(MaintenanceWindowLambdaParameters&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }

    /**
     * <p>The parameters for a <code>LAMBDA</code> task type.</p>
     */
    inline MaintenanceWindowTaskInvocationParameters& WithLambda(const MaintenanceWindowLambdaParameters& value) { SetLambda(value); return *this;}

    /**
     * <p>The parameters for a <code>LAMBDA</code> task type.</p>
     */
    inline MaintenanceWindowTaskInvocationParameters& WithLambda(MaintenanceWindowLambdaParameters&& value) { SetLambda(std::move(value)); return *this;}

  private:

    MaintenanceWindowRunCommandParameters m_runCommand;
    bool m_runCommandHasBeenSet = false;

    MaintenanceWindowAutomationParameters m_automation;
    bool m_automationHasBeenSet = false;

    MaintenanceWindowStepFunctionsParameters m_stepFunctions;
    bool m_stepFunctionsHasBeenSet = false;

    MaintenanceWindowLambdaParameters m_lambda;
    bool m_lambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
