/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/InputSerialization.h>
#include <aws/glacier/model/ExpressionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glacier/model/OutputSerialization.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Contains information about the parameters used for a select.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/SelectParameters">AWS
   * API Reference</a></p>
   */
  class SelectParameters
  {
  public:
    AWS_GLACIER_API SelectParameters() = default;
    AWS_GLACIER_API SelectParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API SelectParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the serialization format of the object.</p>
     */
    inline const InputSerialization& GetInputSerialization() const { return m_inputSerialization; }
    inline bool InputSerializationHasBeenSet() const { return m_inputSerializationHasBeenSet; }
    template<typename InputSerializationT = InputSerialization>
    void SetInputSerialization(InputSerializationT&& value) { m_inputSerializationHasBeenSet = true; m_inputSerialization = std::forward<InputSerializationT>(value); }
    template<typename InputSerializationT = InputSerialization>
    SelectParameters& WithInputSerialization(InputSerializationT&& value) { SetInputSerialization(std::forward<InputSerializationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the provided expression, for example <code>SQL</code>.</p>
     */
    inline ExpressionType GetExpressionType() const { return m_expressionType; }
    inline bool ExpressionTypeHasBeenSet() const { return m_expressionTypeHasBeenSet; }
    inline void SetExpressionType(ExpressionType value) { m_expressionTypeHasBeenSet = true; m_expressionType = value; }
    inline SelectParameters& WithExpressionType(ExpressionType value) { SetExpressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expression that is used to select the object.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    SelectParameters& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes how the results of the select job are serialized.</p>
     */
    inline const OutputSerialization& GetOutputSerialization() const { return m_outputSerialization; }
    inline bool OutputSerializationHasBeenSet() const { return m_outputSerializationHasBeenSet; }
    template<typename OutputSerializationT = OutputSerialization>
    void SetOutputSerialization(OutputSerializationT&& value) { m_outputSerializationHasBeenSet = true; m_outputSerialization = std::forward<OutputSerializationT>(value); }
    template<typename OutputSerializationT = OutputSerialization>
    SelectParameters& WithOutputSerialization(OutputSerializationT&& value) { SetOutputSerialization(std::forward<OutputSerializationT>(value)); return *this;}
    ///@}
  private:

    InputSerialization m_inputSerialization;
    bool m_inputSerializationHasBeenSet = false;

    ExpressionType m_expressionType{ExpressionType::NOT_SET};
    bool m_expressionTypeHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    OutputSerialization m_outputSerialization;
    bool m_outputSerializationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
