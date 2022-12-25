/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The log odds metric details.</p> <p>Account Takeover Insights (ATI) model
   * uses event variables from the login data you provide to continuously calculate a
   * set of variables (aggregated variables) based on historical events. For example,
   * your ATI model might calculate the number of times an user has logged in using
   * the same IP address. In this case, event variables used to derive the aggregated
   * variables are <code>IP address</code> and <code>user</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/AggregatedLogOddsMetric">AWS
   * API Reference</a></p>
   */
  class AggregatedLogOddsMetric
  {
  public:
    AWS_FRAUDDETECTOR_API AggregatedLogOddsMetric();
    AWS_FRAUDDETECTOR_API AggregatedLogOddsMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API AggregatedLogOddsMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The names of all the variables. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVariableNames() const{ return m_variableNames; }

    /**
     * <p> The names of all the variables. </p>
     */
    inline bool VariableNamesHasBeenSet() const { return m_variableNamesHasBeenSet; }

    /**
     * <p> The names of all the variables. </p>
     */
    inline void SetVariableNames(const Aws::Vector<Aws::String>& value) { m_variableNamesHasBeenSet = true; m_variableNames = value; }

    /**
     * <p> The names of all the variables. </p>
     */
    inline void SetVariableNames(Aws::Vector<Aws::String>&& value) { m_variableNamesHasBeenSet = true; m_variableNames = std::move(value); }

    /**
     * <p> The names of all the variables. </p>
     */
    inline AggregatedLogOddsMetric& WithVariableNames(const Aws::Vector<Aws::String>& value) { SetVariableNames(value); return *this;}

    /**
     * <p> The names of all the variables. </p>
     */
    inline AggregatedLogOddsMetric& WithVariableNames(Aws::Vector<Aws::String>&& value) { SetVariableNames(std::move(value)); return *this;}

    /**
     * <p> The names of all the variables. </p>
     */
    inline AggregatedLogOddsMetric& AddVariableNames(const Aws::String& value) { m_variableNamesHasBeenSet = true; m_variableNames.push_back(value); return *this; }

    /**
     * <p> The names of all the variables. </p>
     */
    inline AggregatedLogOddsMetric& AddVariableNames(Aws::String&& value) { m_variableNamesHasBeenSet = true; m_variableNames.push_back(std::move(value)); return *this; }

    /**
     * <p> The names of all the variables. </p>
     */
    inline AggregatedLogOddsMetric& AddVariableNames(const char* value) { m_variableNamesHasBeenSet = true; m_variableNames.push_back(value); return *this; }


    /**
     * <p> The relative importance of the variables in the list to the other event
     * variable. </p>
     */
    inline double GetAggregatedVariablesImportance() const{ return m_aggregatedVariablesImportance; }

    /**
     * <p> The relative importance of the variables in the list to the other event
     * variable. </p>
     */
    inline bool AggregatedVariablesImportanceHasBeenSet() const { return m_aggregatedVariablesImportanceHasBeenSet; }

    /**
     * <p> The relative importance of the variables in the list to the other event
     * variable. </p>
     */
    inline void SetAggregatedVariablesImportance(double value) { m_aggregatedVariablesImportanceHasBeenSet = true; m_aggregatedVariablesImportance = value; }

    /**
     * <p> The relative importance of the variables in the list to the other event
     * variable. </p>
     */
    inline AggregatedLogOddsMetric& WithAggregatedVariablesImportance(double value) { SetAggregatedVariablesImportance(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_variableNames;
    bool m_variableNamesHasBeenSet = false;

    double m_aggregatedVariablesImportance;
    bool m_aggregatedVariablesImportanceHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
