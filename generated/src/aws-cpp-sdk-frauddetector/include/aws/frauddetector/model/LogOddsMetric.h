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
    AWS_FRAUDDETECTOR_API LogOddsMetric() = default;
    AWS_FRAUDDETECTOR_API LogOddsMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API LogOddsMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the variable.</p>
     */
    inline const Aws::String& GetVariableName() const { return m_variableName; }
    inline bool VariableNameHasBeenSet() const { return m_variableNameHasBeenSet; }
    template<typename VariableNameT = Aws::String>
    void SetVariableName(VariableNameT&& value) { m_variableNameHasBeenSet = true; m_variableName = std::forward<VariableNameT>(value); }
    template<typename VariableNameT = Aws::String>
    LogOddsMetric& WithVariableName(VariableNameT&& value) { SetVariableName(std::forward<VariableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of variable.</p>
     */
    inline const Aws::String& GetVariableType() const { return m_variableType; }
    inline bool VariableTypeHasBeenSet() const { return m_variableTypeHasBeenSet; }
    template<typename VariableTypeT = Aws::String>
    void SetVariableType(VariableTypeT&& value) { m_variableTypeHasBeenSet = true; m_variableType = std::forward<VariableTypeT>(value); }
    template<typename VariableTypeT = Aws::String>
    LogOddsMetric& WithVariableType(VariableTypeT&& value) { SetVariableType(std::forward<VariableTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative importance of the variable. For more information, see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/model-variable-importance.html">Model
     * variable importance</a>.</p>
     */
    inline double GetVariableImportance() const { return m_variableImportance; }
    inline bool VariableImportanceHasBeenSet() const { return m_variableImportanceHasBeenSet; }
    inline void SetVariableImportance(double value) { m_variableImportanceHasBeenSet = true; m_variableImportance = value; }
    inline LogOddsMetric& WithVariableImportance(double value) { SetVariableImportance(value); return *this;}
    ///@}
  private:

    Aws::String m_variableName;
    bool m_variableNameHasBeenSet = false;

    Aws::String m_variableType;
    bool m_variableTypeHasBeenSet = false;

    double m_variableImportance{0.0};
    bool m_variableImportanceHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
