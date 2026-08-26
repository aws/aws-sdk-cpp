/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>
#include <aws/iam-toolbox/model/MatchedStatement.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IAMToolbox {
namespace Model {

/**
 * <p>A policy that matched during evaluation, referenced by URI. The URI
 * corresponds to a policy in the top-level policies list.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-toolbox-2018-05-10/MatchedPolicy">AWS
 * API Reference</a></p>
 */
class MatchedPolicy {
 public:
  AWS_IAMTOOLBOX_API MatchedPolicy() = default;
  AWS_IAMTOOLBOX_API MatchedPolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_IAMTOOLBOX_API MatchedPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IAMTOOLBOX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URI of the policy. This cross-references an entry in the top-level
   * policies list. The value depends on the policy type:</p> <ul> <li> <p>For
   * managed policies, this is the policy ARN.</p> </li> <li> <p>For inline policies,
   * this is an opaque identifier.</p> </li> </ul>
   */
  inline const Aws::String& GetUri() const { return m_uri; }
  inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
  template <typename UriT = Aws::String>
  void SetUri(UriT&& value) {
    m_uriHasBeenSet = true;
    m_uri = std::forward<UriT>(value);
  }
  template <typename UriT = Aws::String>
  MatchedPolicy& WithUri(UriT&& value) {
    SetUri(std::forward<UriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The statements within the policy that matched during the evaluation.</p>
   */
  inline const Aws::Vector<MatchedStatement>& GetMatchedStatements() const { return m_matchedStatements; }
  inline bool MatchedStatementsHasBeenSet() const { return m_matchedStatementsHasBeenSet; }
  template <typename MatchedStatementsT = Aws::Vector<MatchedStatement>>
  void SetMatchedStatements(MatchedStatementsT&& value) {
    m_matchedStatementsHasBeenSet = true;
    m_matchedStatements = std::forward<MatchedStatementsT>(value);
  }
  template <typename MatchedStatementsT = Aws::Vector<MatchedStatement>>
  MatchedPolicy& WithMatchedStatements(MatchedStatementsT&& value) {
    SetMatchedStatements(std::forward<MatchedStatementsT>(value));
    return *this;
  }
  template <typename MatchedStatementsT = MatchedStatement>
  MatchedPolicy& AddMatchedStatements(MatchedStatementsT&& value) {
    m_matchedStatementsHasBeenSet = true;
    m_matchedStatements.emplace_back(std::forward<MatchedStatementsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_uri;

  Aws::Vector<MatchedStatement> m_matchedStatements;
  bool m_uriHasBeenSet = false;
  bool m_matchedStatementsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
