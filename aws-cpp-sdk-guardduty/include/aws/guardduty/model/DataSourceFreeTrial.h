/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about which data sources are enabled for the GuardDuty
   * member account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DataSourceFreeTrial">AWS
   * API Reference</a></p>
   */
  class DataSourceFreeTrial
  {
  public:
    AWS_GUARDDUTY_API DataSourceFreeTrial();
    AWS_GUARDDUTY_API DataSourceFreeTrial(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DataSourceFreeTrial& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that specifies the number of days left to use each enabled data
     * source.</p>
     */
    inline int GetFreeTrialDaysRemaining() const{ return m_freeTrialDaysRemaining; }

    /**
     * <p>A value that specifies the number of days left to use each enabled data
     * source.</p>
     */
    inline bool FreeTrialDaysRemainingHasBeenSet() const { return m_freeTrialDaysRemainingHasBeenSet; }

    /**
     * <p>A value that specifies the number of days left to use each enabled data
     * source.</p>
     */
    inline void SetFreeTrialDaysRemaining(int value) { m_freeTrialDaysRemainingHasBeenSet = true; m_freeTrialDaysRemaining = value; }

    /**
     * <p>A value that specifies the number of days left to use each enabled data
     * source.</p>
     */
    inline DataSourceFreeTrial& WithFreeTrialDaysRemaining(int value) { SetFreeTrialDaysRemaining(value); return *this;}

  private:

    int m_freeTrialDaysRemaining;
    bool m_freeTrialDaysRemainingHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
