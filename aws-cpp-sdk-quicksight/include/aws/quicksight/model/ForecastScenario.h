/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/WhatIfPointScenario.h>
#include <aws/quicksight/model/WhatIfRangeScenario.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The forecast scenario of a forecast in the line chart.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ForecastScenario">AWS
   * API Reference</a></p>
   */
  class ForecastScenario
  {
  public:
    AWS_QUICKSIGHT_API ForecastScenario();
    AWS_QUICKSIGHT_API ForecastScenario(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ForecastScenario& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The what-if analysis forecast setup with the target date.</p>
     */
    inline const WhatIfPointScenario& GetWhatIfPointScenario() const{ return m_whatIfPointScenario; }

    /**
     * <p>The what-if analysis forecast setup with the target date.</p>
     */
    inline bool WhatIfPointScenarioHasBeenSet() const { return m_whatIfPointScenarioHasBeenSet; }

    /**
     * <p>The what-if analysis forecast setup with the target date.</p>
     */
    inline void SetWhatIfPointScenario(const WhatIfPointScenario& value) { m_whatIfPointScenarioHasBeenSet = true; m_whatIfPointScenario = value; }

    /**
     * <p>The what-if analysis forecast setup with the target date.</p>
     */
    inline void SetWhatIfPointScenario(WhatIfPointScenario&& value) { m_whatIfPointScenarioHasBeenSet = true; m_whatIfPointScenario = std::move(value); }

    /**
     * <p>The what-if analysis forecast setup with the target date.</p>
     */
    inline ForecastScenario& WithWhatIfPointScenario(const WhatIfPointScenario& value) { SetWhatIfPointScenario(value); return *this;}

    /**
     * <p>The what-if analysis forecast setup with the target date.</p>
     */
    inline ForecastScenario& WithWhatIfPointScenario(WhatIfPointScenario&& value) { SetWhatIfPointScenario(std::move(value)); return *this;}


    /**
     * <p>The what-if analysis forecast setup with the date range.</p>
     */
    inline const WhatIfRangeScenario& GetWhatIfRangeScenario() const{ return m_whatIfRangeScenario; }

    /**
     * <p>The what-if analysis forecast setup with the date range.</p>
     */
    inline bool WhatIfRangeScenarioHasBeenSet() const { return m_whatIfRangeScenarioHasBeenSet; }

    /**
     * <p>The what-if analysis forecast setup with the date range.</p>
     */
    inline void SetWhatIfRangeScenario(const WhatIfRangeScenario& value) { m_whatIfRangeScenarioHasBeenSet = true; m_whatIfRangeScenario = value; }

    /**
     * <p>The what-if analysis forecast setup with the date range.</p>
     */
    inline void SetWhatIfRangeScenario(WhatIfRangeScenario&& value) { m_whatIfRangeScenarioHasBeenSet = true; m_whatIfRangeScenario = std::move(value); }

    /**
     * <p>The what-if analysis forecast setup with the date range.</p>
     */
    inline ForecastScenario& WithWhatIfRangeScenario(const WhatIfRangeScenario& value) { SetWhatIfRangeScenario(value); return *this;}

    /**
     * <p>The what-if analysis forecast setup with the date range.</p>
     */
    inline ForecastScenario& WithWhatIfRangeScenario(WhatIfRangeScenario&& value) { SetWhatIfRangeScenario(std::move(value)); return *this;}

  private:

    WhatIfPointScenario m_whatIfPointScenario;
    bool m_whatIfPointScenarioHasBeenSet = false;

    WhatIfRangeScenario m_whatIfRangeScenario;
    bool m_whatIfRangeScenarioHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
