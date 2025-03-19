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
   * <p>Specifies a Lambda function that verifies requests to a bot or fulfills the
   * user's request to a bot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/LambdaCodeHook">AWS
   * API Reference</a></p>
   */
  class LambdaCodeHook
  {
  public:
    AWS_LEXMODELSV2_API LambdaCodeHook() = default;
    AWS_LEXMODELSV2_API LambdaCodeHook(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API LambdaCodeHook& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline const Aws::String& GetLambdaARN() const { return m_lambdaARN; }
    inline bool LambdaARNHasBeenSet() const { return m_lambdaARNHasBeenSet; }
    template<typename LambdaARNT = Aws::String>
    void SetLambdaARN(LambdaARNT&& value) { m_lambdaARNHasBeenSet = true; m_lambdaARN = std::forward<LambdaARNT>(value); }
    template<typename LambdaARNT = Aws::String>
    LambdaCodeHook& WithLambdaARN(LambdaARNT&& value) { SetLambdaARN(std::forward<LambdaARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function.</p>
     */
    inline const Aws::String& GetCodeHookInterfaceVersion() const { return m_codeHookInterfaceVersion; }
    inline bool CodeHookInterfaceVersionHasBeenSet() const { return m_codeHookInterfaceVersionHasBeenSet; }
    template<typename CodeHookInterfaceVersionT = Aws::String>
    void SetCodeHookInterfaceVersion(CodeHookInterfaceVersionT&& value) { m_codeHookInterfaceVersionHasBeenSet = true; m_codeHookInterfaceVersion = std::forward<CodeHookInterfaceVersionT>(value); }
    template<typename CodeHookInterfaceVersionT = Aws::String>
    LambdaCodeHook& WithCodeHookInterfaceVersion(CodeHookInterfaceVersionT&& value) { SetCodeHookInterfaceVersion(std::forward<CodeHookInterfaceVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lambdaARN;
    bool m_lambdaARNHasBeenSet = false;

    Aws::String m_codeHookInterfaceVersion;
    bool m_codeHookInterfaceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
