/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/AggregatedLogOddsMetric.h>
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
   * <p>The details of the relative importance of the aggregated variables.</p>
   * <p>Account Takeover Insights (ATI) model uses event variables from the login
   * data you provide to continuously calculate a set of variables (aggregated
   * variables) based on historical events. For example, your ATI model might
   * calculate the number of times an user has logged in using the same IP address.
   * In this case, event variables used to derive the aggregated variables are
   * <code>IP address</code> and <code>user</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/AggregatedVariablesImportanceMetrics">AWS
   * API Reference</a></p>
   */
  class AggregatedVariablesImportanceMetrics
  {
  public:
    AWS_FRAUDDETECTOR_API AggregatedVariablesImportanceMetrics();
    AWS_FRAUDDETECTOR_API AggregatedVariablesImportanceMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API AggregatedVariablesImportanceMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> List of variables' metrics. </p>
     */
    inline const Aws::Vector<AggregatedLogOddsMetric>& GetLogOddsMetrics() const{ return m_logOddsMetrics; }

    /**
     * <p> List of variables' metrics. </p>
     */
    inline bool LogOddsMetricsHasBeenSet() const { return m_logOddsMetricsHasBeenSet; }

    /**
     * <p> List of variables' metrics. </p>
     */
    inline void SetLogOddsMetrics(const Aws::Vector<AggregatedLogOddsMetric>& value) { m_logOddsMetricsHasBeenSet = true; m_logOddsMetrics = value; }

    /**
     * <p> List of variables' metrics. </p>
     */
    inline void SetLogOddsMetrics(Aws::Vector<AggregatedLogOddsMetric>&& value) { m_logOddsMetricsHasBeenSet = true; m_logOddsMetrics = std::move(value); }

    /**
     * <p> List of variables' metrics. </p>
     */
    inline AggregatedVariablesImportanceMetrics& WithLogOddsMetrics(const Aws::Vector<AggregatedLogOddsMetric>& value) { SetLogOddsMetrics(value); return *this;}

    /**
     * <p> List of variables' metrics. </p>
     */
    inline AggregatedVariablesImportanceMetrics& WithLogOddsMetrics(Aws::Vector<AggregatedLogOddsMetric>&& value) { SetLogOddsMetrics(std::move(value)); return *this;}

    /**
     * <p> List of variables' metrics. </p>
     */
    inline AggregatedVariablesImportanceMetrics& AddLogOddsMetrics(const AggregatedLogOddsMetric& value) { m_logOddsMetricsHasBeenSet = true; m_logOddsMetrics.push_back(value); return *this; }

    /**
     * <p> List of variables' metrics. </p>
     */
    inline AggregatedVariablesImportanceMetrics& AddLogOddsMetrics(AggregatedLogOddsMetric&& value) { m_logOddsMetricsHasBeenSet = true; m_logOddsMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AggregatedLogOddsMetric> m_logOddsMetrics;
    bool m_logOddsMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
