/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/LambdaGraderConfig.h>

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
 * <p> Configuration for the grader used in reinforcement fine-tuning to evaluate
 * model responses and provide reward signals. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GraderConfig">AWS
 * API Reference</a></p>
 */
class GraderConfig {
 public:
  AWS_BEDROCK_API GraderConfig() = default;
  AWS_BEDROCK_API GraderConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API GraderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Configuration for using an AWS Lambda function as the grader for evaluating
   * model responses and provide reward signals in reinforcement fine-tuning. </p>
   */
  inline const LambdaGraderConfig& GetLambdaGrader() const { return m_lambdaGrader; }
  inline bool LambdaGraderHasBeenSet() const { return m_lambdaGraderHasBeenSet; }
  template <typename LambdaGraderT = LambdaGraderConfig>
  void SetLambdaGrader(LambdaGraderT&& value) {
    m_lambdaGraderHasBeenSet = true;
    m_lambdaGrader = std::forward<LambdaGraderT>(value);
  }
  template <typename LambdaGraderT = LambdaGraderConfig>
  GraderConfig& WithLambdaGrader(LambdaGraderT&& value) {
    SetLambdaGrader(std::forward<LambdaGraderT>(value));
    return *this;
  }
  ///@}
 private:
  LambdaGraderConfig m_lambdaGrader;
  bool m_lambdaGraderHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
