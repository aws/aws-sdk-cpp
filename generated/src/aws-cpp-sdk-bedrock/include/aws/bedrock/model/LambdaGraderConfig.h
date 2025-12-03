/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p> Configuration for using an AWS Lambda function to grade model responses
 * during reinforcement fine-tuning training. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/LambdaGraderConfig">AWS
 * API Reference</a></p>
 */
class LambdaGraderConfig {
 public:
  AWS_BEDROCK_API LambdaGraderConfig() = default;
  AWS_BEDROCK_API LambdaGraderConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API LambdaGraderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> ARN of the AWS Lambda function that will evaluate model responses and return
   * reward scores for RFT training. </p>
   */
  inline const Aws::String& GetLambdaArn() const { return m_lambdaArn; }
  inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }
  template <typename LambdaArnT = Aws::String>
  void SetLambdaArn(LambdaArnT&& value) {
    m_lambdaArnHasBeenSet = true;
    m_lambdaArn = std::forward<LambdaArnT>(value);
  }
  template <typename LambdaArnT = Aws::String>
  LambdaGraderConfig& WithLambdaArn(LambdaArnT&& value) {
    SetLambdaArn(std::forward<LambdaArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_lambdaArn;
  bool m_lambdaArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
