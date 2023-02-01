/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/LogOddsMetric.h>
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
   * <p>The variable importance metrics details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/VariableImportanceMetrics">AWS
   * API Reference</a></p>
   */
  class VariableImportanceMetrics
  {
  public:
    AWS_FRAUDDETECTOR_API VariableImportanceMetrics();
    AWS_FRAUDDETECTOR_API VariableImportanceMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API VariableImportanceMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of variable metrics.</p>
     */
    inline const Aws::Vector<LogOddsMetric>& GetLogOddsMetrics() const{ return m_logOddsMetrics; }

    /**
     * <p>List of variable metrics.</p>
     */
    inline bool LogOddsMetricsHasBeenSet() const { return m_logOddsMetricsHasBeenSet; }

    /**
     * <p>List of variable metrics.</p>
     */
    inline void SetLogOddsMetrics(const Aws::Vector<LogOddsMetric>& value) { m_logOddsMetricsHasBeenSet = true; m_logOddsMetrics = value; }

    /**
     * <p>List of variable metrics.</p>
     */
    inline void SetLogOddsMetrics(Aws::Vector<LogOddsMetric>&& value) { m_logOddsMetricsHasBeenSet = true; m_logOddsMetrics = std::move(value); }

    /**
     * <p>List of variable metrics.</p>
     */
    inline VariableImportanceMetrics& WithLogOddsMetrics(const Aws::Vector<LogOddsMetric>& value) { SetLogOddsMetrics(value); return *this;}

    /**
     * <p>List of variable metrics.</p>
     */
    inline VariableImportanceMetrics& WithLogOddsMetrics(Aws::Vector<LogOddsMetric>&& value) { SetLogOddsMetrics(std::move(value)); return *this;}

    /**
     * <p>List of variable metrics.</p>
     */
    inline VariableImportanceMetrics& AddLogOddsMetrics(const LogOddsMetric& value) { m_logOddsMetricsHasBeenSet = true; m_logOddsMetrics.push_back(value); return *this; }

    /**
     * <p>List of variable metrics.</p>
     */
    inline VariableImportanceMetrics& AddLogOddsMetrics(LogOddsMetric&& value) { m_logOddsMetricsHasBeenSet = true; m_logOddsMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LogOddsMetric> m_logOddsMetrics;
    bool m_logOddsMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
