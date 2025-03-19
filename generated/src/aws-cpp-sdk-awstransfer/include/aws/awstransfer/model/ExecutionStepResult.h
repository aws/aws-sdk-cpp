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
    AWS_TRANSFER_API ExecutionStepResult() = default;
    AWS_TRANSFER_API ExecutionStepResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ExecutionStepResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One of the available step types.</p> <ul> <li> <p> <b> <code>COPY</code> </b>
     * - Copy the file to another location.</p> </li> <li> <p> <b> <code>CUSTOM</code>
     * </b> - Perform a custom step with an Lambda function target.</p> </li> <li> <p>
     * <b> <code>DECRYPT</code> </b> - Decrypt a file that was encrypted before it was
     * uploaded.</p> </li> <li> <p> <b> <code>DELETE</code> </b> - Delete the file.</p>
     * </li> <li> <p> <b> <code>TAG</code> </b> - Add a tag to the file.</p> </li>
     * </ul>
     */
    inline WorkflowStepType GetStepType() const { return m_stepType; }
    inline bool StepTypeHasBeenSet() const { return m_stepTypeHasBeenSet; }
    inline void SetStepType(WorkflowStepType value) { m_stepTypeHasBeenSet = true; m_stepType = value; }
    inline ExecutionStepResult& WithStepType(WorkflowStepType value) { SetStepType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values for the key/value pair applied as a tag to the file. Only
     * applicable if the step type is <code>TAG</code>.</p>
     */
    inline const Aws::String& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::String>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::String>
    ExecutionStepResult& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the details for an error, if it occurred during execution of the
     * specified workflow step.</p>
     */
    inline const ExecutionError& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ExecutionError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ExecutionError>
    ExecutionStepResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    WorkflowStepType m_stepType{WorkflowStepType::NOT_SET};
    bool m_stepTypeHasBeenSet = false;

    Aws::String m_outputs;
    bool m_outputsHasBeenSet = false;

    ExecutionError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
