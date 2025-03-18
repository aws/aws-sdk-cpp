/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the settings used to enable point in time recovery.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/PointInTimeRecoverySpecification">AWS
   * API Reference</a></p>
   */
  class PointInTimeRecoverySpecification
  {
  public:
    AWS_DYNAMODB_API PointInTimeRecoverySpecification() = default;
    AWS_DYNAMODB_API PointInTimeRecoverySpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API PointInTimeRecoverySpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether point in time recovery is enabled (true) or disabled
     * (false) on the table.</p>
     */
    inline bool GetPointInTimeRecoveryEnabled() const { return m_pointInTimeRecoveryEnabled; }
    inline bool PointInTimeRecoveryEnabledHasBeenSet() const { return m_pointInTimeRecoveryEnabledHasBeenSet; }
    inline void SetPointInTimeRecoveryEnabled(bool value) { m_pointInTimeRecoveryEnabledHasBeenSet = true; m_pointInTimeRecoveryEnabled = value; }
    inline PointInTimeRecoverySpecification& WithPointInTimeRecoveryEnabled(bool value) { SetPointInTimeRecoveryEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of preceding days for which continuous backups are taken and
     * maintained. Your table data is only recoverable to any point-in-time from within
     * the configured recovery period. This parameter is optional. If no value is
     * provided, the value will default to 35.</p>
     */
    inline int GetRecoveryPeriodInDays() const { return m_recoveryPeriodInDays; }
    inline bool RecoveryPeriodInDaysHasBeenSet() const { return m_recoveryPeriodInDaysHasBeenSet; }
    inline void SetRecoveryPeriodInDays(int value) { m_recoveryPeriodInDaysHasBeenSet = true; m_recoveryPeriodInDays = value; }
    inline PointInTimeRecoverySpecification& WithRecoveryPeriodInDays(int value) { SetRecoveryPeriodInDays(value); return *this;}
    ///@}
  private:

    bool m_pointInTimeRecoveryEnabled{false};
    bool m_pointInTimeRecoveryEnabledHasBeenSet = false;

    int m_recoveryPeriodInDays{0};
    bool m_recoveryPeriodInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
