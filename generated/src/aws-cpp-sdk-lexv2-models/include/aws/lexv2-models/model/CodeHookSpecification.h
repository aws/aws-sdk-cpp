/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/LambdaCodeHook.h>
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
   * <p>Contains information about code hooks that Amazon Lex calls during a
   * conversation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CodeHookSpecification">AWS
   * API Reference</a></p>
   */
  class CodeHookSpecification
  {
  public:
    AWS_LEXMODELSV2_API CodeHookSpecification();
    AWS_LEXMODELSV2_API CodeHookSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API CodeHookSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const LambdaCodeHook& GetLambdaCodeHook() const{ return m_lambdaCodeHook; }

    
    inline bool LambdaCodeHookHasBeenSet() const { return m_lambdaCodeHookHasBeenSet; }

    
    inline void SetLambdaCodeHook(const LambdaCodeHook& value) { m_lambdaCodeHookHasBeenSet = true; m_lambdaCodeHook = value; }

    
    inline void SetLambdaCodeHook(LambdaCodeHook&& value) { m_lambdaCodeHookHasBeenSet = true; m_lambdaCodeHook = std::move(value); }

    
    inline CodeHookSpecification& WithLambdaCodeHook(const LambdaCodeHook& value) { SetLambdaCodeHook(value); return *this;}

    
    inline CodeHookSpecification& WithLambdaCodeHook(LambdaCodeHook&& value) { SetLambdaCodeHook(std::move(value)); return *this;}

  private:

    LambdaCodeHook m_lambdaCodeHook;
    bool m_lambdaCodeHookHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
