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
    AWS_GLUEDATABREW_API StatisticsConfiguration();
    AWS_GLUEDATABREW_API StatisticsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API StatisticsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of included evaluations. When the list is undefined, all supported
     * evaluations will be included.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludedStatistics() const{ return m_includedStatistics; }

    /**
     * <p>List of included evaluations. When the list is undefined, all supported
     * evaluations will be included.</p>
     */
    inline bool IncludedStatisticsHasBeenSet() const { return m_includedStatisticsHasBeenSet; }

    /**
     * <p>List of included evaluations. When the list is undefined, all supported
     * evaluations will be included.</p>
     */
    inline void SetIncludedStatistics(const Aws::Vector<Aws::String>& value) { m_includedStatisticsHasBeenSet = true; m_includedStatistics = value; }

    /**
     * <p>List of included evaluations. When the list is undefined, all supported
     * evaluations will be included.</p>
     */
    inline void SetIncludedStatistics(Aws::Vector<Aws::String>&& value) { m_includedStatisticsHasBeenSet = true; m_includedStatistics = std::move(value); }

    /**
     * <p>List of included evaluations. When the list is undefined, all supported
     * evaluations will be included.</p>
     */
    inline StatisticsConfiguration& WithIncludedStatistics(const Aws::Vector<Aws::String>& value) { SetIncludedStatistics(value); return *this;}

    /**
     * <p>List of included evaluations. When the list is undefined, all supported
     * evaluations will be included.</p>
     */
    inline StatisticsConfiguration& WithIncludedStatistics(Aws::Vector<Aws::String>&& value) { SetIncludedStatistics(std::move(value)); return *this;}

    /**
     * <p>List of included evaluations. When the list is undefined, all supported
     * evaluations will be included.</p>
     */
    inline StatisticsConfiguration& AddIncludedStatistics(const Aws::String& value) { m_includedStatisticsHasBeenSet = true; m_includedStatistics.push_back(value); return *this; }

    /**
     * <p>List of included evaluations. When the list is undefined, all supported
     * evaluations will be included.</p>
     */
    inline StatisticsConfiguration& AddIncludedStatistics(Aws::String&& value) { m_includedStatisticsHasBeenSet = true; m_includedStatistics.push_back(std::move(value)); return *this; }

    /**
     * <p>List of included evaluations. When the list is undefined, all supported
     * evaluations will be included.</p>
     */
    inline StatisticsConfiguration& AddIncludedStatistics(const char* value) { m_includedStatisticsHasBeenSet = true; m_includedStatistics.push_back(value); return *this; }


    /**
     * <p>List of overrides for evaluations.</p>
     */
    inline const Aws::Vector<StatisticOverride>& GetOverrides() const{ return m_overrides; }

    /**
     * <p>List of overrides for evaluations.</p>
     */
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }

    /**
     * <p>List of overrides for evaluations.</p>
     */
    inline void SetOverrides(const Aws::Vector<StatisticOverride>& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>List of overrides for evaluations.</p>
     */
    inline void SetOverrides(Aws::Vector<StatisticOverride>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>List of overrides for evaluations.</p>
     */
    inline StatisticsConfiguration& WithOverrides(const Aws::Vector<StatisticOverride>& value) { SetOverrides(value); return *this;}

    /**
     * <p>List of overrides for evaluations.</p>
     */
    inline StatisticsConfiguration& WithOverrides(Aws::Vector<StatisticOverride>&& value) { SetOverrides(std::move(value)); return *this;}

    /**
     * <p>List of overrides for evaluations.</p>
     */
    inline StatisticsConfiguration& AddOverrides(const StatisticOverride& value) { m_overridesHasBeenSet = true; m_overrides.push_back(value); return *this; }

    /**
     * <p>List of overrides for evaluations.</p>
     */
    inline StatisticsConfiguration& AddOverrides(StatisticOverride&& value) { m_overridesHasBeenSet = true; m_overrides.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_includedStatistics;
    bool m_includedStatisticsHasBeenSet = false;

    Aws::Vector<StatisticOverride> m_overrides;
    bool m_overridesHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
