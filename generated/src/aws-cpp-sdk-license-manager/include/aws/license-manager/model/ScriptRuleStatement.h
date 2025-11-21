/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LicenseManager {
namespace Model {

/**
 * <p>Rule statement that uses a script to evaluate license asset
 * conditions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ScriptRuleStatement">AWS
 * API Reference</a></p>
 */
class ScriptRuleStatement {
 public:
  AWS_LICENSEMANAGER_API ScriptRuleStatement() = default;
  AWS_LICENSEMANAGER_API ScriptRuleStatement(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API ScriptRuleStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Key name to match against in the script rule evaluation.</p>
   */
  inline const Aws::String& GetKeyToMatch() const { return m_keyToMatch; }
  inline bool KeyToMatchHasBeenSet() const { return m_keyToMatchHasBeenSet; }
  template <typename KeyToMatchT = Aws::String>
  void SetKeyToMatch(KeyToMatchT&& value) {
    m_keyToMatchHasBeenSet = true;
    m_keyToMatch = std::forward<KeyToMatchT>(value);
  }
  template <typename KeyToMatchT = Aws::String>
  ScriptRuleStatement& WithKeyToMatch(KeyToMatchT&& value) {
    SetKeyToMatch(std::forward<KeyToMatchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Script code used to evaluate the rule condition.</p>
   */
  inline const Aws::String& GetScript() const { return m_script; }
  inline bool ScriptHasBeenSet() const { return m_scriptHasBeenSet; }
  template <typename ScriptT = Aws::String>
  void SetScript(ScriptT&& value) {
    m_scriptHasBeenSet = true;
    m_script = std::forward<ScriptT>(value);
  }
  template <typename ScriptT = Aws::String>
  ScriptRuleStatement& WithScript(ScriptT&& value) {
    SetScript(std::forward<ScriptT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_keyToMatch;
  bool m_keyToMatchHasBeenSet = false;

  Aws::String m_script;
  bool m_scriptHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
