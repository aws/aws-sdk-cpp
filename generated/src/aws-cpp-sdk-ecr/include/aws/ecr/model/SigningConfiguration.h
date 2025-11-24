/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/SigningRule.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {

/**
 * <p>The signing configuration for a registry, which specifies rules for
 * automatically signing images when pushed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/SigningConfiguration">AWS
 * API Reference</a></p>
 */
class SigningConfiguration {
 public:
  AWS_ECR_API SigningConfiguration() = default;
  AWS_ECR_API SigningConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API SigningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of signing rules. Each rule defines a signing profile and optional
   * repository filters that determine which images are automatically signed. Maximum
   * of 10 rules.</p>
   */
  inline const Aws::Vector<SigningRule>& GetRules() const { return m_rules; }
  inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
  template <typename RulesT = Aws::Vector<SigningRule>>
  void SetRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules = std::forward<RulesT>(value);
  }
  template <typename RulesT = Aws::Vector<SigningRule>>
  SigningConfiguration& WithRules(RulesT&& value) {
    SetRules(std::forward<RulesT>(value));
    return *this;
  }
  template <typename RulesT = SigningRule>
  SigningConfiguration& AddRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules.emplace_back(std::forward<RulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SigningRule> m_rules;
  bool m_rulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
