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
    AWS_CODECOMMIT_API ReactionForComment();
    AWS_CODECOMMIT_API ReactionForComment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ReactionForComment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reaction for a specified comment.</p>
     */
    inline const ReactionValueFormats& GetReaction() const{ return m_reaction; }

    /**
     * <p>The reaction for a specified comment.</p>
     */
    inline bool ReactionHasBeenSet() const { return m_reactionHasBeenSet; }

    /**
     * <p>The reaction for a specified comment.</p>
     */
    inline void SetReaction(const ReactionValueFormats& value) { m_reactionHasBeenSet = true; m_reaction = value; }

    /**
     * <p>The reaction for a specified comment.</p>
     */
    inline void SetReaction(ReactionValueFormats&& value) { m_reactionHasBeenSet = true; m_reaction = std::move(value); }

    /**
     * <p>The reaction for a specified comment.</p>
     */
    inline ReactionForComment& WithReaction(const ReactionValueFormats& value) { SetReaction(value); return *this;}

    /**
     * <p>The reaction for a specified comment.</p>
     */
    inline ReactionForComment& WithReaction(ReactionValueFormats&& value) { SetReaction(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of users who have provided reactions to the
     * comment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReactionUsers() const{ return m_reactionUsers; }

    /**
     * <p>The Amazon Resource Names (ARNs) of users who have provided reactions to the
     * comment.</p>
     */
    inline bool ReactionUsersHasBeenSet() const { return m_reactionUsersHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of users who have provided reactions to the
     * comment.</p>
     */
    inline void SetReactionUsers(const Aws::Vector<Aws::String>& value) { m_reactionUsersHasBeenSet = true; m_reactionUsers = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of users who have provided reactions to the
     * comment.</p>
     */
    inline void SetReactionUsers(Aws::Vector<Aws::String>&& value) { m_reactionUsersHasBeenSet = true; m_reactionUsers = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of users who have provided reactions to the
     * comment.</p>
     */
    inline ReactionForComment& WithReactionUsers(const Aws::Vector<Aws::String>& value) { SetReactionUsers(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of users who have provided reactions to the
     * comment.</p>
     */
    inline ReactionForComment& WithReactionUsers(Aws::Vector<Aws::String>&& value) { SetReactionUsers(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of users who have provided reactions to the
     * comment.</p>
     */
    inline ReactionForComment& AddReactionUsers(const Aws::String& value) { m_reactionUsersHasBeenSet = true; m_reactionUsers.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of users who have provided reactions to the
     * comment.</p>
     */
    inline ReactionForComment& AddReactionUsers(Aws::String&& value) { m_reactionUsersHasBeenSet = true; m_reactionUsers.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of users who have provided reactions to the
     * comment.</p>
     */
    inline ReactionForComment& AddReactionUsers(const char* value) { m_reactionUsersHasBeenSet = true; m_reactionUsers.push_back(value); return *this; }


    /**
     * <p>A numerical count of users who reacted with the specified emoji whose
     * identities have been subsequently deleted from IAM. While these IAM users or
     * roles no longer exist, the reactions might still appear in total reaction
     * counts.</p>
     */
    inline int GetReactionsFromDeletedUsersCount() const{ return m_reactionsFromDeletedUsersCount; }

    /**
     * <p>A numerical count of users who reacted with the specified emoji whose
     * identities have been subsequently deleted from IAM. While these IAM users or
     * roles no longer exist, the reactions might still appear in total reaction
     * counts.</p>
     */
    inline bool ReactionsFromDeletedUsersCountHasBeenSet() const { return m_reactionsFromDeletedUsersCountHasBeenSet; }

    /**
     * <p>A numerical count of users who reacted with the specified emoji whose
     * identities have been subsequently deleted from IAM. While these IAM users or
     * roles no longer exist, the reactions might still appear in total reaction
     * counts.</p>
     */
    inline void SetReactionsFromDeletedUsersCount(int value) { m_reactionsFromDeletedUsersCountHasBeenSet = true; m_reactionsFromDeletedUsersCount = value; }

    /**
     * <p>A numerical count of users who reacted with the specified emoji whose
     * identities have been subsequently deleted from IAM. While these IAM users or
     * roles no longer exist, the reactions might still appear in total reaction
     * counts.</p>
     */
    inline ReactionForComment& WithReactionsFromDeletedUsersCount(int value) { SetReactionsFromDeletedUsersCount(value); return *this;}

  private:

    ReactionValueFormats m_reaction;
    bool m_reactionHasBeenSet = false;

    Aws::Vector<Aws::String> m_reactionUsers;
    bool m_reactionUsersHasBeenSet = false;

    int m_reactionsFromDeletedUsersCount;
    bool m_reactionsFromDeletedUsersCountHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
