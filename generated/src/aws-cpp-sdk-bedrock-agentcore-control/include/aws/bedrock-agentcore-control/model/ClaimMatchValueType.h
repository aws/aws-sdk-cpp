/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The value or values to match for.</p> <ul> <li> <p>Include a
 * <code>matchValueString</code> with the <code>EQUALS</code> operator to specify a
 * string that matches the claim field value.</p> </li> <li> <p>Include a
 * <code>matchValueArray</code> to specify an array of string values. You can use
 * the following operators:</p> <ul> <li> <p>Use <code>CONTAINS</code> to yield a
 * match if the claim field value is in the array.</p> </li> <li> <p>Use
 * <code>CONTAINS_ANY</code> to yield a match if the claim field value contains any
 * of the strings in the array.</p> </li> </ul> </li> </ul><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ClaimMatchValueType">AWS
 * API Reference</a></p>
 */
class ClaimMatchValueType {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ClaimMatchValueType() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ClaimMatchValueType(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ClaimMatchValueType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The string value to match for.</p>
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
   * <p>An array of strings to check for a match.</p>
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
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
