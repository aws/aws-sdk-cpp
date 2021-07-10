/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/LogitMetric.h>
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
  class AWS_FRAUDDETECTOR_API VariableImportanceMetrics
  {
  public:
    VariableImportanceMetrics();
    VariableImportanceMetrics(Aws::Utils::Json::JsonView jsonValue);
    VariableImportanceMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of variable metrics.</p>
     */
    inline const Aws::Vector<LogitMetric>& GetLogitMetrics() const{ return m_logitMetrics; }

    /**
     * <p>List of variable metrics.</p>
     */
    inline bool LogitMetricsHasBeenSet() const { return m_logitMetricsHasBeenSet; }

    /**
     * <p>List of variable metrics.</p>
     */
    inline void SetLogitMetrics(const Aws::Vector<LogitMetric>& value) { m_logitMetricsHasBeenSet = true; m_logitMetrics = value; }

    /**
     * <p>List of variable metrics.</p>
     */
    inline void SetLogitMetrics(Aws::Vector<LogitMetric>&& value) { m_logitMetricsHasBeenSet = true; m_logitMetrics = std::move(value); }

    /**
     * <p>List of variable metrics.</p>
     */
    inline VariableImportanceMetrics& WithLogitMetrics(const Aws::Vector<LogitMetric>& value) { SetLogitMetrics(value); return *this;}

    /**
     * <p>List of variable metrics.</p>
     */
    inline VariableImportanceMetrics& WithLogitMetrics(Aws::Vector<LogitMetric>&& value) { SetLogitMetrics(std::move(value)); return *this;}

    /**
     * <p>List of variable metrics.</p>
     */
    inline VariableImportanceMetrics& AddLogitMetrics(const LogitMetric& value) { m_logitMetricsHasBeenSet = true; m_logitMetrics.push_back(value); return *this; }

    /**
     * <p>List of variable metrics.</p>
     */
    inline VariableImportanceMetrics& AddLogitMetrics(LogitMetric&& value) { m_logitMetricsHasBeenSet = true; m_logitMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LogitMetric> m_logitMetrics;
    bool m_logitMetricsHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
