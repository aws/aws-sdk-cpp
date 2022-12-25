/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/MetricWindow.h>
#include <aws/iotsitewise/model/MetricProcessingConfig.h>
#include <aws/iotsitewise/model/ExpressionVariable.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains an asset metric property. With metrics, you can calculate aggregate
   * functions, such as an average, maximum, or minimum, as specified through an
   * expression. A metric maps several values to a single value (such as a sum).</p>
   * <p>The maximum number of dependent/cascading variables used in any one metric
   * calculation is 10. Therefore, a <i>root</i> metric can have up to 10 cascading
   * metrics in its computational dependency tree. Additionally, a metric can only
   * have a data type of <code>DOUBLE</code> and consume properties with data types
   * of <code>INTEGER</code> or <code>DOUBLE</code>.</p> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html#metrics">Metrics</a>
   * in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Metric">AWS
   * API Reference</a></p>
   */
  class Metric
  {
  public:
    AWS_IOTSITEWISE_API Metric();
    AWS_IOTSITEWISE_API Metric(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Metric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The mathematical expression that defines the metric aggregation function. You
     * can specify up to 10 variables per expression. You can specify up to 10
     * functions per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The mathematical expression that defines the metric aggregation function. You
     * can specify up to 10 variables per expression. You can specify up to 10
     * functions per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The mathematical expression that defines the metric aggregation function. You
     * can specify up to 10 variables per expression. You can specify up to 10
     * functions per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The mathematical expression that defines the metric aggregation function. You
     * can specify up to 10 variables per expression. You can specify up to 10
     * functions per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The mathematical expression that defines the metric aggregation function. You
     * can specify up to 10 variables per expression. You can specify up to 10
     * functions per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The mathematical expression that defines the metric aggregation function. You
     * can specify up to 10 variables per expression. You can specify up to 10
     * functions per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline Metric& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The mathematical expression that defines the metric aggregation function. You
     * can specify up to 10 variables per expression. You can specify up to 10
     * functions per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline Metric& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The mathematical expression that defines the metric aggregation function. You
     * can specify up to 10 variables per expression. You can specify up to 10
     * functions per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline Metric& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>The list of variables used in the expression.</p>
     */
    inline const Aws::Vector<ExpressionVariable>& GetVariables() const{ return m_variables; }

    /**
     * <p>The list of variables used in the expression.</p>
     */
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }

    /**
     * <p>The list of variables used in the expression.</p>
     */
    inline void SetVariables(const Aws::Vector<ExpressionVariable>& value) { m_variablesHasBeenSet = true; m_variables = value; }

    /**
     * <p>The list of variables used in the expression.</p>
     */
    inline void SetVariables(Aws::Vector<ExpressionVariable>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }

    /**
     * <p>The list of variables used in the expression.</p>
     */
    inline Metric& WithVariables(const Aws::Vector<ExpressionVariable>& value) { SetVariables(value); return *this;}

    /**
     * <p>The list of variables used in the expression.</p>
     */
    inline Metric& WithVariables(Aws::Vector<ExpressionVariable>&& value) { SetVariables(std::move(value)); return *this;}

    /**
     * <p>The list of variables used in the expression.</p>
     */
    inline Metric& AddVariables(const ExpressionVariable& value) { m_variablesHasBeenSet = true; m_variables.push_back(value); return *this; }

    /**
     * <p>The list of variables used in the expression.</p>
     */
    inline Metric& AddVariables(ExpressionVariable&& value) { m_variablesHasBeenSet = true; m_variables.push_back(std::move(value)); return *this; }


    /**
     * <p>The window (time interval) over which IoT SiteWise computes the metric's
     * aggregation expression. IoT SiteWise computes one data point per
     * <code>window</code>.</p>
     */
    inline const MetricWindow& GetWindow() const{ return m_window; }

    /**
     * <p>The window (time interval) over which IoT SiteWise computes the metric's
     * aggregation expression. IoT SiteWise computes one data point per
     * <code>window</code>.</p>
     */
    inline bool WindowHasBeenSet() const { return m_windowHasBeenSet; }

    /**
     * <p>The window (time interval) over which IoT SiteWise computes the metric's
     * aggregation expression. IoT SiteWise computes one data point per
     * <code>window</code>.</p>
     */
    inline void SetWindow(const MetricWindow& value) { m_windowHasBeenSet = true; m_window = value; }

    /**
     * <p>The window (time interval) over which IoT SiteWise computes the metric's
     * aggregation expression. IoT SiteWise computes one data point per
     * <code>window</code>.</p>
     */
    inline void SetWindow(MetricWindow&& value) { m_windowHasBeenSet = true; m_window = std::move(value); }

    /**
     * <p>The window (time interval) over which IoT SiteWise computes the metric's
     * aggregation expression. IoT SiteWise computes one data point per
     * <code>window</code>.</p>
     */
    inline Metric& WithWindow(const MetricWindow& value) { SetWindow(value); return *this;}

    /**
     * <p>The window (time interval) over which IoT SiteWise computes the metric's
     * aggregation expression. IoT SiteWise computes one data point per
     * <code>window</code>.</p>
     */
    inline Metric& WithWindow(MetricWindow&& value) { SetWindow(std::move(value)); return *this;}


    /**
     * <p>The processing configuration for the given metric property. You can configure
     * metrics to be computed at the edge or in the Amazon Web Services Cloud. By
     * default, metrics are forwarded to the cloud.</p>
     */
    inline const MetricProcessingConfig& GetProcessingConfig() const{ return m_processingConfig; }

    /**
     * <p>The processing configuration for the given metric property. You can configure
     * metrics to be computed at the edge or in the Amazon Web Services Cloud. By
     * default, metrics are forwarded to the cloud.</p>
     */
    inline bool ProcessingConfigHasBeenSet() const { return m_processingConfigHasBeenSet; }

    /**
     * <p>The processing configuration for the given metric property. You can configure
     * metrics to be computed at the edge or in the Amazon Web Services Cloud. By
     * default, metrics are forwarded to the cloud.</p>
     */
    inline void SetProcessingConfig(const MetricProcessingConfig& value) { m_processingConfigHasBeenSet = true; m_processingConfig = value; }

    /**
     * <p>The processing configuration for the given metric property. You can configure
     * metrics to be computed at the edge or in the Amazon Web Services Cloud. By
     * default, metrics are forwarded to the cloud.</p>
     */
    inline void SetProcessingConfig(MetricProcessingConfig&& value) { m_processingConfigHasBeenSet = true; m_processingConfig = std::move(value); }

    /**
     * <p>The processing configuration for the given metric property. You can configure
     * metrics to be computed at the edge or in the Amazon Web Services Cloud. By
     * default, metrics are forwarded to the cloud.</p>
     */
    inline Metric& WithProcessingConfig(const MetricProcessingConfig& value) { SetProcessingConfig(value); return *this;}

    /**
     * <p>The processing configuration for the given metric property. You can configure
     * metrics to be computed at the edge or in the Amazon Web Services Cloud. By
     * default, metrics are forwarded to the cloud.</p>
     */
    inline Metric& WithProcessingConfig(MetricProcessingConfig&& value) { SetProcessingConfig(std::move(value)); return *this;}

  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::Vector<ExpressionVariable> m_variables;
    bool m_variablesHasBeenSet = false;

    MetricWindow m_window;
    bool m_windowHasBeenSet = false;

    MetricProcessingConfig m_processingConfig;
    bool m_processingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
