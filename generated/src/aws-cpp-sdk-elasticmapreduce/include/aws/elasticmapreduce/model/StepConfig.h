/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ActionOnFailure.h>
#include <aws/elasticmapreduce/model/HadoopJarStepConfig.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Specification for a cluster (job flow) step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StepConfig">AWS
   * API Reference</a></p>
   */
  class StepConfig
  {
  public:
    AWS_EMR_API StepConfig();
    AWS_EMR_API StepConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API StepConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline StepConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline StepConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline StepConfig& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The action to take when the step fails. Use one of the following values:</p>
     * <ul> <li> <p> <code>TERMINATE_CLUSTER</code> - Shuts down the cluster.</p> </li>
     * <li> <p> <code>CANCEL_AND_WAIT</code> - Cancels any pending steps and returns
     * the cluster to the <code>WAITING</code> state.</p> </li> <li> <p>
     * <code>CONTINUE</code> - Continues to the next step in the queue.</p> </li> <li>
     * <p> <code>TERMINATE_JOB_FLOW</code> - Shuts down the cluster.
     * <code>TERMINATE_JOB_FLOW</code> is provided for backward compatibility. We
     * recommend using <code>TERMINATE_CLUSTER</code> instead.</p> </li> </ul> <p>If a
     * cluster's <code>StepConcurrencyLevel</code> is greater than <code>1</code>, do
     * not use <code>AddJobFlowSteps</code> to submit a step with this parameter set to
     * <code>CANCEL_AND_WAIT</code> or <code>TERMINATE_CLUSTER</code>. The step is not
     * submitted and the action fails with a message that the
     * <code>ActionOnFailure</code> setting is not valid.</p> <p>If you change a
     * cluster's <code>StepConcurrencyLevel</code> to be greater than 1 while a step is
     * running, the <code>ActionOnFailure</code> parameter may not behave as you
     * expect. In this case, for a step that fails with this parameter set to
     * <code>CANCEL_AND_WAIT</code>, pending steps and the running step are not
     * canceled; for a step that fails with this parameter set to
     * <code>TERMINATE_CLUSTER</code>, the cluster does not terminate.</p>
     */
    inline const ActionOnFailure& GetActionOnFailure() const{ return m_actionOnFailure; }

    /**
     * <p>The action to take when the step fails. Use one of the following values:</p>
     * <ul> <li> <p> <code>TERMINATE_CLUSTER</code> - Shuts down the cluster.</p> </li>
     * <li> <p> <code>CANCEL_AND_WAIT</code> - Cancels any pending steps and returns
     * the cluster to the <code>WAITING</code> state.</p> </li> <li> <p>
     * <code>CONTINUE</code> - Continues to the next step in the queue.</p> </li> <li>
     * <p> <code>TERMINATE_JOB_FLOW</code> - Shuts down the cluster.
     * <code>TERMINATE_JOB_FLOW</code> is provided for backward compatibility. We
     * recommend using <code>TERMINATE_CLUSTER</code> instead.</p> </li> </ul> <p>If a
     * cluster's <code>StepConcurrencyLevel</code> is greater than <code>1</code>, do
     * not use <code>AddJobFlowSteps</code> to submit a step with this parameter set to
     * <code>CANCEL_AND_WAIT</code> or <code>TERMINATE_CLUSTER</code>. The step is not
     * submitted and the action fails with a message that the
     * <code>ActionOnFailure</code> setting is not valid.</p> <p>If you change a
     * cluster's <code>StepConcurrencyLevel</code> to be greater than 1 while a step is
     * running, the <code>ActionOnFailure</code> parameter may not behave as you
     * expect. In this case, for a step that fails with this parameter set to
     * <code>CANCEL_AND_WAIT</code>, pending steps and the running step are not
     * canceled; for a step that fails with this parameter set to
     * <code>TERMINATE_CLUSTER</code>, the cluster does not terminate.</p>
     */
    inline bool ActionOnFailureHasBeenSet() const { return m_actionOnFailureHasBeenSet; }

    /**
     * <p>The action to take when the step fails. Use one of the following values:</p>
     * <ul> <li> <p> <code>TERMINATE_CLUSTER</code> - Shuts down the cluster.</p> </li>
     * <li> <p> <code>CANCEL_AND_WAIT</code> - Cancels any pending steps and returns
     * the cluster to the <code>WAITING</code> state.</p> </li> <li> <p>
     * <code>CONTINUE</code> - Continues to the next step in the queue.</p> </li> <li>
     * <p> <code>TERMINATE_JOB_FLOW</code> - Shuts down the cluster.
     * <code>TERMINATE_JOB_FLOW</code> is provided for backward compatibility. We
     * recommend using <code>TERMINATE_CLUSTER</code> instead.</p> </li> </ul> <p>If a
     * cluster's <code>StepConcurrencyLevel</code> is greater than <code>1</code>, do
     * not use <code>AddJobFlowSteps</code> to submit a step with this parameter set to
     * <code>CANCEL_AND_WAIT</code> or <code>TERMINATE_CLUSTER</code>. The step is not
     * submitted and the action fails with a message that the
     * <code>ActionOnFailure</code> setting is not valid.</p> <p>If you change a
     * cluster's <code>StepConcurrencyLevel</code> to be greater than 1 while a step is
     * running, the <code>ActionOnFailure</code> parameter may not behave as you
     * expect. In this case, for a step that fails with this parameter set to
     * <code>CANCEL_AND_WAIT</code>, pending steps and the running step are not
     * canceled; for a step that fails with this parameter set to
     * <code>TERMINATE_CLUSTER</code>, the cluster does not terminate.</p>
     */
    inline void SetActionOnFailure(const ActionOnFailure& value) { m_actionOnFailureHasBeenSet = true; m_actionOnFailure = value; }

    /**
     * <p>The action to take when the step fails. Use one of the following values:</p>
     * <ul> <li> <p> <code>TERMINATE_CLUSTER</code> - Shuts down the cluster.</p> </li>
     * <li> <p> <code>CANCEL_AND_WAIT</code> - Cancels any pending steps and returns
     * the cluster to the <code>WAITING</code> state.</p> </li> <li> <p>
     * <code>CONTINUE</code> - Continues to the next step in the queue.</p> </li> <li>
     * <p> <code>TERMINATE_JOB_FLOW</code> - Shuts down the cluster.
     * <code>TERMINATE_JOB_FLOW</code> is provided for backward compatibility. We
     * recommend using <code>TERMINATE_CLUSTER</code> instead.</p> </li> </ul> <p>If a
     * cluster's <code>StepConcurrencyLevel</code> is greater than <code>1</code>, do
     * not use <code>AddJobFlowSteps</code> to submit a step with this parameter set to
     * <code>CANCEL_AND_WAIT</code> or <code>TERMINATE_CLUSTER</code>. The step is not
     * submitted and the action fails with a message that the
     * <code>ActionOnFailure</code> setting is not valid.</p> <p>If you change a
     * cluster's <code>StepConcurrencyLevel</code> to be greater than 1 while a step is
     * running, the <code>ActionOnFailure</code> parameter may not behave as you
     * expect. In this case, for a step that fails with this parameter set to
     * <code>CANCEL_AND_WAIT</code>, pending steps and the running step are not
     * canceled; for a step that fails with this parameter set to
     * <code>TERMINATE_CLUSTER</code>, the cluster does not terminate.</p>
     */
    inline void SetActionOnFailure(ActionOnFailure&& value) { m_actionOnFailureHasBeenSet = true; m_actionOnFailure = std::move(value); }

    /**
     * <p>The action to take when the step fails. Use one of the following values:</p>
     * <ul> <li> <p> <code>TERMINATE_CLUSTER</code> - Shuts down the cluster.</p> </li>
     * <li> <p> <code>CANCEL_AND_WAIT</code> - Cancels any pending steps and returns
     * the cluster to the <code>WAITING</code> state.</p> </li> <li> <p>
     * <code>CONTINUE</code> - Continues to the next step in the queue.</p> </li> <li>
     * <p> <code>TERMINATE_JOB_FLOW</code> - Shuts down the cluster.
     * <code>TERMINATE_JOB_FLOW</code> is provided for backward compatibility. We
     * recommend using <code>TERMINATE_CLUSTER</code> instead.</p> </li> </ul> <p>If a
     * cluster's <code>StepConcurrencyLevel</code> is greater than <code>1</code>, do
     * not use <code>AddJobFlowSteps</code> to submit a step with this parameter set to
     * <code>CANCEL_AND_WAIT</code> or <code>TERMINATE_CLUSTER</code>. The step is not
     * submitted and the action fails with a message that the
     * <code>ActionOnFailure</code> setting is not valid.</p> <p>If you change a
     * cluster's <code>StepConcurrencyLevel</code> to be greater than 1 while a step is
     * running, the <code>ActionOnFailure</code> parameter may not behave as you
     * expect. In this case, for a step that fails with this parameter set to
     * <code>CANCEL_AND_WAIT</code>, pending steps and the running step are not
     * canceled; for a step that fails with this parameter set to
     * <code>TERMINATE_CLUSTER</code>, the cluster does not terminate.</p>
     */
    inline StepConfig& WithActionOnFailure(const ActionOnFailure& value) { SetActionOnFailure(value); return *this;}

    /**
     * <p>The action to take when the step fails. Use one of the following values:</p>
     * <ul> <li> <p> <code>TERMINATE_CLUSTER</code> - Shuts down the cluster.</p> </li>
     * <li> <p> <code>CANCEL_AND_WAIT</code> - Cancels any pending steps and returns
     * the cluster to the <code>WAITING</code> state.</p> </li> <li> <p>
     * <code>CONTINUE</code> - Continues to the next step in the queue.</p> </li> <li>
     * <p> <code>TERMINATE_JOB_FLOW</code> - Shuts down the cluster.
     * <code>TERMINATE_JOB_FLOW</code> is provided for backward compatibility. We
     * recommend using <code>TERMINATE_CLUSTER</code> instead.</p> </li> </ul> <p>If a
     * cluster's <code>StepConcurrencyLevel</code> is greater than <code>1</code>, do
     * not use <code>AddJobFlowSteps</code> to submit a step with this parameter set to
     * <code>CANCEL_AND_WAIT</code> or <code>TERMINATE_CLUSTER</code>. The step is not
     * submitted and the action fails with a message that the
     * <code>ActionOnFailure</code> setting is not valid.</p> <p>If you change a
     * cluster's <code>StepConcurrencyLevel</code> to be greater than 1 while a step is
     * running, the <code>ActionOnFailure</code> parameter may not behave as you
     * expect. In this case, for a step that fails with this parameter set to
     * <code>CANCEL_AND_WAIT</code>, pending steps and the running step are not
     * canceled; for a step that fails with this parameter set to
     * <code>TERMINATE_CLUSTER</code>, the cluster does not terminate.</p>
     */
    inline StepConfig& WithActionOnFailure(ActionOnFailure&& value) { SetActionOnFailure(std::move(value)); return *this;}


    /**
     * <p>The JAR file used for the step.</p>
     */
    inline const HadoopJarStepConfig& GetHadoopJarStep() const{ return m_hadoopJarStep; }

    /**
     * <p>The JAR file used for the step.</p>
     */
    inline bool HadoopJarStepHasBeenSet() const { return m_hadoopJarStepHasBeenSet; }

    /**
     * <p>The JAR file used for the step.</p>
     */
    inline void SetHadoopJarStep(const HadoopJarStepConfig& value) { m_hadoopJarStepHasBeenSet = true; m_hadoopJarStep = value; }

    /**
     * <p>The JAR file used for the step.</p>
     */
    inline void SetHadoopJarStep(HadoopJarStepConfig&& value) { m_hadoopJarStepHasBeenSet = true; m_hadoopJarStep = std::move(value); }

    /**
     * <p>The JAR file used for the step.</p>
     */
    inline StepConfig& WithHadoopJarStep(const HadoopJarStepConfig& value) { SetHadoopJarStep(value); return *this;}

    /**
     * <p>The JAR file used for the step.</p>
     */
    inline StepConfig& WithHadoopJarStep(HadoopJarStepConfig&& value) { SetHadoopJarStep(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ActionOnFailure m_actionOnFailure;
    bool m_actionOnFailureHasBeenSet = false;

    HadoopJarStepConfig m_hadoopJarStep;
    bool m_hadoopJarStepHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
