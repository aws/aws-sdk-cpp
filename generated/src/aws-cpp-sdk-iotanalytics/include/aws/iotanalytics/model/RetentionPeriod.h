/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>

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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>How long, in days, message data is kept.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/RetentionPeriod">AWS
   * API Reference</a></p>
   */
  class RetentionPeriod
  {
  public:
    AWS_IOTANALYTICS_API RetentionPeriod() = default;
    AWS_IOTANALYTICS_API RetentionPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API RetentionPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If true, message data is kept indefinitely.</p>
     */
    inline bool GetUnlimited() const { return m_unlimited; }
    inline bool UnlimitedHasBeenSet() const { return m_unlimitedHasBeenSet; }
    inline void SetUnlimited(bool value) { m_unlimitedHasBeenSet = true; m_unlimited = value; }
    inline RetentionPeriod& WithUnlimited(bool value) { SetUnlimited(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that message data is kept. The <code>unlimited</code>
     * parameter must be false.</p>
     */
    inline int GetNumberOfDays() const { return m_numberOfDays; }
    inline bool NumberOfDaysHasBeenSet() const { return m_numberOfDaysHasBeenSet; }
    inline void SetNumberOfDays(int value) { m_numberOfDaysHasBeenSet = true; m_numberOfDays = value; }
    inline RetentionPeriod& WithNumberOfDays(int value) { SetNumberOfDays(value); return *this;}
    ///@}
  private:

    bool m_unlimited{false};
    bool m_unlimitedHasBeenSet = false;

    int m_numberOfDays{0};
    bool m_numberOfDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
