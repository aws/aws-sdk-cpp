/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodePipeline {
namespace Model {

/**
 * <p>Details about the configuration for the <code>Lambda</code> action engine, or
 * executor.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/LambdaExecutorConfiguration">AWS
 * API Reference</a></p>
 */
class LambdaExecutorConfiguration {
 public:
  AWS_CODEPIPELINE_API LambdaExecutorConfiguration() = default;
  AWS_CODEPIPELINE_API LambdaExecutorConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API LambdaExecutorConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The ARN of the Lambda function used by the action engine.</p>
   */
  inline const Aws::String& GetLambdaFunctionArn() const { return m_lambdaFunctionArn; }
  inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }
  template <typename LambdaFunctionArnT = Aws::String>
  void SetLambdaFunctionArn(LambdaFunctionArnT&& value) {
    m_lambdaFunctionArnHasBeenSet = true;
    m_lambdaFunctionArn = std::forward<LambdaFunctionArnT>(value);
  }
  template <typename LambdaFunctionArnT = Aws::String>
  LambdaExecutorConfiguration& WithLambdaFunctionArn(LambdaFunctionArnT&& value) {
    SetLambdaFunctionArn(std::forward<LambdaFunctionArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_lambdaFunctionArn;
  bool m_lambdaFunctionArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws
