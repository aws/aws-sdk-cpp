/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/WorkflowStepType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/ExecutionError.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Specifies the following details for the step: error (if any), outputs (if
   * any), and the step type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ExecutionStepResult">AWS
   * API Reference</a></p>
   */
  class ExecutionStepResult
  {
  public:
    AWS_TRANSFER_API ExecutionStepResult();
    AWS_TRANSFER_API ExecutionStepResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ExecutionStepResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One of the available step types.</p> <ul> <li> <p> <i>COPY</i>: Copy the file
     * to another location.</p> </li> <li> <p> <i>CUSTOM</i>: Perform a custom step
     * with an Lambda function target.</p> </li> <li> <p> <i>DELETE</i>: Delete the
     * file.</p> </li> <li> <p> <i>TAG</i>: Add a tag to the file.</p> </li> </ul>
     */
    inline const WorkflowStepType& GetStepType() const{ return m_stepType; }

    /**
     * <p>One of the available step types.</p> <ul> <li> <p> <i>COPY</i>: Copy the file
     * to another location.</p> </li> <li> <p> <i>CUSTOM</i>: Perform a custom step
     * with an Lambda function target.</p> </li> <li> <p> <i>DELETE</i>: Delete the
     * file.</p> </li> <li> <p> <i>TAG</i>: Add a tag to the file.</p> </li> </ul>
     */
    inline bool StepTypeHasBeenSet() const { return m_stepTypeHasBeenSet; }

    /**
     * <p>One of the available step types.</p> <ul> <li> <p> <i>COPY</i>: Copy the file
     * to another location.</p> </li> <li> <p> <i>CUSTOM</i>: Perform a custom step
     * with an Lambda function target.</p> </li> <li> <p> <i>DELETE</i>: Delete the
     * file.</p> </li> <li> <p> <i>TAG</i>: Add a tag to the file.</p> </li> </ul>
     */
    inline void SetStepType(const WorkflowStepType& value) { m_stepTypeHasBeenSet = true; m_stepType = value; }

    /**
     * <p>One of the available step types.</p> <ul> <li> <p> <i>COPY</i>: Copy the file
     * to another location.</p> </li> <li> <p> <i>CUSTOM</i>: Perform a custom step
     * with an Lambda function target.</p> </li> <li> <p> <i>DELETE</i>: Delete the
     * file.</p> </li> <li> <p> <i>TAG</i>: Add a tag to the file.</p> </li> </ul>
     */
    inline void SetStepType(WorkflowStepType&& value) { m_stepTypeHasBeenSet = true; m_stepType = std::move(value); }

    /**
     * <p>One of the available step types.</p> <ul> <li> <p> <i>COPY</i>: Copy the file
     * to another location.</p> </li> <li> <p> <i>CUSTOM</i>: Perform a custom step
     * with an Lambda function target.</p> </li> <li> <p> <i>DELETE</i>: Delete the
     * file.</p> </li> <li> <p> <i>TAG</i>: Add a tag to the file.</p> </li> </ul>
     */
    inline ExecutionStepResult& WithStepType(const WorkflowStepType& value) { SetStepType(value); return *this;}

    /**
     * <p>One of the available step types.</p> <ul> <li> <p> <i>COPY</i>: Copy the file
     * to another location.</p> </li> <li> <p> <i>CUSTOM</i>: Perform a custom step
     * with an Lambda function target.</p> </li> <li> <p> <i>DELETE</i>: Delete the
     * file.</p> </li> <li> <p> <i>TAG</i>: Add a tag to the file.</p> </li> </ul>
     */
    inline ExecutionStepResult& WithStepType(WorkflowStepType&& value) { SetStepType(std::move(value)); return *this;}


    /**
     * <p>The values for the key/value pair applied as a tag to the file. Only
     * applicable if the step type is <code>TAG</code>.</p>
     */
    inline const Aws::String& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The values for the key/value pair applied as a tag to the file. Only
     * applicable if the step type is <code>TAG</code>.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>The values for the key/value pair applied as a tag to the file. Only
     * applicable if the step type is <code>TAG</code>.</p>
     */
    inline void SetOutputs(const Aws::String& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>The values for the key/value pair applied as a tag to the file. Only
     * applicable if the step type is <code>TAG</code>.</p>
     */
    inline void SetOutputs(Aws::String&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>The values for the key/value pair applied as a tag to the file. Only
     * applicable if the step type is <code>TAG</code>.</p>
     */
    inline void SetOutputs(const char* value) { m_outputsHasBeenSet = true; m_outputs.assign(value); }

    /**
     * <p>The values for the key/value pair applied as a tag to the file. Only
     * applicable if the step type is <code>TAG</code>.</p>
     */
    inline ExecutionStepResult& WithOutputs(const Aws::String& value) { SetOutputs(value); return *this;}

    /**
     * <p>The values for the key/value pair applied as a tag to the file. Only
     * applicable if the step type is <code>TAG</code>.</p>
     */
    inline ExecutionStepResult& WithOutputs(Aws::String&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The values for the key/value pair applied as a tag to the file. Only
     * applicable if the step type is <code>TAG</code>.</p>
     */
    inline ExecutionStepResult& WithOutputs(const char* value) { SetOutputs(value); return *this;}


    /**
     * <p>Specifies the details for an error, if it occurred during execution of the
     * specified workflow step.</p>
     */
    inline const ExecutionError& GetError() const{ return m_error; }

    /**
     * <p>Specifies the details for an error, if it occurred during execution of the
     * specified workflow step.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Specifies the details for an error, if it occurred during execution of the
     * specified workflow step.</p>
     */
    inline void SetError(const ExecutionError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Specifies the details for an error, if it occurred during execution of the
     * specified workflow step.</p>
     */
    inline void SetError(ExecutionError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Specifies the details for an error, if it occurred during execution of the
     * specified workflow step.</p>
     */
    inline ExecutionStepResult& WithError(const ExecutionError& value) { SetError(value); return *this;}

    /**
     * <p>Specifies the details for an error, if it occurred during execution of the
     * specified workflow step.</p>
     */
    inline ExecutionStepResult& WithError(ExecutionError&& value) { SetError(std::move(value)); return *this;}

  private:

    WorkflowStepType m_stepType;
    bool m_stepTypeHasBeenSet = false;

    Aws::String m_outputs;
    bool m_outputsHasBeenSet = false;

    ExecutionError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
