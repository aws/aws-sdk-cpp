/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AxisDisplayOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/MissingDataConfiguration.h>
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
   * <p>The series axis configuration of a line chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LineSeriesAxisDisplayOptions">AWS
   * API Reference</a></p>
   */
  class LineSeriesAxisDisplayOptions
  {
  public:
    AWS_QUICKSIGHT_API LineSeriesAxisDisplayOptions();
    AWS_QUICKSIGHT_API LineSeriesAxisDisplayOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LineSeriesAxisDisplayOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options that determine the presentation of the line series axis.</p>
     */
    inline const AxisDisplayOptions& GetAxisOptions() const{ return m_axisOptions; }

    /**
     * <p>The options that determine the presentation of the line series axis.</p>
     */
    inline bool AxisOptionsHasBeenSet() const { return m_axisOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the line series axis.</p>
     */
    inline void SetAxisOptions(const AxisDisplayOptions& value) { m_axisOptionsHasBeenSet = true; m_axisOptions = value; }

    /**
     * <p>The options that determine the presentation of the line series axis.</p>
     */
    inline void SetAxisOptions(AxisDisplayOptions&& value) { m_axisOptionsHasBeenSet = true; m_axisOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of the line series axis.</p>
     */
    inline LineSeriesAxisDisplayOptions& WithAxisOptions(const AxisDisplayOptions& value) { SetAxisOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of the line series axis.</p>
     */
    inline LineSeriesAxisDisplayOptions& WithAxisOptions(AxisDisplayOptions&& value) { SetAxisOptions(std::move(value)); return *this;}


    /**
     * <p>The configuration options that determine how missing data is treated during
     * the rendering of a line chart.</p>
     */
    inline const Aws::Vector<MissingDataConfiguration>& GetMissingDataConfigurations() const{ return m_missingDataConfigurations; }

    /**
     * <p>The configuration options that determine how missing data is treated during
     * the rendering of a line chart.</p>
     */
    inline bool MissingDataConfigurationsHasBeenSet() const { return m_missingDataConfigurationsHasBeenSet; }

    /**
     * <p>The configuration options that determine how missing data is treated during
     * the rendering of a line chart.</p>
     */
    inline void SetMissingDataConfigurations(const Aws::Vector<MissingDataConfiguration>& value) { m_missingDataConfigurationsHasBeenSet = true; m_missingDataConfigurations = value; }

    /**
     * <p>The configuration options that determine how missing data is treated during
     * the rendering of a line chart.</p>
     */
    inline void SetMissingDataConfigurations(Aws::Vector<MissingDataConfiguration>&& value) { m_missingDataConfigurationsHasBeenSet = true; m_missingDataConfigurations = std::move(value); }

    /**
     * <p>The configuration options that determine how missing data is treated during
     * the rendering of a line chart.</p>
     */
    inline LineSeriesAxisDisplayOptions& WithMissingDataConfigurations(const Aws::Vector<MissingDataConfiguration>& value) { SetMissingDataConfigurations(value); return *this;}

    /**
     * <p>The configuration options that determine how missing data is treated during
     * the rendering of a line chart.</p>
     */
    inline LineSeriesAxisDisplayOptions& WithMissingDataConfigurations(Aws::Vector<MissingDataConfiguration>&& value) { SetMissingDataConfigurations(std::move(value)); return *this;}

    /**
     * <p>The configuration options that determine how missing data is treated during
     * the rendering of a line chart.</p>
     */
    inline LineSeriesAxisDisplayOptions& AddMissingDataConfigurations(const MissingDataConfiguration& value) { m_missingDataConfigurationsHasBeenSet = true; m_missingDataConfigurations.push_back(value); return *this; }

    /**
     * <p>The configuration options that determine how missing data is treated during
     * the rendering of a line chart.</p>
     */
    inline LineSeriesAxisDisplayOptions& AddMissingDataConfigurations(MissingDataConfiguration&& value) { m_missingDataConfigurationsHasBeenSet = true; m_missingDataConfigurations.push_back(std::move(value)); return *this; }

  private:

    AxisDisplayOptions m_axisOptions;
    bool m_axisOptionsHasBeenSet = false;

    Aws::Vector<MissingDataConfiguration> m_missingDataConfigurations;
    bool m_missingDataConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
