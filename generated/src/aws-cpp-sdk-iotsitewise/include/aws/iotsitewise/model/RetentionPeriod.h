/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>The number of days your data is kept in the hot tier. By default, your data
   * is kept indefinitely in the hot tier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/RetentionPeriod">AWS
   * API Reference</a></p>
   */
  class RetentionPeriod
  {
  public:
    AWS_IOTSITEWISE_API RetentionPeriod() = default;
    AWS_IOTSITEWISE_API RetentionPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API RetentionPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of days that your data is kept.</p>  <p>If you specified a
     * value for this parameter, the <code>unlimited</code> parameter must be
     * <code>false</code>.</p> 
     */
    inline int GetNumberOfDays() const { return m_numberOfDays; }
    inline bool NumberOfDaysHasBeenSet() const { return m_numberOfDaysHasBeenSet; }
    inline void SetNumberOfDays(int value) { m_numberOfDaysHasBeenSet = true; m_numberOfDays = value; }
    inline RetentionPeriod& WithNumberOfDays(int value) { SetNumberOfDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, your data is kept indefinitely.</p>  <p>If configured to
     * <code>true</code>, you must not specify a value for the
     * <code>numberOfDays</code> parameter.</p> 
     */
    inline bool GetUnlimited() const { return m_unlimited; }
    inline bool UnlimitedHasBeenSet() const { return m_unlimitedHasBeenSet; }
    inline void SetUnlimited(bool value) { m_unlimitedHasBeenSet = true; m_unlimited = value; }
    inline RetentionPeriod& WithUnlimited(bool value) { SetUnlimited(value); return *this;}
    ///@}
  private:

    int m_numberOfDays{0};
    bool m_numberOfDaysHasBeenSet = false;

    bool m_unlimited{false};
    bool m_unlimitedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
