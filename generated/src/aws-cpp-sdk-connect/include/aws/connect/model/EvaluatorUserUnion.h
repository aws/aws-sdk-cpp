/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Represents the entity that performed the action on the
 * evaluation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluatorUserUnion">AWS
 * API Reference</a></p>
 */
class EvaluatorUserUnion {
 public:
  AWS_CONNECT_API EvaluatorUserUnion() = default;
  AWS_CONNECT_API EvaluatorUserUnion(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluatorUserUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Represents the Amazon Connect ARN of the user.</p>
   */
  inline const Aws::String& GetConnectUserArn() const { return m_connectUserArn; }
  inline bool ConnectUserArnHasBeenSet() const { return m_connectUserArnHasBeenSet; }
  template <typename ConnectUserArnT = Aws::String>
  void SetConnectUserArn(ConnectUserArnT&& value) {
    m_connectUserArnHasBeenSet = true;
    m_connectUserArn = std::forward<ConnectUserArnT>(value);
  }
  template <typename ConnectUserArnT = Aws::String>
  EvaluatorUserUnion& WithConnectUserArn(ConnectUserArnT&& value) {
    SetConnectUserArn(std::forward<ConnectUserArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectUserArn;
  bool m_connectUserArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
