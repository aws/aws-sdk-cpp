/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/SignalAccessPrecondition.h>
#include <aws/continuum/model/SignalPrecondition.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>The four preconditions a likelihood signal assessed.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/SignalPreconditions">AWS
 * API Reference</a></p>
 */
class SignalPreconditions {
 public:
  AWS_CONTINUUM_API SignalPreconditions() = default;
  AWS_CONTINUUM_API SignalPreconditions(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API SignalPreconditions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether the vulnerable code path is reachable by an attacker.</p>
   */
  inline const SignalPrecondition& GetReachableFromAttacker() const { return m_reachableFromAttacker; }
  inline bool ReachableFromAttackerHasBeenSet() const { return m_reachableFromAttackerHasBeenSet; }
  template <typename ReachableFromAttackerT = SignalPrecondition>
  void SetReachableFromAttacker(ReachableFromAttackerT&& value) {
    m_reachableFromAttackerHasBeenSet = true;
    m_reachableFromAttacker = std::forward<ReachableFromAttackerT>(value);
  }
  template <typename ReachableFromAttackerT = SignalPrecondition>
  SignalPreconditions& WithReachableFromAttacker(ReachableFromAttackerT&& value) {
    SetReachableFromAttacker(std::forward<ReachableFromAttackerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether exploitation depends on a non-default configuration.</p>
   */
  inline const SignalPrecondition& GetConfigurationNeeded() const { return m_configurationNeeded; }
  inline bool ConfigurationNeededHasBeenSet() const { return m_configurationNeededHasBeenSet; }
  template <typename ConfigurationNeededT = SignalPrecondition>
  void SetConfigurationNeeded(ConfigurationNeededT&& value) {
    m_configurationNeededHasBeenSet = true;
    m_configurationNeeded = std::forward<ConfigurationNeededT>(value);
  }
  template <typename ConfigurationNeededT = SignalPrecondition>
  SignalPreconditions& WithConfigurationNeeded(ConfigurationNeededT&& value) {
    SetConfigurationNeeded(std::forward<ConfigurationNeededT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What level of access exploitation requires.</p>
   */
  inline const SignalAccessPrecondition& GetAccessLevel() const { return m_accessLevel; }
  inline bool AccessLevelHasBeenSet() const { return m_accessLevelHasBeenSet; }
  template <typename AccessLevelT = SignalAccessPrecondition>
  void SetAccessLevel(AccessLevelT&& value) {
    m_accessLevelHasBeenSet = true;
    m_accessLevel = std::forward<AccessLevelT>(value);
  }
  template <typename AccessLevelT = SignalAccessPrecondition>
  SignalPreconditions& WithAccessLevel(AccessLevelT&& value) {
    SetAccessLevel(std::forward<AccessLevelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether exploitation requires a user other than the attacker to take part,
   * for example by opening a link or a file (CVSS User Interaction).</p>
   */
  inline const SignalPrecondition& GetUserInteractionRequired() const { return m_userInteractionRequired; }
  inline bool UserInteractionRequiredHasBeenSet() const { return m_userInteractionRequiredHasBeenSet; }
  template <typename UserInteractionRequiredT = SignalPrecondition>
  void SetUserInteractionRequired(UserInteractionRequiredT&& value) {
    m_userInteractionRequiredHasBeenSet = true;
    m_userInteractionRequired = std::forward<UserInteractionRequiredT>(value);
  }
  template <typename UserInteractionRequiredT = SignalPrecondition>
  SignalPreconditions& WithUserInteractionRequired(UserInteractionRequiredT&& value) {
    SetUserInteractionRequired(std::forward<UserInteractionRequiredT>(value));
    return *this;
  }
  ///@}
 private:
  SignalPrecondition m_reachableFromAttacker;

  SignalPrecondition m_configurationNeeded;

  SignalAccessPrecondition m_accessLevel;

  SignalPrecondition m_userInteractionRequired;
  bool m_reachableFromAttackerHasBeenSet = false;
  bool m_configurationNeededHasBeenSet = false;
  bool m_accessLevelHasBeenSet = false;
  bool m_userInteractionRequiredHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
