/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * defines the parameters for acceptable player matches. Rule sets are used in
   * <a>MatchmakingConfiguration</a> objects.</p> <p>A rule set may define the
   * following elements for a match. For detailed information and examples showing
   * how to construct a rule set, see <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-rulesets.html">Build
   * a FlexMatch Rule Set</a>. </p> <ul> <li> <p>Teams -- Required. A rule set must
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
  class AWS_GAMELIFT_API MatchmakingRuleSet
  {
  public:
    MatchmakingRuleSet();
    MatchmakingRuleSet(Aws::Utils::Json::JsonView jsonValue);
    MatchmakingRuleSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier for a matchmaking rule set</p>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    /**
     * <p>Unique identifier for a matchmaking rule set</p>
     */
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }

    /**
     * <p>Unique identifier for a matchmaking rule set</p>
     */
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>Unique identifier for a matchmaking rule set</p>
     */
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::move(value); }

    /**
     * <p>Unique identifier for a matchmaking rule set</p>
     */
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    /**
     * <p>Unique identifier for a matchmaking rule set</p>
     */
    inline MatchmakingRuleSet& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>Unique identifier for a matchmaking rule set</p>
     */
    inline MatchmakingRuleSet& WithRuleSetName(Aws::String&& value) { SetRuleSetName(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a matchmaking rule set</p>
     */
    inline MatchmakingRuleSet& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}


    /**
     * <p>Collection of matchmaking rules, formatted as a JSON string. Comments are not
     * allowed in JSON, but most elements support a description field.</p>
     */
    inline const Aws::String& GetRuleSetBody() const{ return m_ruleSetBody; }

    /**
     * <p>Collection of matchmaking rules, formatted as a JSON string. Comments are not
     * allowed in JSON, but most elements support a description field.</p>
     */
    inline bool RuleSetBodyHasBeenSet() const { return m_ruleSetBodyHasBeenSet; }

    /**
     * <p>Collection of matchmaking rules, formatted as a JSON string. Comments are not
     * allowed in JSON, but most elements support a description field.</p>
     */
    inline void SetRuleSetBody(const Aws::String& value) { m_ruleSetBodyHasBeenSet = true; m_ruleSetBody = value; }

    /**
     * <p>Collection of matchmaking rules, formatted as a JSON string. Comments are not
     * allowed in JSON, but most elements support a description field.</p>
     */
    inline void SetRuleSetBody(Aws::String&& value) { m_ruleSetBodyHasBeenSet = true; m_ruleSetBody = std::move(value); }

    /**
     * <p>Collection of matchmaking rules, formatted as a JSON string. Comments are not
     * allowed in JSON, but most elements support a description field.</p>
     */
    inline void SetRuleSetBody(const char* value) { m_ruleSetBodyHasBeenSet = true; m_ruleSetBody.assign(value); }

    /**
     * <p>Collection of matchmaking rules, formatted as a JSON string. Comments are not
     * allowed in JSON, but most elements support a description field.</p>
     */
    inline MatchmakingRuleSet& WithRuleSetBody(const Aws::String& value) { SetRuleSetBody(value); return *this;}

    /**
     * <p>Collection of matchmaking rules, formatted as a JSON string. Comments are not
     * allowed in JSON, but most elements support a description field.</p>
     */
    inline MatchmakingRuleSet& WithRuleSetBody(Aws::String&& value) { SetRuleSetBody(std::move(value)); return *this;}

    /**
     * <p>Collection of matchmaking rules, formatted as a JSON string. Comments are not
     * allowed in JSON, but most elements support a description field.</p>
     */
    inline MatchmakingRuleSet& WithRuleSetBody(const char* value) { SetRuleSetBody(value); return *this;}


    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline MatchmakingRuleSet& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline MatchmakingRuleSet& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet;

    Aws::String m_ruleSetBody;
    bool m_ruleSetBodyHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
