/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>An object containing the <code>ruleName</code> and
   * <code>matchingKeys</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/Rule">AWS
   * API Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_ENTITYRESOLUTION_API Rule() = default;
    AWS_ENTITYRESOLUTION_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name for the matching rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    Rule& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>MatchingKeys</code>. The <code>MatchingKeys</code> must have
     * been defined in the <code>SchemaMapping</code>. Two records are considered to
     * match according to this rule if all of the <code>MatchingKeys</code> match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchingKeys() const { return m_matchingKeys; }
    inline bool MatchingKeysHasBeenSet() const { return m_matchingKeysHasBeenSet; }
    template<typename MatchingKeysT = Aws::Vector<Aws::String>>
    void SetMatchingKeys(MatchingKeysT&& value) { m_matchingKeysHasBeenSet = true; m_matchingKeys = std::forward<MatchingKeysT>(value); }
    template<typename MatchingKeysT = Aws::Vector<Aws::String>>
    Rule& WithMatchingKeys(MatchingKeysT&& value) { SetMatchingKeys(std::forward<MatchingKeysT>(value)); return *this;}
    template<typename MatchingKeysT = Aws::String>
    Rule& AddMatchingKeys(MatchingKeysT&& value) { m_matchingKeysHasBeenSet = true; m_matchingKeys.emplace_back(std::forward<MatchingKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_matchingKeys;
    bool m_matchingKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
