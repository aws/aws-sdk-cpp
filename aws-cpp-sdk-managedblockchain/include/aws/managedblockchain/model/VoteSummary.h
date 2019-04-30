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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/VoteValue.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p> Properties of an individual vote that a member cast for a proposal.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/VoteSummary">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API VoteSummary
  {
  public:
    VoteSummary();
    VoteSummary(Aws::Utils::Json::JsonView jsonValue);
    VoteSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The vote value, either <code>YES</code> or <code>NO</code>. </p>
     */
    inline const VoteValue& GetVote() const{ return m_vote; }

    /**
     * <p> The vote value, either <code>YES</code> or <code>NO</code>. </p>
     */
    inline bool VoteHasBeenSet() const { return m_voteHasBeenSet; }

    /**
     * <p> The vote value, either <code>YES</code> or <code>NO</code>. </p>
     */
    inline void SetVote(const VoteValue& value) { m_voteHasBeenSet = true; m_vote = value; }

    /**
     * <p> The vote value, either <code>YES</code> or <code>NO</code>. </p>
     */
    inline void SetVote(VoteValue&& value) { m_voteHasBeenSet = true; m_vote = std::move(value); }

    /**
     * <p> The vote value, either <code>YES</code> or <code>NO</code>. </p>
     */
    inline VoteSummary& WithVote(const VoteValue& value) { SetVote(value); return *this;}

    /**
     * <p> The vote value, either <code>YES</code> or <code>NO</code>. </p>
     */
    inline VoteSummary& WithVote(VoteValue&& value) { SetVote(std::move(value)); return *this;}


    /**
     * <p> The name of the member that cast the vote. </p>
     */
    inline const Aws::String& GetMemberName() const{ return m_memberName; }

    /**
     * <p> The name of the member that cast the vote. </p>
     */
    inline bool MemberNameHasBeenSet() const { return m_memberNameHasBeenSet; }

    /**
     * <p> The name of the member that cast the vote. </p>
     */
    inline void SetMemberName(const Aws::String& value) { m_memberNameHasBeenSet = true; m_memberName = value; }

    /**
     * <p> The name of the member that cast the vote. </p>
     */
    inline void SetMemberName(Aws::String&& value) { m_memberNameHasBeenSet = true; m_memberName = std::move(value); }

    /**
     * <p> The name of the member that cast the vote. </p>
     */
    inline void SetMemberName(const char* value) { m_memberNameHasBeenSet = true; m_memberName.assign(value); }

    /**
     * <p> The name of the member that cast the vote. </p>
     */
    inline VoteSummary& WithMemberName(const Aws::String& value) { SetMemberName(value); return *this;}

    /**
     * <p> The name of the member that cast the vote. </p>
     */
    inline VoteSummary& WithMemberName(Aws::String&& value) { SetMemberName(std::move(value)); return *this;}

    /**
     * <p> The name of the member that cast the vote. </p>
     */
    inline VoteSummary& WithMemberName(const char* value) { SetMemberName(value); return *this;}


    /**
     * <p> The unique identifier of the member that cast the vote. </p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }

    /**
     * <p> The unique identifier of the member that cast the vote. </p>
     */
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }

    /**
     * <p> The unique identifier of the member that cast the vote. </p>
     */
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }

    /**
     * <p> The unique identifier of the member that cast the vote. </p>
     */
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }

    /**
     * <p> The unique identifier of the member that cast the vote. </p>
     */
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }

    /**
     * <p> The unique identifier of the member that cast the vote. </p>
     */
    inline VoteSummary& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}

    /**
     * <p> The unique identifier of the member that cast the vote. </p>
     */
    inline VoteSummary& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the member that cast the vote. </p>
     */
    inline VoteSummary& WithMemberId(const char* value) { SetMemberId(value); return *this;}

  private:

    VoteValue m_vote;
    bool m_voteHasBeenSet;

    Aws::String m_memberName;
    bool m_memberNameHasBeenSet;

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
