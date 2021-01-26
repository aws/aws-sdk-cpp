/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ExecutionStatus.h>
#include <aws/appflow/model/ExecutionResult.h>
#include <aws/core/utils/DateTime.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> Specifies information about the past flow run instances for a given flow.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ExecutionRecord">AWS
   * API Reference</a></p>
   */
  class AWS_APPFLOW_API ExecutionRecord
  {
  public:
    ExecutionRecord();
    ExecutionRecord(Aws::Utils::Json::JsonView jsonValue);
    ExecutionRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline ExecutionRecord& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline ExecutionRecord& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p> Specifies the identifier of the given flow run. </p>
     */
    inline ExecutionRecord& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p> Specifies the flow run status and whether it is in progress, has completed
     * successfully, or has failed. </p>
     */
    inline const ExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }

    /**
     * <p> Specifies the flow run status and whether it is in progress, has completed
     * successfully, or has failed. </p>
     */
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }

    /**
     * <p> Specifies the flow run status and whether it is in progress, has completed
     * successfully, or has failed. </p>
     */
    inline void SetExecutionStatus(const ExecutionStatus& value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }

    /**
     * <p> Specifies the flow run status and whether it is in progress, has completed
     * successfully, or has failed. </p>
     */
    inline void SetExecutionStatus(ExecutionStatus&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = std::move(value); }

    /**
     * <p> Specifies the flow run status and whether it is in progress, has completed
     * successfully, or has failed. </p>
     */
    inline ExecutionRecord& WithExecutionStatus(const ExecutionStatus& value) { SetExecutionStatus(value); return *this;}

    /**
     * <p> Specifies the flow run status and whether it is in progress, has completed
     * successfully, or has failed. </p>
     */
    inline ExecutionRecord& WithExecutionStatus(ExecutionStatus&& value) { SetExecutionStatus(std::move(value)); return *this;}


    /**
     * <p> Describes the result of the given flow run. </p>
     */
    inline const ExecutionResult& GetExecutionResult() const{ return m_executionResult; }

    /**
     * <p> Describes the result of the given flow run. </p>
     */
    inline bool ExecutionResultHasBeenSet() const { return m_executionResultHasBeenSet; }

    /**
     * <p> Describes the result of the given flow run. </p>
     */
    inline void SetExecutionResult(const ExecutionResult& value) { m_executionResultHasBeenSet = true; m_executionResult = value; }

    /**
     * <p> Describes the result of the given flow run. </p>
     */
    inline void SetExecutionResult(ExecutionResult&& value) { m_executionResultHasBeenSet = true; m_executionResult = std::move(value); }

    /**
     * <p> Describes the result of the given flow run. </p>
     */
    inline ExecutionRecord& WithExecutionResult(const ExecutionResult& value) { SetExecutionResult(value); return *this;}

    /**
     * <p> Describes the result of the given flow run. </p>
     */
    inline ExecutionRecord& WithExecutionResult(ExecutionResult&& value) { SetExecutionResult(std::move(value)); return *this;}


    /**
     * <p> Specifies the start time of the flow run. </p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p> Specifies the start time of the flow run. </p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p> Specifies the start time of the flow run. </p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p> Specifies the start time of the flow run. </p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p> Specifies the start time of the flow run. </p>
     */
    inline ExecutionRecord& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p> Specifies the start time of the flow run. </p>
     */
    inline ExecutionRecord& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p> Specifies the time of the most recent update. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p> Specifies the time of the most recent update. </p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p> Specifies the time of the most recent update. </p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p> Specifies the time of the most recent update. </p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p> Specifies the time of the most recent update. </p>
     */
    inline ExecutionRecord& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p> Specifies the time of the most recent update. </p>
     */
    inline ExecutionRecord& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet;

    ExecutionStatus m_executionStatus;
    bool m_executionStatusHasBeenSet;

    ExecutionResult m_executionResult;
    bool m_executionResultHasBeenSet;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
