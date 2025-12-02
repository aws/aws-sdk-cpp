/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>Configuration options for a durable execution context.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ContextOptions">AWS
 * API Reference</a></p>
 */
class ContextOptions {
 public:
  AWS_LAMBDA_API ContextOptions() = default;
  AWS_LAMBDA_API ContextOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ContextOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether the state data of children of the completed context should be
   * included in the invoke payload and <code>GetDurableExecutionState</code>
   * response.</p>
   */
  inline bool GetReplayChildren() const { return m_replayChildren; }
  inline bool ReplayChildrenHasBeenSet() const { return m_replayChildrenHasBeenSet; }
  inline void SetReplayChildren(bool value) {
    m_replayChildrenHasBeenSet = true;
    m_replayChildren = value;
  }
  inline ContextOptions& WithReplayChildren(bool value) {
    SetReplayChildren(value);
    return *this;
  }
  ///@}
 private:
  bool m_replayChildren{false};
  bool m_replayChildrenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
