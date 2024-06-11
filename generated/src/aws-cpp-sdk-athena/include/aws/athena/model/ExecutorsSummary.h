/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/ExecutorType.h>
#include <aws/athena/model/ExecutorState.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Contains summary information about an executor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ExecutorsSummary">AWS
   * API Reference</a></p>
   */
  class ExecutorsSummary
  {
  public:
    AWS_ATHENA_API ExecutorsSummary();
    AWS_ATHENA_API ExecutorsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ExecutorsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The UUID of the executor.</p>
     */
    inline const Aws::String& GetExecutorId() const{ return m_executorId; }
    inline bool ExecutorIdHasBeenSet() const { return m_executorIdHasBeenSet; }
    inline void SetExecutorId(const Aws::String& value) { m_executorIdHasBeenSet = true; m_executorId = value; }
    inline void SetExecutorId(Aws::String&& value) { m_executorIdHasBeenSet = true; m_executorId = std::move(value); }
    inline void SetExecutorId(const char* value) { m_executorIdHasBeenSet = true; m_executorId.assign(value); }
    inline ExecutorsSummary& WithExecutorId(const Aws::String& value) { SetExecutorId(value); return *this;}
    inline ExecutorsSummary& WithExecutorId(Aws::String&& value) { SetExecutorId(std::move(value)); return *this;}
    inline ExecutorsSummary& WithExecutorId(const char* value) { SetExecutorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of executor used for the application (<code>COORDINATOR</code>,
     * <code>GATEWAY</code>, or <code>WORKER</code>).</p>
     */
    inline const ExecutorType& GetExecutorType() const{ return m_executorType; }
    inline bool ExecutorTypeHasBeenSet() const { return m_executorTypeHasBeenSet; }
    inline void SetExecutorType(const ExecutorType& value) { m_executorTypeHasBeenSet = true; m_executorType = value; }
    inline void SetExecutorType(ExecutorType&& value) { m_executorTypeHasBeenSet = true; m_executorType = std::move(value); }
    inline ExecutorsSummary& WithExecutorType(const ExecutorType& value) { SetExecutorType(value); return *this;}
    inline ExecutorsSummary& WithExecutorType(ExecutorType&& value) { SetExecutorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the executor started.</p>
     */
    inline long long GetStartDateTime() const{ return m_startDateTime; }
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }
    inline void SetStartDateTime(long long value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }
    inline ExecutorsSummary& WithStartDateTime(long long value) { SetStartDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the executor was terminated.</p>
     */
    inline long long GetTerminationDateTime() const{ return m_terminationDateTime; }
    inline bool TerminationDateTimeHasBeenSet() const { return m_terminationDateTimeHasBeenSet; }
    inline void SetTerminationDateTime(long long value) { m_terminationDateTimeHasBeenSet = true; m_terminationDateTime = value; }
    inline ExecutorsSummary& WithTerminationDateTime(long long value) { SetTerminationDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The processing state of the executor. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The executor is being started,
     * including acquiring resources.</p> <p> <code>CREATED</code> - The executor has
     * been started.</p> <p> <code>REGISTERED</code> - The executor has been
     * registered.</p> <p> <code>TERMINATING</code> - The executor is in the process of
     * shutting down.</p> <p> <code>TERMINATED</code> - The executor is no longer
     * running.</p> <p> <code>FAILED</code> - Due to a failure, the executor is no
     * longer running.</p>
     */
    inline const ExecutorState& GetExecutorState() const{ return m_executorState; }
    inline bool ExecutorStateHasBeenSet() const { return m_executorStateHasBeenSet; }
    inline void SetExecutorState(const ExecutorState& value) { m_executorStateHasBeenSet = true; m_executorState = value; }
    inline void SetExecutorState(ExecutorState&& value) { m_executorStateHasBeenSet = true; m_executorState = std::move(value); }
    inline ExecutorsSummary& WithExecutorState(const ExecutorState& value) { SetExecutorState(value); return *this;}
    inline ExecutorsSummary& WithExecutorState(ExecutorState&& value) { SetExecutorState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The smallest unit of compute that a session can request from Athena. Size is
     * measured in data processing unit (DPU) values, a relative measure of processing
     * power.</p>
     */
    inline long long GetExecutorSize() const{ return m_executorSize; }
    inline bool ExecutorSizeHasBeenSet() const { return m_executorSizeHasBeenSet; }
    inline void SetExecutorSize(long long value) { m_executorSizeHasBeenSet = true; m_executorSize = value; }
    inline ExecutorsSummary& WithExecutorSize(long long value) { SetExecutorSize(value); return *this;}
    ///@}
  private:

    Aws::String m_executorId;
    bool m_executorIdHasBeenSet = false;

    ExecutorType m_executorType;
    bool m_executorTypeHasBeenSet = false;

    long long m_startDateTime;
    bool m_startDateTimeHasBeenSet = false;

    long long m_terminationDateTime;
    bool m_terminationDateTimeHasBeenSet = false;

    ExecutorState m_executorState;
    bool m_executorStateHasBeenSet = false;

    long long m_executorSize;
    bool m_executorSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
