/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/SuppressionUnit.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>If you are suppressing an anomaly temporariliy, this structure defines how
   * long the suppression period is to be.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/SuppressionPeriod">AWS
   * API Reference</a></p>
   */
  class SuppressionPeriod
  {
  public:
    AWS_CLOUDWATCHLOGS_API SuppressionPeriod();
    AWS_CLOUDWATCHLOGS_API SuppressionPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API SuppressionPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the number of seconds, minutes or hours to suppress this anomaly.
     * There is no maximum.</p>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>Specifies the number of seconds, minutes or hours to suppress this anomaly.
     * There is no maximum.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Specifies the number of seconds, minutes or hours to suppress this anomaly.
     * There is no maximum.</p>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Specifies the number of seconds, minutes or hours to suppress this anomaly.
     * There is no maximum.</p>
     */
    inline SuppressionPeriod& WithValue(int value) { SetValue(value); return *this;}


    /**
     * <p>Specifies whether the value of <code>value</code> is in seconds, minutes, or
     * hours.</p>
     */
    inline const SuppressionUnit& GetSuppressionUnit() const{ return m_suppressionUnit; }

    /**
     * <p>Specifies whether the value of <code>value</code> is in seconds, minutes, or
     * hours.</p>
     */
    inline bool SuppressionUnitHasBeenSet() const { return m_suppressionUnitHasBeenSet; }

    /**
     * <p>Specifies whether the value of <code>value</code> is in seconds, minutes, or
     * hours.</p>
     */
    inline void SetSuppressionUnit(const SuppressionUnit& value) { m_suppressionUnitHasBeenSet = true; m_suppressionUnit = value; }

    /**
     * <p>Specifies whether the value of <code>value</code> is in seconds, minutes, or
     * hours.</p>
     */
    inline void SetSuppressionUnit(SuppressionUnit&& value) { m_suppressionUnitHasBeenSet = true; m_suppressionUnit = std::move(value); }

    /**
     * <p>Specifies whether the value of <code>value</code> is in seconds, minutes, or
     * hours.</p>
     */
    inline SuppressionPeriod& WithSuppressionUnit(const SuppressionUnit& value) { SetSuppressionUnit(value); return *this;}

    /**
     * <p>Specifies whether the value of <code>value</code> is in seconds, minutes, or
     * hours.</p>
     */
    inline SuppressionPeriod& WithSuppressionUnit(SuppressionUnit&& value) { SetSuppressionUnit(std::move(value)); return *this;}

  private:

    int m_value;
    bool m_valueHasBeenSet = false;

    SuppressionUnit m_suppressionUnit;
    bool m_suppressionUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
