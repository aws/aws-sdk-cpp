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
    AWS_LEXMODELSV2_API LambdaCodeHook();
    AWS_LEXMODELSV2_API LambdaCodeHook(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API LambdaCodeHook& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline const Aws::String& GetLambdaARN() const{ return m_lambdaARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline bool LambdaARNHasBeenSet() const { return m_lambdaARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline void SetLambdaARN(const Aws::String& value) { m_lambdaARNHasBeenSet = true; m_lambdaARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline void SetLambdaARN(Aws::String&& value) { m_lambdaARNHasBeenSet = true; m_lambdaARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline void SetLambdaARN(const char* value) { m_lambdaARNHasBeenSet = true; m_lambdaARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline LambdaCodeHook& WithLambdaARN(const Aws::String& value) { SetLambdaARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline LambdaCodeHook& WithLambdaARN(Aws::String&& value) { SetLambdaARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline LambdaCodeHook& WithLambdaARN(const char* value) { SetLambdaARN(value); return *this;}


    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function.</p>
     */
    inline const Aws::String& GetCodeHookInterfaceVersion() const{ return m_codeHookInterfaceVersion; }

    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function.</p>
     */
    inline bool CodeHookInterfaceVersionHasBeenSet() const { return m_codeHookInterfaceVersionHasBeenSet; }

    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function.</p>
     */
    inline void SetCodeHookInterfaceVersion(const Aws::String& value) { m_codeHookInterfaceVersionHasBeenSet = true; m_codeHookInterfaceVersion = value; }

    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function.</p>
     */
    inline void SetCodeHookInterfaceVersion(Aws::String&& value) { m_codeHookInterfaceVersionHasBeenSet = true; m_codeHookInterfaceVersion = std::move(value); }

    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function.</p>
     */
    inline void SetCodeHookInterfaceVersion(const char* value) { m_codeHookInterfaceVersionHasBeenSet = true; m_codeHookInterfaceVersion.assign(value); }

    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function.</p>
     */
    inline LambdaCodeHook& WithCodeHookInterfaceVersion(const Aws::String& value) { SetCodeHookInterfaceVersion(value); return *this;}

    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function.</p>
     */
    inline LambdaCodeHook& WithCodeHookInterfaceVersion(Aws::String&& value) { SetCodeHookInterfaceVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function.</p>
     */
    inline LambdaCodeHook& WithCodeHookInterfaceVersion(const char* value) { SetCodeHookInterfaceVersion(value); return *this;}

  private:

    Aws::String m_lambdaARN;
    bool m_lambdaARNHasBeenSet = false;

    Aws::String m_codeHookInterfaceVersion;
    bool m_codeHookInterfaceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
