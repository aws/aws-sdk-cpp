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
   * <p>Set this period to specify how long your data is stored in the warm tier
   * before it is deleted. You can set this only if cold tier is
   * enabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/WarmTierRetentionPeriod">AWS
   * API Reference</a></p>
   */
  class WarmTierRetentionPeriod
  {
  public:
    AWS_IOTSITEWISE_API WarmTierRetentionPeriod();
    AWS_IOTSITEWISE_API WarmTierRetentionPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API WarmTierRetentionPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of days the data is stored in the warm tier.</p>
     */
    inline int GetNumberOfDays() const{ return m_numberOfDays; }

    /**
     * <p>The number of days the data is stored in the warm tier.</p>
     */
    inline bool NumberOfDaysHasBeenSet() const { return m_numberOfDaysHasBeenSet; }

    /**
     * <p>The number of days the data is stored in the warm tier.</p>
     */
    inline void SetNumberOfDays(int value) { m_numberOfDaysHasBeenSet = true; m_numberOfDays = value; }

    /**
     * <p>The number of days the data is stored in the warm tier.</p>
     */
    inline WarmTierRetentionPeriod& WithNumberOfDays(int value) { SetNumberOfDays(value); return *this;}


    /**
     * <p>If set to true, the data is stored indefinitely in the warm tier.</p>
     */
    inline bool GetUnlimited() const{ return m_unlimited; }

    /**
     * <p>If set to true, the data is stored indefinitely in the warm tier.</p>
     */
    inline bool UnlimitedHasBeenSet() const { return m_unlimitedHasBeenSet; }

    /**
     * <p>If set to true, the data is stored indefinitely in the warm tier.</p>
     */
    inline void SetUnlimited(bool value) { m_unlimitedHasBeenSet = true; m_unlimited = value; }

    /**
     * <p>If set to true, the data is stored indefinitely in the warm tier.</p>
     */
    inline WarmTierRetentionPeriod& WithUnlimited(bool value) { SetUnlimited(value); return *this;}

  private:

    int m_numberOfDays;
    bool m_numberOfDaysHasBeenSet = false;

    bool m_unlimited;
    bool m_unlimitedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
