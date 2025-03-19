/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/StatisticOverride.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Configuration of evaluations for a profile job. This configuration can be
   * used to select evaluations and override the parameters of selected evaluations.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/StatisticsConfiguration">AWS
   * API Reference</a></p>
   */
  class StatisticsConfiguration
  {
  public:
    AWS_GLUEDATABREW_API StatisticsConfiguration() = default;
    AWS_GLUEDATABREW_API StatisticsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API StatisticsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of included evaluations. When the list is undefined, all supported
     * evaluations will be included.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludedStatistics() const { return m_includedStatistics; }
    inline bool IncludedStatisticsHasBeenSet() const { return m_includedStatisticsHasBeenSet; }
    template<typename IncludedStatisticsT = Aws::Vector<Aws::String>>
    void SetIncludedStatistics(IncludedStatisticsT&& value) { m_includedStatisticsHasBeenSet = true; m_includedStatistics = std::forward<IncludedStatisticsT>(value); }
    template<typename IncludedStatisticsT = Aws::Vector<Aws::String>>
    StatisticsConfiguration& WithIncludedStatistics(IncludedStatisticsT&& value) { SetIncludedStatistics(std::forward<IncludedStatisticsT>(value)); return *this;}
    template<typename IncludedStatisticsT = Aws::String>
    StatisticsConfiguration& AddIncludedStatistics(IncludedStatisticsT&& value) { m_includedStatisticsHasBeenSet = true; m_includedStatistics.emplace_back(std::forward<IncludedStatisticsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of overrides for evaluations.</p>
     */
    inline const Aws::Vector<StatisticOverride>& GetOverrides() const { return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    template<typename OverridesT = Aws::Vector<StatisticOverride>>
    void SetOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides = std::forward<OverridesT>(value); }
    template<typename OverridesT = Aws::Vector<StatisticOverride>>
    StatisticsConfiguration& WithOverrides(OverridesT&& value) { SetOverrides(std::forward<OverridesT>(value)); return *this;}
    template<typename OverridesT = StatisticOverride>
    StatisticsConfiguration& AddOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides.emplace_back(std::forward<OverridesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_includedStatistics;
    bool m_includedStatisticsHasBeenSet = false;

    Aws::Vector<StatisticOverride> m_overrides;
    bool m_overridesHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
