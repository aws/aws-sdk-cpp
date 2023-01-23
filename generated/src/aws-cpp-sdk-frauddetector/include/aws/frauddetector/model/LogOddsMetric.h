/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
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
   * <p>The log odds metric details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/LogOddsMetric">AWS
   * API Reference</a></p>
   */
  class LogOddsMetric
  {
  public:
    AWS_FRAUDDETECTOR_API LogOddsMetric();
    AWS_FRAUDDETECTOR_API LogOddsMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API LogOddsMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the variable.</p>
     */
    inline const Aws::String& GetVariableName() const{ return m_variableName; }

    /**
     * <p>The name of the variable.</p>
     */
    inline bool VariableNameHasBeenSet() const { return m_variableNameHasBeenSet; }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetVariableName(const Aws::String& value) { m_variableNameHasBeenSet = true; m_variableName = value; }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetVariableName(Aws::String&& value) { m_variableNameHasBeenSet = true; m_variableName = std::move(value); }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetVariableName(const char* value) { m_variableNameHasBeenSet = true; m_variableName.assign(value); }

    /**
     * <p>The name of the variable.</p>
     */
    inline LogOddsMetric& WithVariableName(const Aws::String& value) { SetVariableName(value); return *this;}

    /**
     * <p>The name of the variable.</p>
     */
    inline LogOddsMetric& WithVariableName(Aws::String&& value) { SetVariableName(std::move(value)); return *this;}

    /**
     * <p>The name of the variable.</p>
     */
    inline LogOddsMetric& WithVariableName(const char* value) { SetVariableName(value); return *this;}


    /**
     * <p>The type of variable.</p>
     */
    inline const Aws::String& GetVariableType() const{ return m_variableType; }

    /**
     * <p>The type of variable.</p>
     */
    inline bool VariableTypeHasBeenSet() const { return m_variableTypeHasBeenSet; }

    /**
     * <p>The type of variable.</p>
     */
    inline void SetVariableType(const Aws::String& value) { m_variableTypeHasBeenSet = true; m_variableType = value; }

    /**
     * <p>The type of variable.</p>
     */
    inline void SetVariableType(Aws::String&& value) { m_variableTypeHasBeenSet = true; m_variableType = std::move(value); }

    /**
     * <p>The type of variable.</p>
     */
    inline void SetVariableType(const char* value) { m_variableTypeHasBeenSet = true; m_variableType.assign(value); }

    /**
     * <p>The type of variable.</p>
     */
    inline LogOddsMetric& WithVariableType(const Aws::String& value) { SetVariableType(value); return *this;}

    /**
     * <p>The type of variable.</p>
     */
    inline LogOddsMetric& WithVariableType(Aws::String&& value) { SetVariableType(std::move(value)); return *this;}

    /**
     * <p>The type of variable.</p>
     */
    inline LogOddsMetric& WithVariableType(const char* value) { SetVariableType(value); return *this;}


    /**
     * <p>The relative importance of the variable. For more information, see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/model-variable-importance.html">Model
     * variable importance</a>.</p>
     */
    inline double GetVariableImportance() const{ return m_variableImportance; }

    /**
     * <p>The relative importance of the variable. For more information, see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/model-variable-importance.html">Model
     * variable importance</a>.</p>
     */
    inline bool VariableImportanceHasBeenSet() const { return m_variableImportanceHasBeenSet; }

    /**
     * <p>The relative importance of the variable. For more information, see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/model-variable-importance.html">Model
     * variable importance</a>.</p>
     */
    inline void SetVariableImportance(double value) { m_variableImportanceHasBeenSet = true; m_variableImportance = value; }

    /**
     * <p>The relative importance of the variable. For more information, see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/model-variable-importance.html">Model
     * variable importance</a>.</p>
     */
    inline LogOddsMetric& WithVariableImportance(double value) { SetVariableImportance(value); return *this;}

  private:

    Aws::String m_variableName;
    bool m_variableNameHasBeenSet = false;

    Aws::String m_variableType;
    bool m_variableTypeHasBeenSet = false;

    double m_variableImportance;
    bool m_variableImportanceHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
