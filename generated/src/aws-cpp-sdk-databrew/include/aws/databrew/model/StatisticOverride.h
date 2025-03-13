/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Override of a particular evaluation for a profile job. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/StatisticOverride">AWS
   * API Reference</a></p>
   */
  class StatisticOverride
  {
  public:
    AWS_GLUEDATABREW_API StatisticOverride() = default;
    AWS_GLUEDATABREW_API StatisticOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API StatisticOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an evaluation</p>
     */
    inline const Aws::String& GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    template<typename StatisticT = Aws::String>
    void SetStatistic(StatisticT&& value) { m_statisticHasBeenSet = true; m_statistic = std::forward<StatisticT>(value); }
    template<typename StatisticT = Aws::String>
    StatisticOverride& WithStatistic(StatisticT&& value) { SetStatistic(std::forward<StatisticT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that includes overrides of an evaluation’s parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    StatisticOverride& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    StatisticOverride& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_statistic;
    bool m_statisticHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
