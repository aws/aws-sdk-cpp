/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object containing <code>RuleName</code>, and
   * <code>MatchingKeys</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/Rule">AWS
   * API Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_ENTITYRESOLUTION_API Rule();
    AWS_ENTITYRESOLUTION_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of <code>MatchingKeys</code>. The <code>MatchingKeys</code> must have
     * been defined in the <code>SchemaMapping</code>. Two records are considered to
     * match according to this rule if all of the <code>MatchingKeys</code> match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchingKeys() const{ return m_matchingKeys; }

    /**
     * <p>A list of <code>MatchingKeys</code>. The <code>MatchingKeys</code> must have
     * been defined in the <code>SchemaMapping</code>. Two records are considered to
     * match according to this rule if all of the <code>MatchingKeys</code> match.</p>
     */
    inline bool MatchingKeysHasBeenSet() const { return m_matchingKeysHasBeenSet; }

    /**
     * <p>A list of <code>MatchingKeys</code>. The <code>MatchingKeys</code> must have
     * been defined in the <code>SchemaMapping</code>. Two records are considered to
     * match according to this rule if all of the <code>MatchingKeys</code> match.</p>
     */
    inline void SetMatchingKeys(const Aws::Vector<Aws::String>& value) { m_matchingKeysHasBeenSet = true; m_matchingKeys = value; }

    /**
     * <p>A list of <code>MatchingKeys</code>. The <code>MatchingKeys</code> must have
     * been defined in the <code>SchemaMapping</code>. Two records are considered to
     * match according to this rule if all of the <code>MatchingKeys</code> match.</p>
     */
    inline void SetMatchingKeys(Aws::Vector<Aws::String>&& value) { m_matchingKeysHasBeenSet = true; m_matchingKeys = std::move(value); }

    /**
     * <p>A list of <code>MatchingKeys</code>. The <code>MatchingKeys</code> must have
     * been defined in the <code>SchemaMapping</code>. Two records are considered to
     * match according to this rule if all of the <code>MatchingKeys</code> match.</p>
     */
    inline Rule& WithMatchingKeys(const Aws::Vector<Aws::String>& value) { SetMatchingKeys(value); return *this;}

    /**
     * <p>A list of <code>MatchingKeys</code>. The <code>MatchingKeys</code> must have
     * been defined in the <code>SchemaMapping</code>. Two records are considered to
     * match according to this rule if all of the <code>MatchingKeys</code> match.</p>
     */
    inline Rule& WithMatchingKeys(Aws::Vector<Aws::String>&& value) { SetMatchingKeys(std::move(value)); return *this;}

    /**
     * <p>A list of <code>MatchingKeys</code>. The <code>MatchingKeys</code> must have
     * been defined in the <code>SchemaMapping</code>. Two records are considered to
     * match according to this rule if all of the <code>MatchingKeys</code> match.</p>
     */
    inline Rule& AddMatchingKeys(const Aws::String& value) { m_matchingKeysHasBeenSet = true; m_matchingKeys.push_back(value); return *this; }

    /**
     * <p>A list of <code>MatchingKeys</code>. The <code>MatchingKeys</code> must have
     * been defined in the <code>SchemaMapping</code>. Two records are considered to
     * match according to this rule if all of the <code>MatchingKeys</code> match.</p>
     */
    inline Rule& AddMatchingKeys(Aws::String&& value) { m_matchingKeysHasBeenSet = true; m_matchingKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of <code>MatchingKeys</code>. The <code>MatchingKeys</code> must have
     * been defined in the <code>SchemaMapping</code>. Two records are considered to
     * match according to this rule if all of the <code>MatchingKeys</code> match.</p>
     */
    inline Rule& AddMatchingKeys(const char* value) { m_matchingKeysHasBeenSet = true; m_matchingKeys.push_back(value); return *this; }


    /**
     * <p>A name for the matching rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>A name for the matching rule.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>A name for the matching rule.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>A name for the matching rule.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>A name for the matching rule.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>A name for the matching rule.</p>
     */
    inline Rule& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>A name for the matching rule.</p>
     */
    inline Rule& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>A name for the matching rule.</p>
     */
    inline Rule& WithRuleName(const char* value) { SetRuleName(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_matchingKeys;
    bool m_matchingKeysHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
