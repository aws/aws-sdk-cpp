/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/ReactionValueFormats.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Information about the reaction values provided by users on a
   * comment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ReactionForComment">AWS
   * API Reference</a></p>
   */
  class ReactionForComment
  {
  public:
    AWS_CODECOMMIT_API ReactionForComment() = default;
    AWS_CODECOMMIT_API ReactionForComment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ReactionForComment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reaction for a specified comment.</p>
     */
    inline const ReactionValueFormats& GetReaction() const { return m_reaction; }
    inline bool ReactionHasBeenSet() const { return m_reactionHasBeenSet; }
    template<typename ReactionT = ReactionValueFormats>
    void SetReaction(ReactionT&& value) { m_reactionHasBeenSet = true; m_reaction = std::forward<ReactionT>(value); }
    template<typename ReactionT = ReactionValueFormats>
    ReactionForComment& WithReaction(ReactionT&& value) { SetReaction(std::forward<ReactionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of users who have provided reactions to the
     * comment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReactionUsers() const { return m_reactionUsers; }
    inline bool ReactionUsersHasBeenSet() const { return m_reactionUsersHasBeenSet; }
    template<typename ReactionUsersT = Aws::Vector<Aws::String>>
    void SetReactionUsers(ReactionUsersT&& value) { m_reactionUsersHasBeenSet = true; m_reactionUsers = std::forward<ReactionUsersT>(value); }
    template<typename ReactionUsersT = Aws::Vector<Aws::String>>
    ReactionForComment& WithReactionUsers(ReactionUsersT&& value) { SetReactionUsers(std::forward<ReactionUsersT>(value)); return *this;}
    template<typename ReactionUsersT = Aws::String>
    ReactionForComment& AddReactionUsers(ReactionUsersT&& value) { m_reactionUsersHasBeenSet = true; m_reactionUsers.emplace_back(std::forward<ReactionUsersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A numerical count of users who reacted with the specified emoji whose
     * identities have been subsequently deleted from IAM. While these IAM users or
     * roles no longer exist, the reactions might still appear in total reaction
     * counts.</p>
     */
    inline int GetReactionsFromDeletedUsersCount() const { return m_reactionsFromDeletedUsersCount; }
    inline bool ReactionsFromDeletedUsersCountHasBeenSet() const { return m_reactionsFromDeletedUsersCountHasBeenSet; }
    inline void SetReactionsFromDeletedUsersCount(int value) { m_reactionsFromDeletedUsersCountHasBeenSet = true; m_reactionsFromDeletedUsersCount = value; }
    inline ReactionForComment& WithReactionsFromDeletedUsersCount(int value) { SetReactionsFromDeletedUsersCount(value); return *this;}
    ///@}
  private:

    ReactionValueFormats m_reaction;
    bool m_reactionHasBeenSet = false;

    Aws::Vector<Aws::String> m_reactionUsers;
    bool m_reactionUsersHasBeenSet = false;

    int m_reactionsFromDeletedUsersCount{0};
    bool m_reactionsFromDeletedUsersCountHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
