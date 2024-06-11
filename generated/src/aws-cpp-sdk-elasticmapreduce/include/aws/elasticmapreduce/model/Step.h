/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/HadoopStepConfig.h>
#include <aws/elasticmapreduce/model/ActionOnFailure.h>
#include <aws/elasticmapreduce/model/StepStatus.h>
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
   * <p>This represents a step in a cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/Step">AWS
   * API Reference</a></p>
   */
  class Step
  {
  public:
    AWS_EMR_API Step();
    AWS_EMR_API Step(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Step& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the cluster step.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Step& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Step& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Step& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cluster step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Step& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Step& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Step& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Hadoop job configuration of the cluster step.</p>
     */
    inline const HadoopStepConfig& GetConfig() const{ return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    inline void SetConfig(const HadoopStepConfig& value) { m_configHasBeenSet = true; m_config = value; }
    inline void SetConfig(HadoopStepConfig&& value) { m_configHasBeenSet = true; m_config = std::move(value); }
    inline Step& WithConfig(const HadoopStepConfig& value) { SetConfig(value); return *this;}
    inline Step& WithConfig(HadoopStepConfig&& value) { SetConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when the cluster step fails. Possible values are
     * <code>TERMINATE_CLUSTER</code>, <code>CANCEL_AND_WAIT</code>, and
     * <code>CONTINUE</code>. <code>TERMINATE_JOB_FLOW</code> is provided for backward
     * compatibility. We recommend using <code>TERMINATE_CLUSTER</code> instead.</p>
     * <p>If a cluster's <code>StepConcurrencyLevel</code> is greater than
     * <code>1</code>, do not use <code>AddJobFlowSteps</code> to submit a step with
     * this parameter set to <code>CANCEL_AND_WAIT</code> or
     * <code>TERMINATE_CLUSTER</code>. The step is not submitted and the action fails
     * with a message that the <code>ActionOnFailure</code> setting is not valid.</p>
     * <p>If you change a cluster's <code>StepConcurrencyLevel</code> to be greater
     * than 1 while a step is running, the <code>ActionOnFailure</code> parameter may
     * not behave as you expect. In this case, for a step that fails with this
     * parameter set to <code>CANCEL_AND_WAIT</code>, pending steps and the running
     * step are not canceled; for a step that fails with this parameter set to
     * <code>TERMINATE_CLUSTER</code>, the cluster does not terminate.</p>
     */
    inline const ActionOnFailure& GetActionOnFailure() const{ return m_actionOnFailure; }
    inline bool ActionOnFailureHasBeenSet() const { return m_actionOnFailureHasBeenSet; }
    inline void SetActionOnFailure(const ActionOnFailure& value) { m_actionOnFailureHasBeenSet = true; m_actionOnFailure = value; }
    inline void SetActionOnFailure(ActionOnFailure&& value) { m_actionOnFailureHasBeenSet = true; m_actionOnFailure = std::move(value); }
    inline Step& WithActionOnFailure(const ActionOnFailure& value) { SetActionOnFailure(value); return *this;}
    inline Step& WithActionOnFailure(ActionOnFailure&& value) { SetActionOnFailure(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current execution status details of the cluster step.</p>
     */
    inline const StepStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StepStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StepStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Step& WithStatus(const StepStatus& value) { SetStatus(value); return *this;}
    inline Step& WithStatus(StepStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the runtime role for a step on the cluster.
     * The runtime role can be a cross-account IAM role. The runtime role ARN is a
     * combination of account ID, role name, and role type using the following format:
     * <code>arn:partition:service:region:account:resource</code>. </p> <p>For example,
     * <code>arn:aws:IAM::1234567890:role/ReadOnly</code> is a correctly formatted
     * runtime role ARN.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline Step& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline Step& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline Step& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    HadoopStepConfig m_config;
    bool m_configHasBeenSet = false;

    ActionOnFailure m_actionOnFailure;
    bool m_actionOnFailureHasBeenSet = false;

    StepStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
