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
    AWS_IOTSITEWISE_API Transform();
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
    inline const Aws::String& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }
    inline Transform& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}
    inline Transform& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}
    inline Transform& WithExpression(const char* value) { SetExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of variables used in the expression.</p>
     */
    inline const Aws::Vector<ExpressionVariable>& GetVariables() const{ return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    inline void SetVariables(const Aws::Vector<ExpressionVariable>& value) { m_variablesHasBeenSet = true; m_variables = value; }
    inline void SetVariables(Aws::Vector<ExpressionVariable>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }
    inline Transform& WithVariables(const Aws::Vector<ExpressionVariable>& value) { SetVariables(value); return *this;}
    inline Transform& WithVariables(Aws::Vector<ExpressionVariable>&& value) { SetVariables(std::move(value)); return *this;}
    inline Transform& AddVariables(const ExpressionVariable& value) { m_variablesHasBeenSet = true; m_variables.push_back(value); return *this; }
    inline Transform& AddVariables(ExpressionVariable&& value) { m_variablesHasBeenSet = true; m_variables.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The processing configuration for the given transform property. You can
     * configure transforms to be kept at the edge or forwarded to the Amazon Web
     * Services Cloud. You can also configure transforms to be computed at the edge or
     * in the cloud.</p>
     */
    inline const TransformProcessingConfig& GetProcessingConfig() const{ return m_processingConfig; }
    inline bool ProcessingConfigHasBeenSet() const { return m_processingConfigHasBeenSet; }
    inline void SetProcessingConfig(const TransformProcessingConfig& value) { m_processingConfigHasBeenSet = true; m_processingConfig = value; }
    inline void SetProcessingConfig(TransformProcessingConfig&& value) { m_processingConfigHasBeenSet = true; m_processingConfig = std::move(value); }
    inline Transform& WithProcessingConfig(const TransformProcessingConfig& value) { SetProcessingConfig(value); return *this;}
    inline Transform& WithProcessingConfig(TransformProcessingConfig&& value) { SetProcessingConfig(std::move(value)); return *this;}
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
