/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Set of rule statements, used with FlexMatch, that determine how to build your
   * player matches. Each rule set describes a type of group to be created and
   * defines the parameters for acceptable player matches.</p> <p>A rule set may
   * define the following elements for a match. For detailed information and examples
   * showing how to construct a rule set, see <a
   * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
   * a FlexMatch rule set</a>. </p> <ul> <li> <p>Teams -- Required. A rule set must
   * define one or multiple teams for the match and set minimum and maximum team
   * sizes. For example, a rule set might describe a 4x4 match that requires all
   * eight slots to be filled. </p> </li> <li> <p>Player attributes -- Optional.
   * These attributes specify a set of player characteristics to evaluate when
   * looking for a match. Matchmaking requests that use a rule set with player
   * attributes must provide the corresponding attribute values. For example, an
   * attribute might specify a player's skill or level.</p> </li> <li> <p>Rules --
   * Optional. Rules define how to evaluate potential players for a match based on
   * player attributes. A rule might specify minimum requirements for individual
   * players, teams, or entire matches. For example, a rule might require each player
   * to meet a certain skill level, each team to have at least one player in a
   * certain role, or the match to have a minimum average skill level. or may
   * describe an entire group--such as all teams must be evenly matched or have at
   * least one player in a certain role. </p> </li> <li> <p>Expansions -- Optional.
   * Expansions allow you to relax the rules after a period of time when no
   * acceptable matches are found. This feature lets you balance getting players into
   * games in a reasonable amount of time instead of making them wait indefinitely
   * for the best possible match. For example, you might use an expansion to increase
   * the maximum skill variance between players after 30 seconds.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/MatchmakingRuleSet">AWS
   * API Reference</a></p>
   */
  class MatchmakingRuleSet
  {
  public:
    AWS_GAMELIFT_API MatchmakingRuleSet() = default;
    AWS_GAMELIFT_API MatchmakingRuleSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API MatchmakingRuleSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the matchmaking rule set</p>
     */
    inline const Aws::String& GetRuleSetName() const { return m_ruleSetName; }
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }
    template<typename RuleSetNameT = Aws::String>
    void SetRuleSetName(RuleSetNameT&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::forward<RuleSetNameT>(value); }
    template<typename RuleSetNameT = Aws::String>
    MatchmakingRuleSet& WithRuleSetName(RuleSetNameT&& value) { SetRuleSetName(std::forward<RuleSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift Servers matchmaking rule set resource and
     * uniquely identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::matchmakingruleset/&lt;ruleset
     * name&gt;</code>. In a GameLift rule set ARN, the resource ID matches the
     * <i>RuleSetName</i> value.</p>
     */
    inline const Aws::String& GetRuleSetArn() const { return m_ruleSetArn; }
    inline bool RuleSetArnHasBeenSet() const { return m_ruleSetArnHasBeenSet; }
    template<typename RuleSetArnT = Aws::String>
    void SetRuleSetArn(RuleSetArnT&& value) { m_ruleSetArnHasBeenSet = true; m_ruleSetArn = std::forward<RuleSetArnT>(value); }
    template<typename RuleSetArnT = Aws::String>
    MatchmakingRuleSet& WithRuleSetArn(RuleSetArnT&& value) { SetRuleSetArn(std::forward<RuleSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of matchmaking rules, formatted as a JSON string. Comments are
     * not allowed in JSON, but most elements support a description field.</p>
     */
    inline const Aws::String& GetRuleSetBody() const { return m_ruleSetBody; }
    inline bool RuleSetBodyHasBeenSet() const { return m_ruleSetBodyHasBeenSet; }
    template<typename RuleSetBodyT = Aws::String>
    void SetRuleSetBody(RuleSetBodyT&& value) { m_ruleSetBodyHasBeenSet = true; m_ruleSetBody = std::forward<RuleSetBodyT>(value); }
    template<typename RuleSetBodyT = Aws::String>
    MatchmakingRuleSet& WithRuleSetBody(RuleSetBodyT&& value) { SetRuleSetBody(std::forward<RuleSetBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    MatchmakingRuleSet& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet = false;

    Aws::String m_ruleSetArn;
    bool m_ruleSetArnHasBeenSet = false;

    Aws::String m_ruleSetBody;
    bool m_ruleSetBodyHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
