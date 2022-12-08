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
    AWS_GLUEDATABREW_API StatisticOverride();
    AWS_GLUEDATABREW_API StatisticOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API StatisticOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an evaluation</p>
     */
    inline const Aws::String& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The name of an evaluation</p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The name of an evaluation</p>
     */
    inline void SetStatistic(const Aws::String& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The name of an evaluation</p>
     */
    inline void SetStatistic(Aws::String&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The name of an evaluation</p>
     */
    inline void SetStatistic(const char* value) { m_statisticHasBeenSet = true; m_statistic.assign(value); }

    /**
     * <p>The name of an evaluation</p>
     */
    inline StatisticOverride& WithStatistic(const Aws::String& value) { SetStatistic(value); return *this;}

    /**
     * <p>The name of an evaluation</p>
     */
    inline StatisticOverride& WithStatistic(Aws::String&& value) { SetStatistic(std::move(value)); return *this;}

    /**
     * <p>The name of an evaluation</p>
     */
    inline StatisticOverride& WithStatistic(const char* value) { SetStatistic(value); return *this;}


    /**
     * <p>A map that includes overrides of an evaluation’s parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A map that includes overrides of an evaluation’s parameters.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A map that includes overrides of an evaluation’s parameters.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A map that includes overrides of an evaluation’s parameters.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A map that includes overrides of an evaluation’s parameters.</p>
     */
    inline StatisticOverride& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>A map that includes overrides of an evaluation’s parameters.</p>
     */
    inline StatisticOverride& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A map that includes overrides of an evaluation’s parameters.</p>
     */
    inline StatisticOverride& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>A map that includes overrides of an evaluation’s parameters.</p>
     */
    inline StatisticOverride& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that includes overrides of an evaluation’s parameters.</p>
     */
    inline StatisticOverride& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that includes overrides of an evaluation’s parameters.</p>
     */
    inline StatisticOverride& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that includes overrides of an evaluation’s parameters.</p>
     */
    inline StatisticOverride& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that includes overrides of an evaluation’s parameters.</p>
     */
    inline StatisticOverride& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that includes overrides of an evaluation’s parameters.</p>
     */
    inline StatisticOverride& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_statistic;
    bool m_statisticHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
