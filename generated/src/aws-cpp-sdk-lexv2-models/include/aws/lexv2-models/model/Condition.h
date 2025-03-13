/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides an expression that evaluates to true or false. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/Condition">AWS
   * API Reference</a></p>
   */
  class Condition
  {
  public:
    AWS_LEXMODELSV2_API Condition() = default;
    AWS_LEXMODELSV2_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expression string that is evaluated. </p>
     */
    inline const Aws::String& GetExpressionString() const { return m_expressionString; }
    inline bool ExpressionStringHasBeenSet() const { return m_expressionStringHasBeenSet; }
    template<typename ExpressionStringT = Aws::String>
    void SetExpressionString(ExpressionStringT&& value) { m_expressionStringHasBeenSet = true; m_expressionString = std::forward<ExpressionStringT>(value); }
    template<typename ExpressionStringT = Aws::String>
    Condition& WithExpressionString(ExpressionStringT&& value) { SetExpressionString(std::forward<ExpressionStringT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_expressionString;
    bool m_expressionStringHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
