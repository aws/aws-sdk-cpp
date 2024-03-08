/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bcm-data-exports/model/ExecutionStatusCode.h>
#include <aws/bcm-data-exports/model/ExecutionStatusReason.h>
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
namespace BCMDataExports
{
namespace Model
{

  /**
   * <p>The status of the execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/ExecutionStatus">AWS
   * API Reference</a></p>
   */
  class ExecutionStatus
  {
  public:
    AWS_BCMDATAEXPORTS_API ExecutionStatus();
    AWS_BCMDATAEXPORTS_API ExecutionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API ExecutionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time when the execution was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const{ return m_completedAt; }

    /**
     * <p>The time when the execution was completed.</p>
     */
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }

    /**
     * <p>The time when the execution was completed.</p>
     */
    inline void SetCompletedAt(const Aws::Utils::DateTime& value) { m_completedAtHasBeenSet = true; m_completedAt = value; }

    /**
     * <p>The time when the execution was completed.</p>
     */
    inline void SetCompletedAt(Aws::Utils::DateTime&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::move(value); }

    /**
     * <p>The time when the execution was completed.</p>
     */
    inline ExecutionStatus& WithCompletedAt(const Aws::Utils::DateTime& value) { SetCompletedAt(value); return *this;}

    /**
     * <p>The time when the execution was completed.</p>
     */
    inline ExecutionStatus& WithCompletedAt(Aws::Utils::DateTime&& value) { SetCompletedAt(std::move(value)); return *this;}


    /**
     * <p>The time when the execution was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the execution was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the execution was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the execution was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the execution was created.</p>
     */
    inline ExecutionStatus& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the execution was created.</p>
     */
    inline ExecutionStatus& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time when the execution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time when the execution was last updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The time when the execution was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time when the execution was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time when the execution was last updated.</p>
     */
    inline ExecutionStatus& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time when the execution was last updated.</p>
     */
    inline ExecutionStatus& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The code for the status of the execution.</p>
     */
    inline const ExecutionStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The code for the status of the execution.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The code for the status of the execution.</p>
     */
    inline void SetStatusCode(const ExecutionStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The code for the status of the execution.</p>
     */
    inline void SetStatusCode(ExecutionStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The code for the status of the execution.</p>
     */
    inline ExecutionStatus& WithStatusCode(const ExecutionStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The code for the status of the execution.</p>
     */
    inline ExecutionStatus& WithStatusCode(ExecutionStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>The reason for the failed status.</p>
     */
    inline const ExecutionStatusReason& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the failed status.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason for the failed status.</p>
     */
    inline void SetStatusReason(const ExecutionStatusReason& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason for the failed status.</p>
     */
    inline void SetStatusReason(ExecutionStatusReason&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason for the failed status.</p>
     */
    inline ExecutionStatus& WithStatusReason(const ExecutionStatusReason& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the failed status.</p>
     */
    inline ExecutionStatus& WithStatusReason(ExecutionStatusReason&& value) { SetStatusReason(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_completedAt;
    bool m_completedAtHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    ExecutionStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    ExecutionStatusReason m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
