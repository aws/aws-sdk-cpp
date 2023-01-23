/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>

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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Settings for backtest mode.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/BackTestConfiguration">AWS
   * API Reference</a></p>
   */
  class BackTestConfiguration
  {
  public:
    AWS_LOOKOUTMETRICS_API BackTestConfiguration();
    AWS_LOOKOUTMETRICS_API BackTestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API BackTestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Run a backtest instead of monitoring new data.</p>
     */
    inline bool GetRunBackTestMode() const{ return m_runBackTestMode; }

    /**
     * <p>Run a backtest instead of monitoring new data.</p>
     */
    inline bool RunBackTestModeHasBeenSet() const { return m_runBackTestModeHasBeenSet; }

    /**
     * <p>Run a backtest instead of monitoring new data.</p>
     */
    inline void SetRunBackTestMode(bool value) { m_runBackTestModeHasBeenSet = true; m_runBackTestMode = value; }

    /**
     * <p>Run a backtest instead of monitoring new data.</p>
     */
    inline BackTestConfiguration& WithRunBackTestMode(bool value) { SetRunBackTestMode(value); return *this;}

  private:

    bool m_runBackTestMode;
    bool m_runBackTestModeHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
