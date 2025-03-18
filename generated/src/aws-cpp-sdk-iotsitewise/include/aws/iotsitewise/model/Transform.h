/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/TransformProcessingConfig.h>
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
   * <p>Contains an asset transform property. A transform is a one-to-one mapping of
   * a property's data points from one form to another. For example, you can use a
   * transform to convert a Celsius data stream to Fahrenheit by applying the
   * transformation expression to each data point of the Celsius stream. A transform
   * can only have a data type of <code>DOUBLE</code> and consume properties with
   * data types of <code>INTEGER</code> or <code>DOUBLE</code>.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html#transforms">Transforms</a>
   * in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Transform">AWS
   * API Reference</a></p>
   */
  class Transform
  {
  public:
    AWS_IOTSITEWISE_API Transform() = default;
    AWS_IOTSITEWISE_API Transform(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Transform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mathematical expression that defines the transformation function. You can
     * specify up to 10 variables per expression. You can specify up to 10 functions
     * per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    Transform& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of variables used in the expression.</p>
     */
    inline const Aws::Vector<ExpressionVariable>& GetVariables() const { return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    template<typename VariablesT = Aws::Vector<ExpressionVariable>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Vector<ExpressionVariable>>
    Transform& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesT = ExpressionVariable>
    Transform& AddVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables.emplace_back(std::forward<VariablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The processing configuration for the given transform property. You can
     * configure transforms to be kept at the edge or forwarded to the Amazon Web
     * Services Cloud. You can also configure transforms to be computed at the edge or
     * in the cloud.</p>
     */
    inline const TransformProcessingConfig& GetProcessingConfig() const { return m_processingConfig; }
    inline bool ProcessingConfigHasBeenSet() const { return m_processingConfigHasBeenSet; }
    template<typename ProcessingConfigT = TransformProcessingConfig>
    void SetProcessingConfig(ProcessingConfigT&& value) { m_processingConfigHasBeenSet = true; m_processingConfig = std::forward<ProcessingConfigT>(value); }
    template<typename ProcessingConfigT = TransformProcessingConfig>
    Transform& WithProcessingConfig(ProcessingConfigT&& value) { SetProcessingConfig(std::forward<ProcessingConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::Vector<ExpressionVariable> m_variables;
    bool m_variablesHasBeenSet = false;

    TransformProcessingConfig m_processingConfig;
    bool m_processingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
