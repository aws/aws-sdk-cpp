/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Transform">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API Transform
  {
  public:
    Transform();
    Transform(Aws::Utils::Json::JsonView jsonValue);
    Transform& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The mathematical expression that defines the transformation function. You can
     * specify up to 10 variables per expression. You can specify up to 10 functions
     * per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The mathematical expression that defines the transformation function. You can
     * specify up to 10 variables per expression. You can specify up to 10 functions
     * per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The mathematical expression that defines the transformation function. You can
     * specify up to 10 variables per expression. You can specify up to 10 functions
     * per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The mathematical expression that defines the transformation function. You can
     * specify up to 10 variables per expression. You can specify up to 10 functions
     * per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The mathematical expression that defines the transformation function. You can
     * specify up to 10 variables per expression. You can specify up to 10 functions
     * per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The mathematical expression that defines the transformation function. You can
     * specify up to 10 variables per expression. You can specify up to 10 functions
     * per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline Transform& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The mathematical expression that defines the transformation function. You can
     * specify up to 10 variables per expression. You can specify up to 10 functions
     * per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline Transform& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The mathematical expression that defines the transformation function. You can
     * specify up to 10 variables per expression. You can specify up to 10 functions
     * per expression. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline Transform& WithExpression(const char* value) { SetExpression(value); return *this;}


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
    inline Transform& WithVariables(const Aws::Vector<ExpressionVariable>& value) { SetVariables(value); return *this;}

    /**
     * <p>The list of variables used in the expression.</p>
     */
    inline Transform& WithVariables(Aws::Vector<ExpressionVariable>&& value) { SetVariables(std::move(value)); return *this;}

    /**
     * <p>The list of variables used in the expression.</p>
     */
    inline Transform& AddVariables(const ExpressionVariable& value) { m_variablesHasBeenSet = true; m_variables.push_back(value); return *this; }

    /**
     * <p>The list of variables used in the expression.</p>
     */
    inline Transform& AddVariables(ExpressionVariable&& value) { m_variablesHasBeenSet = true; m_variables.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet;

    Aws::Vector<ExpressionVariable> m_variables;
    bool m_variablesHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
