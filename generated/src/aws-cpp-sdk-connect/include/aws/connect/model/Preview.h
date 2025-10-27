/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AllowedUserAction.h>
#include <aws/connect/model/PostAcceptTimeoutConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Information about agent-first preview mode outbound strategy
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Preview">AWS API
 * Reference</a></p>
 */
class Preview {
 public:
  AWS_CONNECT_API Preview() = default;
  AWS_CONNECT_API Preview(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Preview& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Countdown timer configuration after the agent accepted the preview outbound
   * contact.</p>
   */
  inline const PostAcceptTimeoutConfig& GetPostAcceptTimeoutConfig() const { return m_postAcceptTimeoutConfig; }
  inline bool PostAcceptTimeoutConfigHasBeenSet() const { return m_postAcceptTimeoutConfigHasBeenSet; }
  template <typename PostAcceptTimeoutConfigT = PostAcceptTimeoutConfig>
  void SetPostAcceptTimeoutConfig(PostAcceptTimeoutConfigT&& value) {
    m_postAcceptTimeoutConfigHasBeenSet = true;
    m_postAcceptTimeoutConfig = std::forward<PostAcceptTimeoutConfigT>(value);
  }
  template <typename PostAcceptTimeoutConfigT = PostAcceptTimeoutConfig>
  Preview& WithPostAcceptTimeoutConfig(PostAcceptTimeoutConfigT&& value) {
    SetPostAcceptTimeoutConfig(std::forward<PostAcceptTimeoutConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actions the agent can perform after accepting the preview outbound
   * contact.</p>
   */
  inline const Aws::Vector<AllowedUserAction>& GetAllowedUserActions() const { return m_allowedUserActions; }
  inline bool AllowedUserActionsHasBeenSet() const { return m_allowedUserActionsHasBeenSet; }
  template <typename AllowedUserActionsT = Aws::Vector<AllowedUserAction>>
  void SetAllowedUserActions(AllowedUserActionsT&& value) {
    m_allowedUserActionsHasBeenSet = true;
    m_allowedUserActions = std::forward<AllowedUserActionsT>(value);
  }
  template <typename AllowedUserActionsT = Aws::Vector<AllowedUserAction>>
  Preview& WithAllowedUserActions(AllowedUserActionsT&& value) {
    SetAllowedUserActions(std::forward<AllowedUserActionsT>(value));
    return *this;
  }
  inline Preview& AddAllowedUserActions(AllowedUserAction value) {
    m_allowedUserActionsHasBeenSet = true;
    m_allowedUserActions.push_back(value);
    return *this;
  }
  ///@}
 private:
  PostAcceptTimeoutConfig m_postAcceptTimeoutConfig;
  bool m_postAcceptTimeoutConfigHasBeenSet = false;

  Aws::Vector<AllowedUserAction> m_allowedUserActions;
  bool m_allowedUserActionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
