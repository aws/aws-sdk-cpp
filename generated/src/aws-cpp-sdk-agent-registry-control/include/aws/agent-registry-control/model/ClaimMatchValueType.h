/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>The expected value used to match a claim. Exactly one member is
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/ClaimMatchValueType">AWS
 * API Reference</a></p>
 */
class ClaimMatchValueType {
 public:
  AWS_AGENTREGISTRYCONTROL_API ClaimMatchValueType() = default;
  AWS_AGENTREGISTRYCONTROL_API ClaimMatchValueType(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API ClaimMatchValueType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A single string value to match the claim against.</p>
   */
  inline const Aws::String& GetMatchValueString() const { return m_matchValueString; }
  inline bool MatchValueStringHasBeenSet() const { return m_matchValueStringHasBeenSet; }
  template <typename MatchValueStringT = Aws::String>
  void SetMatchValueString(MatchValueStringT&& value) {
    m_matchValueStringHasBeenSet = true;
    m_matchValueString = std::forward<MatchValueStringT>(value);
  }
  template <typename MatchValueStringT = Aws::String>
  ClaimMatchValueType& WithMatchValueString(MatchValueStringT&& value) {
    SetMatchValueString(std::forward<MatchValueStringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of string values to match the claim against.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMatchValueStringList() const { return m_matchValueStringList; }
  inline bool MatchValueStringListHasBeenSet() const { return m_matchValueStringListHasBeenSet; }
  template <typename MatchValueStringListT = Aws::Vector<Aws::String>>
  void SetMatchValueStringList(MatchValueStringListT&& value) {
    m_matchValueStringListHasBeenSet = true;
    m_matchValueStringList = std::forward<MatchValueStringListT>(value);
  }
  template <typename MatchValueStringListT = Aws::Vector<Aws::String>>
  ClaimMatchValueType& WithMatchValueStringList(MatchValueStringListT&& value) {
    SetMatchValueStringList(std::forward<MatchValueStringListT>(value));
    return *this;
  }
  template <typename MatchValueStringListT = Aws::String>
  ClaimMatchValueType& AddMatchValueStringList(MatchValueStringListT&& value) {
    m_matchValueStringListHasBeenSet = true;
    m_matchValueStringList.emplace_back(std::forward<MatchValueStringListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_matchValueString;

  Aws::Vector<Aws::String> m_matchValueStringList;
  bool m_matchValueStringHasBeenSet = false;
  bool m_matchValueStringListHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
