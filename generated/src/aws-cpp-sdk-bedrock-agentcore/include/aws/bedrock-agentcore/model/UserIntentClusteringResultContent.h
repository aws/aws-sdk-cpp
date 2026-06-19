/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/UserIntentCluster.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>The user intent clustering result containing grouped user intents identified
 * across evaluated sessions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/UserIntentClusteringResultContent">AWS
 * API Reference</a></p>
 */
class UserIntentClusteringResultContent {
 public:
  AWS_BEDROCKAGENTCORE_API UserIntentClusteringResultContent() = default;
  AWS_BEDROCKAGENTCORE_API UserIntentClusteringResultContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API UserIntentClusteringResultContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of user intent clusters identified across analyzed sessions.</p>
   */
  inline const Aws::Vector<UserIntentCluster>& GetUserIntents() const { return m_userIntents; }
  inline bool UserIntentsHasBeenSet() const { return m_userIntentsHasBeenSet; }
  template <typename UserIntentsT = Aws::Vector<UserIntentCluster>>
  void SetUserIntents(UserIntentsT&& value) {
    m_userIntentsHasBeenSet = true;
    m_userIntents = std::forward<UserIntentsT>(value);
  }
  template <typename UserIntentsT = Aws::Vector<UserIntentCluster>>
  UserIntentClusteringResultContent& WithUserIntents(UserIntentsT&& value) {
    SetUserIntents(std::forward<UserIntentsT>(value));
    return *this;
  }
  template <typename UserIntentsT = UserIntentCluster>
  UserIntentClusteringResultContent& AddUserIntents(UserIntentsT&& value) {
    m_userIntentsHasBeenSet = true;
    m_userIntents.emplace_back(std::forward<UserIntentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<UserIntentCluster> m_userIntents;
  bool m_userIntentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
