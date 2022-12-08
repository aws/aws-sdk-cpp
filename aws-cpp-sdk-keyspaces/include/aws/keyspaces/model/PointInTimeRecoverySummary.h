/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/PointInTimeRecoveryStatus.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>The point-in-time recovery status of the specified table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/PointInTimeRecoverySummary">AWS
   * API Reference</a></p>
   */
  class PointInTimeRecoverySummary
  {
  public:
    AWS_KEYSPACES_API PointInTimeRecoverySummary();
    AWS_KEYSPACES_API PointInTimeRecoverySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API PointInTimeRecoverySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Shows if point-in-time recovery is enabled or disabled for the specified
     * table.</p>
     */
    inline const PointInTimeRecoveryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Shows if point-in-time recovery is enabled or disabled for the specified
     * table.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Shows if point-in-time recovery is enabled or disabled for the specified
     * table.</p>
     */
    inline void SetStatus(const PointInTimeRecoveryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Shows if point-in-time recovery is enabled or disabled for the specified
     * table.</p>
     */
    inline void SetStatus(PointInTimeRecoveryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Shows if point-in-time recovery is enabled or disabled for the specified
     * table.</p>
     */
    inline PointInTimeRecoverySummary& WithStatus(const PointInTimeRecoveryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Shows if point-in-time recovery is enabled or disabled for the specified
     * table.</p>
     */
    inline PointInTimeRecoverySummary& WithStatus(PointInTimeRecoveryStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies the earliest possible restore point of the table in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetEarliestRestorableTimestamp() const{ return m_earliestRestorableTimestamp; }

    /**
     * <p>Specifies the earliest possible restore point of the table in ISO 8601
     * format.</p>
     */
    inline bool EarliestRestorableTimestampHasBeenSet() const { return m_earliestRestorableTimestampHasBeenSet; }

    /**
     * <p>Specifies the earliest possible restore point of the table in ISO 8601
     * format.</p>
     */
    inline void SetEarliestRestorableTimestamp(const Aws::Utils::DateTime& value) { m_earliestRestorableTimestampHasBeenSet = true; m_earliestRestorableTimestamp = value; }

    /**
     * <p>Specifies the earliest possible restore point of the table in ISO 8601
     * format.</p>
     */
    inline void SetEarliestRestorableTimestamp(Aws::Utils::DateTime&& value) { m_earliestRestorableTimestampHasBeenSet = true; m_earliestRestorableTimestamp = std::move(value); }

    /**
     * <p>Specifies the earliest possible restore point of the table in ISO 8601
     * format.</p>
     */
    inline PointInTimeRecoverySummary& WithEarliestRestorableTimestamp(const Aws::Utils::DateTime& value) { SetEarliestRestorableTimestamp(value); return *this;}

    /**
     * <p>Specifies the earliest possible restore point of the table in ISO 8601
     * format.</p>
     */
    inline PointInTimeRecoverySummary& WithEarliestRestorableTimestamp(Aws::Utils::DateTime&& value) { SetEarliestRestorableTimestamp(std::move(value)); return *this;}

  private:

    PointInTimeRecoveryStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_earliestRestorableTimestamp;
    bool m_earliestRestorableTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
